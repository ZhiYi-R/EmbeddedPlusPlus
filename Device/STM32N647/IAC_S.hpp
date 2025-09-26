/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N647_IAC_S_HPP
#define EMBEDDED_PP_STM32N647_IAC_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Illegal access controller */
namespace STM32N647::IAC_S {

    /** @brief IAC interrupt enable register 0 */
    using IAC_IER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 0 */
    using IAC_IER0_IAIE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 0 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 0 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 0 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE0_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 0 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE0_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 1 */
    using IAC_IER0_IAIE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 1 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 1 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 1 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE1_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 1 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE1_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 2 */
    using IAC_IER0_IAIE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 2 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 2 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 2 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE2_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 2 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE2_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 3 */
    using IAC_IER0_IAIE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 3 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 3 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 3 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE3_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 3 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE3_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 4 */
    using IAC_IER0_IAIE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 4 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 4 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 4 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE4_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 4 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE4_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 5 */
    using IAC_IER0_IAIE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 5 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 5 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 5 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE5_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 5 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE5_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 6 */
    using IAC_IER0_IAIE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 6 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 6 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 6 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE6_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 6 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE6_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 7 */
    using IAC_IER0_IAIE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 7 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 7 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 7 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE7_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 7 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE7_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 8 */
    using IAC_IER0_IAIE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 8 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 8 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 8 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE8_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 8 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE8_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 9 */
    using IAC_IER0_IAIE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 9 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 9 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 9 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE9_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 9 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE9_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 10 */
    using IAC_IER0_IAIE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 10 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 10 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 10 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE10_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 10 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE10_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 11 */
    using IAC_IER0_IAIE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 11 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 11 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 11 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE11_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 11 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE11_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 12 */
    using IAC_IER0_IAIE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 12 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 12 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 12 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE12_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 12 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE12_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 13 */
    using IAC_IER0_IAIE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 13 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 13 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 13 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE13_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 13 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE13_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 14 */
    using IAC_IER0_IAIE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 14 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 14 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 14 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE14_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 14 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE14_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 15 */
    using IAC_IER0_IAIE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 15 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 15 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 15 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE15_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 15 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE15_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 16 */
    using IAC_IER0_IAIE16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 16 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 16 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 16 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE16_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 16 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE16_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 17 */
    using IAC_IER0_IAIE17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 17 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 17 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 17 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE17_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 17 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE17_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 18 */
    using IAC_IER0_IAIE18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 18 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 18 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 18 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE18_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 18 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE18_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 19 */
    using IAC_IER0_IAIE19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 19 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 19 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 19 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE19_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 19 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE19_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 20 */
    using IAC_IER0_IAIE20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 20 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 20 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 20 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE20_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 20 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE20_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 21 */
    using IAC_IER0_IAIE21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 21 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 21 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 21 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE21_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 21 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE21_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 22 */
    using IAC_IER0_IAIE22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 22 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 22 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 22 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE22_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 22 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE22_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 23 */
    using IAC_IER0_IAIE23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 23 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 23 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 23 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE23_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 23 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE23_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 24 */
    using IAC_IER0_IAIE24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 24 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 24 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 24 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE24_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 24 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE24_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 25 */
    using IAC_IER0_IAIE25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 25 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 25 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 25 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE25_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 25 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE25_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 26 */
    using IAC_IER0_IAIE26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 26 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 26 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 26 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE26_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 26 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE26_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 27 */
    using IAC_IER0_IAIE27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 27 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 27 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 27 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE27_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 27 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE27_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 28 */
    using IAC_IER0_IAIE28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 28 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 28 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 28 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE28_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 28 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE28_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 29 */
    using IAC_IER0_IAIE29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 29 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 29 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 29 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE29_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 29 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE29_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 30 */
    using IAC_IER0_IAIE30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 30 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 30 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 30 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE30_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 30 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE30_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 31 */
    using IAC_IER0_IAIE31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 31 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 31 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 31 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER0_IAIE31_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 31 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER0_IAIE31_B_0x1 = 1;

    /** @brief IAC interrupt enable register 1 */
    using IAC_IER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 32 */
    using IAC_IER1_IAIE32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 32 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 32 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 32 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE32_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 32 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE32_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 33 */
    using IAC_IER1_IAIE33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 33 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 33 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 33 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE33_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 33 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE33_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 34 */
    using IAC_IER1_IAIE34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 34 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 34 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 34 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE34_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 34 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE34_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 35 */
    using IAC_IER1_IAIE35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 35 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 35 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 35 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE35_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 35 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE35_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 36 */
    using IAC_IER1_IAIE36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 36 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 36 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 36 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE36_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 36 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE36_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 37 */
    using IAC_IER1_IAIE37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 37 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 37 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 37 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE37_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 37 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE37_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 38 */
    using IAC_IER1_IAIE38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 38 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 38 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 38 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE38_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 38 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE38_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 39 */
    using IAC_IER1_IAIE39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 39 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 39 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 39 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE39_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 39 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE39_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 40 */
    using IAC_IER1_IAIE40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 40 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 40 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 40 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE40_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 40 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE40_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 41 */
    using IAC_IER1_IAIE41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 41 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 41 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 41 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE41_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 41 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE41_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 42 */
    using IAC_IER1_IAIE42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 42 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 42 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 42 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE42_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 42 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE42_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 43 */
    using IAC_IER1_IAIE43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 43 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 43 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 43 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE43_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 43 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE43_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 44 */
    using IAC_IER1_IAIE44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 44 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 44 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 44 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE44_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 44 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE44_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 45 */
    using IAC_IER1_IAIE45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 45 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 45 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 45 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE45_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 45 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE45_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 46 */
    using IAC_IER1_IAIE46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 46 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 46 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 46 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE46_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 46 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE46_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 47 */
    using IAC_IER1_IAIE47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 47 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 47 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 47 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE47_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 47 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE47_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 48 */
    using IAC_IER1_IAIE48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 48 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 48 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 48 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE48_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 48 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE48_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 49 */
    using IAC_IER1_IAIE49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 49 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 49 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 49 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE49_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 49 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE49_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 50 */
    using IAC_IER1_IAIE50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 50 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 50 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 50 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE50_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 50 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE50_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 51 */
    using IAC_IER1_IAIE51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 51 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 51 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 51 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE51_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 51 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE51_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 52 */
    using IAC_IER1_IAIE52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 52 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 52 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 52 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE52_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 52 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE52_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 53 */
    using IAC_IER1_IAIE53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 53 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 53 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 53 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE53_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 53 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE53_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 54 */
    using IAC_IER1_IAIE54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 54 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 54 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 54 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE54_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 54 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE54_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 55 */
    using IAC_IER1_IAIE55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 55 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 55 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 55 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE55_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 55 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE55_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 56 */
    using IAC_IER1_IAIE56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 56 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 56 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 56 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE56_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 56 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE56_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 57 */
    using IAC_IER1_IAIE57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 57 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 57 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 57 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE57_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 57 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE57_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 58 */
    using IAC_IER1_IAIE58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 58 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 58 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 58 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE58_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 58 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE58_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 59 */
    using IAC_IER1_IAIE59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 59 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 59 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 59 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE59_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 59 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE59_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 60 */
    using IAC_IER1_IAIE60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 60 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 60 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 60 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE60_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 60 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE60_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 61 */
    using IAC_IER1_IAIE61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 61 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 61 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 61 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE61_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 61 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE61_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 62 */
    using IAC_IER1_IAIE62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 62 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 62 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 62 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE62_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 62 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE62_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 63 */
    using IAC_IER1_IAIE63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 63 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 63 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 63 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER1_IAIE63_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 63 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER1_IAIE63_B_0x1 = 1;

    /** @brief IAC interrupt enable register 2 */
    using IAC_IER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 64 */
    using IAC_IER2_IAIE64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 64 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 64 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 64 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE64_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 64 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE64_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 65 */
    using IAC_IER2_IAIE65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 65 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 65 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 65 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE65_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 65 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE65_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 66 */
    using IAC_IER2_IAIE66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 66 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 66 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 66 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE66_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 66 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE66_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 67 */
    using IAC_IER2_IAIE67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 67 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 67 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 67 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE67_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 67 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE67_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 68 */
    using IAC_IER2_IAIE68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 68 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 68 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 68 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE68_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 68 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE68_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 69 */
    using IAC_IER2_IAIE69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 69 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 69 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 69 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE69_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 69 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE69_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 70 */
    using IAC_IER2_IAIE70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 70 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 70 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 70 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE70_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 70 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE70_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 71 */
    using IAC_IER2_IAIE71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 71 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 71 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 71 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE71_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 71 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE71_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 72 */
    using IAC_IER2_IAIE72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 72 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 72 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 72 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE72_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 72 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE72_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 73 */
    using IAC_IER2_IAIE73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 73 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 73 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 73 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE73_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 73 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE73_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 74 */
    using IAC_IER2_IAIE74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 74 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 74 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 74 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE74_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 74 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE74_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 75 */
    using IAC_IER2_IAIE75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 75 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 75 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 75 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE75_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 75 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE75_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 76 */
    using IAC_IER2_IAIE76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 76 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 76 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 76 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE76_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 76 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE76_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 77 */
    using IAC_IER2_IAIE77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 77 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 77 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 77 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE77_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 77 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE77_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 78 */
    using IAC_IER2_IAIE78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 78 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 78 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 78 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE78_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 78 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE78_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 79 */
    using IAC_IER2_IAIE79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 79 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 79 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 79 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE79_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 79 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE79_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 80 */
    using IAC_IER2_IAIE80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 80 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 80 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 80 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE80_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 80 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE80_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 81 */
    using IAC_IER2_IAIE81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 81 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 81 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 81 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE81_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 81 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE81_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 82 */
    using IAC_IER2_IAIE82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 82 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 82 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 82 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE82_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 82 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE82_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 83 */
    using IAC_IER2_IAIE83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 83 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 83 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 83 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE83_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 83 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE83_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 84 */
    using IAC_IER2_IAIE84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 84 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 84 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 84 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE84_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 84 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE84_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 85 */
    using IAC_IER2_IAIE85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 85 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 85 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 85 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE85_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 85 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE85_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 86 */
    using IAC_IER2_IAIE86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 86 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 86 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 86 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE86_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 86 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE86_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 87 */
    using IAC_IER2_IAIE87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 87 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 87 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 87 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE87_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 87 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE87_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 88 */
    using IAC_IER2_IAIE88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 88 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 88 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 88 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE88_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 88 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE88_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 89 */
    using IAC_IER2_IAIE89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 89 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 89 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 89 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE89_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 89 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE89_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 90 */
    using IAC_IER2_IAIE90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 90 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 90 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 90 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE90_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 90 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE90_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 91 */
    using IAC_IER2_IAIE91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 91 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 91 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 91 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE91_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 91 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE91_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 92 */
    using IAC_IER2_IAIE92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 92 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 92 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 92 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE92_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 92 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE92_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 93 */
    using IAC_IER2_IAIE93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 93 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 93 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 93 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE93_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 93 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE93_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 94 */
    using IAC_IER2_IAIE94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 94 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 94 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 94 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE94_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 94 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE94_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 95 */
    using IAC_IER2_IAIE95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 95 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 95 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 95 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER2_IAIE95_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 95 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER2_IAIE95_B_0x1 = 1;

    /** @brief IAC interrupt enable register 3 */
    using IAC_IER3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 96 */
    using IAC_IER3_IAIE96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 96 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 96 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 96 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE96_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 96 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE96_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 97 */
    using IAC_IER3_IAIE97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 97 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 97 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 97 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE97_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 97 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE97_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 98 */
    using IAC_IER3_IAIE98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 98 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 98 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 98 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE98_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 98 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE98_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 99 */
    using IAC_IER3_IAIE99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 99 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 99 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 99 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE99_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 99 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE99_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 100 */
    using IAC_IER3_IAIE100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 100 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 100 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 100 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE100_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 100 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE100_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 101 */
    using IAC_IER3_IAIE101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 101 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 101 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 101 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE101_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 101 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE101_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 102 */
    using IAC_IER3_IAIE102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 102 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 102 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 102 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE102_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 102 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE102_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 103 */
    using IAC_IER3_IAIE103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 103 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 103 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 103 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE103_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 103 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE103_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 104 */
    using IAC_IER3_IAIE104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 104 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 104 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 104 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE104_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 104 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE104_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 105 */
    using IAC_IER3_IAIE105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 105 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 105 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 105 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE105_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 105 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE105_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 106 */
    using IAC_IER3_IAIE106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 106 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 106 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 106 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE106_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 106 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE106_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 107 */
    using IAC_IER3_IAIE107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 107 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 107 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 107 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE107_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 107 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE107_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 108 */
    using IAC_IER3_IAIE108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 108 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 108 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 108 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE108_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 108 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE108_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 109 */
    using IAC_IER3_IAIE109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 109 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 109 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 109 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE109_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 109 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE109_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 110 */
    using IAC_IER3_IAIE110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 110 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 110 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 110 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE110_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 110 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE110_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 111 */
    using IAC_IER3_IAIE111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 111 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 111 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 111 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE111_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 111 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE111_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 112 */
    using IAC_IER3_IAIE112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 112 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 112 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 112 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE112_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 112 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE112_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 113 */
    using IAC_IER3_IAIE113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 113 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 113 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 113 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE113_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 113 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE113_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 114 */
    using IAC_IER3_IAIE114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 114 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 114 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 114 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE114_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 114 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE114_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 115 */
    using IAC_IER3_IAIE115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 115 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 115 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 115 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE115_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 115 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE115_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 116 */
    using IAC_IER3_IAIE116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 116 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 116 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 116 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE116_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 116 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE116_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 117 */
    using IAC_IER3_IAIE117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 117 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 117 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 117 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE117_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 117 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE117_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 118 */
    using IAC_IER3_IAIE118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 118 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 118 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 118 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE118_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 118 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE118_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 119 */
    using IAC_IER3_IAIE119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 119 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 119 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 119 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE119_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 119 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE119_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 120 */
    using IAC_IER3_IAIE120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 120 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 120 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 120 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE120_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 120 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE120_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 121 */
    using IAC_IER3_IAIE121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 121 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 121 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 121 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE121_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 121 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE121_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 122 */
    using IAC_IER3_IAIE122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 122 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 122 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 122 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE122_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 122 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE122_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 123 */
    using IAC_IER3_IAIE123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 123 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 123 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 123 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE123_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 123 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE123_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 124 */
    using IAC_IER3_IAIE124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 124 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 124 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 124 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE124_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 124 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE124_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 125 */
    using IAC_IER3_IAIE125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 125 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 125 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 125 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE125_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 125 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE125_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 126 */
    using IAC_IER3_IAIE126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 126 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 126 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 126 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE126_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 126 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE126_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 127 */
    using IAC_IER3_IAIE127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 127 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 127 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 127 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER3_IAIE127_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 127 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER3_IAIE127_B_0x1 = 1;

    /** @brief IAC interrupt enable register 4 */
    using IAC_IER4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 128 */
    using IAC_IER4_IAIE128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 128 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 128 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 128 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE128_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 128 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE128_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 129 */
    using IAC_IER4_IAIE129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 129 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 129 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 129 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE129_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 129 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE129_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 130 */
    using IAC_IER4_IAIE130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 130 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 130 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 130 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE130_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 130 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE130_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 131 */
    using IAC_IER4_IAIE131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 131 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 131 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 131 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE131_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 131 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE131_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 132 */
    using IAC_IER4_IAIE132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 132 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 132 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 132 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE132_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 132 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE132_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 133 */
    using IAC_IER4_IAIE133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 133 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 133 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 133 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE133_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 133 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE133_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 134 */
    using IAC_IER4_IAIE134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 134 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 134 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 134 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE134_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 134 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE134_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 135 */
    using IAC_IER4_IAIE135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 135 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 135 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 135 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE135_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 135 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE135_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 136 */
    using IAC_IER4_IAIE136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 136 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 136 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 136 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE136_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 136 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE136_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 137 */
    using IAC_IER4_IAIE137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 137 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 137 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 137 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE137_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 137 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE137_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 138 */
    using IAC_IER4_IAIE138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 138 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 138 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 138 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE138_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 138 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE138_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 139 */
    using IAC_IER4_IAIE139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 139 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 139 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 139 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE139_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 139 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE139_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 140 */
    using IAC_IER4_IAIE140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 140 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 140 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 140 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE140_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 140 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE140_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 141 */
    using IAC_IER4_IAIE141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 141 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 141 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 141 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE141_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 141 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE141_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 142 */
    using IAC_IER4_IAIE142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 142 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 142 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 142 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE142_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 142 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE142_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 143 */
    using IAC_IER4_IAIE143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 143 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 143 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 143 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE143_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 143 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE143_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 144 */
    using IAC_IER4_IAIE144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 144 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 144 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 144 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE144_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 144 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE144_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 145 */
    using IAC_IER4_IAIE145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 145 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 145 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 145 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE145_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 145 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE145_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 146 */
    using IAC_IER4_IAIE146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 146 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 146 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 146 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE146_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 146 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE146_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 147 */
    using IAC_IER4_IAIE147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 147 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 147 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 147 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE147_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 147 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE147_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 148 */
    using IAC_IER4_IAIE148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 148 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 148 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 148 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE148_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 148 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE148_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 149 */
    using IAC_IER4_IAIE149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 149 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 149 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 149 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE149_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 149 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE149_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 150 */
    using IAC_IER4_IAIE150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 150 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 150 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 150 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE150_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 150 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE150_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 151 */
    using IAC_IER4_IAIE151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 151 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 151 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 151 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE151_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 151 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE151_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 152 */
    using IAC_IER4_IAIE152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 152 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 152 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 152 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE152_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 152 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE152_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 153 */
    using IAC_IER4_IAIE153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 153 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 153 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 153 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE153_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 153 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE153_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 154 */
    using IAC_IER4_IAIE154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 154 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 154 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 154 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE154_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 154 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE154_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 155 */
    using IAC_IER4_IAIE155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 155 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 155 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 155 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE155_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 155 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE155_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 156 */
    using IAC_IER4_IAIE156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 156 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 156 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 156 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE156_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 156 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE156_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 157 */
    using IAC_IER4_IAIE157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 157 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 157 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 157 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE157_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 157 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE157_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 158 */
    using IAC_IER4_IAIE158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 158 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 158 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 158 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE158_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 158 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE158_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 159 */
    using IAC_IER4_IAIE159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 159 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 159 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 159 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER4_IAIE159_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 159 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER4_IAIE159_B_0x1 = 1;

