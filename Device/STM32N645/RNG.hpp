/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_RNG_HPP
#define EMBEDDED_PP_STM32N645_RNG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief True random number generator */
namespace STM32N645::RNG {

    /** @brief RNG control register */
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

    /** @brief Interrupt enable */
    using RNG_CR_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG interrupt is disabled (value: 0)
     *          - B_0x1: RNG interrupt is enabled. An interrupt is pending as soon as DRDY = 1, SEIS = 1 or CEIS = 1 in the RNG_SR register. (value: 1)
     */
        /** @brief RNG interrupt is disabled */
    constexpr std::uint32_t RNG_CR_IE_B_0x0 = 0;
        /** @brief RNG interrupt is enabled. An interrupt is pending as soon as DRDY = 1, SEIS = 1 or CEIS = 1 in the RNG_SR register. */
    constexpr std::uint32_t RNG_CR_IE_B_0x1 = 1;

    /** @brief Clock error detection */
    using RNG_CR_CED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock error detection enabled (value: 0)
     *          - B_0x1: Clock error detection is disabled (value: 1)
     */
        /** @brief Clock error detection enabled */
    constexpr std::uint32_t RNG_CR_CED_B_0x0 = 0;
        /** @brief Clock error detection is disabled */
    constexpr std::uint32_t RNG_CR_CED_B_0x1 = 1;

    /** @brief Auto reset disable */
    using RNG_CR_ARDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When a noise source error occurs RNG performs an automatic reset to clear the SECS bit. (value: 0)
     *          - B_0x1: When a noise source error occurs the application must reset RNG by writing CONDRST to 1 then to 0, in order to restart random number generation. (value: 1)
     */
        /** @brief When a noise source error occurs RNG performs an automatic reset to clear the SECS bit. */
    constexpr std::uint32_t RNG_CR_ARDIS_B_0x0 = 0;
        /** @brief When a noise source error occurs the application must reset RNG by writing CONDRST to 1 then to 0, in order to restart random number generation. */
    constexpr std::uint32_t RNG_CR_ARDIS_B_0x1 = 1;

    /** @brief RNG configuration 3 */
    using RNG_CR_RNG_CONFIG3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NIST custom */
    using RNG_CR_NISTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware default values for NIST compliant RNG. In this configuration per 128-bit output (value: 0)
     *          - B_0x1: Custom values for NIST compliant RNG. See Section 47.6: RNG entropy source validation for proposed configuration. (value: 1)
     */
        /** @brief Hardware default values for NIST compliant RNG. In this configuration per 128-bit output */
    constexpr std::uint32_t RNG_CR_NISTC_B_0x0 = 0;
        /** @brief Custom values for NIST compliant RNG. See Section 47.6: RNG entropy source validation for proposed configuration. */
    constexpr std::uint32_t RNG_CR_NISTC_B_0x1 = 1;

    /** @brief RNG configuration 2 */
    using RNG_CR_RNG_CONFIG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock divider factor */
    using RNG_CR_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: internal RNG clock after divider is similar to incoming RNG clock. (value: 0)
     *          - B_0x1: two RNG clock cycles per internal RNG clock. (value: 1)
     *          - B_0x2: 2 less than sup>2 less than /sup> (= 4) RNG clock cycles per internal RNG clock. (value: 2)
     *          - B_0xF: 2 less than sup>15 less than /sup> RNG clock cycles per internal clock (for example. an incoming 48 MHz RNG clock becomes a 1.5 kHz internal RNG clock) (value: 15)
     */
        /** @brief internal RNG clock after divider is similar to incoming RNG clock. */
    constexpr std::uint32_t RNG_CR_CLKDIV_B_0x0 = 0;
        /** @brief two RNG clock cycles per internal RNG clock. */
    constexpr std::uint32_t RNG_CR_CLKDIV_B_0x1 = 1;
        /** @brief 2 less than sup>2 less than /sup> (= 4) RNG clock cycles per internal RNG clock. */
    constexpr std::uint32_t RNG_CR_CLKDIV_B_0x2 = 2;
        /** @brief 2 less than sup>15 less than /sup> RNG clock cycles per internal clock (for example. an incoming 48 MHz RNG clock becomes a 1.5 kHz internal RNG clock) */
    constexpr std::uint32_t RNG_CR_CLKDIV_B_0xF = 15;

    /** @brief RNG configuration 1 */
    using RNG_CR_RNG_CONFIG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Conditioning soft reset */
    using RNG_CR_CONDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG Config lock */
    using RNG_CR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to the RNG_NSCR, RNG_HTCR and RNG_CR configuration bits [29:4] are allowed. (value: 0)
     *          - B_0x1: Writes to the RNG_NSCR, RNG_HTCR and RNG_CR configuration bits [29:4] are ignored until the next RNG reset. (value: 1)
     */
        /** @brief Writes to the RNG_NSCR, RNG_HTCR and RNG_CR configuration bits [29:4] are allowed. */
    constexpr std::uint32_t RNG_CR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to the RNG_NSCR, RNG_HTCR and RNG_CR configuration bits [29:4] are ignored until the next RNG reset. */
    constexpr std::uint32_t RNG_CR_CONFIGLOCK_B_0x1 = 1;

