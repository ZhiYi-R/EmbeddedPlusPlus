/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_DLYBSD1_HPP
#define EMBEDDED_PP_STM32U3C5_DLYBSD1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DLYB Address block */
namespace STM32U3C5::DLYBSD1 {

    /** @brief DLYB control register */
    using DLYB_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 0: DLYB disabled. 1: DLYB enabled. */
    using DLYB_CR_DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DLYB disabled. (value: 0)
     *          - B_0x1: DLYB enabled. (value: 1)
     */
        /** @brief DLYB disabled. */
    constexpr std::uint32_t DLYB_CR_DEN_B_0x0 = 0;
        /** @brief DLYB enabled. */
    constexpr std::uint32_t DLYB_CR_DEN_B_0x1 = 1;

    /** @brief 0: Sampler length and register access to UNIT[6:0] and SEL[3:0] disabled, output clock enabled. 1: Sampler length and register access to UNIT[6:0] and SEL[3:0] enabled, output clock disabled. */
    using DLYB_CR_SEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampler length and register access to UNIT[6:0] and SEL[3:0] disabled, output clock enabled. (value: 0)
     *          - B_0x1: Sampler length and register access to UNIT[6:0] and SEL[3:0] enabled, output clock disabled. (value: 1)
     */
        /** @brief Sampler length and register access to UNIT[6:0] and SEL[3:0] disabled, output clock enabled. */
    constexpr std::uint32_t DLYB_CR_SEN_B_0x0 = 0;
        /** @brief Sampler length and register access to UNIT[6:0] and SEL[3:0] enabled, output clock disabled. */
    constexpr std::uint32_t DLYB_CR_SEN_B_0x1 = 1;

    /** @brief DLYB configuration register */
    using DLYB_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits can only be written when SEN = 1. Output clock phase = input clock + SEL[3:0] x unit delay */
    using DLYB_CFGR_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits can only be written when SEN = 1. Unit delay = initial delay + UNIT[6:0] x delay step */
    using DLYB_CFGR_UNIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits reflect the 12 unit delay values sampled at the rising edge of the input clock. The value is only valid when LNGF = 1. */
    using DLYB_CFGR_LNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This flag indicates when the delay line length value contained in LNG[11:0] is valid after UNIT[6:0] bits changed. 0: Length value in LNG is not valid. 1: Length value in LNG is valid. */
    using DLYB_CFGR_LNGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Length value in LNG is not valid. (value: 0)
     *          - B_0x1: Length value in LNG is valid. (value: 1)
     */
        /** @brief Length value in LNG is not valid. */
    constexpr std::uint32_t DLYB_CFGR_LNGF_B_0x0 = 0;
        /** @brief Length value in LNG is valid. */
    constexpr std::uint32_t DLYB_CFGR_LNGF_B_0x1 = 1;

}

#endif