    /** @brief IAC interrupt enable register 5 */
    using IAC_IER5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 160 */
    using IAC_IER5_IAIE160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 160 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 160 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 160 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE160_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 160 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE160_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 161 */
    using IAC_IER5_IAIE161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 161 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 161 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 161 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE161_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 161 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE161_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 162 */
    using IAC_IER5_IAIE162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 162 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 162 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 162 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE162_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 162 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE162_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 163 */
    using IAC_IER5_IAIE163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 163 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 163 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 163 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE163_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 163 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE163_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 164 */
    using IAC_IER5_IAIE164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 164 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 164 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 164 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE164_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 164 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE164_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 165 */
    using IAC_IER5_IAIE165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 165 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 165 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 165 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE165_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 165 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE165_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 166 */
    using IAC_IER5_IAIE166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 166 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 166 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 166 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE166_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 166 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE166_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 167 */
    using IAC_IER5_IAIE167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 167 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 167 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 167 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE167_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 167 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE167_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 168 */
    using IAC_IER5_IAIE168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 168 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 168 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 168 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE168_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 168 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE168_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 169 */
    using IAC_IER5_IAIE169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 169 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 169 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 169 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE169_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 169 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE169_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 170 */
    using IAC_IER5_IAIE170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 170 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 170 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 170 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE170_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 170 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE170_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 171 */
    using IAC_IER5_IAIE171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 171 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 171 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 171 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE171_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 171 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE171_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 172 */
    using IAC_IER5_IAIE172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 172 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 172 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 172 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE172_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 172 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE172_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 173 */
    using IAC_IER5_IAIE173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 173 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 173 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 173 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE173_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 173 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE173_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 174 */
    using IAC_IER5_IAIE174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 174 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 174 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 174 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE174_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 174 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE174_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 175 */
    using IAC_IER5_IAIE175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 175 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 175 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 175 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE175_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 175 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE175_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 176 */
    using IAC_IER5_IAIE176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 176 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 176 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 176 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE176_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 176 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE176_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 177 */
    using IAC_IER5_IAIE177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 177 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 177 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 177 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE177_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 177 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE177_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 178 */
    using IAC_IER5_IAIE178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 178 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 178 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 178 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE178_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 178 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE178_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 179 */
    using IAC_IER5_IAIE179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 179 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 179 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 179 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE179_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 179 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE179_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 180 */
    using IAC_IER5_IAIE180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 180 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 180 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 180 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE180_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 180 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE180_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 181 */
    using IAC_IER5_IAIE181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 181 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 181 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 181 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE181_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 181 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE181_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 182 */
    using IAC_IER5_IAIE182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 182 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 182 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 182 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE182_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 182 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE182_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 183 */
    using IAC_IER5_IAIE183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 183 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 183 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 183 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE183_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 183 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE183_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 184 */
    using IAC_IER5_IAIE184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 184 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 184 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 184 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE184_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 184 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE184_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 185 */
    using IAC_IER5_IAIE185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 185 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 185 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 185 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE185_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 185 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE185_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 186 */
    using IAC_IER5_IAIE186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 186 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 186 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 186 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE186_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 186 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE186_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 187 */
    using IAC_IER5_IAIE187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 187 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 187 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 187 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE187_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 187 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE187_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 188 */
    using IAC_IER5_IAIE188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 188 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 188 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 188 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE188_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 188 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE188_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 189 */
    using IAC_IER5_IAIE189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 189 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 189 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 189 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE189_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 189 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE189_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 190 */
    using IAC_IER5_IAIE190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 190 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 190 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 190 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE190_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 190 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE190_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 191 */
    using IAC_IER5_IAIE191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access event from peripheral 191 does not generate interrupt (masked). (value: 0)
     *          - B_0x1: Illegal access event from peripheral 191 can generate interrupts (unmasked). (value: 1)
     */
        /** @brief Illegal access event from peripheral 191 does not generate interrupt (masked). */
    constexpr std::uint32_t IAC_IER5_IAIE191_B_0x0 = 0;
        /** @brief Illegal access event from peripheral 191 can generate interrupts (unmasked). */
    constexpr std::uint32_t IAC_IER5_IAIE191_B_0x1 = 1;

    /** @brief IAC interrupt status register 0 */
    using IAC_ISR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 0 */
    using IAC_ISR0_IAF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 0 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 0 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 0 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF0_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 0 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF0_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 1 */
    using IAC_ISR0_IAF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 1 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 1 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 1 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF1_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 1 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF1_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 2 */
    using IAC_ISR0_IAF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 2 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 2 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 2 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF2_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 2 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF2_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 3 */
    using IAC_ISR0_IAF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 3 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 3 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 3 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF3_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 3 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF3_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 4 */
    using IAC_ISR0_IAF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 4 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 4 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 4 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF4_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 4 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF4_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 5 */
    using IAC_ISR0_IAF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 5 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 5 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 5 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF5_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 5 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF5_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 6 */
    using IAC_ISR0_IAF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 6 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 6 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 6 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF6_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 6 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF6_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 7 */
    using IAC_ISR0_IAF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 7 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 7 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 7 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF7_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 7 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF7_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 8 */
    using IAC_ISR0_IAF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 8 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 8 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 8 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF8_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 8 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF8_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 9 */
    using IAC_ISR0_IAF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 9 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 9 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 9 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF9_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 9 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF9_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 10 */
    using IAC_ISR0_IAF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 10 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 10 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 10 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF10_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 10 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF10_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 11 */
    using IAC_ISR0_IAF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 11 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 11 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 11 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF11_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 11 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF11_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 12 */
    using IAC_ISR0_IAF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 12 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 12 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 12 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF12_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 12 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF12_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 13 */
    using IAC_ISR0_IAF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 13 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 13 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 13 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF13_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 13 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF13_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 14 */
    using IAC_ISR0_IAF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 14 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 14 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 14 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF14_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 14 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF14_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 15 */
    using IAC_ISR0_IAF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 15 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 15 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 15 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF15_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 15 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF15_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 16 */
    using IAC_ISR0_IAF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 16 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 16 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 16 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF16_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 16 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF16_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 17 */
    using IAC_ISR0_IAF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 17 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 17 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 17 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF17_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 17 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF17_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 18 */
    using IAC_ISR0_IAF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 18 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 18 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 18 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF18_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 18 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF18_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 19 */
    using IAC_ISR0_IAF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 19 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 19 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 19 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF19_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 19 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF19_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 20 */
    using IAC_ISR0_IAF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 20 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 20 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 20 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF20_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 20 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF20_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 21 */
    using IAC_ISR0_IAF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 21 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 21 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 21 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF21_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 21 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF21_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 22 */
    using IAC_ISR0_IAF22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 22 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 22 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 22 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF22_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 22 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF22_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 23 */
    using IAC_ISR0_IAF23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 23 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 23 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 23 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF23_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 23 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF23_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 24 */
    using IAC_ISR0_IAF24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 24 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 24 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 24 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF24_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 24 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF24_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 25 */
    using IAC_ISR0_IAF25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 25 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 25 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 25 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF25_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 25 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF25_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 26 */
    using IAC_ISR0_IAF26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 26 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 26 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 26 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF26_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 26 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF26_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 27 */
    using IAC_ISR0_IAF27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 27 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 27 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 27 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF27_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 27 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF27_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 28 */
    using IAC_ISR0_IAF28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 28 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 28 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 28 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF28_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 28 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF28_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 29 */
    using IAC_ISR0_IAF29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 29 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 29 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 29 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF29_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 29 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF29_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 30 */
    using IAC_ISR0_IAF30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 30 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 30 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 30 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF30_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 30 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF30_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 31 */
    using IAC_ISR0_IAF31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 31 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 31 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 31 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF31_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 31 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR0_IAF31_B_0x1 = 1;

    /** @brief IAC interrupt status register 1 */
    using IAC_ISR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 32 */
    using IAC_ISR1_IAF32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 32 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 32 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 32 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF32_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 32 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF32_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 33 */
    using IAC_ISR1_IAF33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 33 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 33 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 33 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF33_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 33 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF33_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 34 */
    using IAC_ISR1_IAF34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 34 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 34 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 34 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF34_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 34 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF34_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 35 */
    using IAC_ISR1_IAF35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 35 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 35 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 35 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF35_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 35 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF35_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 36 */
    using IAC_ISR1_IAF36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 36 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 36 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 36 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF36_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 36 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF36_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 37 */
    using IAC_ISR1_IAF37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 37 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 37 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 37 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF37_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 37 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF37_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 38 */
    using IAC_ISR1_IAF38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 38 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 38 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 38 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF38_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 38 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF38_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 39 */
    using IAC_ISR1_IAF39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 39 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 39 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 39 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF39_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 39 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF39_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 40 */
    using IAC_ISR1_IAF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 40 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 40 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 40 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF40_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 40 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF40_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 41 */
    using IAC_ISR1_IAF41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 41 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 41 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 41 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF41_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 41 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF41_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 42 */
    using IAC_ISR1_IAF42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 42 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 42 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 42 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF42_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 42 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF42_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 43 */
    using IAC_ISR1_IAF43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 43 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 43 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 43 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF43_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 43 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF43_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 44 */
    using IAC_ISR1_IAF44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 44 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 44 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 44 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF44_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 44 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF44_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 45 */
    using IAC_ISR1_IAF45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 45 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 45 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 45 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF45_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 45 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF45_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 46 */
    using IAC_ISR1_IAF46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 46 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 46 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 46 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF46_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 46 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF46_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 47 */
    using IAC_ISR1_IAF47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 47 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 47 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 47 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF47_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 47 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF47_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 48 */
    using IAC_ISR1_IAF48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 48 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 48 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 48 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF48_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 48 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF48_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 49 */
    using IAC_ISR1_IAF49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 49 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 49 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 49 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF49_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 49 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF49_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 50 */
    using IAC_ISR1_IAF50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 50 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 50 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 50 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF50_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 50 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF50_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 51 */
    using IAC_ISR1_IAF51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 51 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 51 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 51 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF51_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 51 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF51_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 52 */
    using IAC_ISR1_IAF52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 52 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 52 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 52 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF52_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 52 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF52_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 53 */
    using IAC_ISR1_IAF53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 53 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 53 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 53 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF53_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 53 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF53_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 54 */
    using IAC_ISR1_IAF54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 54 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 54 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 54 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF54_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 54 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF54_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 55 */
    using IAC_ISR1_IAF55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 55 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 55 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 55 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF55_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 55 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF55_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 56 */
    using IAC_ISR1_IAF56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 56 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 56 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 56 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF56_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 56 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF56_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 57 */
    using IAC_ISR1_IAF57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 57 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 57 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 57 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF57_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 57 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF57_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 58 */
    using IAC_ISR1_IAF58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 58 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 58 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 58 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF58_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 58 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF58_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 59 */
    using IAC_ISR1_IAF59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 59 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 59 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 59 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF59_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 59 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF59_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 60 */
    using IAC_ISR1_IAF60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 60 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 60 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 60 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF60_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 60 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF60_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 61 */
    using IAC_ISR1_IAF61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 61 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 61 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 61 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF61_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 61 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF61_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 62 */
    using IAC_ISR1_IAF62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 62 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 62 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 62 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF62_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 62 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF62_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 63 */
    using IAC_ISR1_IAF63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 63 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 63 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 63 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF63_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 63 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR1_IAF63_B_0x1 = 1;

    /** @brief IAC interrupt status register 2 */
    using IAC_ISR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 64 */
    using IAC_ISR2_IAF64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 64 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 64 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 64 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF64_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 64 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF64_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 65 */
    using IAC_ISR2_IAF65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 65 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 65 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 65 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF65_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 65 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF65_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 66 */
    using IAC_ISR2_IAF66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 66 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 66 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 66 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF66_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 66 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF66_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 67 */
    using IAC_ISR2_IAF67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 67 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 67 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 67 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF67_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 67 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF67_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 68 */
    using IAC_ISR2_IAF68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 68 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 68 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 68 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF68_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 68 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF68_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 69 */
    using IAC_ISR2_IAF69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 69 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 69 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 69 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF69_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 69 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF69_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 70 */
    using IAC_ISR2_IAF70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 70 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 70 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 70 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF70_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 70 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF70_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 71 */
    using IAC_ISR2_IAF71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 71 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 71 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 71 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF71_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 71 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF71_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 72 */
    using IAC_ISR2_IAF72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 72 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 72 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 72 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF72_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 72 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF72_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 73 */
    using IAC_ISR2_IAF73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 73 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 73 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 73 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF73_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 73 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF73_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 74 */
    using IAC_ISR2_IAF74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 74 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 74 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 74 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF74_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 74 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF74_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 75 */
    using IAC_ISR2_IAF75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 75 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 75 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 75 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF75_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 75 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF75_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 76 */
    using IAC_ISR2_IAF76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 76 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 76 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 76 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF76_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 76 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF76_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 77 */
    using IAC_ISR2_IAF77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 77 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 77 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 77 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF77_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 77 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF77_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 78 */
    using IAC_ISR2_IAF78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 78 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 78 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 78 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF78_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 78 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF78_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 79 */
    using IAC_ISR2_IAF79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 79 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 79 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 79 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF79_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 79 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF79_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 80 */
    using IAC_ISR2_IAF80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 80 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 80 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 80 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF80_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 80 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF80_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 81 */
    using IAC_ISR2_IAF81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 81 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 81 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 81 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF81_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 81 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF81_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 82 */
    using IAC_ISR2_IAF82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 82 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 82 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 82 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF82_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 82 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF82_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 83 */
    using IAC_ISR2_IAF83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 83 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 83 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 83 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF83_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 83 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF83_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 84 */
    using IAC_ISR2_IAF84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 84 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 84 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 84 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF84_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 84 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF84_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 85 */
    using IAC_ISR2_IAF85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 85 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 85 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 85 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF85_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 85 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF85_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 86 */
    using IAC_ISR2_IAF86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 86 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 86 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 86 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF86_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 86 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF86_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 87 */
    using IAC_ISR2_IAF87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 87 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 87 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 87 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF87_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 87 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF87_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 88 */
    using IAC_ISR2_IAF88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 88 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 88 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 88 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF88_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 88 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF88_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 89 */
    using IAC_ISR2_IAF89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 89 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 89 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 89 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF89_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 89 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF89_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 90 */
    using IAC_ISR2_IAF90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 90 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 90 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 90 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF90_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 90 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF90_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 91 */
    using IAC_ISR2_IAF91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 91 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 91 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 91 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF91_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 91 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF91_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 92 */
    using IAC_ISR2_IAF92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 92 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 92 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 92 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF92_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 92 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF92_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 93 */
    using IAC_ISR2_IAF93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 93 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 93 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 93 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF93_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 93 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF93_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 94 */
    using IAC_ISR2_IAF94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 94 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 94 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 94 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF94_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 94 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF94_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 95 */
    using IAC_ISR2_IAF95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 95 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 95 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 95 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF95_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 95 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR2_IAF95_B_0x1 = 1;

    /** @brief IAC interrupt status register 3 */
    using IAC_ISR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 96 */
    using IAC_ISR3_IAF96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 96 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 96 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 96 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF96_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 96 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF96_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 97 */
    using IAC_ISR3_IAF97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 97 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 97 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 97 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF97_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 97 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF97_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 98 */
    using IAC_ISR3_IAF98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 98 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 98 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 98 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF98_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 98 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF98_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 99 */
    using IAC_ISR3_IAF99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 99 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 99 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 99 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF99_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 99 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF99_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 100 */
    using IAC_ISR3_IAF100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 100 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 100 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 100 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF100_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 100 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF100_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 101 */
    using IAC_ISR3_IAF101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 101 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 101 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 101 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF101_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 101 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF101_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 102 */
    using IAC_ISR3_IAF102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 102 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 102 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 102 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF102_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 102 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF102_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 103 */
    using IAC_ISR3_IAF103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 103 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 103 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 103 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF103_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 103 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF103_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 104 */
    using IAC_ISR3_IAF104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 104 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 104 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 104 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF104_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 104 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF104_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 105 */
    using IAC_ISR3_IAF105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 105 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 105 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 105 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF105_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 105 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF105_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 106 */
    using IAC_ISR3_IAF106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 106 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 106 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 106 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF106_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 106 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF106_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 107 */
    using IAC_ISR3_IAF107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 107 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 107 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 107 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF107_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 107 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF107_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 108 */
    using IAC_ISR3_IAF108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 108 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 108 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 108 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF108_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 108 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF108_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 109 */
    using IAC_ISR3_IAF109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 109 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 109 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 109 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF109_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 109 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF109_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 110 */
    using IAC_ISR3_IAF110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 110 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 110 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 110 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF110_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 110 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF110_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 111 */
    using IAC_ISR3_IAF111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 111 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 111 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 111 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF111_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 111 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF111_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 112 */
    using IAC_ISR3_IAF112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 112 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 112 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 112 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF112_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 112 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF112_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 113 */
    using IAC_ISR3_IAF113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 113 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 113 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 113 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF113_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 113 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF113_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 114 */
    using IAC_ISR3_IAF114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 114 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 114 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 114 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF114_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 114 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF114_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 115 */
    using IAC_ISR3_IAF115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 115 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 115 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 115 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF115_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 115 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF115_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 116 */
    using IAC_ISR3_IAF116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 116 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 116 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 116 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF116_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 116 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF116_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 117 */
    using IAC_ISR3_IAF117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 117 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 117 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 117 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF117_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 117 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF117_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 118 */
    using IAC_ISR3_IAF118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 118 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 118 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 118 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF118_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 118 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF118_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 119 */
    using IAC_ISR3_IAF119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 119 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 119 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 119 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF119_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 119 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF119_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 120 */
    using IAC_ISR3_IAF120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 120 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 120 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 120 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF120_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 120 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF120_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 121 */
    using IAC_ISR3_IAF121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 121 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 121 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 121 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF121_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 121 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF121_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 122 */
    using IAC_ISR3_IAF122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 122 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 122 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 122 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF122_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 122 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF122_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 123 */
    using IAC_ISR3_IAF123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 123 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 123 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 123 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF123_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 123 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF123_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 124 */
    using IAC_ISR3_IAF124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 124 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 124 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 124 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF124_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 124 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF124_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 125 */
    using IAC_ISR3_IAF125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 125 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 125 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 125 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF125_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 125 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF125_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 126 */
    using IAC_ISR3_IAF126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 126 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 126 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 126 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF126_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 126 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF126_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 127 */
    using IAC_ISR3_IAF127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 127 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 127 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 127 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF127_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 127 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR3_IAF127_B_0x1 = 1;

