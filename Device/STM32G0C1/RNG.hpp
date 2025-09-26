/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G0C1_RNG_HPP
#define EMBEDDED_PP_STM32G0C1_RNG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Random number generator */
namespace STM32G0C1::RNG {

    /** @brief control register */
    using RNG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief True random number generator enable */
    using RNG_CR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: True random number generator is disabled. Analog noise sources are powered off and logic clocked by the RNG clock is gated. (value: 0)
     *          - B_0x1: True random number generator is enabled. (value: 1)
     */
        /** @brief True random number generator is disabled. Analog noise sources are powered off and logic clocked by the RNG clock is gated. */
    constexpr std::uint32_t RNG_CR_RNGEN_B_0x0 = 0;
        /** @brief True random number generator is enabled. */
    constexpr std::uint32_t RNG_CR_RNGEN_B_0x1 = 1;

    /** @brief Interrupt Enable */
    using RNG_CR_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG Interrupt is disabled (value: 0)
     *          - B_0x1: RNG Interrupt is enabled. An interrupt is pending as soon as DRDY='1', SEIS='1' or CEIS=1 in the RNG_SR register. (value: 1)
     */
        /** @brief RNG Interrupt is disabled */
    constexpr std::uint32_t RNG_CR_IE_B_0x0 = 0;
        /** @brief RNG Interrupt is enabled. An interrupt is pending as soon as DRDY='1', SEIS='1' or CEIS=1 in the RNG_SR register. */
    constexpr std::uint32_t RNG_CR_IE_B_0x1 = 1;

    /** @brief Clock error detection The clock error detection cannot be enabled nor disabled on-the-fly when the RNG is enabled, i.e. to enable or disable CED the RNG must be disabled. */
    using RNG_CR_CED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock error detection is enable (value: 0)
     *          - B_0x1: Clock error detection is disable (value: 1)
     */
        /** @brief Clock error detection is enable */
    constexpr std::uint32_t RNG_CR_CED_B_0x0 = 0;
        /** @brief Clock error detection is disable */
    constexpr std::uint32_t RNG_CR_CED_B_0x1 = 1;

    /** @brief status register */
    using RNG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Ready Once the output buffer becomes empty (after reading the RNG_DR register), this bit returns to 0 until a new random value is generated. Note: The DRDY bit can rise when the peripheral is disabled (RNGEN=0 in the RNG_CR register). If IE=1 in the RNG_CR register, an interrupt is generated when DRDY=1. */
    using RNG_SR_DRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The RNG_DR register is not yet valid, no random data is available. (value: 0)
     *          - B_0x1: The RNG_DR register contains valid random data. (value: 1)
     */
        /** @brief The RNG_DR register is not yet valid, no random data is available. */
    constexpr std::uint32_t RNG_SR_DRDY_B_0x0 = 0;
        /** @brief The RNG_DR register contains valid random data. */
    constexpr std::uint32_t RNG_SR_DRDY_B_0x1 = 1;

    /** @brief Clock error current status Note: CECS bit is valid only if the CED bit in the RNG_CR register is set to 0. */
    using RNG_SR_CECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The RNG clock is correct (fRNGCLK> fHCLK/32). If the CEIS bit is set, this means that a slow clock was detected and the situation has been recovered. (value: 0)
     *          - B_0x1: The RNG clock is too slow (fRNGCLK> fHCLK/32). (value: 1)
     */
        /** @brief The RNG clock is correct (fRNGCLK> fHCLK/32). If the CEIS bit is set, this means that a slow clock was detected and the situation has been recovered. */
    constexpr std::uint32_t RNG_SR_CECS_B_0x0 = 0;
        /** @brief The RNG clock is too slow (fRNGCLK> fHCLK/32). */
    constexpr std::uint32_t RNG_SR_CECS_B_0x1 = 1;

    /** @brief Seed error current status One of the noise source has provided more than 64 consecutive bits at a constant value ('0' or '1'), or more than 32 consecutive occurrence of two bit patterns ('01' or '10') Both noise sources have delivered more than 32 consecutive bits at a constant value ('0' or '1'), or more than 16 consecutive occurrence of two bit patterns ('01' or '10') */
    using RNG_SR_SECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No faulty sequence has currently been detected. If the SEIS bit is set, this means that a faulty sequence was detected and the situation has been recovered. (value: 0)
     *          - B_0x1: At least one of the following faulty sequence has been detected: (value: 1)
     */
        /** @brief No faulty sequence has currently been detected. If the SEIS bit is set, this means that a faulty sequence was detected and the situation has been recovered. */
    constexpr std::uint32_t RNG_SR_SECS_B_0x0 = 0;
        /** @brief At least one of the following faulty sequence has been detected: */
    constexpr std::uint32_t RNG_SR_SECS_B_0x1 = 1;

    /** @brief Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing 0. Writing 1 has no effect. An interrupt is pending if IE = 1 in the RNG_CR register. */
    using RNG_SR_CEIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The RNG clock is correct (fRNGCLK> fHCLK/32) (value: 0)
     *          - B_0x1: The RNG has been detected too slow (fRNGCLK> fHCLK/32) (value: 1)
     */
        /** @brief The RNG clock is correct (fRNGCLK> fHCLK/32) */
    constexpr std::uint32_t RNG_SR_CEIS_B_0x0 = 0;
        /** @brief The RNG has been detected too slow (fRNGCLK> fHCLK/32) */
    constexpr std::uint32_t RNG_SR_CEIS_B_0x1 = 1;

    /** @brief Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing 0. Writing 1 has no effect. An interrupt is pending if IE = 1 in the RNG_CR register. */
    using RNG_SR_SEIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No faulty sequence detected (value: 0)
     *          - B_0x1: At least one faulty sequence has been detected. See SECS bit description for details. (value: 1)
     */
        /** @brief No faulty sequence detected */
    constexpr std::uint32_t RNG_SR_SEIS_B_0x0 = 0;
        /** @brief At least one faulty sequence has been detected. See SECS bit description for details. */
    constexpr std::uint32_t RNG_SR_SEIS_B_0x1 = 1;

    /** @brief data register */
    using RNG_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Random data */
    using RNG_DR_RNDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
