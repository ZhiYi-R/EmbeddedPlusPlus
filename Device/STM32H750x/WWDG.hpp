/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H750X_WWDG_HPP
#define EMBEDDED_PP_STM32H750X_WWDG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief WWDG */
namespace STM32H750x::WWDG {

    /** @brief Control register */
    using WWDG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7-bit counter (MSB to LSB) These bits contain the value of the watchdog counter. It is decremented every (4096 x 2WDGTB[1:0]) PCLK cycles. A reset is produced when it is decremented from 0x40 to 0x3F (T6 becomes cleared). */
    using WWDG_CR_T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Activation bit This bit is set by software and only cleared by hardware after a reset. When WDGA=1, the watchdog can generate a reset. */
    using WWDG_CR_WDGA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration register */
    using WWDG_CFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7-bit window value These bits contain the window value to be compared to the downcounter. */
    using WWDG_CFR_W = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer base The time base of the prescaler can be modified as follows: */
    using WWDG_CFR_WDGTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early wakeup interrupt When set, an interrupt occurs whenever the counter reaches the value 0x40. This interrupt is only cleared by hardware after a reset. */
    using WWDG_CFR_EWI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status register */
    using WWDG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early wakeup interrupt flag This bit is set by hardware when the counter has reached the value 0x40. It must be cleared by software by writing 0. A write of 1 has no effect. This bit is also set if the interrupt is not enabled. */
    using WWDG_SR_EWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