    /** @brief IAC interrupt status register 4 */
    using IAC_ISR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 128 */
    using IAC_ISR4_IAF128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 128 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 128 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 128 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF128_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 128 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF128_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 129 */
    using IAC_ISR4_IAF129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 129 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 129 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 129 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF129_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 129 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF129_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 130 */
    using IAC_ISR4_IAF130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 130 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 130 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 130 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF130_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 130 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF130_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 131 */
    using IAC_ISR4_IAF131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 131 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 131 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 131 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF131_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 131 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF131_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 132 */
    using IAC_ISR4_IAF132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 132 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 132 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 132 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF132_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 132 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF132_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 133 */
    using IAC_ISR4_IAF133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 133 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 133 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 133 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF133_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 133 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF133_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 134 */
    using IAC_ISR4_IAF134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 134 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 134 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 134 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF134_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 134 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF134_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 135 */
    using IAC_ISR4_IAF135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 135 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 135 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 135 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF135_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 135 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF135_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 136 */
    using IAC_ISR4_IAF136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 136 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 136 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 136 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF136_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 136 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF136_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 137 */
    using IAC_ISR4_IAF137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 137 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 137 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 137 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF137_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 137 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF137_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 138 */
    using IAC_ISR4_IAF138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 138 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 138 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 138 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF138_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 138 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF138_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 139 */
    using IAC_ISR4_IAF139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 139 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 139 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 139 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF139_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 139 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF139_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 140 */
    using IAC_ISR4_IAF140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 140 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 140 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 140 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF140_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 140 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF140_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 141 */
    using IAC_ISR4_IAF141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 141 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 141 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 141 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF141_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 141 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF141_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 142 */
    using IAC_ISR4_IAF142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 142 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 142 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 142 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF142_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 142 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF142_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 143 */
    using IAC_ISR4_IAF143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 143 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 143 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 143 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF143_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 143 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF143_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 144 */
    using IAC_ISR4_IAF144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 144 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 144 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 144 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF144_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 144 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF144_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 145 */
    using IAC_ISR4_IAF145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 145 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 145 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 145 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF145_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 145 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF145_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 146 */
    using IAC_ISR4_IAF146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 146 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 146 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 146 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF146_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 146 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF146_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 147 */
    using IAC_ISR4_IAF147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 147 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 147 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 147 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF147_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 147 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF147_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 148 */
    using IAC_ISR4_IAF148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 148 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 148 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 148 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF148_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 148 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF148_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 149 */
    using IAC_ISR4_IAF149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 149 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 149 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 149 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF149_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 149 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF149_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 150 */
    using IAC_ISR4_IAF150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 150 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 150 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 150 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF150_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 150 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF150_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 151 */
    using IAC_ISR4_IAF151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 151 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 151 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 151 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF151_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 151 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF151_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 152 */
    using IAC_ISR4_IAF152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 152 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 152 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 152 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF152_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 152 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF152_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 153 */
    using IAC_ISR4_IAF153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 153 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 153 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 153 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF153_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 153 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF153_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 154 */
    using IAC_ISR4_IAF154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 154 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 154 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 154 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF154_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 154 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF154_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 155 */
    using IAC_ISR4_IAF155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 155 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 155 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 155 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF155_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 155 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF155_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 156 */
    using IAC_ISR4_IAF156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 156 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 156 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 156 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF156_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 156 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF156_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 157 */
    using IAC_ISR4_IAF157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 157 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 157 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 157 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF157_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 157 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF157_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 158 */
    using IAC_ISR4_IAF158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 158 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 158 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 158 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF158_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 158 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF158_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 159 */
    using IAC_ISR4_IAF159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 159 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 159 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 159 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF159_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 159 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR4_IAF159_B_0x1 = 1;

    /** @brief IAC interrupt status register 5 */
    using IAC_ISR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access interrupt enable for peripheral 160 */
    using IAC_ISR5_IAF160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 160 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 160 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 160 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF160_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 160 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF160_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 161 */
    using IAC_ISR5_IAF161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 161 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 161 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 161 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF161_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 161 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF161_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 162 */
    using IAC_ISR5_IAF162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 162 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 162 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 162 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF162_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 162 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF162_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 163 */
    using IAC_ISR5_IAF163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 163 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 163 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 163 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF163_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 163 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF163_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 164 */
    using IAC_ISR5_IAF164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 164 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 164 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 164 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF164_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 164 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF164_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 165 */
    using IAC_ISR5_IAF165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 165 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 165 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 165 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF165_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 165 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF165_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 166 */
    using IAC_ISR5_IAF166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 166 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 166 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 166 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF166_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 166 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF166_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 167 */
    using IAC_ISR5_IAF167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 167 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 167 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 167 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF167_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 167 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF167_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 168 */
    using IAC_ISR5_IAF168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 168 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 168 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 168 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF168_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 168 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF168_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 169 */
    using IAC_ISR5_IAF169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 169 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 169 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 169 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF169_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 169 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF169_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 170 */
    using IAC_ISR5_IAF170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 170 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 170 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 170 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF170_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 170 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF170_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 171 */
    using IAC_ISR5_IAF171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 171 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 171 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 171 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF171_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 171 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF171_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 172 */
    using IAC_ISR5_IAF172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 172 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 172 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 172 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF172_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 172 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF172_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 173 */
    using IAC_ISR5_IAF173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 173 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 173 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 173 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF173_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 173 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF173_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 174 */
    using IAC_ISR5_IAF174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 174 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 174 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 174 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF174_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 174 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF174_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 175 */
    using IAC_ISR5_IAF175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 175 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 175 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 175 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF175_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 175 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF175_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 176 */
    using IAC_ISR5_IAF176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 176 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 176 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 176 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF176_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 176 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF176_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 177 */
    using IAC_ISR5_IAF177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 177 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 177 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 177 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF177_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 177 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF177_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 178 */
    using IAC_ISR5_IAF178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 178 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 178 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 178 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF178_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 178 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF178_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 179 */
    using IAC_ISR5_IAF179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 179 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 179 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 179 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF179_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 179 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF179_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 180 */
    using IAC_ISR5_IAF180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 180 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 180 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 180 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF180_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 180 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF180_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 181 */
    using IAC_ISR5_IAF181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 181 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 181 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 181 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF181_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 181 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF181_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 182 */
    using IAC_ISR5_IAF182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 182 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 182 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 182 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF182_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 182 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF182_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 183 */
    using IAC_ISR5_IAF183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 183 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 183 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 183 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF183_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 183 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF183_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 184 */
    using IAC_ISR5_IAF184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 184 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 184 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 184 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF184_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 184 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF184_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 185 */
    using IAC_ISR5_IAF185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 185 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 185 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 185 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF185_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 185 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF185_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 186 */
    using IAC_ISR5_IAF186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 186 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 186 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 186 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF186_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 186 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF186_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 187 */
    using IAC_ISR5_IAF187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 187 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 187 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 187 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF187_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 187 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF187_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 188 */
    using IAC_ISR5_IAF188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 188 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 188 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 188 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF188_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 188 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF188_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 189 */
    using IAC_ISR5_IAF189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 189 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 189 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 189 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF189_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 189 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF189_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 190 */
    using IAC_ISR5_IAF190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 190 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 190 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 190 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF190_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 190 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF190_B_0x1 = 1;

    /** @brief illegal access interrupt enable for peripheral 191 */
    using IAC_ISR5_IAF191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event detected for peripheral 191 (since reset or the last time this bit was cleared). (value: 0)
     *          - B_0x1: At least one illegal access event has been detected for peripheral 191 (since the last time this bit was cleared). (value: 1)
     */
        /** @brief No illegal access event detected for peripheral 191 (since reset or the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF191_B_0x0 = 0;
        /** @brief At least one illegal access event has been detected for peripheral 191 (since the last time this bit was cleared). */
    constexpr std::uint32_t IAC_ISR5_IAF191_B_0x1 = 1;

