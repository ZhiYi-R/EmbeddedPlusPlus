/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB10_CM4_EXTI_HPP
#define EMBEDDED_PP_STM32WB10_CM4_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief External interrupt/event controller */
namespace STM32WB10_CM4::EXTI {

    /** @brief rising trigger selection register */
    using RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR1_RT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 21, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger selection register */
    using FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input */
    using FTSR1_FT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 21, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software interrupt event register */
    using SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event */
    using SWIER1_SWI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 21, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI pending register */
    using PR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs Pending bit */
    using PR1_PIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 21, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger selection register */
    using RTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input */
    using RTSR2_RT33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input 40 */
    using RTSR2_RT40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of Configurable Event input 41 */
    using RTSR2_RT41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger selection register */
    using FTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of Configurable Event input */
    using FTSR2_FT33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input 40 */
    using FTSR2_FT40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input 41 */
    using FTSR2_FT41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software interrupt event register */
    using SWIER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event */
    using SWIER2_SWI33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event */
    using SWIER2_SWI40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event */
    using SWIER2_SWI41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending register */
    using PR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+32 Pending bit. */
    using PR2_PIF33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+32 Pending bit. */
    using PR2_PIF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event inputs x+32 Pending bit. */
    using PR2_PIF41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with interrupt mask register */
    using IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) wakeup with interrupt Mask on Event input */
    using IMR1_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with interrupt mask register */
    using C2IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) wakeup with interrupt Mask on Event input */
    using C2IMR1_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with event mask register */
    using EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using EMR1_EM0_15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using EMR1_EM17_20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with event mask register */
    using C2EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using C2EMR1_EM0_15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using C2EMR1_EM17_20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with interrupt mask register */
    using IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm Wakeup with interrupt Mask on Event input */
    using IMR2_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 17, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with interrupt mask register */
    using C2IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm Wakeup with interrupt Mask on Event input */
    using C2IMR2_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 17, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with event mask register */
    using EMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using EMR2_EM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUm wakeup with event mask register */
    using C2EMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU(m) Wakeup with event generation Mask on Event input */
    using C2EMR2_EM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
