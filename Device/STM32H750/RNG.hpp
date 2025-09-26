/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H750_RNG_HPP
#define EMBEDDED_PP_STM32H750_RNG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RNG */
namespace STM32H750::RNG {

    /** @brief RNG control register */
    using RNG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Random number generator enable */
    using RNG_CR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable */
    using RNG_CR_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock error detection Note: The clock error detection can be used only when ck_rc48 or ck_pll1_q (ck_pll1_q = 48MHz) source is selected otherwise, CED bit must be equal to 1. The clock error detection cannot be enabled nor disabled on the fly when RNG peripheral is enabled, to enable or disable CED the RNG must be disabled. */
    using RNG_CR_CED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG status register */
    using RNG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data ready Note: If IE=1 in RNG_CR, an interrupt is generated when DRDY=1. It can rise when the peripheral is disabled. When the output buffer becomes empty (after reading RNG_DR), this bit returns to 0 until a new random value is generated. */
    using RNG_SR_DRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock error current status Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1. */
    using RNG_SR_CECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Seed error current status ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) */
    using RNG_SR_SECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing it to 0. An interrupt is pending if IE = 1 in the RNG_CR register. Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1. */
    using RNG_SR_CEIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing it to 0. ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) An interrupt is pending if IE = 1 in the RNG_CR register. */
    using RNG_SR_SEIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0. */
    using RNG_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Random data 32-bit random data which are valid when DRDY=1. */
    using RNG_DR_RNDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