    /** @brief IAC interrupt clear register 0 */
    using IAC_ICR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access flag clear for peripheral 0 */
    using IAC_ICR0_IAF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 0 flag status not affected (value: 0)
     *          - B_0x1: IAF 0 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 0 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF0_B_0x0 = 0;
        /** @brief IAF 0 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF0_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 1 */
    using IAC_ICR0_IAF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 1 flag status not affected (value: 0)
     *          - B_0x1: IAF 1 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 1 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF1_B_0x0 = 0;
        /** @brief IAF 1 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF1_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 2 */
    using IAC_ICR0_IAF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 2 flag status not affected (value: 0)
     *          - B_0x1: IAF 2 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 2 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF2_B_0x0 = 0;
        /** @brief IAF 2 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF2_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 3 */
    using IAC_ICR0_IAF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 3 flag status not affected (value: 0)
     *          - B_0x1: IAF 3 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 3 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF3_B_0x0 = 0;
        /** @brief IAF 3 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF3_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 4 */
    using IAC_ICR0_IAF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 4 flag status not affected (value: 0)
     *          - B_0x1: IAF 4 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 4 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF4_B_0x0 = 0;
        /** @brief IAF 4 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF4_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 5 */
    using IAC_ICR0_IAF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 5 flag status not affected (value: 0)
     *          - B_0x1: IAF 5 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 5 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF5_B_0x0 = 0;
        /** @brief IAF 5 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF5_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 6 */
    using IAC_ICR0_IAF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 6 flag status not affected (value: 0)
     *          - B_0x1: IAF 6 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 6 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF6_B_0x0 = 0;
        /** @brief IAF 6 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF6_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 7 */
    using IAC_ICR0_IAF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 7 flag status not affected (value: 0)
     *          - B_0x1: IAF 7 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 7 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF7_B_0x0 = 0;
        /** @brief IAF 7 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF7_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 8 */
    using IAC_ICR0_IAF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 8 flag status not affected (value: 0)
     *          - B_0x1: IAF 8 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 8 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF8_B_0x0 = 0;
        /** @brief IAF 8 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF8_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 9 */
    using IAC_ICR0_IAF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 9 flag status not affected (value: 0)
     *          - B_0x1: IAF 9 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 9 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF9_B_0x0 = 0;
        /** @brief IAF 9 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF9_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 10 */
    using IAC_ICR0_IAF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 10 flag status not affected (value: 0)
     *          - B_0x1: IAF 10 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 10 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF10_B_0x0 = 0;
        /** @brief IAF 10 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF10_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 11 */
    using IAC_ICR0_IAF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 11 flag status not affected (value: 0)
     *          - B_0x1: IAF 11 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 11 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF11_B_0x0 = 0;
        /** @brief IAF 11 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF11_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 12 */
    using IAC_ICR0_IAF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 12 flag status not affected (value: 0)
     *          - B_0x1: IAF 12 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 12 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF12_B_0x0 = 0;
        /** @brief IAF 12 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF12_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 13 */
    using IAC_ICR0_IAF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 13 flag status not affected (value: 0)
     *          - B_0x1: IAF 13 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 13 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF13_B_0x0 = 0;
        /** @brief IAF 13 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF13_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 14 */
    using IAC_ICR0_IAF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 14 flag status not affected (value: 0)
     *          - B_0x1: IAF 14 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 14 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF14_B_0x0 = 0;
        /** @brief IAF 14 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF14_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 15 */
    using IAC_ICR0_IAF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 15 flag status not affected (value: 0)
     *          - B_0x1: IAF 15 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 15 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF15_B_0x0 = 0;
        /** @brief IAF 15 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF15_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 16 */
    using IAC_ICR0_IAF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 16 flag status not affected (value: 0)
     *          - B_0x1: IAF 16 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 16 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF16_B_0x0 = 0;
        /** @brief IAF 16 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF16_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 17 */
    using IAC_ICR0_IAF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 17 flag status not affected (value: 0)
     *          - B_0x1: IAF 17 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 17 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF17_B_0x0 = 0;
        /** @brief IAF 17 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF17_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 18 */
    using IAC_ICR0_IAF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 18 flag status not affected (value: 0)
     *          - B_0x1: IAF 18 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 18 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF18_B_0x0 = 0;
        /** @brief IAF 18 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF18_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 19 */
    using IAC_ICR0_IAF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 19 flag status not affected (value: 0)
     *          - B_0x1: IAF 19 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 19 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF19_B_0x0 = 0;
        /** @brief IAF 19 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF19_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 20 */
    using IAC_ICR0_IAF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 20 flag status not affected (value: 0)
     *          - B_0x1: IAF 20 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 20 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF20_B_0x0 = 0;
        /** @brief IAF 20 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF20_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 21 */
    using IAC_ICR0_IAF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 21 flag status not affected (value: 0)
     *          - B_0x1: IAF 21 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 21 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF21_B_0x0 = 0;
        /** @brief IAF 21 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF21_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 22 */
    using IAC_ICR0_IAF22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 22 flag status not affected (value: 0)
     *          - B_0x1: IAF 22 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 22 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF22_B_0x0 = 0;
        /** @brief IAF 22 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF22_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 23 */
    using IAC_ICR0_IAF23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 23 flag status not affected (value: 0)
     *          - B_0x1: IAF 23 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 23 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF23_B_0x0 = 0;
        /** @brief IAF 23 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF23_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 24 */
    using IAC_ICR0_IAF24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 24 flag status not affected (value: 0)
     *          - B_0x1: IAF 24 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 24 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF24_B_0x0 = 0;
        /** @brief IAF 24 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF24_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 25 */
    using IAC_ICR0_IAF25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 25 flag status not affected (value: 0)
     *          - B_0x1: IAF 25 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 25 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF25_B_0x0 = 0;
        /** @brief IAF 25 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF25_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 26 */
    using IAC_ICR0_IAF26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 26 flag status not affected (value: 0)
     *          - B_0x1: IAF 26 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 26 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF26_B_0x0 = 0;
        /** @brief IAF 26 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF26_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 27 */
    using IAC_ICR0_IAF27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 27 flag status not affected (value: 0)
     *          - B_0x1: IAF 27 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 27 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF27_B_0x0 = 0;
        /** @brief IAF 27 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF27_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 28 */
    using IAC_ICR0_IAF28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 28 flag status not affected (value: 0)
     *          - B_0x1: IAF 28 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 28 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF28_B_0x0 = 0;
        /** @brief IAF 28 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF28_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 29 */
    using IAC_ICR0_IAF29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 29 flag status not affected (value: 0)
     *          - B_0x1: IAF 29 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 29 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF29_B_0x0 = 0;
        /** @brief IAF 29 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF29_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 30 */
    using IAC_ICR0_IAF30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 30 flag status not affected (value: 0)
     *          - B_0x1: IAF 30 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 30 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF30_B_0x0 = 0;
        /** @brief IAF 30 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF30_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 31 */
    using IAC_ICR0_IAF31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 31 flag status not affected (value: 0)
     *          - B_0x1: IAF 31 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 31 flag status not affected */
    constexpr std::uint32_t IAC_ICR0_IAF31_B_0x0 = 0;
        /** @brief IAF 31 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR0_IAF31_B_0x1 = 1;

    /** @brief IAC interrupt clear register 1 */
    using IAC_ICR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access flag clear for peripheral 32 */
    using IAC_ICR1_IAF32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 32 flag status not affected (value: 0)
     *          - B_0x1: IAF 32 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 32 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF32_B_0x0 = 0;
        /** @brief IAF 32 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF32_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 33 */
    using IAC_ICR1_IAF33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 33 flag status not affected (value: 0)
     *          - B_0x1: IAF 33 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 33 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF33_B_0x0 = 0;
        /** @brief IAF 33 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF33_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 34 */
    using IAC_ICR1_IAF34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 34 flag status not affected (value: 0)
     *          - B_0x1: IAF 34 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 34 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF34_B_0x0 = 0;
        /** @brief IAF 34 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF34_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 35 */
    using IAC_ICR1_IAF35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 35 flag status not affected (value: 0)
     *          - B_0x1: IAF 35 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 35 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF35_B_0x0 = 0;
        /** @brief IAF 35 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF35_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 36 */
    using IAC_ICR1_IAF36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 36 flag status not affected (value: 0)
     *          - B_0x1: IAF 36 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 36 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF36_B_0x0 = 0;
        /** @brief IAF 36 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF36_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 37 */
    using IAC_ICR1_IAF37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 37 flag status not affected (value: 0)
     *          - B_0x1: IAF 37 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 37 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF37_B_0x0 = 0;
        /** @brief IAF 37 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF37_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 38 */
    using IAC_ICR1_IAF38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 38 flag status not affected (value: 0)
     *          - B_0x1: IAF 38 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 38 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF38_B_0x0 = 0;
        /** @brief IAF 38 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF38_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 39 */
    using IAC_ICR1_IAF39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 39 flag status not affected (value: 0)
     *          - B_0x1: IAF 39 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 39 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF39_B_0x0 = 0;
        /** @brief IAF 39 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF39_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 40 */
    using IAC_ICR1_IAF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 40 flag status not affected (value: 0)
     *          - B_0x1: IAF 40 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 40 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF40_B_0x0 = 0;
        /** @brief IAF 40 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF40_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 41 */
    using IAC_ICR1_IAF41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 41 flag status not affected (value: 0)
     *          - B_0x1: IAF 41 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 41 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF41_B_0x0 = 0;
        /** @brief IAF 41 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF41_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 42 */
    using IAC_ICR1_IAF42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 42 flag status not affected (value: 0)
     *          - B_0x1: IAF 42 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 42 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF42_B_0x0 = 0;
        /** @brief IAF 42 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF42_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 43 */
    using IAC_ICR1_IAF43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 43 flag status not affected (value: 0)
     *          - B_0x1: IAF 43 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 43 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF43_B_0x0 = 0;
        /** @brief IAF 43 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF43_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 44 */
    using IAC_ICR1_IAF44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 44 flag status not affected (value: 0)
     *          - B_0x1: IAF 44 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 44 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF44_B_0x0 = 0;
        /** @brief IAF 44 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF44_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 45 */
    using IAC_ICR1_IAF45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 45 flag status not affected (value: 0)
     *          - B_0x1: IAF 45 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 45 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF45_B_0x0 = 0;
        /** @brief IAF 45 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF45_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 46 */
    using IAC_ICR1_IAF46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 46 flag status not affected (value: 0)
     *          - B_0x1: IAF 46 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 46 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF46_B_0x0 = 0;
        /** @brief IAF 46 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF46_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 47 */
    using IAC_ICR1_IAF47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 47 flag status not affected (value: 0)
     *          - B_0x1: IAF 47 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 47 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF47_B_0x0 = 0;
        /** @brief IAF 47 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF47_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 48 */
    using IAC_ICR1_IAF48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 48 flag status not affected (value: 0)
     *          - B_0x1: IAF 48 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 48 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF48_B_0x0 = 0;
        /** @brief IAF 48 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF48_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 49 */
    using IAC_ICR1_IAF49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 49 flag status not affected (value: 0)
     *          - B_0x1: IAF 49 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 49 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF49_B_0x0 = 0;
        /** @brief IAF 49 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF49_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 50 */
    using IAC_ICR1_IAF50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 50 flag status not affected (value: 0)
     *          - B_0x1: IAF 50 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 50 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF50_B_0x0 = 0;
        /** @brief IAF 50 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF50_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 51 */
    using IAC_ICR1_IAF51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 51 flag status not affected (value: 0)
     *          - B_0x1: IAF 51 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 51 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF51_B_0x0 = 0;
        /** @brief IAF 51 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF51_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 52 */
    using IAC_ICR1_IAF52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 52 flag status not affected (value: 0)
     *          - B_0x1: IAF 52 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 52 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF52_B_0x0 = 0;
        /** @brief IAF 52 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF52_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 53 */
    using IAC_ICR1_IAF53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 53 flag status not affected (value: 0)
     *          - B_0x1: IAF 53 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 53 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF53_B_0x0 = 0;
        /** @brief IAF 53 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF53_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 54 */
    using IAC_ICR1_IAF54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 54 flag status not affected (value: 0)
     *          - B_0x1: IAF 54 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 54 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF54_B_0x0 = 0;
        /** @brief IAF 54 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF54_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 55 */
    using IAC_ICR1_IAF55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 55 flag status not affected (value: 0)
     *          - B_0x1: IAF 55 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 55 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF55_B_0x0 = 0;
        /** @brief IAF 55 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF55_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 56 */
    using IAC_ICR1_IAF56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 56 flag status not affected (value: 0)
     *          - B_0x1: IAF 56 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 56 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF56_B_0x0 = 0;
        /** @brief IAF 56 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF56_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 57 */
    using IAC_ICR1_IAF57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 57 flag status not affected (value: 0)
     *          - B_0x1: IAF 57 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 57 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF57_B_0x0 = 0;
        /** @brief IAF 57 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF57_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 58 */
    using IAC_ICR1_IAF58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 58 flag status not affected (value: 0)
     *          - B_0x1: IAF 58 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 58 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF58_B_0x0 = 0;
        /** @brief IAF 58 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF58_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 59 */
    using IAC_ICR1_IAF59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 59 flag status not affected (value: 0)
     *          - B_0x1: IAF 59 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 59 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF59_B_0x0 = 0;
        /** @brief IAF 59 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF59_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 60 */
    using IAC_ICR1_IAF60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 60 flag status not affected (value: 0)
     *          - B_0x1: IAF 60 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 60 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF60_B_0x0 = 0;
        /** @brief IAF 60 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF60_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 61 */
    using IAC_ICR1_IAF61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 61 flag status not affected (value: 0)
     *          - B_0x1: IAF 61 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 61 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF61_B_0x0 = 0;
        /** @brief IAF 61 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF61_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 62 */
    using IAC_ICR1_IAF62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 62 flag status not affected (value: 0)
     *          - B_0x1: IAF 62 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 62 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF62_B_0x0 = 0;
        /** @brief IAF 62 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF62_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 63 */
    using IAC_ICR1_IAF63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 63 flag status not affected (value: 0)
     *          - B_0x1: IAF 63 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 63 flag status not affected */
    constexpr std::uint32_t IAC_ICR1_IAF63_B_0x0 = 0;
        /** @brief IAF 63 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR1_IAF63_B_0x1 = 1;

    /** @brief IAC interrupt clear register 2 */
    using IAC_ICR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access flag clear for peripheral 64 */
    using IAC_ICR2_IAF64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 64 flag status not affected (value: 0)
     *          - B_0x1: IAF 64 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 64 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF64_B_0x0 = 0;
        /** @brief IAF 64 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF64_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 65 */
    using IAC_ICR2_IAF65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 65 flag status not affected (value: 0)
     *          - B_0x1: IAF 65 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 65 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF65_B_0x0 = 0;
        /** @brief IAF 65 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF65_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 66 */
    using IAC_ICR2_IAF66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 66 flag status not affected (value: 0)
     *          - B_0x1: IAF 66 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 66 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF66_B_0x0 = 0;
        /** @brief IAF 66 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF66_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 67 */
    using IAC_ICR2_IAF67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 67 flag status not affected (value: 0)
     *          - B_0x1: IAF 67 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 67 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF67_B_0x0 = 0;
        /** @brief IAF 67 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF67_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 68 */
    using IAC_ICR2_IAF68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 68 flag status not affected (value: 0)
     *          - B_0x1: IAF 68 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 68 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF68_B_0x0 = 0;
        /** @brief IAF 68 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF68_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 69 */
    using IAC_ICR2_IAF69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 69 flag status not affected (value: 0)
     *          - B_0x1: IAF 69 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 69 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF69_B_0x0 = 0;
        /** @brief IAF 69 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF69_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 70 */
    using IAC_ICR2_IAF70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 70 flag status not affected (value: 0)
     *          - B_0x1: IAF 70 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 70 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF70_B_0x0 = 0;
        /** @brief IAF 70 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF70_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 71 */
    using IAC_ICR2_IAF71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 71 flag status not affected (value: 0)
     *          - B_0x1: IAF 71 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 71 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF71_B_0x0 = 0;
        /** @brief IAF 71 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF71_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 72 */
    using IAC_ICR2_IAF72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 72 flag status not affected (value: 0)
     *          - B_0x1: IAF 72 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 72 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF72_B_0x0 = 0;
        /** @brief IAF 72 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF72_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 73 */
    using IAC_ICR2_IAF73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 73 flag status not affected (value: 0)
     *          - B_0x1: IAF 73 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 73 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF73_B_0x0 = 0;
        /** @brief IAF 73 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF73_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 74 */
    using IAC_ICR2_IAF74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 74 flag status not affected (value: 0)
     *          - B_0x1: IAF 74 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 74 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF74_B_0x0 = 0;
        /** @brief IAF 74 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF74_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 75 */
    using IAC_ICR2_IAF75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 75 flag status not affected (value: 0)
     *          - B_0x1: IAF 75 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 75 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF75_B_0x0 = 0;
        /** @brief IAF 75 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF75_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 76 */
    using IAC_ICR2_IAF76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 76 flag status not affected (value: 0)
     *          - B_0x1: IAF 76 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 76 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF76_B_0x0 = 0;
        /** @brief IAF 76 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF76_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 77 */
    using IAC_ICR2_IAF77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 77 flag status not affected (value: 0)
     *          - B_0x1: IAF 77 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 77 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF77_B_0x0 = 0;
        /** @brief IAF 77 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF77_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 78 */
    using IAC_ICR2_IAF78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 78 flag status not affected (value: 0)
     *          - B_0x1: IAF 78 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 78 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF78_B_0x0 = 0;
        /** @brief IAF 78 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF78_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 79 */
    using IAC_ICR2_IAF79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 79 flag status not affected (value: 0)
     *          - B_0x1: IAF 79 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 79 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF79_B_0x0 = 0;
        /** @brief IAF 79 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF79_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 80 */
    using IAC_ICR2_IAF80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 80 flag status not affected (value: 0)
     *          - B_0x1: IAF 80 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 80 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF80_B_0x0 = 0;
        /** @brief IAF 80 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF80_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 81 */
    using IAC_ICR2_IAF81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 81 flag status not affected (value: 0)
     *          - B_0x1: IAF 81 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 81 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF81_B_0x0 = 0;
        /** @brief IAF 81 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF81_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 82 */
    using IAC_ICR2_IAF82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 82 flag status not affected (value: 0)
     *          - B_0x1: IAF 82 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 82 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF82_B_0x0 = 0;
        /** @brief IAF 82 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF82_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 83 */
    using IAC_ICR2_IAF83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 83 flag status not affected (value: 0)
     *          - B_0x1: IAF 83 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 83 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF83_B_0x0 = 0;
        /** @brief IAF 83 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF83_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 84 */
    using IAC_ICR2_IAF84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 84 flag status not affected (value: 0)
     *          - B_0x1: IAF 84 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 84 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF84_B_0x0 = 0;
        /** @brief IAF 84 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF84_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 85 */
    using IAC_ICR2_IAF85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 85 flag status not affected (value: 0)
     *          - B_0x1: IAF 85 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 85 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF85_B_0x0 = 0;
        /** @brief IAF 85 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF85_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 86 */
    using IAC_ICR2_IAF86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 86 flag status not affected (value: 0)
     *          - B_0x1: IAF 86 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 86 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF86_B_0x0 = 0;
        /** @brief IAF 86 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF86_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 87 */
    using IAC_ICR2_IAF87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 87 flag status not affected (value: 0)
     *          - B_0x1: IAF 87 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 87 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF87_B_0x0 = 0;
        /** @brief IAF 87 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF87_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 88 */
    using IAC_ICR2_IAF88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 88 flag status not affected (value: 0)
     *          - B_0x1: IAF 88 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 88 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF88_B_0x0 = 0;
        /** @brief IAF 88 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF88_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 89 */
    using IAC_ICR2_IAF89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 89 flag status not affected (value: 0)
     *          - B_0x1: IAF 89 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 89 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF89_B_0x0 = 0;
        /** @brief IAF 89 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF89_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 90 */
    using IAC_ICR2_IAF90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 90 flag status not affected (value: 0)
     *          - B_0x1: IAF 90 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 90 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF90_B_0x0 = 0;
        /** @brief IAF 90 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF90_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 91 */
    using IAC_ICR2_IAF91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 91 flag status not affected (value: 0)
     *          - B_0x1: IAF 91 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 91 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF91_B_0x0 = 0;
        /** @brief IAF 91 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF91_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 92 */
    using IAC_ICR2_IAF92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 92 flag status not affected (value: 0)
     *          - B_0x1: IAF 92 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 92 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF92_B_0x0 = 0;
        /** @brief IAF 92 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF92_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 93 */
    using IAC_ICR2_IAF93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 93 flag status not affected (value: 0)
     *          - B_0x1: IAF 93 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 93 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF93_B_0x0 = 0;
        /** @brief IAF 93 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF93_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 94 */
    using IAC_ICR2_IAF94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 94 flag status not affected (value: 0)
     *          - B_0x1: IAF 94 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 94 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF94_B_0x0 = 0;
        /** @brief IAF 94 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF94_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 95 */
    using IAC_ICR2_IAF95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 95 flag status not affected (value: 0)
     *          - B_0x1: IAF 95 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 95 flag status not affected */
    constexpr std::uint32_t IAC_ICR2_IAF95_B_0x0 = 0;
        /** @brief IAF 95 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR2_IAF95_B_0x1 = 1;

    /** @brief IAC interrupt clear register 3 */
    using IAC_ICR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access flag clear for peripheral 96 */
    using IAC_ICR3_IAF96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 96 flag status not affected (value: 0)
     *          - B_0x1: IAF 96 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 96 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF96_B_0x0 = 0;
        /** @brief IAF 96 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF96_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 97 */
    using IAC_ICR3_IAF97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 97 flag status not affected (value: 0)
     *          - B_0x1: IAF 97 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 97 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF97_B_0x0 = 0;
        /** @brief IAF 97 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF97_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 98 */
    using IAC_ICR3_IAF98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 98 flag status not affected (value: 0)
     *          - B_0x1: IAF 98 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 98 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF98_B_0x0 = 0;
        /** @brief IAF 98 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF98_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 99 */
    using IAC_ICR3_IAF99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 99 flag status not affected (value: 0)
     *          - B_0x1: IAF 99 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 99 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF99_B_0x0 = 0;
        /** @brief IAF 99 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF99_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 100 */
    using IAC_ICR3_IAF100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 100 flag status not affected (value: 0)
     *          - B_0x1: IAF 100 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 100 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF100_B_0x0 = 0;
        /** @brief IAF 100 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF100_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 101 */
    using IAC_ICR3_IAF101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 101 flag status not affected (value: 0)
     *          - B_0x1: IAF 101 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 101 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF101_B_0x0 = 0;
        /** @brief IAF 101 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF101_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 102 */
    using IAC_ICR3_IAF102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 102 flag status not affected (value: 0)
     *          - B_0x1: IAF 102 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 102 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF102_B_0x0 = 0;
        /** @brief IAF 102 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF102_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 103 */
    using IAC_ICR3_IAF103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 103 flag status not affected (value: 0)
     *          - B_0x1: IAF 103 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 103 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF103_B_0x0 = 0;
        /** @brief IAF 103 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF103_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 104 */
    using IAC_ICR3_IAF104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 104 flag status not affected (value: 0)
     *          - B_0x1: IAF 104 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 104 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF104_B_0x0 = 0;
        /** @brief IAF 104 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF104_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 105 */
    using IAC_ICR3_IAF105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 105 flag status not affected (value: 0)
     *          - B_0x1: IAF 105 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 105 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF105_B_0x0 = 0;
        /** @brief IAF 105 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF105_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 106 */
    using IAC_ICR3_IAF106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 106 flag status not affected (value: 0)
     *          - B_0x1: IAF 106 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 106 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF106_B_0x0 = 0;
        /** @brief IAF 106 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF106_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 107 */
    using IAC_ICR3_IAF107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 107 flag status not affected (value: 0)
     *          - B_0x1: IAF 107 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 107 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF107_B_0x0 = 0;
        /** @brief IAF 107 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF107_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 108 */
    using IAC_ICR3_IAF108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 108 flag status not affected (value: 0)
     *          - B_0x1: IAF 108 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 108 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF108_B_0x0 = 0;
        /** @brief IAF 108 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF108_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 109 */
    using IAC_ICR3_IAF109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 109 flag status not affected (value: 0)
     *          - B_0x1: IAF 109 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 109 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF109_B_0x0 = 0;
        /** @brief IAF 109 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF109_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 110 */
    using IAC_ICR3_IAF110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 110 flag status not affected (value: 0)
     *          - B_0x1: IAF 110 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 110 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF110_B_0x0 = 0;
        /** @brief IAF 110 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF110_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 111 */
    using IAC_ICR3_IAF111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 111 flag status not affected (value: 0)
     *          - B_0x1: IAF 111 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 111 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF111_B_0x0 = 0;
        /** @brief IAF 111 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF111_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 112 */
    using IAC_ICR3_IAF112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 112 flag status not affected (value: 0)
     *          - B_0x1: IAF 112 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 112 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF112_B_0x0 = 0;
        /** @brief IAF 112 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF112_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 113 */
    using IAC_ICR3_IAF113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 113 flag status not affected (value: 0)
     *          - B_0x1: IAF 113 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 113 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF113_B_0x0 = 0;
        /** @brief IAF 113 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF113_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 114 */
    using IAC_ICR3_IAF114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 114 flag status not affected (value: 0)
     *          - B_0x1: IAF 114 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 114 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF114_B_0x0 = 0;
        /** @brief IAF 114 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF114_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 115 */
    using IAC_ICR3_IAF115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 115 flag status not affected (value: 0)
     *          - B_0x1: IAF 115 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 115 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF115_B_0x0 = 0;
        /** @brief IAF 115 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF115_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 116 */
    using IAC_ICR3_IAF116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 116 flag status not affected (value: 0)
     *          - B_0x1: IAF 116 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 116 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF116_B_0x0 = 0;
        /** @brief IAF 116 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF116_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 117 */
    using IAC_ICR3_IAF117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 117 flag status not affected (value: 0)
     *          - B_0x1: IAF 117 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 117 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF117_B_0x0 = 0;
        /** @brief IAF 117 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF117_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 118 */
    using IAC_ICR3_IAF118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 118 flag status not affected (value: 0)
     *          - B_0x1: IAF 118 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 118 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF118_B_0x0 = 0;
        /** @brief IAF 118 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF118_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 119 */
    using IAC_ICR3_IAF119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 119 flag status not affected (value: 0)
     *          - B_0x1: IAF 119 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 119 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF119_B_0x0 = 0;
        /** @brief IAF 119 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF119_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 120 */
    using IAC_ICR3_IAF120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 120 flag status not affected (value: 0)
     *          - B_0x1: IAF 120 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 120 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF120_B_0x0 = 0;
        /** @brief IAF 120 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF120_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 121 */
    using IAC_ICR3_IAF121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 121 flag status not affected (value: 0)
     *          - B_0x1: IAF 121 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 121 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF121_B_0x0 = 0;
        /** @brief IAF 121 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF121_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 122 */
    using IAC_ICR3_IAF122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 122 flag status not affected (value: 0)
     *          - B_0x1: IAF 122 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 122 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF122_B_0x0 = 0;
        /** @brief IAF 122 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF122_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 123 */
    using IAC_ICR3_IAF123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 123 flag status not affected (value: 0)
     *          - B_0x1: IAF 123 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 123 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF123_B_0x0 = 0;
        /** @brief IAF 123 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF123_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 124 */
    using IAC_ICR3_IAF124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 124 flag status not affected (value: 0)
     *          - B_0x1: IAF 124 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 124 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF124_B_0x0 = 0;
        /** @brief IAF 124 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF124_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 125 */
    using IAC_ICR3_IAF125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 125 flag status not affected (value: 0)
     *          - B_0x1: IAF 125 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 125 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF125_B_0x0 = 0;
        /** @brief IAF 125 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF125_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 126 */
    using IAC_ICR3_IAF126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 126 flag status not affected (value: 0)
     *          - B_0x1: IAF 126 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 126 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF126_B_0x0 = 0;
        /** @brief IAF 126 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF126_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 127 */
    using IAC_ICR3_IAF127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 127 flag status not affected (value: 0)
     *          - B_0x1: IAF 127 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 127 flag status not affected */
    constexpr std::uint32_t IAC_ICR3_IAF127_B_0x0 = 0;
        /** @brief IAF 127 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR3_IAF127_B_0x1 = 1;

    /** @brief IAC interrupt clear register 4 */
    using IAC_ICR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access flag clear for peripheral 128 */
    using IAC_ICR4_IAF128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 128 flag status not affected (value: 0)
     *          - B_0x1: IAF 128 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 128 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF128_B_0x0 = 0;
        /** @brief IAF 128 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF128_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 129 */
    using IAC_ICR4_IAF129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 129 flag status not affected (value: 0)
     *          - B_0x1: IAF 129 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 129 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF129_B_0x0 = 0;
        /** @brief IAF 129 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF129_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 130 */
    using IAC_ICR4_IAF130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 130 flag status not affected (value: 0)
     *          - B_0x1: IAF 130 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 130 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF130_B_0x0 = 0;
        /** @brief IAF 130 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF130_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 131 */
    using IAC_ICR4_IAF131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 131 flag status not affected (value: 0)
     *          - B_0x1: IAF 131 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 131 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF131_B_0x0 = 0;
        /** @brief IAF 131 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF131_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 132 */
    using IAC_ICR4_IAF132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 132 flag status not affected (value: 0)
     *          - B_0x1: IAF 132 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 132 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF132_B_0x0 = 0;
        /** @brief IAF 132 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF132_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 133 */
    using IAC_ICR4_IAF133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 133 flag status not affected (value: 0)
     *          - B_0x1: IAF 133 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 133 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF133_B_0x0 = 0;
        /** @brief IAF 133 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF133_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 134 */
    using IAC_ICR4_IAF134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 134 flag status not affected (value: 0)
     *          - B_0x1: IAF 134 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 134 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF134_B_0x0 = 0;
        /** @brief IAF 134 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF134_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 135 */
    using IAC_ICR4_IAF135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 135 flag status not affected (value: 0)
     *          - B_0x1: IAF 135 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 135 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF135_B_0x0 = 0;
        /** @brief IAF 135 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF135_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 136 */
    using IAC_ICR4_IAF136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 136 flag status not affected (value: 0)
     *          - B_0x1: IAF 136 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 136 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF136_B_0x0 = 0;
        /** @brief IAF 136 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF136_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 137 */
    using IAC_ICR4_IAF137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 137 flag status not affected (value: 0)
     *          - B_0x1: IAF 137 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 137 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF137_B_0x0 = 0;
        /** @brief IAF 137 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF137_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 138 */
    using IAC_ICR4_IAF138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 138 flag status not affected (value: 0)
     *          - B_0x1: IAF 138 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 138 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF138_B_0x0 = 0;
        /** @brief IAF 138 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF138_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 139 */
    using IAC_ICR4_IAF139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 139 flag status not affected (value: 0)
     *          - B_0x1: IAF 139 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 139 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF139_B_0x0 = 0;
        /** @brief IAF 139 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF139_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 140 */
    using IAC_ICR4_IAF140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 140 flag status not affected (value: 0)
     *          - B_0x1: IAF 140 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 140 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF140_B_0x0 = 0;
        /** @brief IAF 140 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF140_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 141 */
    using IAC_ICR4_IAF141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 141 flag status not affected (value: 0)
     *          - B_0x1: IAF 141 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 141 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF141_B_0x0 = 0;
        /** @brief IAF 141 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF141_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 142 */
    using IAC_ICR4_IAF142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 142 flag status not affected (value: 0)
     *          - B_0x1: IAF 142 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 142 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF142_B_0x0 = 0;
        /** @brief IAF 142 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF142_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 143 */
    using IAC_ICR4_IAF143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 143 flag status not affected (value: 0)
     *          - B_0x1: IAF 143 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 143 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF143_B_0x0 = 0;
        /** @brief IAF 143 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF143_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 144 */
    using IAC_ICR4_IAF144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 144 flag status not affected (value: 0)
     *          - B_0x1: IAF 144 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 144 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF144_B_0x0 = 0;
        /** @brief IAF 144 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF144_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 145 */
    using IAC_ICR4_IAF145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 145 flag status not affected (value: 0)
     *          - B_0x1: IAF 145 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 145 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF145_B_0x0 = 0;
        /** @brief IAF 145 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF145_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 146 */
    using IAC_ICR4_IAF146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 146 flag status not affected (value: 0)
     *          - B_0x1: IAF 146 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 146 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF146_B_0x0 = 0;
        /** @brief IAF 146 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF146_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 147 */
    using IAC_ICR4_IAF147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 147 flag status not affected (value: 0)
     *          - B_0x1: IAF 147 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 147 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF147_B_0x0 = 0;
        /** @brief IAF 147 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF147_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 148 */
    using IAC_ICR4_IAF148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 148 flag status not affected (value: 0)
     *          - B_0x1: IAF 148 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 148 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF148_B_0x0 = 0;
        /** @brief IAF 148 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF148_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 149 */
    using IAC_ICR4_IAF149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 149 flag status not affected (value: 0)
     *          - B_0x1: IAF 149 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 149 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF149_B_0x0 = 0;
        /** @brief IAF 149 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF149_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 150 */
    using IAC_ICR4_IAF150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 150 flag status not affected (value: 0)
     *          - B_0x1: IAF 150 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 150 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF150_B_0x0 = 0;
        /** @brief IAF 150 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF150_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 151 */
    using IAC_ICR4_IAF151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 151 flag status not affected (value: 0)
     *          - B_0x1: IAF 151 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 151 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF151_B_0x0 = 0;
        /** @brief IAF 151 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF151_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 152 */
    using IAC_ICR4_IAF152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 152 flag status not affected (value: 0)
     *          - B_0x1: IAF 152 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 152 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF152_B_0x0 = 0;
        /** @brief IAF 152 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF152_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 153 */
    using IAC_ICR4_IAF153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 153 flag status not affected (value: 0)
     *          - B_0x1: IAF 153 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 153 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF153_B_0x0 = 0;
        /** @brief IAF 153 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF153_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 154 */
    using IAC_ICR4_IAF154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 154 flag status not affected (value: 0)
     *          - B_0x1: IAF 154 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 154 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF154_B_0x0 = 0;
        /** @brief IAF 154 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF154_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 155 */
    using IAC_ICR4_IAF155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 155 flag status not affected (value: 0)
     *          - B_0x1: IAF 155 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 155 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF155_B_0x0 = 0;
        /** @brief IAF 155 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF155_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 156 */
    using IAC_ICR4_IAF156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 156 flag status not affected (value: 0)
     *          - B_0x1: IAF 156 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 156 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF156_B_0x0 = 0;
        /** @brief IAF 156 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF156_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 157 */
    using IAC_ICR4_IAF157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 157 flag status not affected (value: 0)
     *          - B_0x1: IAF 157 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 157 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF157_B_0x0 = 0;
        /** @brief IAF 157 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF157_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 158 */
    using IAC_ICR4_IAF158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 158 flag status not affected (value: 0)
     *          - B_0x1: IAF 158 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 158 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF158_B_0x0 = 0;
        /** @brief IAF 158 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF158_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 159 */
    using IAC_ICR4_IAF159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 159 flag status not affected (value: 0)
     *          - B_0x1: IAF 159 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 159 flag status not affected */
    constexpr std::uint32_t IAC_ICR4_IAF159_B_0x0 = 0;
        /** @brief IAF 159 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR4_IAF159_B_0x1 = 1;

    /** @brief IAC interrupt clear register 5 */
    using IAC_ICR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access flag clear for peripheral 160 */
    using IAC_ICR5_IAF160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 160 flag status not affected (value: 0)
     *          - B_0x1: IAF 160 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 160 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF160_B_0x0 = 0;
        /** @brief IAF 160 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF160_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 161 */
    using IAC_ICR5_IAF161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 161 flag status not affected (value: 0)
     *          - B_0x1: IAF 161 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 161 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF161_B_0x0 = 0;
        /** @brief IAF 161 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF161_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 162 */
    using IAC_ICR5_IAF162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 162 flag status not affected (value: 0)
     *          - B_0x1: IAF 162 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 162 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF162_B_0x0 = 0;
        /** @brief IAF 162 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF162_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 163 */
    using IAC_ICR5_IAF163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 163 flag status not affected (value: 0)
     *          - B_0x1: IAF 163 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 163 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF163_B_0x0 = 0;
        /** @brief IAF 163 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF163_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 164 */
    using IAC_ICR5_IAF164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 164 flag status not affected (value: 0)
     *          - B_0x1: IAF 164 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 164 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF164_B_0x0 = 0;
        /** @brief IAF 164 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF164_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 165 */
    using IAC_ICR5_IAF165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 165 flag status not affected (value: 0)
     *          - B_0x1: IAF 165 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 165 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF165_B_0x0 = 0;
        /** @brief IAF 165 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF165_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 166 */
    using IAC_ICR5_IAF166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 166 flag status not affected (value: 0)
     *          - B_0x1: IAF 166 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 166 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF166_B_0x0 = 0;
        /** @brief IAF 166 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF166_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 167 */
    using IAC_ICR5_IAF167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 167 flag status not affected (value: 0)
     *          - B_0x1: IAF 167 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 167 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF167_B_0x0 = 0;
        /** @brief IAF 167 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF167_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 168 */
    using IAC_ICR5_IAF168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 168 flag status not affected (value: 0)
     *          - B_0x1: IAF 168 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 168 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF168_B_0x0 = 0;
        /** @brief IAF 168 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF168_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 169 */
    using IAC_ICR5_IAF169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 169 flag status not affected (value: 0)
     *          - B_0x1: IAF 169 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 169 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF169_B_0x0 = 0;
        /** @brief IAF 169 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF169_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 170 */
    using IAC_ICR5_IAF170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 170 flag status not affected (value: 0)
     *          - B_0x1: IAF 170 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 170 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF170_B_0x0 = 0;
        /** @brief IAF 170 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF170_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 171 */
    using IAC_ICR5_IAF171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 171 flag status not affected (value: 0)
     *          - B_0x1: IAF 171 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 171 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF171_B_0x0 = 0;
        /** @brief IAF 171 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF171_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 172 */
    using IAC_ICR5_IAF172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 172 flag status not affected (value: 0)
     *          - B_0x1: IAF 172 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 172 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF172_B_0x0 = 0;
        /** @brief IAF 172 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF172_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 173 */
    using IAC_ICR5_IAF173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 173 flag status not affected (value: 0)
     *          - B_0x1: IAF 173 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 173 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF173_B_0x0 = 0;
        /** @brief IAF 173 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF173_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 174 */
    using IAC_ICR5_IAF174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 174 flag status not affected (value: 0)
     *          - B_0x1: IAF 174 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 174 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF174_B_0x0 = 0;
        /** @brief IAF 174 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF174_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 175 */
    using IAC_ICR5_IAF175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 175 flag status not affected (value: 0)
     *          - B_0x1: IAF 175 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 175 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF175_B_0x0 = 0;
        /** @brief IAF 175 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF175_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 176 */
    using IAC_ICR5_IAF176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 176 flag status not affected (value: 0)
     *          - B_0x1: IAF 176 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 176 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF176_B_0x0 = 0;
        /** @brief IAF 176 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF176_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 177 */
    using IAC_ICR5_IAF177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 177 flag status not affected (value: 0)
     *          - B_0x1: IAF 177 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 177 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF177_B_0x0 = 0;
        /** @brief IAF 177 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF177_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 178 */
    using IAC_ICR5_IAF178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 178 flag status not affected (value: 0)
     *          - B_0x1: IAF 178 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 178 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF178_B_0x0 = 0;
        /** @brief IAF 178 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF178_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 179 */
    using IAC_ICR5_IAF179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 179 flag status not affected (value: 0)
     *          - B_0x1: IAF 179 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 179 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF179_B_0x0 = 0;
        /** @brief IAF 179 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF179_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 180 */
    using IAC_ICR5_IAF180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 180 flag status not affected (value: 0)
     *          - B_0x1: IAF 180 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 180 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF180_B_0x0 = 0;
        /** @brief IAF 180 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF180_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 181 */
    using IAC_ICR5_IAF181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 181 flag status not affected (value: 0)
     *          - B_0x1: IAF 181 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 181 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF181_B_0x0 = 0;
        /** @brief IAF 181 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF181_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 182 */
    using IAC_ICR5_IAF182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 182 flag status not affected (value: 0)
     *          - B_0x1: IAF 182 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 182 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF182_B_0x0 = 0;
        /** @brief IAF 182 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF182_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 183 */
    using IAC_ICR5_IAF183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 183 flag status not affected (value: 0)
     *          - B_0x1: IAF 183 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 183 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF183_B_0x0 = 0;
        /** @brief IAF 183 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF183_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 184 */
    using IAC_ICR5_IAF184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 184 flag status not affected (value: 0)
     *          - B_0x1: IAF 184 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 184 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF184_B_0x0 = 0;
        /** @brief IAF 184 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF184_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 185 */
    using IAC_ICR5_IAF185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 185 flag status not affected (value: 0)
     *          - B_0x1: IAF 185 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 185 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF185_B_0x0 = 0;
        /** @brief IAF 185 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF185_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 186 */
    using IAC_ICR5_IAF186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 186 flag status not affected (value: 0)
     *          - B_0x1: IAF 186 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 186 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF186_B_0x0 = 0;
        /** @brief IAF 186 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF186_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 187 */
    using IAC_ICR5_IAF187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 187 flag status not affected (value: 0)
     *          - B_0x1: IAF 187 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 187 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF187_B_0x0 = 0;
        /** @brief IAF 187 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF187_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 188 */
    using IAC_ICR5_IAF188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 188 flag status not affected (value: 0)
     *          - B_0x1: IAF 188 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 188 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF188_B_0x0 = 0;
        /** @brief IAF 188 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF188_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 189 */
    using IAC_ICR5_IAF189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 189 flag status not affected (value: 0)
     *          - B_0x1: IAF 189 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 189 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF189_B_0x0 = 0;
        /** @brief IAF 189 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF189_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 190 */
    using IAC_ICR5_IAF190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 190 flag status not affected (value: 0)
     *          - B_0x1: IAF 190 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 190 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF190_B_0x0 = 0;
        /** @brief IAF 190 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF190_B_0x1 = 1;

    /** @brief illegal access flag clear for peripheral 191 */
    using IAC_ICR5_IAF191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAF 191 flag status not affected (value: 0)
     *          - B_0x1: IAF 191 flag status cleared in IAC_ISRx (value: 1)
     */
        /** @brief IAF 191 flag status not affected */
    constexpr std::uint32_t IAC_ICR5_IAF191_B_0x0 = 0;
        /** @brief IAF 191 flag status cleared in IAC_ISRx */
    constexpr std::uint32_t IAC_ICR5_IAF191_B_0x1 = 1;

