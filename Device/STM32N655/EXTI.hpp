/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_EXTI_HPP
#define EMBEDDED_PP_STM32N655_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Extended interrupts and event controller */
namespace STM32N655::EXTI {

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT20_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT20_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT21_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT21_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT20_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT20_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT21_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT21_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI20_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER1_SWI20_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI21_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER1_SWI21_B_0x1 = 1;

    /** @brief EXTI rising edge pending register */
    using EXTI_RPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF20_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF20_B_0x1 = 1;

    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR1_RPIF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF21_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF21_B_0x1 = 1;

    /** @brief EXTI falling edge pending register */
    using EXTI_FPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_FPR1_FPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event input x falling edge pending bit */
    using EXTI_FPR1_FPIF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF20_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF20_B_0x1 = 1;

    /** @brief configurable event input x falling edge pending bit */
    using EXTI_FPR1_FPIF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF21_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF21_B_0x1 = 1;

    /** @brief EXTI security configuration register */
    using EXTI_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC17_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC17_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC18_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC18_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC19_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC19_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC20_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC20_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC21_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC21_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC22_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC22_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC23_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC23_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC24_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC24_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC25_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC25_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC26_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC26_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC27_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC27_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC28_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC28_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC29_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC29_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC30_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC30_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC31_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC31_B_0x1 = 1;

