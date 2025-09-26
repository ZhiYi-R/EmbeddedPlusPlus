/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_RNG_HPP
#define EMBEDDED_PP_STM32H7S_RNG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief True random number generator */
namespace STM32H7S::RNG {

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

    /** @brief Interrupt Enable */
    using RNG_CR_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG Interrupt is disabled (value: 0)
     *          - B_0x1: RNG Interrupt is enabled. An interrupt is pending as soon as DRDY = 1, SEIS = 1 or CEIS = 1 in the RNG_SR register. (value: 1)
     */
        /** @brief RNG Interrupt is disabled */
    constexpr std::uint32_t RNG_CR_IE_B_0x0 = 0;
        /** @brief RNG Interrupt is enabled. An interrupt is pending as soon as DRDY = 1, SEIS = 1 or CEIS = 1 in the RNG_SR register. */
    constexpr std::uint32_t RNG_CR_IE_B_0x1 = 1;

    /** @brief Clock error detection The clock error detection cannot be enabled nor disabled on-the-fly when the RNG is enabled, that is to enable or disable CED the RNG must be disabled. Writing this bit is taken into account only if CONDRST bit is set to 1 in the same access, while CONFIGLOCK remains at 0. Writing to this bit is ignored if CONFIGLOCK = 1. */
    using RNG_CR_CED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock error detection is enable (value: 0)
     *          - B_0x1: Clock error detection is disable (value: 1)
     */
        /** @brief Clock error detection is enable */
    constexpr std::uint32_t RNG_CR_CED_B_0x0 = 0;
        /** @brief Clock error detection is disable */
    constexpr std::uint32_t RNG_CR_CED_B_0x1 = 1;

    /** @brief Auto reset disable When auto-reset is enabled application still need to clear SEIS bit after a noise source error. Writing this bit is taken into account only if CONDRST bit is set to 1 in the same access, while CONFIGLOCK remains at 0. Writing to this bit is ignored if CONFIGLOCK = 1. */
    using RNG_CR_ARDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When a noise source error occurs RNG performs an automatic reset to clear SECS bit. (value: 0)
     *          - B_0x1: When a noise source error occurs application must reset RNG by writing CONDRST to 1 then to 0, in order to restart random number generation. (value: 1)
     */
        /** @brief When a noise source error occurs RNG performs an automatic reset to clear SECS bit. */
    constexpr std::uint32_t RNG_CR_ARDIS_B_0x0 = 0;
        /** @brief When a noise source error occurs application must reset RNG by writing CONDRST to 1 then to 0, in order to restart random number generation. */
    constexpr std::uint32_t RNG_CR_ARDIS_B_0x1 = 1;

    /** @brief RNG configuration 3 Reserved to the RNG configuration (bitfield 3). Refer to RNG_CONFIG1 bitfield for details. If NISTC bit is cleared in this register RNG_CONFIG3 bitfield values are ignored by RNG. */
    using RNG_CR_RNG_CONFIG3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NIST custom two conditioning loops are performed and 256 bits of noise source are used. Writing this bit is taken into account only if CONDRST bit is set to 1 in the same access, while CONFIGLOCK remains at 0. Writing to this bit is ignored if CONFIGLOCK = 1. */
    using RNG_CR_NISTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware default values for NIST compliant RNG. In this configuration per 128-bit output (value: 0)
     *          - B_0x1: Custom values for NIST compliant RNG. See Section 37.6: RNG entropy source validation for proposed configuration. (value: 1)
     */
        /** @brief Hardware default values for NIST compliant RNG. In this configuration per 128-bit output */
    constexpr std::uint32_t RNG_CR_NISTC_B_0x0 = 0;
        /** @brief Custom values for NIST compliant RNG. See Section 37.6: RNG entropy source validation for proposed configuration. */
    constexpr std::uint32_t RNG_CR_NISTC_B_0x1 = 1;

    /** @brief RNG configuration 2 Reserved to the RNG configuration (bitfield 2). Refer to RNG_CONFIG1 bitfield for details. */
    using RNG_CR_RNG_CONFIG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock divider factor This value used to configure an internal programmable divider (from 1 to 16) acting on the incoming RNG clock. These bits can be written only when the core is disabled (RNGEN = 0). ... Writing these bits is taken into account only if CONDRST bit is set to 1 in the same access, while CONFIGLOCK remains at 0. Writing to this bit is ignored if CONFIGLOCK = 1. */
    using RNG_CR_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: internal RNG clock after divider is similar to incoming RNG clock. (value: 0)
     *          - B_0x1: two RNG clock cycles per internal RNG clock. (value: 1)
     *          - B_0x2: 2<sup>2</sup> (= 4) RNG clock cycles per internal RNG clock. (value: 2)
     *          - B_0xF: 2<sup>15</sup> RNG clock cycles per internal clock (for example. an incoming 48 MHz RNG clock becomes a 1.5 kHz internal RNG clock) (value: 15)
     */
        /** @brief internal RNG clock after divider is similar to incoming RNG clock. */
    constexpr std::uint32_t RNG_CR_CLKDIV_B_0x0 = 0;
        /** @brief two RNG clock cycles per internal RNG clock. */
    constexpr std::uint32_t RNG_CR_CLKDIV_B_0x1 = 1;
        /** @brief 2<sup>2</sup> (= 4) RNG clock cycles per internal RNG clock. */
    constexpr std::uint32_t RNG_CR_CLKDIV_B_0x2 = 2;
        /** @brief 2<sup>15</sup> RNG clock cycles per internal clock (for example. an incoming 48 MHz RNG clock becomes a 1.5 kHz internal RNG clock) */
    constexpr std::uint32_t RNG_CR_CLKDIV_B_0xF = 15;