    /** @brief IAC ILAC input status register 0 */
    using IAC_IISR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x36C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access input 0 */
    using IAC_IISR0_ILACIN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 0 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 0 to IAC present (value: 1)
     */
        /** @brief ILAC input 0 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN0_B_0x0 = 0;
        /** @brief ILAC input 0 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN0_B_0x1 = 1;

    /** @brief illegal access input 1 */
    using IAC_IISR0_ILACIN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 1 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 1 to IAC present (value: 1)
     */
        /** @brief ILAC input 1 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN1_B_0x0 = 0;
        /** @brief ILAC input 1 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN1_B_0x1 = 1;

    /** @brief illegal access input 2 */
    using IAC_IISR0_ILACIN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 2 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 2 to IAC present (value: 1)
     */
        /** @brief ILAC input 2 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN2_B_0x0 = 0;
        /** @brief ILAC input 2 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN2_B_0x1 = 1;

    /** @brief illegal access input 3 */
    using IAC_IISR0_ILACIN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 3 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 3 to IAC present (value: 1)
     */
        /** @brief ILAC input 3 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN3_B_0x0 = 0;
        /** @brief ILAC input 3 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN3_B_0x1 = 1;

    /** @brief illegal access input 4 */
    using IAC_IISR0_ILACIN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 4 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 4 to IAC present (value: 1)
     */
        /** @brief ILAC input 4 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN4_B_0x0 = 0;
        /** @brief ILAC input 4 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN4_B_0x1 = 1;

    /** @brief illegal access input 5 */
    using IAC_IISR0_ILACIN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 5 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 5 to IAC present (value: 1)
     */
        /** @brief ILAC input 5 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN5_B_0x0 = 0;
        /** @brief ILAC input 5 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN5_B_0x1 = 1;

    /** @brief illegal access input 6 */
    using IAC_IISR0_ILACIN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 6 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 6 to IAC present (value: 1)
     */
        /** @brief ILAC input 6 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN6_B_0x0 = 0;
        /** @brief ILAC input 6 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN6_B_0x1 = 1;

    /** @brief illegal access input 7 */
    using IAC_IISR0_ILACIN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 7 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 7 to IAC present (value: 1)
     */
        /** @brief ILAC input 7 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN7_B_0x0 = 0;
        /** @brief ILAC input 7 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN7_B_0x1 = 1;

    /** @brief illegal access input 8 */
    using IAC_IISR0_ILACIN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 8 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 8 to IAC present (value: 1)
     */
        /** @brief ILAC input 8 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN8_B_0x0 = 0;
        /** @brief ILAC input 8 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN8_B_0x1 = 1;

    /** @brief illegal access input 9 */
    using IAC_IISR0_ILACIN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 9 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 9 to IAC present (value: 1)
     */
        /** @brief ILAC input 9 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN9_B_0x0 = 0;
        /** @brief ILAC input 9 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN9_B_0x1 = 1;

    /** @brief illegal access input 10 */
    using IAC_IISR0_ILACIN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 10 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 10 to IAC present (value: 1)
     */
        /** @brief ILAC input 10 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN10_B_0x0 = 0;
        /** @brief ILAC input 10 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN10_B_0x1 = 1;

    /** @brief illegal access input 11 */
    using IAC_IISR0_ILACIN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 11 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 11 to IAC present (value: 1)
     */
        /** @brief ILAC input 11 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN11_B_0x0 = 0;
        /** @brief ILAC input 11 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN11_B_0x1 = 1;

    /** @brief illegal access input 12 */
    using IAC_IISR0_ILACIN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 12 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 12 to IAC present (value: 1)
     */
        /** @brief ILAC input 12 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN12_B_0x0 = 0;
        /** @brief ILAC input 12 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN12_B_0x1 = 1;

    /** @brief illegal access input 13 */
    using IAC_IISR0_ILACIN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 13 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 13 to IAC present (value: 1)
     */
        /** @brief ILAC input 13 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN13_B_0x0 = 0;
        /** @brief ILAC input 13 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN13_B_0x1 = 1;

    /** @brief illegal access input 14 */
    using IAC_IISR0_ILACIN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 14 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 14 to IAC present (value: 1)
     */
        /** @brief ILAC input 14 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN14_B_0x0 = 0;
        /** @brief ILAC input 14 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN14_B_0x1 = 1;

    /** @brief illegal access input 15 */
    using IAC_IISR0_ILACIN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 15 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 15 to IAC present (value: 1)
     */
        /** @brief ILAC input 15 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN15_B_0x0 = 0;
        /** @brief ILAC input 15 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN15_B_0x1 = 1;

    /** @brief illegal access input 16 */
    using IAC_IISR0_ILACIN16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 16 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 16 to IAC present (value: 1)
     */
        /** @brief ILAC input 16 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN16_B_0x0 = 0;
        /** @brief ILAC input 16 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN16_B_0x1 = 1;

    /** @brief illegal access input 17 */
    using IAC_IISR0_ILACIN17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 17 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 17 to IAC present (value: 1)
     */
        /** @brief ILAC input 17 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN17_B_0x0 = 0;
        /** @brief ILAC input 17 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN17_B_0x1 = 1;

    /** @brief illegal access input 18 */
    using IAC_IISR0_ILACIN18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 18 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 18 to IAC present (value: 1)
     */
        /** @brief ILAC input 18 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN18_B_0x0 = 0;
        /** @brief ILAC input 18 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN18_B_0x1 = 1;

    /** @brief illegal access input 19 */
    using IAC_IISR0_ILACIN19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 19 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 19 to IAC present (value: 1)
     */
        /** @brief ILAC input 19 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN19_B_0x0 = 0;
        /** @brief ILAC input 19 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN19_B_0x1 = 1;

    /** @brief illegal access input 20 */
    using IAC_IISR0_ILACIN20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 20 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 20 to IAC present (value: 1)
     */
        /** @brief ILAC input 20 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN20_B_0x0 = 0;
        /** @brief ILAC input 20 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN20_B_0x1 = 1;

    /** @brief illegal access input 21 */
    using IAC_IISR0_ILACIN21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 21 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 21 to IAC present (value: 1)
     */
        /** @brief ILAC input 21 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN21_B_0x0 = 0;
        /** @brief ILAC input 21 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN21_B_0x1 = 1;

    /** @brief illegal access input 22 */
    using IAC_IISR0_ILACIN22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 22 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 22 to IAC present (value: 1)
     */
        /** @brief ILAC input 22 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN22_B_0x0 = 0;
        /** @brief ILAC input 22 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN22_B_0x1 = 1;

    /** @brief illegal access input 23 */
    using IAC_IISR0_ILACIN23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 23 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 23 to IAC present (value: 1)
     */
        /** @brief ILAC input 23 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN23_B_0x0 = 0;
        /** @brief ILAC input 23 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN23_B_0x1 = 1;

    /** @brief illegal access input 24 */
    using IAC_IISR0_ILACIN24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 24 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 24 to IAC present (value: 1)
     */
        /** @brief ILAC input 24 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN24_B_0x0 = 0;
        /** @brief ILAC input 24 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN24_B_0x1 = 1;

    /** @brief illegal access input 25 */
    using IAC_IISR0_ILACIN25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 25 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 25 to IAC present (value: 1)
     */
        /** @brief ILAC input 25 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN25_B_0x0 = 0;
        /** @brief ILAC input 25 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN25_B_0x1 = 1;

    /** @brief illegal access input 26 */
    using IAC_IISR0_ILACIN26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 26 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 26 to IAC present (value: 1)
     */
        /** @brief ILAC input 26 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN26_B_0x0 = 0;
        /** @brief ILAC input 26 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN26_B_0x1 = 1;

    /** @brief illegal access input 27 */
    using IAC_IISR0_ILACIN27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 27 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 27 to IAC present (value: 1)
     */
        /** @brief ILAC input 27 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN27_B_0x0 = 0;
        /** @brief ILAC input 27 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN27_B_0x1 = 1;

    /** @brief illegal access input 28 */
    using IAC_IISR0_ILACIN28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 28 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 28 to IAC present (value: 1)
     */
        /** @brief ILAC input 28 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN28_B_0x0 = 0;
        /** @brief ILAC input 28 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN28_B_0x1 = 1;

    /** @brief illegal access input 29 */
    using IAC_IISR0_ILACIN29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 29 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 29 to IAC present (value: 1)
     */
        /** @brief ILAC input 29 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN29_B_0x0 = 0;
        /** @brief ILAC input 29 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN29_B_0x1 = 1;

    /** @brief illegal access input 30 */
    using IAC_IISR0_ILACIN30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 30 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 30 to IAC present (value: 1)
     */
        /** @brief ILAC input 30 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN30_B_0x0 = 0;
        /** @brief ILAC input 30 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN30_B_0x1 = 1;

    /** @brief illegal access input 31 */
    using IAC_IISR0_ILACIN31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 31 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 31 to IAC present (value: 1)
     */
        /** @brief ILAC input 31 to IAC not present */
    constexpr std::uint32_t IAC_IISR0_ILACIN31_B_0x0 = 0;
        /** @brief ILAC input 31 to IAC present */
    constexpr std::uint32_t IAC_IISR0_ILACIN31_B_0x1 = 1;

