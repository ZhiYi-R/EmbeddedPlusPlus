/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB07_RNG_HPP
#define EMBEDDED_PP_STM32WB07_RNG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RNG peripheral */
namespace STM32WB07::RNG {

    /** @brief RNG_CR register */
    using RNG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit enables or disables the random number generator. 0: RNG is enabled (default) 1: RNG is disabled. The internal free-running oscillators are put in power-down mode and the RNG clock is stopped at the input of the block. */
    using RNG_CR_RNG_DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The RNG core is enabled (value: 0)
     *          - B_0x1: The RNG core is disabled (value: 1)
     */
        /** @brief The RNG core is enabled */
    constexpr std::uint32_t RNG_CR_RNG_DIS_B_0x0 = 0;
        /** @brief The RNG core is disabled */
    constexpr std::uint32_t RNG_CR_RNG_DIS_B_0x1 = 1;

    /** @brief Reset reveal clock error flags when writing a '1' without resetting the whole TRNG. When writing a 1, the value remains until it is seen by RNG core clock domain after resynchronization. Then it is automatically reset. */
    using RNG_CR_TST_CLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset (value: 0)
     *          - B_0x1: reset revclk flag (value: 1)
     */
        /** @brief no reset */
    constexpr std::uint32_t RNG_CR_TST_CLK_B_0x0 = 0;
        /** @brief reset revclk flag */
    constexpr std::uint32_t RNG_CR_TST_CLK_B_0x1 = 1;

    /** @brief RNG_SR register */
    using RNG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief New random value ready */
    using RNG_SR_RNGRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: RNG is disabled. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t RNG_SR_RNGRDY_B_0x0 = 0;
        /** @brief RNG is disabled. */
    constexpr std::uint32_t RNG_SR_RNGRDY_B_0x1 = 1;

    /** @brief RNGCLK clock reveal bit. */
    using RNG_SR_REVCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At least one oscillator is ON (value: 0)
     *          - B_0x1: All oscillators are down (value: 1)
     */
        /** @brief At least one oscillator is ON */
    constexpr std::uint32_t RNG_SR_REVCLK_B_0x0 = 0;
        /** @brief All oscillators are down */
    constexpr std::uint32_t RNG_SR_REVCLK_B_0x1 = 1;

    /** @brief Fault reveal bit. */
    using RNG_SR_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal clock for RNG clock is present. (value: 0)
     *          - B_0x1: Internal RNG clock is not present. (value: 1)
     */
        /** @brief Internal clock for RNG clock is present. */
    constexpr std::uint32_t RNG_SR_FAULT_B_0x0 = 0;
        /** @brief Internal RNG clock is not present. */
    constexpr std::uint32_t RNG_SR_FAULT_B_0x1 = 1;

    /** @brief RNG_VAL register */
    using RNG_VAL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Random value */
    using RNG_VAL_RND_VAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