    /** @brief RNG configuration 1 Reserved to the RNG configuration (bitfield 1). Must be initialized using the recommended value documented in Section 37.6: RNG entropy source validation. Writing any bit of RNG_CONFIG1 is taken into account only if CONDRST bit is set to 1 in the same access, while CONFIGLOCK remains at 0. Writing to this bit is ignored if CONFIGLOCK = 1. */
    using RNG_CR_RNG_CONFIG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Conditioning soft reset Write 1 and then write 0 to reset the conditioning logic, clear all the FIFOs and start a new RNG initialization process, with RNG_SR cleared. Registers RNG_CR and RNG_HTCR are not changed by CONDRST. This bit must be set to 1 in the same access that set any configuration bits [29:4]. In other words, when CONDRST bit is set to 1 correct configuration in bits [29:4] must also be written. When CONDRST is set to 0 by software its value goes to 0 when the reset process is done. It takes about 2 AHB clock cycles + 2 RNG clock cycles. */
    using RNG_CR_CONDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG Config lock This bitfield is set once: if this bit is set it can only be reset to 0 if RNG is reset. */
    using RNG_CR_CONFIGLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to the RNG_HTCR and RNG_CR configuration bits [29:4] are allowed. (value: 0)
     *          - B_0x1: Writes to the RNG_HTCR and RNG_CR configuration bits [29:4] are ignored until the next RNG reset. (value: 1)
     */
        /** @brief Writes to the RNG_HTCR and RNG_CR configuration bits [29:4] are allowed. */
    constexpr std::uint32_t RNG_CR_CONFIGLOCK_B_0x0 = 0;
        /** @brief Writes to the RNG_HTCR and RNG_CR configuration bits [29:4] are ignored until the next RNG reset. */
    constexpr std::uint32_t RNG_CR_CONFIGLOCK_B_0x1 = 1;

    /** @brief RNG status register */
    using RNG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Ready Once the output buffer becomes empty (after reading the RNG_DR register), this bit returns to 0 until a new random value is generated. Note: The DRDY bit can rise when the peripheral is disabled (RNGEN = 0 in the RNG_CR register). If IE=1 in the RNG_CR register, an interrupt is generated when DRDY = 1. */
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
     *          - B_0x1: The RNG clock is too slow (fRNGCLK< fHCLK/32). (value: 1)
     */
        /** @brief The RNG clock is correct (fRNGCLK> fHCLK/32). If the CEIS bit is set, this means that a slow clock was detected and the situation has been recovered. */
    constexpr std::uint32_t RNG_SR_CECS_B_0x0 = 0;
        /** @brief The RNG clock is too slow (fRNGCLK< fHCLK/32). */
    constexpr std::uint32_t RNG_SR_CECS_B_0x1 = 1;

    /** @brief Seed error current status Run-time repetition count test failed (noise source has provided more than 24 consecutive bits at a constant value 0 or 1, or more than 32 consecutive occurrence of two bits patterns 01 or 10) Start-up or continuous adaptive proportion test on noise source failed. Start-up post-processing/conditioning sanity check failed. */
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
     *          - B_0x1: The RNG clock before internal divider is detected too slow (fRNGCLK< fHCLK/32) (value: 1)
     */
        /** @brief The RNG clock is correct (fRNGCLK> fHCLK/32) */
    constexpr std::uint32_t RNG_SR_CEIS_B_0x0 = 0;
        /** @brief The RNG clock before internal divider is detected too slow (fRNGCLK< fHCLK/32) */
    constexpr std::uint32_t RNG_SR_CEIS_B_0x1 = 1;

    /** @brief Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing 0 (unless CONDRST is used). Writing 1 has no effect. An interrupt is pending if IE = 1 in the RNG_CR register. */
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
    /** @brief Random data 32-bit random data which are valid when DRDY = 1. When DRDY = 0 RNDATA value is zero. When DRDY is set, it is recommended to always verify that RNG_DR is different from zero. Because when it is the case a seed error occurred between RNG_SR polling and RND_DR output reading (rare event). */
    using RNG_DR_RNDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG health test control register */
    using RNG_HTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief health test configuration This configuration is used by RNG to configure the health tests. See Section 37.6: RNG entropy source validation for the recommended value. Note: The RNG behavior, including the read to this register, is not guaranteed if a different value from the recommended value is written. */
    using RNG_HTCR_HTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