    /** @brief IAC ILAC input status register 1 */
    using IAC_IISR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x370, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access input 32 */
    using IAC_IISR1_ILACIN32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 32 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 32 to IAC present (value: 1)
     */
        /** @brief ILAC input 32 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN32_B_0x0 = 0;
        /** @brief ILAC input 32 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN32_B_0x1 = 1;

    /** @brief illegal access input 33 */
    using IAC_IISR1_ILACIN33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 33 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 33 to IAC present (value: 1)
     */
        /** @brief ILAC input 33 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN33_B_0x0 = 0;
        /** @brief ILAC input 33 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN33_B_0x1 = 1;

    /** @brief illegal access input 34 */
    using IAC_IISR1_ILACIN34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 34 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 34 to IAC present (value: 1)
     */
        /** @brief ILAC input 34 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN34_B_0x0 = 0;
        /** @brief ILAC input 34 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN34_B_0x1 = 1;

    /** @brief illegal access input 35 */
    using IAC_IISR1_ILACIN35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 35 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 35 to IAC present (value: 1)
     */
        /** @brief ILAC input 35 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN35_B_0x0 = 0;
        /** @brief ILAC input 35 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN35_B_0x1 = 1;

    /** @brief illegal access input 36 */
    using IAC_IISR1_ILACIN36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 36 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 36 to IAC present (value: 1)
     */
        /** @brief ILAC input 36 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN36_B_0x0 = 0;
        /** @brief ILAC input 36 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN36_B_0x1 = 1;

    /** @brief illegal access input 37 */
    using IAC_IISR1_ILACIN37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 37 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 37 to IAC present (value: 1)
     */
        /** @brief ILAC input 37 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN37_B_0x0 = 0;
        /** @brief ILAC input 37 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN37_B_0x1 = 1;

    /** @brief illegal access input 38 */
    using IAC_IISR1_ILACIN38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 38 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 38 to IAC present (value: 1)
     */
        /** @brief ILAC input 38 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN38_B_0x0 = 0;
        /** @brief ILAC input 38 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN38_B_0x1 = 1;

    /** @brief illegal access input 39 */
    using IAC_IISR1_ILACIN39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 39 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 39 to IAC present (value: 1)
     */
        /** @brief ILAC input 39 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN39_B_0x0 = 0;
        /** @brief ILAC input 39 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN39_B_0x1 = 1;

    /** @brief illegal access input 40 */
    using IAC_IISR1_ILACIN40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 40 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 40 to IAC present (value: 1)
     */
        /** @brief ILAC input 40 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN40_B_0x0 = 0;
        /** @brief ILAC input 40 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN40_B_0x1 = 1;

    /** @brief illegal access input 41 */
    using IAC_IISR1_ILACIN41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 41 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 41 to IAC present (value: 1)
     */
        /** @brief ILAC input 41 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN41_B_0x0 = 0;
        /** @brief ILAC input 41 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN41_B_0x1 = 1;

    /** @brief illegal access input 42 */
    using IAC_IISR1_ILACIN42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 42 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 42 to IAC present (value: 1)
     */
        /** @brief ILAC input 42 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN42_B_0x0 = 0;
        /** @brief ILAC input 42 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN42_B_0x1 = 1;

    /** @brief illegal access input 43 */
    using IAC_IISR1_ILACIN43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 43 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 43 to IAC present (value: 1)
     */
        /** @brief ILAC input 43 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN43_B_0x0 = 0;
        /** @brief ILAC input 43 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN43_B_0x1 = 1;

    /** @brief illegal access input 44 */
    using IAC_IISR1_ILACIN44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 44 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 44 to IAC present (value: 1)
     */
        /** @brief ILAC input 44 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN44_B_0x0 = 0;
        /** @brief ILAC input 44 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN44_B_0x1 = 1;

    /** @brief illegal access input 45 */
    using IAC_IISR1_ILACIN45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 45 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 45 to IAC present (value: 1)
     */
        /** @brief ILAC input 45 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN45_B_0x0 = 0;
        /** @brief ILAC input 45 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN45_B_0x1 = 1;

    /** @brief illegal access input 46 */
    using IAC_IISR1_ILACIN46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 46 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 46 to IAC present (value: 1)
     */
        /** @brief ILAC input 46 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN46_B_0x0 = 0;
        /** @brief ILAC input 46 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN46_B_0x1 = 1;

    /** @brief illegal access input 47 */
    using IAC_IISR1_ILACIN47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 47 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 47 to IAC present (value: 1)
     */
        /** @brief ILAC input 47 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN47_B_0x0 = 0;
        /** @brief ILAC input 47 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN47_B_0x1 = 1;

    /** @brief illegal access input 48 */
    using IAC_IISR1_ILACIN48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 48 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 48 to IAC present (value: 1)
     */
        /** @brief ILAC input 48 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN48_B_0x0 = 0;
        /** @brief ILAC input 48 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN48_B_0x1 = 1;

    /** @brief illegal access input 49 */
    using IAC_IISR1_ILACIN49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 49 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 49 to IAC present (value: 1)
     */
        /** @brief ILAC input 49 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN49_B_0x0 = 0;
        /** @brief ILAC input 49 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN49_B_0x1 = 1;

    /** @brief illegal access input 50 */
    using IAC_IISR1_ILACIN50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 50 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 50 to IAC present (value: 1)
     */
        /** @brief ILAC input 50 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN50_B_0x0 = 0;
        /** @brief ILAC input 50 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN50_B_0x1 = 1;

    /** @brief illegal access input 51 */
    using IAC_IISR1_ILACIN51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 51 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 51 to IAC present (value: 1)
     */
        /** @brief ILAC input 51 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN51_B_0x0 = 0;
        /** @brief ILAC input 51 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN51_B_0x1 = 1;

    /** @brief illegal access input 52 */
    using IAC_IISR1_ILACIN52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 52 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 52 to IAC present (value: 1)
     */
        /** @brief ILAC input 52 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN52_B_0x0 = 0;
        /** @brief ILAC input 52 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN52_B_0x1 = 1;

    /** @brief illegal access input 53 */
    using IAC_IISR1_ILACIN53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 53 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 53 to IAC present (value: 1)
     */
        /** @brief ILAC input 53 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN53_B_0x0 = 0;
        /** @brief ILAC input 53 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN53_B_0x1 = 1;

    /** @brief illegal access input 54 */
    using IAC_IISR1_ILACIN54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 54 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 54 to IAC present (value: 1)
     */
        /** @brief ILAC input 54 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN54_B_0x0 = 0;
        /** @brief ILAC input 54 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN54_B_0x1 = 1;

    /** @brief illegal access input 55 */
    using IAC_IISR1_ILACIN55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 55 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 55 to IAC present (value: 1)
     */
        /** @brief ILAC input 55 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN55_B_0x0 = 0;
        /** @brief ILAC input 55 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN55_B_0x1 = 1;

    /** @brief illegal access input 56 */
    using IAC_IISR1_ILACIN56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 56 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 56 to IAC present (value: 1)
     */
        /** @brief ILAC input 56 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN56_B_0x0 = 0;
        /** @brief ILAC input 56 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN56_B_0x1 = 1;

    /** @brief illegal access input 57 */
    using IAC_IISR1_ILACIN57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 57 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 57 to IAC present (value: 1)
     */
        /** @brief ILAC input 57 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN57_B_0x0 = 0;
        /** @brief ILAC input 57 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN57_B_0x1 = 1;

    /** @brief illegal access input 58 */
    using IAC_IISR1_ILACIN58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 58 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 58 to IAC present (value: 1)
     */
        /** @brief ILAC input 58 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN58_B_0x0 = 0;
        /** @brief ILAC input 58 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN58_B_0x1 = 1;

    /** @brief illegal access input 59 */
    using IAC_IISR1_ILACIN59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 59 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 59 to IAC present (value: 1)
     */
        /** @brief ILAC input 59 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN59_B_0x0 = 0;
        /** @brief ILAC input 59 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN59_B_0x1 = 1;

    /** @brief illegal access input 60 */
    using IAC_IISR1_ILACIN60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 60 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 60 to IAC present (value: 1)
     */
        /** @brief ILAC input 60 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN60_B_0x0 = 0;
        /** @brief ILAC input 60 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN60_B_0x1 = 1;

    /** @brief illegal access input 61 */
    using IAC_IISR1_ILACIN61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 61 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 61 to IAC present (value: 1)
     */
        /** @brief ILAC input 61 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN61_B_0x0 = 0;
        /** @brief ILAC input 61 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN61_B_0x1 = 1;

    /** @brief illegal access input 62 */
    using IAC_IISR1_ILACIN62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 62 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 62 to IAC present (value: 1)
     */
        /** @brief ILAC input 62 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN62_B_0x0 = 0;
        /** @brief ILAC input 62 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN62_B_0x1 = 1;

    /** @brief illegal access input 63 */
    using IAC_IISR1_ILACIN63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 63 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 63 to IAC present (value: 1)
     */
        /** @brief ILAC input 63 to IAC not present */
    constexpr std::uint32_t IAC_IISR1_ILACIN63_B_0x0 = 0;
        /** @brief ILAC input 63 to IAC present */
    constexpr std::uint32_t IAC_IISR1_ILACIN63_B_0x1 = 1;

