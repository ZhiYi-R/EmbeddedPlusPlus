/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7A3X_DMAMUX1_HPP
#define EMBEDDED_PP_STM32H7A3X_DMAMUX1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DMAMUX */
namespace STM32H7A3x::DMAMUX1 {

    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C0CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C0CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C0CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C0CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C0CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C0CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C0CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C1CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C1CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C1CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C1CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C1CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C1CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C1CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C2CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C2CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C2CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C2CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C2CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C2CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C2CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C3CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C3CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C3CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C3CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C3CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C3CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C3CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C4CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C4CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C4CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C4CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C4CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C4CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C4CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C5CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C5CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C5CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C5CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C5CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C5CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C5CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C6CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C6CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C6CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C6CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C6CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C6CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C6CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C7CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C7CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C7CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C7CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C7CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C7CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C7CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C8CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C8CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C8CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C8CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C8CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C8CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C8CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C8CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C9CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C9CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C9CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C9CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C9CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C9CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C9CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C9CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C10CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C10CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C10CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C10CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C10CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C10CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C10CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C10CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C11CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C11CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C11CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C11CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C11CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C11CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C11CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C11CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C12CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C12CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C12CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C12CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C12CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C12CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C12CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C12CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C13CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C13CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C13CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C13CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C13CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C13CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C13CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C13CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C14CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C14CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C14CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C14CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C14CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C14CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C14CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C14CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request line multiplexer channel x control register */
    using DMAMUX1_C15CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA request line selected */
    using DMAMUX1_C15CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at synchronization event overrun */
    using DMAMUX1_C15CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event generation enable/disable */
    using DMAMUX1_C15CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous operating mode enable/disable */
    using DMAMUX1_C15CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization event type selector Defines the synchronization event on the selected synchronization input: */
    using DMAMUX1_C15CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset. */
    using DMAMUX1_C15CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization input selected */
    using DMAMUX1_C15CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator channel x control register */
    using DMAMUX1_RG0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request trigger input selected */
    using DMAMUX1_RG0CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at trigger event overrun */
    using DMAMUX1_RG0CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator channel enable/disable */
    using DMAMUX1_RG0CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input */
    using DMAMUX1_RG0CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset. */
    using DMAMUX1_RG0CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator channel x control register */
    using DMAMUX1_RG1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request trigger input selected */
    using DMAMUX1_RG1CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at trigger event overrun */
    using DMAMUX1_RG1CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator channel enable/disable */
    using DMAMUX1_RG1CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input */
    using DMAMUX1_RG1CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset. */
    using DMAMUX1_RG1CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator channel x control register */
    using DMAMUX1_RG2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request trigger input selected */
    using DMAMUX1_RG2CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at trigger event overrun */
    using DMAMUX1_RG2CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator channel enable/disable */
    using DMAMUX1_RG2CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input */
    using DMAMUX1_RG2CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset. */
    using DMAMUX1_RG2CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator channel x control register */
    using DMAMUX1_RG3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request trigger input selected */
    using DMAMUX1_RG3CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at trigger event overrun */
    using DMAMUX1_RG3CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator channel enable/disable */
    using DMAMUX1_RG3CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input */
    using DMAMUX1_RG3CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset. */
    using DMAMUX1_RG3CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator channel x control register */
    using DMAMUX1_RG4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request trigger input selected */
    using DMAMUX1_RG4CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at trigger event overrun */
    using DMAMUX1_RG4CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator channel enable/disable */
    using DMAMUX1_RG4CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input */
    using DMAMUX1_RG4CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset. */
    using DMAMUX1_RG4CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator channel x control register */
    using DMAMUX1_RG5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request trigger input selected */
    using DMAMUX1_RG5CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at trigger event overrun */
    using DMAMUX1_RG5CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator channel enable/disable */
    using DMAMUX1_RG5CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input */
    using DMAMUX1_RG5CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset. */
    using DMAMUX1_RG5CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator channel x control register */
    using DMAMUX1_RG6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request trigger input selected */
    using DMAMUX1_RG6CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at trigger event overrun */
    using DMAMUX1_RG6CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator channel enable/disable */
    using DMAMUX1_RG6CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input */
    using DMAMUX1_RG6CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset. */
    using DMAMUX1_RG6CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator channel x control register */
    using DMAMUX1_RG7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request trigger input selected */
    using DMAMUX1_RG7CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable at trigger event overrun */
    using DMAMUX1_RG7CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator channel enable/disable */
    using DMAMUX1_RG7CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input */
    using DMAMUX1_RG7CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset. */
    using DMAMUX1_RG7CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator status register */
    using DMAMUX1_RGSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register. */
    using DMAMUX1_RGSR_OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMux - DMA request generator clear flag register */
    using DMAMUX1_RGCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register. */
    using DMAMUX1_RGCFR_COF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX request line multiplexer interrupt channel status register */
    using DMAMUX1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag */
    using DMAMUX1_CSR_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX request line multiplexer interrupt clear flag register */
    using DMAMUX1_CFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag */
    using DMAMUX1_CFR_CSOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
