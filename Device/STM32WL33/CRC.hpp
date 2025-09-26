/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_CRC_HPP
#define EMBEDDED_PP_STM32WL33_CRC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief CRC peripheral */
namespace STM32WL33::CRC {

    /** @brief CRC_DR register */
    using CRC_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data register bits. This register is used to write new data to the CRC calculator. It holds the previous CRC calculation result when it is read. If the data size is less than 32 bits, the least significant bits are used to write/read the correct value. */
    using CRC_DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC_IDR register */
    using CRC_IDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDR field */
    using CRC_IDR_IDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC_CR register */
    using CRC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RESET bit This bit is set by software to reset the CRC calculation unit and set the data register to the value stored in the CRC_INIT register. This bit can only be set, it is automatically cleared by hardware */
    using CRC_CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Polynomial size These bits control the size of the polynomial. -00: 32 bit polynomial -01: 16 bit polynomial -10: 8 bit polynomial -11: 7 bit polynomial */
    using CRC_CR_POLYSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reverse input data These bits control the reversal of the bit order of the input data -00: Bit order not affected -01: Bit reversal done by byte -10: Bit reversal done by half-word -11: Bit reversal done by word */
    using CRC_CR_REV_IN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reverse output data This bit controls the reversal of the bit order of the output data. -0: Bit order not affected -1: Bit-reversed output format */
    using CRC_CR_REV_OUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC_INIT register */
    using CRC_INIT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable initial CRC value This register is used to write the CRC initial value. */
    using CRC_INIT_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC_POL register */
    using CRC_POL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief POL[31:0]: Programmable polynomial This register is used to write the coefficients of the polynomial to be used for CRC calculation. If the polynomial size is less than 32 bits, the least significant bits have to be used to program the correct value. */
    using CRC_POL_POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