    /** @brief IAC ILAC input status register 2 */
    using IAC_IISR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x374, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access input 64 */
    using IAC_IISR2_ILACIN64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 64 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 64 to IAC present (value: 1)
     */
        /** @brief ILAC input 64 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN64_B_0x0 = 0;
        /** @brief ILAC input 64 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN64_B_0x1 = 1;

    /** @brief illegal access input 65 */
    using IAC_IISR2_ILACIN65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 65 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 65 to IAC present (value: 1)
     */
        /** @brief ILAC input 65 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN65_B_0x0 = 0;
        /** @brief ILAC input 65 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN65_B_0x1 = 1;

    /** @brief illegal access input 66 */
    using IAC_IISR2_ILACIN66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 66 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 66 to IAC present (value: 1)
     */
        /** @brief ILAC input 66 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN66_B_0x0 = 0;
        /** @brief ILAC input 66 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN66_B_0x1 = 1;

    /** @brief illegal access input 67 */
    using IAC_IISR2_ILACIN67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 67 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 67 to IAC present (value: 1)
     */
        /** @brief ILAC input 67 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN67_B_0x0 = 0;
        /** @brief ILAC input 67 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN67_B_0x1 = 1;

    /** @brief illegal access input 68 */
    using IAC_IISR2_ILACIN68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 68 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 68 to IAC present (value: 1)
     */
        /** @brief ILAC input 68 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN68_B_0x0 = 0;
        /** @brief ILAC input 68 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN68_B_0x1 = 1;

    /** @brief illegal access input 69 */
    using IAC_IISR2_ILACIN69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 69 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 69 to IAC present (value: 1)
     */
        /** @brief ILAC input 69 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN69_B_0x0 = 0;
        /** @brief ILAC input 69 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN69_B_0x1 = 1;

    /** @brief illegal access input 70 */
    using IAC_IISR2_ILACIN70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 70 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 70 to IAC present (value: 1)
     */
        /** @brief ILAC input 70 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN70_B_0x0 = 0;
        /** @brief ILAC input 70 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN70_B_0x1 = 1;

    /** @brief illegal access input 71 */
    using IAC_IISR2_ILACIN71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 71 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 71 to IAC present (value: 1)
     */
        /** @brief ILAC input 71 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN71_B_0x0 = 0;
        /** @brief ILAC input 71 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN71_B_0x1 = 1;

    /** @brief illegal access input 72 */
    using IAC_IISR2_ILACIN72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 72 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 72 to IAC present (value: 1)
     */
        /** @brief ILAC input 72 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN72_B_0x0 = 0;
        /** @brief ILAC input 72 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN72_B_0x1 = 1;

    /** @brief illegal access input 73 */
    using IAC_IISR2_ILACIN73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 73 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 73 to IAC present (value: 1)
     */
        /** @brief ILAC input 73 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN73_B_0x0 = 0;
        /** @brief ILAC input 73 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN73_B_0x1 = 1;

    /** @brief illegal access input 74 */
    using IAC_IISR2_ILACIN74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 74 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 74 to IAC present (value: 1)
     */
        /** @brief ILAC input 74 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN74_B_0x0 = 0;
        /** @brief ILAC input 74 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN74_B_0x1 = 1;

    /** @brief illegal access input 75 */
    using IAC_IISR2_ILACIN75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 75 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 75 to IAC present (value: 1)
     */
        /** @brief ILAC input 75 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN75_B_0x0 = 0;
        /** @brief ILAC input 75 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN75_B_0x1 = 1;

    /** @brief illegal access input 76 */
    using IAC_IISR2_ILACIN76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 76 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 76 to IAC present (value: 1)
     */
        /** @brief ILAC input 76 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN76_B_0x0 = 0;
        /** @brief ILAC input 76 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN76_B_0x1 = 1;

    /** @brief illegal access input 77 */
    using IAC_IISR2_ILACIN77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 77 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 77 to IAC present (value: 1)
     */
        /** @brief ILAC input 77 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN77_B_0x0 = 0;
        /** @brief ILAC input 77 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN77_B_0x1 = 1;

    /** @brief illegal access input 78 */
    using IAC_IISR2_ILACIN78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 78 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 78 to IAC present (value: 1)
     */
        /** @brief ILAC input 78 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN78_B_0x0 = 0;
        /** @brief ILAC input 78 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN78_B_0x1 = 1;

    /** @brief illegal access input 79 */
    using IAC_IISR2_ILACIN79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 79 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 79 to IAC present (value: 1)
     */
        /** @brief ILAC input 79 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN79_B_0x0 = 0;
        /** @brief ILAC input 79 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN79_B_0x1 = 1;

    /** @brief illegal access input 80 */
    using IAC_IISR2_ILACIN80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 80 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 80 to IAC present (value: 1)
     */
        /** @brief ILAC input 80 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN80_B_0x0 = 0;
        /** @brief ILAC input 80 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN80_B_0x1 = 1;

    /** @brief illegal access input 81 */
    using IAC_IISR2_ILACIN81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 81 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 81 to IAC present (value: 1)
     */
        /** @brief ILAC input 81 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN81_B_0x0 = 0;
        /** @brief ILAC input 81 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN81_B_0x1 = 1;

    /** @brief illegal access input 82 */
    using IAC_IISR2_ILACIN82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 82 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 82 to IAC present (value: 1)
     */
        /** @brief ILAC input 82 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN82_B_0x0 = 0;
        /** @brief ILAC input 82 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN82_B_0x1 = 1;

    /** @brief illegal access input 83 */
    using IAC_IISR2_ILACIN83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 83 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 83 to IAC present (value: 1)
     */
        /** @brief ILAC input 83 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN83_B_0x0 = 0;
        /** @brief ILAC input 83 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN83_B_0x1 = 1;

    /** @brief illegal access input 84 */
    using IAC_IISR2_ILACIN84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 84 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 84 to IAC present (value: 1)
     */
        /** @brief ILAC input 84 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN84_B_0x0 = 0;
        /** @brief ILAC input 84 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN84_B_0x1 = 1;

    /** @brief illegal access input 85 */
    using IAC_IISR2_ILACIN85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 85 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 85 to IAC present (value: 1)
     */
        /** @brief ILAC input 85 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN85_B_0x0 = 0;
        /** @brief ILAC input 85 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN85_B_0x1 = 1;

    /** @brief illegal access input 86 */
    using IAC_IISR2_ILACIN86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 86 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 86 to IAC present (value: 1)
     */
        /** @brief ILAC input 86 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN86_B_0x0 = 0;
        /** @brief ILAC input 86 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN86_B_0x1 = 1;

    /** @brief illegal access input 87 */
    using IAC_IISR2_ILACIN87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 87 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 87 to IAC present (value: 1)
     */
        /** @brief ILAC input 87 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN87_B_0x0 = 0;
        /** @brief ILAC input 87 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN87_B_0x1 = 1;

    /** @brief illegal access input 88 */
    using IAC_IISR2_ILACIN88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 88 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 88 to IAC present (value: 1)
     */
        /** @brief ILAC input 88 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN88_B_0x0 = 0;
        /** @brief ILAC input 88 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN88_B_0x1 = 1;

    /** @brief illegal access input 89 */
    using IAC_IISR2_ILACIN89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 89 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 89 to IAC present (value: 1)
     */
        /** @brief ILAC input 89 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN89_B_0x0 = 0;
        /** @brief ILAC input 89 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN89_B_0x1 = 1;

    /** @brief illegal access input 90 */
    using IAC_IISR2_ILACIN90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 90 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 90 to IAC present (value: 1)
     */
        /** @brief ILAC input 90 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN90_B_0x0 = 0;
        /** @brief ILAC input 90 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN90_B_0x1 = 1;

    /** @brief illegal access input 91 */
    using IAC_IISR2_ILACIN91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 91 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 91 to IAC present (value: 1)
     */
        /** @brief ILAC input 91 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN91_B_0x0 = 0;
        /** @brief ILAC input 91 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN91_B_0x1 = 1;

    /** @brief illegal access input 92 */
    using IAC_IISR2_ILACIN92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 92 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 92 to IAC present (value: 1)
     */
        /** @brief ILAC input 92 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN92_B_0x0 = 0;
        /** @brief ILAC input 92 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN92_B_0x1 = 1;

    /** @brief illegal access input 93 */
    using IAC_IISR2_ILACIN93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 93 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 93 to IAC present (value: 1)
     */
        /** @brief ILAC input 93 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN93_B_0x0 = 0;
        /** @brief ILAC input 93 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN93_B_0x1 = 1;

    /** @brief illegal access input 94 */
    using IAC_IISR2_ILACIN94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 94 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 94 to IAC present (value: 1)
     */
        /** @brief ILAC input 94 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN94_B_0x0 = 0;
        /** @brief ILAC input 94 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN94_B_0x1 = 1;

    /** @brief illegal access input 95 */
    using IAC_IISR2_ILACIN95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 95 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 95 to IAC present (value: 1)
     */
        /** @brief ILAC input 95 to IAC not present */
    constexpr std::uint32_t IAC_IISR2_ILACIN95_B_0x0 = 0;
        /** @brief ILAC input 95 to IAC present */
    constexpr std::uint32_t IAC_IISR2_ILACIN95_B_0x1 = 1;

    /** @brief IAC ILAC input status register 3 */
    using IAC_IISR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x378, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access input 96 */
    using IAC_IISR3_ILACIN96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 96 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 96 to IAC present (value: 1)
     */
        /** @brief ILAC input 96 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN96_B_0x0 = 0;
        /** @brief ILAC input 96 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN96_B_0x1 = 1;

    /** @brief illegal access input 97 */
    using IAC_IISR3_ILACIN97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 97 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 97 to IAC present (value: 1)
     */
        /** @brief ILAC input 97 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN97_B_0x0 = 0;
        /** @brief ILAC input 97 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN97_B_0x1 = 1;

    /** @brief illegal access input 98 */
    using IAC_IISR3_ILACIN98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 98 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 98 to IAC present (value: 1)
     */
        /** @brief ILAC input 98 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN98_B_0x0 = 0;
        /** @brief ILAC input 98 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN98_B_0x1 = 1;

    /** @brief illegal access input 99 */
    using IAC_IISR3_ILACIN99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 99 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 99 to IAC present (value: 1)
     */
        /** @brief ILAC input 99 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN99_B_0x0 = 0;
        /** @brief ILAC input 99 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN99_B_0x1 = 1;

    /** @brief illegal access input 100 */
    using IAC_IISR3_ILACIN100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 100 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 100 to IAC present (value: 1)
     */
        /** @brief ILAC input 100 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN100_B_0x0 = 0;
        /** @brief ILAC input 100 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN100_B_0x1 = 1;

    /** @brief illegal access input 101 */
    using IAC_IISR3_ILACIN101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 101 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 101 to IAC present (value: 1)
     */
        /** @brief ILAC input 101 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN101_B_0x0 = 0;
        /** @brief ILAC input 101 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN101_B_0x1 = 1;

    /** @brief illegal access input 102 */
    using IAC_IISR3_ILACIN102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 102 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 102 to IAC present (value: 1)
     */
        /** @brief ILAC input 102 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN102_B_0x0 = 0;
        /** @brief ILAC input 102 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN102_B_0x1 = 1;

    /** @brief illegal access input 103 */
    using IAC_IISR3_ILACIN103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 103 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 103 to IAC present (value: 1)
     */
        /** @brief ILAC input 103 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN103_B_0x0 = 0;
        /** @brief ILAC input 103 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN103_B_0x1 = 1;

    /** @brief illegal access input 104 */
    using IAC_IISR3_ILACIN104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 104 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 104 to IAC present (value: 1)
     */
        /** @brief ILAC input 104 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN104_B_0x0 = 0;
        /** @brief ILAC input 104 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN104_B_0x1 = 1;

    /** @brief illegal access input 105 */
    using IAC_IISR3_ILACIN105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 105 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 105 to IAC present (value: 1)
     */
        /** @brief ILAC input 105 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN105_B_0x0 = 0;
        /** @brief ILAC input 105 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN105_B_0x1 = 1;

    /** @brief illegal access input 106 */
    using IAC_IISR3_ILACIN106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 106 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 106 to IAC present (value: 1)
     */
        /** @brief ILAC input 106 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN106_B_0x0 = 0;
        /** @brief ILAC input 106 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN106_B_0x1 = 1;

    /** @brief illegal access input 107 */
    using IAC_IISR3_ILACIN107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 107 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 107 to IAC present (value: 1)
     */
        /** @brief ILAC input 107 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN107_B_0x0 = 0;
        /** @brief ILAC input 107 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN107_B_0x1 = 1;

    /** @brief illegal access input 108 */
    using IAC_IISR3_ILACIN108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 108 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 108 to IAC present (value: 1)
     */
        /** @brief ILAC input 108 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN108_B_0x0 = 0;
        /** @brief ILAC input 108 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN108_B_0x1 = 1;

    /** @brief illegal access input 109 */
    using IAC_IISR3_ILACIN109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 109 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 109 to IAC present (value: 1)
     */
        /** @brief ILAC input 109 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN109_B_0x0 = 0;
        /** @brief ILAC input 109 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN109_B_0x1 = 1;

    /** @brief illegal access input 110 */
    using IAC_IISR3_ILACIN110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 110 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 110 to IAC present (value: 1)
     */
        /** @brief ILAC input 110 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN110_B_0x0 = 0;
        /** @brief ILAC input 110 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN110_B_0x1 = 1;

    /** @brief illegal access input 111 */
    using IAC_IISR3_ILACIN111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 111 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 111 to IAC present (value: 1)
     */
        /** @brief ILAC input 111 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN111_B_0x0 = 0;
        /** @brief ILAC input 111 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN111_B_0x1 = 1;

    /** @brief illegal access input 112 */
    using IAC_IISR3_ILACIN112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 112 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 112 to IAC present (value: 1)
     */
        /** @brief ILAC input 112 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN112_B_0x0 = 0;
        /** @brief ILAC input 112 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN112_B_0x1 = 1;

    /** @brief illegal access input 113 */
    using IAC_IISR3_ILACIN113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 113 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 113 to IAC present (value: 1)
     */
        /** @brief ILAC input 113 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN113_B_0x0 = 0;
        /** @brief ILAC input 113 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN113_B_0x1 = 1;

    /** @brief illegal access input 114 */
    using IAC_IISR3_ILACIN114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 114 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 114 to IAC present (value: 1)
     */
        /** @brief ILAC input 114 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN114_B_0x0 = 0;
        /** @brief ILAC input 114 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN114_B_0x1 = 1;

    /** @brief illegal access input 115 */
    using IAC_IISR3_ILACIN115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 115 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 115 to IAC present (value: 1)
     */
        /** @brief ILAC input 115 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN115_B_0x0 = 0;
        /** @brief ILAC input 115 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN115_B_0x1 = 1;

    /** @brief illegal access input 116 */
    using IAC_IISR3_ILACIN116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 116 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 116 to IAC present (value: 1)
     */
        /** @brief ILAC input 116 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN116_B_0x0 = 0;
        /** @brief ILAC input 116 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN116_B_0x1 = 1;

    /** @brief illegal access input 117 */
    using IAC_IISR3_ILACIN117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 117 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 117 to IAC present (value: 1)
     */
        /** @brief ILAC input 117 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN117_B_0x0 = 0;
        /** @brief ILAC input 117 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN117_B_0x1 = 1;

    /** @brief illegal access input 118 */
    using IAC_IISR3_ILACIN118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 118 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 118 to IAC present (value: 1)
     */
        /** @brief ILAC input 118 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN118_B_0x0 = 0;
        /** @brief ILAC input 118 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN118_B_0x1 = 1;

    /** @brief illegal access input 119 */
    using IAC_IISR3_ILACIN119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 119 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 119 to IAC present (value: 1)
     */
        /** @brief ILAC input 119 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN119_B_0x0 = 0;
        /** @brief ILAC input 119 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN119_B_0x1 = 1;

    /** @brief illegal access input 120 */
    using IAC_IISR3_ILACIN120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 120 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 120 to IAC present (value: 1)
     */
        /** @brief ILAC input 120 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN120_B_0x0 = 0;
        /** @brief ILAC input 120 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN120_B_0x1 = 1;

    /** @brief illegal access input 121 */
    using IAC_IISR3_ILACIN121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 121 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 121 to IAC present (value: 1)
     */
        /** @brief ILAC input 121 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN121_B_0x0 = 0;
        /** @brief ILAC input 121 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN121_B_0x1 = 1;

    /** @brief illegal access input 122 */
    using IAC_IISR3_ILACIN122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 122 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 122 to IAC present (value: 1)
     */
        /** @brief ILAC input 122 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN122_B_0x0 = 0;
        /** @brief ILAC input 122 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN122_B_0x1 = 1;

    /** @brief illegal access input 123 */
    using IAC_IISR3_ILACIN123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 123 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 123 to IAC present (value: 1)
     */
        /** @brief ILAC input 123 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN123_B_0x0 = 0;
        /** @brief ILAC input 123 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN123_B_0x1 = 1;

    /** @brief illegal access input 124 */
    using IAC_IISR3_ILACIN124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 124 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 124 to IAC present (value: 1)
     */
        /** @brief ILAC input 124 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN124_B_0x0 = 0;
        /** @brief ILAC input 124 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN124_B_0x1 = 1;

    /** @brief illegal access input 125 */
    using IAC_IISR3_ILACIN125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 125 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 125 to IAC present (value: 1)
     */
        /** @brief ILAC input 125 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN125_B_0x0 = 0;
        /** @brief ILAC input 125 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN125_B_0x1 = 1;

    /** @brief illegal access input 126 */
    using IAC_IISR3_ILACIN126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 126 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 126 to IAC present (value: 1)
     */
        /** @brief ILAC input 126 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN126_B_0x0 = 0;
        /** @brief ILAC input 126 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN126_B_0x1 = 1;

    /** @brief illegal access input 127 */
    using IAC_IISR3_ILACIN127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 127 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 127 to IAC present (value: 1)
     */
        /** @brief ILAC input 127 to IAC not present */
    constexpr std::uint32_t IAC_IISR3_ILACIN127_B_0x0 = 0;
        /** @brief ILAC input 127 to IAC present */
    constexpr std::uint32_t IAC_IISR3_ILACIN127_B_0x1 = 1;