    /** @brief EXTI privilege configuration register */
    using EXTI_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV17_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV17_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV18_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV18_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV19_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV19_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV20_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV20_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV21_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV21_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV22_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV22_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV23_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV23_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV24_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV24_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV25_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV25_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV26_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV26_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV27_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV27_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV28_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV28_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV29_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV29_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV30_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV30_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR1_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV31_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV31_B_0x1 = 1;

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR2_RT39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR2_RT40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input 51 */
    using EXTI_RTSR2_RT51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input 54 */
    using EXTI_RTSR2_RT54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input 56 */
    using EXTI_RTSR2_RT56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and Interrupt) for input line x (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and Interrupt) for input line x (value: 1)
     */
        /** @brief Rising trigger disabled (for event and Interrupt) for input line x */
    constexpr std::uint32_t EXTI_RTSR2_RT56_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and Interrupt) for input line x */
    constexpr std::uint32_t EXTI_RTSR2_RT56_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR2_FT39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR2_FT40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input 51 */
    using EXTI_FTSR2_FT51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input 54 */
    using EXTI_FTSR2_FT54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input 56 */
    using EXTI_FTSR2_FT56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_FT56_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR2_FT56_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER2_SWI39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER2_SWI40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event 51 */
    using EXTI_SWIER2_SWI51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event 54 */
    using EXTI_SWIER2_SWI54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event 56 */
    using EXTI_SWIER2_SWI56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER2_SWI56_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER2_SWI56_B_0x1 = 1;

    /** @brief EXTI rising edge pending register */
    using EXTI_RPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR2_RPIF39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x rising edge pending bit */
    using EXTI_RPR2_RPIF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input 51 rising edge pending bit */
    using EXTI_RPR2_RPIF51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input 54 rising edge pending bit */
    using EXTI_RPR2_RPIF54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input 56 rising edge pending bit */
    using EXTI_RPR2_RPIF56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR2_RPIF56_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR2_RPIF56_B_0x1 = 1;

    /** @brief EXTI falling edge pending register */
    using EXTI_FPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x falling edge pending bit */
    using EXTI_FPR2_FPIF39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input x falling edge pending bit */
    using EXTI_FPR2_FPIF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input 51 falling edge pending bit */
    using EXTI_FPR2_FPIF51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input 54 falling edge pending bit */
    using EXTI_FPR2_FPIF54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input 56 falling edge pending bit */
    using EXTI_FPR2_FPIF56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR2_FPIF56_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR2_FPIF56_B_0x1 = 1;

    /** @brief EXTI security enable register */
    using EXTI_SECCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR2_SEC60_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR2_SEC60_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR2_SEC61_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR2_SEC61_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR2_SEC62_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR2_SEC62_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR2_SEC63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR2_SEC63_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR2_SEC63_B_0x1 = 1;

    /** @brief EXTI privilege enable register */
    using EXTI_PRIVCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR2_PRIV60_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR2_PRIV60_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR2_PRIV61_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR2_PRIV61_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR2_PRIV62_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR2_PRIV62_B_0x1 = 1;

    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR2_PRIV63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR2_PRIV63_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR2_PRIV63_B_0x1 = 1;

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input 66 */
    using EXTI_RTSR3_RT66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR3_RT68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT68_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT68_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR3_RT69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT69_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT69_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR3_RT70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT70_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT70_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR3_RT71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT71_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT71_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR3_RT72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT72_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT72_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR3_RT73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT73_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT73_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR3_RT74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT74_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR3_RT74_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input 66 */
    using EXTI_FTSR3_FT66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR3_FT68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT68_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT68_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR3_FT69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT69_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT69_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR3_FT70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT70_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT70_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR3_FT71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT71_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT71_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR3_FT72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT72_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT72_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR3_FT73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT73_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT73_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR3_FT74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT74_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR3_FT74_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event 66 */
    using EXTI_SWIER3_SWI66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER3_SWI68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER3_SWI68_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER3_SWI68_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER3_SWI69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER3_SWI69_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER3_SWI69_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER3_SWI70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER3_SWI70_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER3_SWI70_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER3_SWI71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER3_SWI71_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER3_SWI71_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER3_SWI72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER3_SWI72_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER3_SWI72_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER3_SWI73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER3_SWI73_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER3_SWI73_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER3_SWI74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER3_SWI74_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers a rising edge event on event x (bit auto cleared by hardware). */
    constexpr std::uint32_t EXTI_SWIER3_SWI74_B_0x1 = 1;

    /** @brief EXTI rising edge pending register */
    using EXTI_RPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event input 66rising edge pending bit */
    using EXTI_RPR3_RPIF66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event input x rising edge pending bit */
    using EXTI_RPR3_RPIF68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF68_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF68_B_0x1 = 1;

    /** @brief configurable event input x rising edge pending bit */
    using EXTI_RPR3_RPIF69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF69_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF69_B_0x1 = 1;

    /** @brief configurable event input x rising edge pending bit */
    using EXTI_RPR3_RPIF70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF70_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF70_B_0x1 = 1;

    /** @brief configurable event input x rising edge pending bit */
    using EXTI_RPR3_RPIF71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF71_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF71_B_0x1 = 1;

    /** @brief configurable event input x rising edge pending bit */
    using EXTI_RPR3_RPIF72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF72_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF72_B_0x1 = 1;

    /** @brief configurable event input x rising edge pending bit */
    using EXTI_RPR3_RPIF73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF73_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF73_B_0x1 = 1;

    /** @brief configurable event input x rising edge pending bit */
    using EXTI_RPR3_RPIF74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF74_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR3_RPIF74_B_0x1 = 1;

    /** @brief EXTI falling edge pending register */
    using EXTI_FPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event input 66 falling edge pending bit */
    using EXTI_FPR3_FPIF66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event input x falling edge pending bit */
    using EXTI_FPR3_FPIF68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF68_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF68_B_0x1 = 1;

    /** @brief configurable event input x falling edge pending bit */
    using EXTI_FPR3_FPIF69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF69_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF69_B_0x1 = 1;

    /** @brief configurable event input x falling edge pending bit */
    using EXTI_FPR3_FPIF70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF70_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF70_B_0x1 = 1;

    /** @brief configurable event input x falling edge pending bit */
    using EXTI_FPR3_FPIF71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF71_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF71_B_0x1 = 1;

    /** @brief configurable event input x falling edge pending bit */
    using EXTI_FPR3_FPIF72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF72_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF72_B_0x1 = 1;

    /** @brief configurable event input x falling edge pending bit */
    using EXTI_FPR3_FPIF73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF73_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF73_B_0x1 = 1;

    /** @brief configurable event input x falling edge pending bit */
    using EXTI_FPR3_FPIF74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF74_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR3_FPIF74_B_0x1 = 1;

    /** @brief EXTI security enable register */
    using EXTI_SECCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR3_SEC74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input 77 */
    using EXTI_SECCFGR3_SEC77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR3_SEC77_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR3_SEC77_B_0x1 = 1;

    /** @brief EXTI privilege enable register */
    using EXTI_PRIVCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input x */
    using EXTI_PRIVCFGR3_PRIV74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privilege enable on event input 77 */
    using EXTI_PRIVCFGR3_PRIV77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged */
    constexpr std::uint32_t EXTI_PRIVCFGR3_PRIV77_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR3_PRIV77_B_0x1 = 1;

    /** @brief EXTI external interrupt selection register 1 */
    using EXTI_EXTICR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI0 GPIO port selection. */
    using EXTI_EXTICR1_EXTI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA0 pin (value: 0)
     *          - B_0x01: PB0 pin (value: 1)
     *          - B_0x02: PC0 pin (value: 2)
     *          - B_0x03: PD0 pin (value: 3)
     *          - B_0x04: PE0 pin (value: 4)
     *          - B_0x05: PF0 pin (value: 5)
     *          - B_0x06: PG0 pin (value: 6)
     *          - B_0x07: PH0 pin (value: 7)
     *          - B_0x08: PN0 pin (value: 8)
     *          - B_0x09: PO0 pin (value: 9)
     *          - B_0x0A: PP0 pin (value: 10)
     *          - B_0x0B: PQ0 pin (value: 11)
     */
        /** @brief PA0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x00 = 0;
        /** @brief PB0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x01 = 1;
        /** @brief PC0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x02 = 2;
        /** @brief PD0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x03 = 3;
        /** @brief PE0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x04 = 4;
        /** @brief PF0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x05 = 5;
        /** @brief PG0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x06 = 6;
        /** @brief PH0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x07 = 7;
        /** @brief PN0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x08 = 8;
        /** @brief PO0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x09 = 9;
        /** @brief PP0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x0A = 10;
        /** @brief PQ0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x0B = 11;

    /** @brief EXTI1 GPIO port selection */
    using EXTI_EXTICR1_EXTI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA1 pin (value: 0)
     *          - B_0x01: PB1 pin (value: 1)
     *          - B_0x02: PC1 pin (value: 2)
     *          - B_0x03: PD1 pin (value: 3)
     *          - B_0x04: PE1 pin (value: 4)
     *          - B_0x05: PF1 pin (value: 5)
     *          - B_0x06: PG1 pin (value: 6)
     *          - B_0x07: PH1 pin (value: 7)
     *          - B_0x08: PN1 pin (value: 8)
     *          - B_0x09: PO1 pin (value: 9)
     *          - B_0x0A: PP1 pin (value: 10)
     *          - B_0x0B: PQ1 pin (value: 11)
     */
        /** @brief PA1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x00 = 0;
        /** @brief PB1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x01 = 1;
        /** @brief PC1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x02 = 2;
        /** @brief PD1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x03 = 3;
        /** @brief PE1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x04 = 4;
        /** @brief PF1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x05 = 5;
        /** @brief PG1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x06 = 6;
        /** @brief PH1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x07 = 7;
        /** @brief PN1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x08 = 8;
        /** @brief PO1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x09 = 9;
        /** @brief PP1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x0A = 10;
        /** @brief PQ1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x0B = 11;

    /** @brief EXTI2 GPIO port selection */
    using EXTI_EXTICR1_EXTI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA2 pin (value: 0)
     *          - B_0x01: PB2 pin (value: 1)
     *          - B_0x02: PC2 pin (value: 2)
     *          - B_0x03: PD2 pin (value: 3)
     *          - B_0x04: PE2 pin (value: 4)
     *          - B_0x05: PF2 pin (value: 5)
     *          - B_0x06: PG2 pin (value: 6)
     *          - B_0x07: PH2 pin (value: 7)
     *          - B_0x08: PN2 pin (value: 8)
     *          - B_0x09: PO2 pin (value: 9)
     *          - B_0x0A: PP2 pin (value: 10)
     *          - B_0x0B: PQ2 pin (value: 11)
     */
        /** @brief PA2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x00 = 0;
        /** @brief PB2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x01 = 1;
        /** @brief PC2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x02 = 2;
        /** @brief PD2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x03 = 3;
        /** @brief PE2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x04 = 4;
        /** @brief PF2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x05 = 5;
        /** @brief PG2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x06 = 6;
        /** @brief PH2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x07 = 7;
        /** @brief PN2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x08 = 8;
        /** @brief PO2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x09 = 9;
        /** @brief PP2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x0A = 10;
        /** @brief PQ2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x0B = 11;

    /** @brief EXTI3 GPIO port selection */
    using EXTI_EXTICR1_EXTI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA3 pin (value: 0)
     *          - B_0x01: PB3 pin (value: 1)
     *          - B_0x02: PC3 pin (value: 2)
     *          - B_0x03: PD3 pin (value: 3)
     *          - B_0x04: PE3 pin (value: 4)
     *          - B_0x05: PF3 pin (value: 5)
     *          - B_0x06: PG3 pin (value: 6)
     *          - B_0x07: PH3 pin (value: 7)
     *          - B_0x08: PN3 pin (value: 8)
     *          - B_0x09: PO3 pin (value: 9)
     *          - B_0x0A: PP3 pin (value: 10)
     *          - B_0x0B: PQ3 pin (value: 11)
     */
        /** @brief PA3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x00 = 0;
        /** @brief PB3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x01 = 1;
        /** @brief PC3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x02 = 2;
        /** @brief PD3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x03 = 3;
        /** @brief PE3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x04 = 4;
        /** @brief PF3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x05 = 5;
        /** @brief PG3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x06 = 6;
        /** @brief PH3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x07 = 7;
        /** @brief PN3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x08 = 8;
        /** @brief PO3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x09 = 9;
        /** @brief PP3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x0A = 10;
        /** @brief PQ3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x0B = 11;

    /** @brief EXTI external interrupt selection register 2 */
    using EXTI_EXTICR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI4 GPIO port selection. */
    using EXTI_EXTICR2_EXTI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA4 pin (value: 0)
     *          - B_0x01: PB4 pin (value: 1)
     *          - B_0x02: PC4 pin (value: 2)
     *          - B_0x03: PD4 pin (value: 3)
     *          - B_0x04: PE4 pin (value: 4)
     *          - B_0x05: PF4 pin (value: 5)
     *          - B_0x06: PG4 pin (value: 6)
     *          - B_0x07: PH4 pin (value: 7)
     *          - B_0x08: PN4 pin (value: 8)
     *          - B_0x09: PO4 pin (value: 9)
     *          - B_0x0A: PP4 pin (value: 10)
     *          - B_0x0B: PQ4 pin (value: 11)
     */
        /** @brief PA4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x00 = 0;
        /** @brief PB4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x01 = 1;
        /** @brief PC4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x02 = 2;
        /** @brief PD4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x03 = 3;
        /** @brief PE4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x04 = 4;
        /** @brief PF4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x05 = 5;
        /** @brief PG4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x06 = 6;
        /** @brief PH4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x07 = 7;
        /** @brief PN4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x08 = 8;
        /** @brief PO4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x09 = 9;
        /** @brief PP4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x0A = 10;
        /** @brief PQ4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x0B = 11;

    /** @brief EXTI5 GPIO port selection. */
    using EXTI_EXTICR2_EXTI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA5 pin (value: 0)
     *          - B_0x01: PB5 pin (value: 1)
     *          - B_0x02: PC5 pin (value: 2)
     *          - B_0x03: PD5 pin (value: 3)
     *          - B_0x04: PE5 pin (value: 4)
     *          - B_0x05: PF5 pin (value: 5)
     *          - B_0x06: PG5 pin (value: 6)
     *          - B_0x07: PH5 pin (value: 7)
     *          - B_0x08: PN5 pin (value: 8)
     *          - B_0x09: PO5 pin (value: 9)
     *          - B_0x0A: PP5 pin (value: 10)
     *          - B_0x0B: PQ5 pin (value: 11)
     */
        /** @brief PA5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x00 = 0;
        /** @brief PB5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x01 = 1;
        /** @brief PC5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x02 = 2;
        /** @brief PD5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x03 = 3;
        /** @brief PE5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x04 = 4;
        /** @brief PF5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x05 = 5;
        /** @brief PG5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x06 = 6;
        /** @brief PH5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x07 = 7;
        /** @brief PN5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x08 = 8;
        /** @brief PO5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x09 = 9;
        /** @brief PP5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x0A = 10;
        /** @brief PQ5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x0B = 11;

    /** @brief EXTI6 GPIO port selection. */
    using EXTI_EXTICR2_EXTI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA6 pin (value: 0)
     *          - B_0x01: PB6 pin (value: 1)
     *          - B_0x02: PC6 pin (value: 2)
     *          - B_0x03: PD6 pin (value: 3)
     *          - B_0x04: PE6 pin (value: 4)
     *          - B_0x05: PF6 pin (value: 5)
     *          - B_0x06: PG6 pin (value: 6)
     *          - B_0x07: PH6 pin (value: 7)
     *          - B_0x08: PN6 pin (value: 8)
     *          - B_0x09: PO6 pin (value: 9)
     *          - B_0x0A: PP6 pin (value: 10)
     *          - B_0x0B: PQ6 pin (value: 11)
     */
        /** @brief PA6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x00 = 0;
        /** @brief PB6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x01 = 1;
        /** @brief PC6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x02 = 2;
        /** @brief PD6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x03 = 3;
        /** @brief PE6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x04 = 4;
        /** @brief PF6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x05 = 5;
        /** @brief PG6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x06 = 6;
        /** @brief PH6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x07 = 7;
        /** @brief PN6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x08 = 8;
        /** @brief PO6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x09 = 9;
        /** @brief PP6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x0A = 10;
        /** @brief PQ6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x0B = 11;

    /** @brief EXTI7 GPIO port selection. */
    using EXTI_EXTICR2_EXTI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA7 pin (value: 0)
     *          - B_0x01: PB7 pin (value: 1)
     *          - B_0x02: PC7 pin (value: 2)
     *          - B_0x03: PD7 pin (value: 3)
     *          - B_0x04: PE7 pin (value: 4)
     *          - B_0x05: PF7 pin (value: 5)
     *          - B_0x06: PG7 pin (value: 6)
     *          - B_0x07: PH7 pin (value: 7)
     *          - B_0x08: PN7 pin (value: 8)
     *          - B_0x09: PO7 pin (value: 9)
     *          - B_0x0A: PP7 pin (value: 10)
     *          - B_0x0B: PQ7 pin (value: 11)
     */
        /** @brief PA7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x00 = 0;
        /** @brief PB7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x01 = 1;
        /** @brief PC7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x02 = 2;
        /** @brief PD7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x03 = 3;
        /** @brief PE7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x04 = 4;
        /** @brief PF7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x05 = 5;
        /** @brief PG7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x06 = 6;
        /** @brief PH7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x07 = 7;
        /** @brief PN7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x08 = 8;
        /** @brief PO7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x09 = 9;
        /** @brief PP7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x0A = 10;
        /** @brief PQ7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x0B = 11;

    /** @brief EXTI external interrupt selection register 3 */
    using EXTI_EXTICR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI8 GPIO port selection. */
    using EXTI_EXTICR3_EXTI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA8 pin (value: 0)
     *          - B_0x01: PB8 pin (value: 1)
     *          - B_0x02: PC8 pin (value: 2)
     *          - B_0x03: PD8 pin (value: 3)
     *          - B_0x04: PE8 pin (value: 4)
     *          - B_0x05: PF8 pin (value: 5)
     *          - B_0x06: PG8 pin (value: 6)
     *          - B_0x07: PH8 pin (value: 7)
     *          - B_0x08: PN8 pin (value: 8)
     *          - B_0x09: PO8 pin (value: 9)
     *          - B_0x0A: PP8 pin (value: 10)
     *          - B_0x0B: PQ8 pin (value: 11)
     */
        /** @brief PA8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x00 = 0;
        /** @brief PB8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x01 = 1;
        /** @brief PC8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x02 = 2;
        /** @brief PD8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x03 = 3;
        /** @brief PE8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x04 = 4;
        /** @brief PF8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x05 = 5;
        /** @brief PG8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x06 = 6;
        /** @brief PH8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x07 = 7;
        /** @brief PN8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x08 = 8;
        /** @brief PO8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x09 = 9;
        /** @brief PP8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x0A = 10;
        /** @brief PQ8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x0B = 11;

    /** @brief EXTI9 GPIO port selection. */
    using EXTI_EXTICR3_EXTI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA9 pin (value: 0)
     *          - B_0x01: PB9 pin (value: 1)
     *          - B_0x02: PC9 pin (value: 2)
     *          - B_0x03: PD9 pin (value: 3)
     *          - B_0x04: PE9 pin (value: 4)
     *          - B_0x05: PF9 pin (value: 5)
     *          - B_0x06: PG9 pin (value: 6)
     *          - B_0x07: PH9 pin (value: 7)
     *          - B_0x08: PN9 pin (value: 8)
     *          - B_0x09: PO9 pin (value: 9)
     *          - B_0x0A: PP9 pin (value: 10)
     *          - B_0x0B: PQ9 pin (value: 11)
     */
        /** @brief PA9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x00 = 0;
        /** @brief PB9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x01 = 1;
        /** @brief PC9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x02 = 2;
        /** @brief PD9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x03 = 3;
        /** @brief PE9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x04 = 4;
        /** @brief PF9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x05 = 5;
        /** @brief PG9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x06 = 6;
        /** @brief PH9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x07 = 7;
        /** @brief PN9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x08 = 8;
        /** @brief PO9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x09 = 9;
        /** @brief PP9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x0A = 10;
        /** @brief PQ9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x0B = 11;

    /** @brief EXTI10 GPIO port selection. */
    using EXTI_EXTICR3_EXTI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA10 pin (value: 0)
     *          - B_0x01: PB10 pin (value: 1)
     *          - B_0x02: PC10 pin (value: 2)
     *          - B_0x03: PD10 pin (value: 3)
     *          - B_0x04: PE10 pin (value: 4)
     *          - B_0x05: PF10 pin (value: 5)
     *          - B_0x06: PG10 pin (value: 6)
     *          - B_0x07: PH10 pin (value: 7)
     *          - B_0x08: PN10 pin (value: 8)
     *          - B_0x09: PO10 pin (value: 9)
     *          - B_0x0A: PP10 pin (value: 10)
     *          - B_0x0B: PQ10 pin (value: 11)
     */
        /** @brief PA10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x00 = 0;
        /** @brief PB10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x01 = 1;
        /** @brief PC10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x02 = 2;
        /** @brief PD10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x03 = 3;
        /** @brief PE10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x04 = 4;
        /** @brief PF10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x05 = 5;
        /** @brief PG10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x06 = 6;
        /** @brief PH10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x07 = 7;
        /** @brief PN10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x08 = 8;
        /** @brief PO10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x09 = 9;
        /** @brief PP10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x0A = 10;
        /** @brief PQ10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x0B = 11;

    /** @brief EXTI11 GPIO port selection. */
    using EXTI_EXTICR3_EXTI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA11 pin (value: 0)
     *          - B_0x01: PB11 pin (value: 1)
     *          - B_0x02: PC11 pin (value: 2)
     *          - B_0x03: PD11 pin (value: 3)
     *          - B_0x04: PE11 pin (value: 4)
     *          - B_0x05: PF11 pin (value: 5)
     *          - B_0x06: PG11 pin (value: 6)
     *          - B_0x07: PH11 pin (value: 7)
     *          - B_0x08: PN11 pin (value: 8)
     *          - B_0x09: PO11 pin (value: 9)
     *          - B_0x0A: PO11 pin (value: 10)
     *          - B_0x0B: PQ11 pin (value: 11)
     */
        /** @brief PA11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x00 = 0;
        /** @brief PB11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x01 = 1;
        /** @brief PC11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x02 = 2;
        /** @brief PD11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x03 = 3;
        /** @brief PE11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x04 = 4;
        /** @brief PF11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x05 = 5;
        /** @brief PG11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x06 = 6;
        /** @brief PH11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x07 = 7;
        /** @brief PN11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x08 = 8;
        /** @brief PO11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x09 = 9;
        /** @brief PO11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x0A = 10;
        /** @brief PQ11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x0B = 11;

    /** @brief EXTI external interrupt selection register 4 */
    using EXTI_EXTICR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI12 GPIO port selection. */
    using EXTI_EXTICR4_EXTI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA12 pin (value: 0)
     *          - B_0x01: PB12 pin (value: 1)
     *          - B_0x02: PC12 pin (value: 2)
     *          - B_0x03: PD12 pin (value: 3)
     *          - B_0x04: PE12 pin (value: 4)
     *          - B_0x05: PF12 pin (value: 5)
     *          - B_0x06: PG12 pin (value: 6)
     *          - B_0x07: PH12 pin (value: 7)
     *          - B_0x08: PO12 pin (value: 8)
     *          - B_0x09: PP12 pin (value: 9)
     *          - B_0x0A: PQ12 pin (value: 10)
     *          - B_0x0B: PN12 pin (value: 11)
     */
        /** @brief PA12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x00 = 0;
        /** @brief PB12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x01 = 1;
        /** @brief PC12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x02 = 2;
        /** @brief PD12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x03 = 3;
        /** @brief PE12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x04 = 4;
        /** @brief PF12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x05 = 5;
        /** @brief PG12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x06 = 6;
        /** @brief PH12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x07 = 7;
        /** @brief PO12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x08 = 8;
        /** @brief PP12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x09 = 9;
        /** @brief PQ12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x0A = 10;
        /** @brief PN12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x0B = 11;

    /** @brief EXTI13 GPIO port selection. */
    using EXTI_EXTICR4_EXTI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA13 pin (value: 0)
     *          - B_0x01: PB13 pin (value: 1)
     *          - B_0x02: PC13 pin (value: 2)
     *          - B_0x03: PD13 pin (value: 3)
     *          - B_0x04: PE13 pin (value: 4)
     *          - B_0x05: PF13 pin (value: 5)
     *          - B_0x06: PG13 pin (value: 6)
     *          - B_0x07: PH13 pin (value: 7)
     *          - B_0x08: PO13 pin (value: 8)
     *          - B_0x09: PP13 pin (value: 9)
     *          - B_0x0A: PQ13 pin (value: 10)
     *          - B_0x0B: PN13 pin (value: 11)
     */
        /** @brief PA13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x00 = 0;
        /** @brief PB13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x01 = 1;
        /** @brief PC13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x02 = 2;
        /** @brief PD13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x03 = 3;
        /** @brief PE13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x04 = 4;
        /** @brief PF13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x05 = 5;
        /** @brief PG13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x06 = 6;
        /** @brief PH13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x07 = 7;
        /** @brief PO13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x08 = 8;
        /** @brief PP13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x09 = 9;
        /** @brief PQ13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x0A = 10;
        /** @brief PN13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x0B = 11;

    /** @brief EXTI14 GPIO port selection. */
    using EXTI_EXTICR4_EXTI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA14 pin (value: 0)
     *          - B_0x01: PB14 pin (value: 1)
     *          - B_0x02: PC14 pin (value: 2)
     *          - B_0x03: PD14 pin (value: 3)
     *          - B_0x04: PE14 pin (value: 4)
     *          - B_0x05: PF14 pin (value: 5)
     *          - B_0x06: PG14 pin (value: 6)
     *          - B_0x07: PH14 pin (value: 7)
     *          - B_0x08: PN14 pin (value: 8)
     *          - B_0x09: PO14 pin (value: 9)
     *          - B_0x0A: PP14 pin (value: 10)
     *          - B_0x0B: PQ14 pin (value: 11)
     */
        /** @brief PA14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x00 = 0;
        /** @brief PB14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x01 = 1;
        /** @brief PC14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x02 = 2;
        /** @brief PD14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x03 = 3;
        /** @brief PE14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x04 = 4;
        /** @brief PF14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x05 = 5;
        /** @brief PG14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x06 = 6;
        /** @brief PH14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x07 = 7;
        /** @brief PN14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x08 = 8;
        /** @brief PO14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x09 = 9;
        /** @brief PP14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x0A = 10;
        /** @brief PQ14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x0B = 11;

    /** @brief EXTI15 GPIO port selection. */
    using EXTI_EXTICR4_EXTI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA15 pin (value: 0)
     *          - B_0x01: PB15 pin (value: 1)
     *          - B_0x02: PC15 pin (value: 2)
     *          - B_0x03: PD15 pin (value: 3)
     *          - B_0x04: PE15 pin (value: 4)
     *          - B_0x05: PF15 pin (value: 5)
     *          - B_0x06: PG15 pin (value: 6)
     *          - B_0x07: PH15 pin (value: 7)
     *          - B_0x08: PN15 pin (value: 8)
     *          - B_0x09: PO15 pin (value: 9)
     *          - B_0x0A: PP15 pin (value: 10)
     *          - B_0x0B: PQ15 pin (value: 11)
     */
        /** @brief PA15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x00 = 0;
        /** @brief PB15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x01 = 1;
        /** @brief PC15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x02 = 2;
        /** @brief PD15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x03 = 3;
        /** @brief PE15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x04 = 4;
        /** @brief PF15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x05 = 5;
        /** @brief PG15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x06 = 6;
        /** @brief PH15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x07 = 7;
        /** @brief PN15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x08 = 8;
        /** @brief PO15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x09 = 9;
        /** @brief PP15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x0A = 10;
        /** @brief PQ15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x0B = 11;

    /** @brief EXTI lock register */
    using EXTI_LOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global security privilege EXTI_SECCFGRx/PRIVCFGRx */
    using EXTI_LOCKR_GLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Security, privilege open can be modified. (value: 0)
     *          - B_0x1: Security, privilege locked can no longer be modified. (value: 1)
     */
        /** @brief Security, privilege open can be modified. */
    constexpr std::uint32_t EXTI_LOCKR_GLOCK_B_0x0 = 0;
        /** @brief Security, privilege locked can no longer be modified. */
    constexpr std::uint32_t EXTI_LOCKR_GLOCK_B_0x1 = 1;

    /** @brief EXTI CPU wake-up with interrupt mask register 1 */
    using EXTI_IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM17_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM17_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM18_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM18_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM19_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM19_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM20_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM20_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM21_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM21_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM22_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM22_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM23_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM23_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM24_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM24_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM25_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM25_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM26_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM26_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM27_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM27_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM28_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM28_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM29_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM29_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM30_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM30_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM31_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR1_IM31_B_0x1 = 1;

    /** @brief EXTI CPU wake-up with event mask register 1 */
    using EXTI_EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR1_EM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM17_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM17_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM18_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM18_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM19_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM19_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM20_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM20_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM21_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM21_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM22_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM22_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM23_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM23_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM24_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM24_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM25_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM25_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM26_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM26_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM27_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM27_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM28_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM28_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM29_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM29_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM30_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM30_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR1_EM31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM31_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM31_B_0x1 = 1;

    /** @brief EXTI CPU wake-up with interrupt mask register 2 */
    using EXTI_IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR2_IM60_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR2_IM60_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR2_IM61_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR2_IM61_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR2_IM62_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR2_IM62_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR2_IM63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR2_IM63_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR2_IM63_B_0x1 = 1;

    /** @brief EXTI CPU wake-up with event mask register 2 */
    using EXTI_EMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR2_EM58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR2_EM60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR2_EM60_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR2_EM60_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR2_EM61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR2_EM61_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR2_EM61_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR2_EM62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR2_EM62_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR2_EM62_B_0x1 = 1;

    /** @brief CPU wake-up with event on event input x */
    using EXTI_EMR2_EM63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR2_EM63_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR2_EM63_B_0x1 = 1;

    /** @brief EXTI CPU wake-up with interrupt mask register 3 */
    using EXTI_IMR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR3_IM74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input 77 */
    using EXTI_IMR3_IM77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. (value: 1)
     */
        /** @brief Wake-up and interrupt from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR3_IM77_B_0x0 = 0;
        /** @brief Wake-up and interrupt from input event x is unmasked. CPU wake-up event and configurable event interrupt generated. */
    constexpr std::uint32_t EXTI_IMR3_IM77_B_0x1 = 1;

    /** @brief EXTI CPU wake-up with event mask register 3 */
    using EXTI_EMR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_EMR3_EM74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with event on event input 77 */
    using EXTI_EMR3_EM77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event request from line x is masked. */
    constexpr std::uint32_t EXTI_EMR3_EM77_B_0x0 = 0;
        /** @brief Wake-up with event request from line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR3_EM77_B_0x1 = 1;

}

#endif
