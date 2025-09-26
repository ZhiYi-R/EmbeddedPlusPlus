/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB06_PKA_HPP
#define EMBEDDED_PP_STM32WB06_PKA_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PKA peripheral */
namespace STM32WB06::PKA {

    /** @brief PKA_CSR register */
    using PKA_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA start processing command. Writing 0 has no effect Writing 1 starts the encryption engine */
    using PKA_CSR_GO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA readiness status. 0: The PKA is still computing 1: The PKA is ready to start a new calculation */
    using PKA_CSR_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA software reset. Writing 0 clears the bit and releases the PKA block reset. Writing 1 resets the PKA block. The PKA RAM content is not changed. */
    using PKA_CSR_SFT_RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA_ISR register */
    using PKA_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA process ending interrupt. When read: 0: No new event detected 1: The PKA process is ended (This bit is set to 1 when the PKA_CSR.READY bit rises.) When written: To clear the pending interrupt, the user must write this bit to 1 and clear it just after by writing 0. If the write 0 does not occur, the interrupt is generated on next event towards the CPU if enabled in PKA_IER but the flag is seen at 0 when the interrupt handler reads it in this register (as clear action is still active). */
    using PKA_ISR_PROC_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAM read / write access error interrupt. */
    using PKA_ISR_RAM_ERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB Address error interrupt. */
    using PKA_ISR_ADD_ERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA_IEN register */
    using PKA_IEN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief READY interrupt enable. */
    using PKA_IEN_READY_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAM access error interrupt enable. */
    using PKA_IEN_RAMERR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB Address error interrupt enable. */
    using PKA_IEN_ADDERR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