    /** @brief IAC ILAC input status register 4 */
    using IAC_IISR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x37C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access input 128 */
    using IAC_IISR4_ILACIN128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 128 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 128 to IAC present (value: 1)
     */
        /** @brief ILAC input 128 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN128_B_0x0 = 0;
        /** @brief ILAC input 128 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN128_B_0x1 = 1;

    /** @brief illegal access input 129 */
    using IAC_IISR4_ILACIN129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 129 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 129 to IAC present (value: 1)
     */
        /** @brief ILAC input 129 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN129_B_0x0 = 0;
        /** @brief ILAC input 129 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN129_B_0x1 = 1;

    /** @brief illegal access input 130 */
    using IAC_IISR4_ILACIN130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 130 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 130 to IAC present (value: 1)
     */
        /** @brief ILAC input 130 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN130_B_0x0 = 0;
        /** @brief ILAC input 130 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN130_B_0x1 = 1;

    /** @brief illegal access input 131 */
    using IAC_IISR4_ILACIN131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 131 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 131 to IAC present (value: 1)
     */
        /** @brief ILAC input 131 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN131_B_0x0 = 0;
        /** @brief ILAC input 131 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN131_B_0x1 = 1;

    /** @brief illegal access input 132 */
    using IAC_IISR4_ILACIN132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 132 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 132 to IAC present (value: 1)
     */
        /** @brief ILAC input 132 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN132_B_0x0 = 0;
        /** @brief ILAC input 132 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN132_B_0x1 = 1;

    /** @brief illegal access input 133 */
    using IAC_IISR4_ILACIN133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 133 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 133 to IAC present (value: 1)
     */
        /** @brief ILAC input 133 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN133_B_0x0 = 0;
        /** @brief ILAC input 133 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN133_B_0x1 = 1;

    /** @brief illegal access input 134 */
    using IAC_IISR4_ILACIN134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 134 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 134 to IAC present (value: 1)
     */
        /** @brief ILAC input 134 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN134_B_0x0 = 0;
        /** @brief ILAC input 134 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN134_B_0x1 = 1;

    /** @brief illegal access input 135 */
    using IAC_IISR4_ILACIN135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 135 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 135 to IAC present (value: 1)
     */
        /** @brief ILAC input 135 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN135_B_0x0 = 0;
        /** @brief ILAC input 135 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN135_B_0x1 = 1;

    /** @brief illegal access input 136 */
    using IAC_IISR4_ILACIN136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 136 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 136 to IAC present (value: 1)
     */
        /** @brief ILAC input 136 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN136_B_0x0 = 0;
        /** @brief ILAC input 136 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN136_B_0x1 = 1;

    /** @brief illegal access input 137 */
    using IAC_IISR4_ILACIN137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 137 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 137 to IAC present (value: 1)
     */
        /** @brief ILAC input 137 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN137_B_0x0 = 0;
        /** @brief ILAC input 137 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN137_B_0x1 = 1;

    /** @brief illegal access input 138 */
    using IAC_IISR4_ILACIN138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 138 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 138 to IAC present (value: 1)
     */
        /** @brief ILAC input 138 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN138_B_0x0 = 0;
        /** @brief ILAC input 138 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN138_B_0x1 = 1;

    /** @brief illegal access input 139 */
    using IAC_IISR4_ILACIN139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 139 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 139 to IAC present (value: 1)
     */
        /** @brief ILAC input 139 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN139_B_0x0 = 0;
        /** @brief ILAC input 139 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN139_B_0x1 = 1;

    /** @brief illegal access input 140 */
    using IAC_IISR4_ILACIN140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 140 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 140 to IAC present (value: 1)
     */
        /** @brief ILAC input 140 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN140_B_0x0 = 0;
        /** @brief ILAC input 140 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN140_B_0x1 = 1;

    /** @brief illegal access input 141 */
    using IAC_IISR4_ILACIN141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 141 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 141 to IAC present (value: 1)
     */
        /** @brief ILAC input 141 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN141_B_0x0 = 0;
        /** @brief ILAC input 141 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN141_B_0x1 = 1;

    /** @brief illegal access input 142 */
    using IAC_IISR4_ILACIN142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 142 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 142 to IAC present (value: 1)
     */
        /** @brief ILAC input 142 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN142_B_0x0 = 0;
        /** @brief ILAC input 142 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN142_B_0x1 = 1;

    /** @brief illegal access input 143 */
    using IAC_IISR4_ILACIN143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 143 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 143 to IAC present (value: 1)
     */
        /** @brief ILAC input 143 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN143_B_0x0 = 0;
        /** @brief ILAC input 143 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN143_B_0x1 = 1;

    /** @brief illegal access input 144 */
    using IAC_IISR4_ILACIN144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 144 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 144 to IAC present (value: 1)
     */
        /** @brief ILAC input 144 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN144_B_0x0 = 0;
        /** @brief ILAC input 144 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN144_B_0x1 = 1;

    /** @brief illegal access input 145 */
    using IAC_IISR4_ILACIN145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 145 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 145 to IAC present (value: 1)
     */
        /** @brief ILAC input 145 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN145_B_0x0 = 0;
        /** @brief ILAC input 145 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN145_B_0x1 = 1;

    /** @brief illegal access input 146 */
    using IAC_IISR4_ILACIN146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 146 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 146 to IAC present (value: 1)
     */
        /** @brief ILAC input 146 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN146_B_0x0 = 0;
        /** @brief ILAC input 146 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN146_B_0x1 = 1;

    /** @brief illegal access input 147 */
    using IAC_IISR4_ILACIN147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 147 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 147 to IAC present (value: 1)
     */
        /** @brief ILAC input 147 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN147_B_0x0 = 0;
        /** @brief ILAC input 147 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN147_B_0x1 = 1;

    /** @brief illegal access input 148 */
    using IAC_IISR4_ILACIN148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 148 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 148 to IAC present (value: 1)
     */
        /** @brief ILAC input 148 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN148_B_0x0 = 0;
        /** @brief ILAC input 148 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN148_B_0x1 = 1;

    /** @brief illegal access input 149 */
    using IAC_IISR4_ILACIN149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 149 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 149 to IAC present (value: 1)
     */
        /** @brief ILAC input 149 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN149_B_0x0 = 0;
        /** @brief ILAC input 149 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN149_B_0x1 = 1;

    /** @brief illegal access input 150 */
    using IAC_IISR4_ILACIN150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 150 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 150 to IAC present (value: 1)
     */
        /** @brief ILAC input 150 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN150_B_0x0 = 0;
        /** @brief ILAC input 150 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN150_B_0x1 = 1;

    /** @brief illegal access input 151 */
    using IAC_IISR4_ILACIN151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 151 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 151 to IAC present (value: 1)
     */
        /** @brief ILAC input 151 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN151_B_0x0 = 0;
        /** @brief ILAC input 151 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN151_B_0x1 = 1;

    /** @brief illegal access input 152 */
    using IAC_IISR4_ILACIN152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 152 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 152 to IAC present (value: 1)
     */
        /** @brief ILAC input 152 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN152_B_0x0 = 0;
        /** @brief ILAC input 152 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN152_B_0x1 = 1;

    /** @brief illegal access input 153 */
    using IAC_IISR4_ILACIN153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 153 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 153 to IAC present (value: 1)
     */
        /** @brief ILAC input 153 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN153_B_0x0 = 0;
        /** @brief ILAC input 153 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN153_B_0x1 = 1;

    /** @brief illegal access input 154 */
    using IAC_IISR4_ILACIN154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 154 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 154 to IAC present (value: 1)
     */
        /** @brief ILAC input 154 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN154_B_0x0 = 0;
        /** @brief ILAC input 154 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN154_B_0x1 = 1;

    /** @brief illegal access input 155 */
    using IAC_IISR4_ILACIN155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 155 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 155 to IAC present (value: 1)
     */
        /** @brief ILAC input 155 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN155_B_0x0 = 0;
        /** @brief ILAC input 155 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN155_B_0x1 = 1;

    /** @brief illegal access input 156 */
    using IAC_IISR4_ILACIN156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 156 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 156 to IAC present (value: 1)
     */
        /** @brief ILAC input 156 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN156_B_0x0 = 0;
        /** @brief ILAC input 156 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN156_B_0x1 = 1;

    /** @brief illegal access input 157 */
    using IAC_IISR4_ILACIN157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 157 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 157 to IAC present (value: 1)
     */
        /** @brief ILAC input 157 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN157_B_0x0 = 0;
        /** @brief ILAC input 157 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN157_B_0x1 = 1;

    /** @brief illegal access input 158 */
    using IAC_IISR4_ILACIN158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 158 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 158 to IAC present (value: 1)
     */
        /** @brief ILAC input 158 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN158_B_0x0 = 0;
        /** @brief ILAC input 158 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN158_B_0x1 = 1;

    /** @brief illegal access input 159 */
    using IAC_IISR4_ILACIN159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 159 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 159 to IAC present (value: 1)
     */
        /** @brief ILAC input 159 to IAC not present */
    constexpr std::uint32_t IAC_IISR4_ILACIN159_B_0x0 = 0;
        /** @brief ILAC input 159 to IAC present */
    constexpr std::uint32_t IAC_IISR4_ILACIN159_B_0x1 = 1;

    /** @brief IAC ILAC input status register 5 */
    using IAC_IISR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x384, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access input 128 */
    using IAC_IISR5_ILACIN128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 128 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 128 to IAC present (value: 1)
     */
        /** @brief ILAC input 128 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN128_B_0x0 = 0;
        /** @brief ILAC input 128 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN128_B_0x1 = 1;

    /** @brief illegal access input 129 */
    using IAC_IISR5_ILACIN129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 129 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 129 to IAC present (value: 1)
     */
        /** @brief ILAC input 129 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN129_B_0x0 = 0;
        /** @brief ILAC input 129 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN129_B_0x1 = 1;

    /** @brief illegal access input 130 */
    using IAC_IISR5_ILACIN130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 130 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 130 to IAC present (value: 1)
     */
        /** @brief ILAC input 130 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN130_B_0x0 = 0;
        /** @brief ILAC input 130 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN130_B_0x1 = 1;

    /** @brief illegal access input 131 */
    using IAC_IISR5_ILACIN131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 131 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 131 to IAC present (value: 1)
     */
        /** @brief ILAC input 131 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN131_B_0x0 = 0;
        /** @brief ILAC input 131 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN131_B_0x1 = 1;

    /** @brief illegal access input 132 */
    using IAC_IISR5_ILACIN132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 132 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 132 to IAC present (value: 1)
     */
        /** @brief ILAC input 132 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN132_B_0x0 = 0;
        /** @brief ILAC input 132 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN132_B_0x1 = 1;

    /** @brief illegal access input 133 */
    using IAC_IISR5_ILACIN133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 133 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 133 to IAC present (value: 1)
     */
        /** @brief ILAC input 133 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN133_B_0x0 = 0;
        /** @brief ILAC input 133 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN133_B_0x1 = 1;

    /** @brief illegal access input 134 */
    using IAC_IISR5_ILACIN134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 134 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 134 to IAC present (value: 1)
     */
        /** @brief ILAC input 134 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN134_B_0x0 = 0;
        /** @brief ILAC input 134 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN134_B_0x1 = 1;

    /** @brief illegal access input 135 */
    using IAC_IISR5_ILACIN135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 135 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 135 to IAC present (value: 1)
     */
        /** @brief ILAC input 135 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN135_B_0x0 = 0;
        /** @brief ILAC input 135 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN135_B_0x1 = 1;

    /** @brief illegal access input 136 */
    using IAC_IISR5_ILACIN136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 136 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 136 to IAC present (value: 1)
     */
        /** @brief ILAC input 136 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN136_B_0x0 = 0;
        /** @brief ILAC input 136 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN136_B_0x1 = 1;

    /** @brief illegal access input 137 */
    using IAC_IISR5_ILACIN137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 137 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 137 to IAC present (value: 1)
     */
        /** @brief ILAC input 137 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN137_B_0x0 = 0;
        /** @brief ILAC input 137 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN137_B_0x1 = 1;

    /** @brief illegal access input 138 */
    using IAC_IISR5_ILACIN138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 138 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 138 to IAC present (value: 1)
     */
        /** @brief ILAC input 138 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN138_B_0x0 = 0;
        /** @brief ILAC input 138 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN138_B_0x1 = 1;

    /** @brief illegal access input 139 */
    using IAC_IISR5_ILACIN139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 139 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 139 to IAC present (value: 1)
     */
        /** @brief ILAC input 139 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN139_B_0x0 = 0;
        /** @brief ILAC input 139 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN139_B_0x1 = 1;

    /** @brief illegal access input 140 */
    using IAC_IISR5_ILACIN140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 140 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 140 to IAC present (value: 1)
     */
        /** @brief ILAC input 140 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN140_B_0x0 = 0;
        /** @brief ILAC input 140 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN140_B_0x1 = 1;

    /** @brief illegal access input 141 */
    using IAC_IISR5_ILACIN141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 141 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 141 to IAC present (value: 1)
     */
        /** @brief ILAC input 141 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN141_B_0x0 = 0;
        /** @brief ILAC input 141 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN141_B_0x1 = 1;

    /** @brief illegal access input 142 */
    using IAC_IISR5_ILACIN142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 142 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 142 to IAC present (value: 1)
     */
        /** @brief ILAC input 142 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN142_B_0x0 = 0;
        /** @brief ILAC input 142 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN142_B_0x1 = 1;

    /** @brief illegal access input 143 */
    using IAC_IISR5_ILACIN143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 143 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 143 to IAC present (value: 1)
     */
        /** @brief ILAC input 143 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN143_B_0x0 = 0;
        /** @brief ILAC input 143 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN143_B_0x1 = 1;

    /** @brief illegal access input 144 */
    using IAC_IISR5_ILACIN144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 144 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 144 to IAC present (value: 1)
     */
        /** @brief ILAC input 144 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN144_B_0x0 = 0;
        /** @brief ILAC input 144 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN144_B_0x1 = 1;

    /** @brief illegal access input 145 */
    using IAC_IISR5_ILACIN145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 145 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 145 to IAC present (value: 1)
     */
        /** @brief ILAC input 145 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN145_B_0x0 = 0;
        /** @brief ILAC input 145 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN145_B_0x1 = 1;

    /** @brief illegal access input 146 */
    using IAC_IISR5_ILACIN146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 146 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 146 to IAC present (value: 1)
     */
        /** @brief ILAC input 146 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN146_B_0x0 = 0;
        /** @brief ILAC input 146 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN146_B_0x1 = 1;

    /** @brief illegal access input 147 */
    using IAC_IISR5_ILACIN147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 147 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 147 to IAC present (value: 1)
     */
        /** @brief ILAC input 147 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN147_B_0x0 = 0;
        /** @brief ILAC input 147 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN147_B_0x1 = 1;

    /** @brief illegal access input 148 */
    using IAC_IISR5_ILACIN148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 148 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 148 to IAC present (value: 1)
     */
        /** @brief ILAC input 148 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN148_B_0x0 = 0;
        /** @brief ILAC input 148 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN148_B_0x1 = 1;

    /** @brief illegal access input 149 */
    using IAC_IISR5_ILACIN149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 149 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 149 to IAC present (value: 1)
     */
        /** @brief ILAC input 149 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN149_B_0x0 = 0;
        /** @brief ILAC input 149 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN149_B_0x1 = 1;

    /** @brief illegal access input 150 */
    using IAC_IISR5_ILACIN150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 150 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 150 to IAC present (value: 1)
     */
        /** @brief ILAC input 150 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN150_B_0x0 = 0;
        /** @brief ILAC input 150 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN150_B_0x1 = 1;

    /** @brief illegal access input 151 */
    using IAC_IISR5_ILACIN151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 151 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 151 to IAC present (value: 1)
     */
        /** @brief ILAC input 151 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN151_B_0x0 = 0;
        /** @brief ILAC input 151 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN151_B_0x1 = 1;

    /** @brief illegal access input 152 */
    using IAC_IISR5_ILACIN152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 152 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 152 to IAC present (value: 1)
     */
        /** @brief ILAC input 152 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN152_B_0x0 = 0;
        /** @brief ILAC input 152 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN152_B_0x1 = 1;

    /** @brief illegal access input 153 */
    using IAC_IISR5_ILACIN153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 153 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 153 to IAC present (value: 1)
     */
        /** @brief ILAC input 153 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN153_B_0x0 = 0;
        /** @brief ILAC input 153 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN153_B_0x1 = 1;

    /** @brief illegal access input 154 */
    using IAC_IISR5_ILACIN154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 154 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 154 to IAC present (value: 1)
     */
        /** @brief ILAC input 154 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN154_B_0x0 = 0;
        /** @brief ILAC input 154 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN154_B_0x1 = 1;

    /** @brief illegal access input 155 */
    using IAC_IISR5_ILACIN155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 155 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 155 to IAC present (value: 1)
     */
        /** @brief ILAC input 155 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN155_B_0x0 = 0;
        /** @brief ILAC input 155 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN155_B_0x1 = 1;

    /** @brief illegal access input 156 */
    using IAC_IISR5_ILACIN156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 156 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 156 to IAC present (value: 1)
     */
        /** @brief ILAC input 156 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN156_B_0x0 = 0;
        /** @brief ILAC input 156 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN156_B_0x1 = 1;

    /** @brief illegal access input 157 */
    using IAC_IISR5_ILACIN157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 157 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 157 to IAC present (value: 1)
     */
        /** @brief ILAC input 157 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN157_B_0x0 = 0;
        /** @brief ILAC input 157 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN157_B_0x1 = 1;

    /** @brief illegal access input 158 */
    using IAC_IISR5_ILACIN158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 158 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 158 to IAC present (value: 1)
     */
        /** @brief ILAC input 158 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN158_B_0x0 = 0;
        /** @brief ILAC input 158 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN158_B_0x1 = 1;

    /** @brief illegal access input 159 */
    using IAC_IISR5_ILACIN159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ILAC input 159 to IAC not present (value: 0)
     *          - B_0x1: ILAC input 159 to IAC present (value: 1)
     */
        /** @brief ILAC input 159 to IAC not present */
    constexpr std::uint32_t IAC_IISR5_ILACIN159_B_0x0 = 0;
        /** @brief ILAC input 159 to IAC present */
    constexpr std::uint32_t IAC_IISR5_ILACIN159_B_0x1 = 1;

}

#endif