    /** @brief RNG status register */
    using RNG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data ready */
    using RNG_SR_DRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The RNG_DR register is not yet valid, no random data is available. (value: 0)
     *          - B_0x1: The RNG_DR register contains valid random data. (value: 1)
     */
        /** @brief The RNG_DR register is not yet valid, no random data is available. */
    constexpr std::uint32_t RNG_SR_DRDY_B_0x0 = 0;
        /** @brief The RNG_DR register contains valid random data. */
    constexpr std::uint32_t RNG_SR_DRDY_B_0x1 = 1;

    /** @brief Clock error current status */
    using RNG_SR_CECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The RNG clock is correct (f less than sub>RNGCLK less than /sub>> f less than sub>HCLK less than /sub>/32). If the CEIS bit is set, this means that a slow clock was detected and the situation has been recovered. (value: 0)
     *          - B_0x1: The RNG clock is too slow (f less than sub>RNGCLK less than /sub> less than f less than sub>HCLK less than /sub>/32). (value: 1)
     */
        /** @brief The RNG clock is correct (f less than sub>RNGCLK less than /sub>> f less than sub>HCLK less than /sub>/32). If the CEIS bit is set, this means that a slow clock was detected and the situation has been recovered. */
    constexpr std::uint32_t RNG_SR_CECS_B_0x0 = 0;
        /** @brief The RNG clock is too slow (f less than sub>RNGCLK less than /sub> less than f less than sub>HCLK less than /sub>/32). */
    constexpr std::uint32_t RNG_SR_CECS_B_0x1 = 1;

    /** @brief Seed error current status */
    using RNG_SR_SECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No faulty sequence has currently been detected. If the SEIS bit is set, this means that a faulty sequence was detected and the situation has been recovered. (value: 0)
     *          - B_0x1: At least one of the following faulty sequences has been detected: (value: 1)
     */
        /** @brief No faulty sequence has currently been detected. If the SEIS bit is set, this means that a faulty sequence was detected and the situation has been recovered. */
    constexpr std::uint32_t RNG_SR_SECS_B_0x0 = 0;
        /** @brief At least one of the following faulty sequences has been detected: */
    constexpr std::uint32_t RNG_SR_SECS_B_0x1 = 1;

    /** @brief Clock error interrupt status */
    using RNG_SR_CEIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The RNG clock is correct (f less than sub>RNGCLK less than /sub>> f less than sub>HCLK less than /sub>/32) (value: 0)
     *          - B_0x1: The RNG clock before the internal divider is detected too slow (f less than sub>RNGCLK less than /sub> less than f less than sub>HCLK less than /sub>/32) (value: 1)
     */
        /** @brief The RNG clock is correct (f less than sub>RNGCLK less than /sub>> f less than sub>HCLK less than /sub>/32) */
    constexpr std::uint32_t RNG_SR_CEIS_B_0x0 = 0;
        /** @brief The RNG clock before the internal divider is detected too slow (f less than sub>RNGCLK less than /sub> less than f less than sub>HCLK less than /sub>/32) */
    constexpr std::uint32_t RNG_SR_CEIS_B_0x1 = 1;

    /** @brief Seed error interrupt status */
    using RNG_SR_SEIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No faulty sequence detected (value: 0)
     *          - B_0x1: At least one faulty sequence is detected. See SECS bit description for details. (value: 1)
     */
        /** @brief No faulty sequence detected */
    constexpr std::uint32_t RNG_SR_SEIS_B_0x0 = 0;
        /** @brief At least one faulty sequence is detected. See SECS bit description for details. */
    constexpr std::uint32_t RNG_SR_SEIS_B_0x1 = 1;

    /** @brief RNG data register */
    using RNG_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Random data */
    using RNG_DR_RNDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG noise source control register */
    using RNG_NSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit drives one oscillator enable signal input of instance number 1, gated with the RNGEN bit in RNG_CR (set bit to enable the oscillator). Bit is ignored otherwise. */
    using RNG_NSCR_EN_OSC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit drives one oscillator enable signal input of instance number 2, gated with the RNGEN bit in RNG_CR (set bit to enable the oscillator). Bit is ignored otherwise. */
    using RNG_NSCR_EN_OSC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit drives one oscillator enable signal input of instance number 3, gated with the RNGEN bit in RNG_CR (set bit to enable the oscillator). Bit is ignored otherwise. */
    using RNG_NSCR_EN_OSC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit drives one oscillator enable signal input of instance number 4, gated with the RNGEN bit in RNG_CR (set bit to enable the oscillator). Bit is ignored otherwise. */
    using RNG_NSCR_EN_OSC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit drives one oscillator enable signal input of instance number 5, gated with the RNGEN bit in RNG_CR (set bit to enable the oscillator). Bit is ignored otherwise. */
    using RNG_NSCR_EN_OSC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit drives one oscillator enable signal input of instance number 6, gated with the RNGEN bit in RNG_CR (set bit to enable the oscillator). Bit is ignored otherwise. */
    using RNG_NSCR_EN_OSC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG health test control register */
    using RNG_HTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief health test configuration */
    using RNG_HTCR_HTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
