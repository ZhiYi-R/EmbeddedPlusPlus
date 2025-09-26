/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL5X_CM4_EXTI_HPP
#define EMBEDDED_PP_STM32WL5X_CM4_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief External interrupt/event controller */
namespace STM32WL5x_CM4::EXTI {

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 0 */
    using EXTI_RTSR1_RT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 1 */
    using EXTI_RTSR1_RT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 2 */
    using EXTI_RTSR1_RT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 3 */
    using EXTI_RTSR1_RT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 4 */
    using EXTI_RTSR1_RT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 5 */
    using EXTI_RTSR1_RT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 6 */
    using EXTI_RTSR1_RT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 7 */
    using EXTI_RTSR1_RT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 8 */
    using EXTI_RTSR1_RT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 9 */
    using EXTI_RTSR1_RT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 10 */
    using EXTI_RTSR1_RT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 11 */
    using EXTI_RTSR1_RT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 12 */
    using EXTI_RTSR1_RT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 13 */
    using EXTI_RTSR1_RT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 14 */
    using EXTI_RTSR1_RT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 15 */
    using EXTI_RTSR1_RT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 16 */
    using EXTI_RTSR1_RT16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 21 */
    using EXTI_RTSR1_RT21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 22 Note: The configurable event inputs are edge triggered. No glitch must be generated on these inputs. If a rising edge on the configurable event input occurs while writing to the register, the associated pending bit is not set. Note: Rising and falling edge triggers can be set for the same configurable event input. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT22_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT22_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 0 */
    using EXTI_FTSR1_FT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 1 */
    using EXTI_FTSR1_FT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 2 */
    using EXTI_FTSR1_FT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 3 */
    using EXTI_FTSR1_FT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 4 */
    using EXTI_FTSR1_FT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 5 */
    using EXTI_FTSR1_FT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 6 */
    using EXTI_FTSR1_FT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 7 */
    using EXTI_FTSR1_FT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 8 */
    using EXTI_FTSR1_FT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 9 */
    using EXTI_FTSR1_FT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 10 */
    using EXTI_FTSR1_FT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 11 */
    using EXTI_FTSR1_FT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 12 */
    using EXTI_FTSR1_FT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 13 */
    using EXTI_FTSR1_FT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 14 */
    using EXTI_FTSR1_FT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 15 */
    using EXTI_FTSR1_FT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 16 */
    using EXTI_FTSR1_FT16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 21 */
    using EXTI_FTSR1_FT21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 22 Note: The configurable event inputs are edge triggered. No glitch must be generated on these inputs. If a falling edge on the configurable event input occurs while writing to the register, the associated pending bit is not set. Note: Rising and falling edge triggers can be set for the same configurable event input. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT22_B_0x0 = 0;
        /** @brief falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT22_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 0 */
    using EXTI_SWIER1_SWI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 1 */
    using EXTI_SWIER1_SWI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 2 */
    using EXTI_SWIER1_SWI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 3 */
    using EXTI_SWIER1_SWI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 4 */
    using EXTI_SWIER1_SWI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 5 */
    using EXTI_SWIER1_SWI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 6 */
    using EXTI_SWIER1_SWI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 7 */
    using EXTI_SWIER1_SWI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 8 */
    using EXTI_SWIER1_SWI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 9 */
    using EXTI_SWIER1_SWI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 10 */
    using EXTI_SWIER1_SWI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 11 */
    using EXTI_SWIER1_SWI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 12 */
    using EXTI_SWIER1_SWI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 13 */
    using EXTI_SWIER1_SWI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 14 */
    using EXTI_SWIER1_SWI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 15 */
    using EXTI_SWIER1_SWI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 16 */
    using EXTI_SWIER1_SWI16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 21 */
    using EXTI_SWIER1_SWI21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line 22 A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. This bit always returns 0 when read. This bit is automatically cleared by hardware. */
    using EXTI_SWIER1_SWI22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers an event on line 22. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI22_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers an event on line 22. */
    constexpr std::uint32_t EXTI_SWIER1_SWI22_B_0x1 = 1;

    /** @brief EXTI pending register */
    using EXTI_PR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 0 */
    using EXTI_PR1_PIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 1 */
    using EXTI_PR1_PIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 2 */
    using EXTI_PR1_PIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 3 */
    using EXTI_PR1_PIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 4 */
    using EXTI_PR1_PIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 5 */
    using EXTI_PR1_PIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 6 */
    using EXTI_PR1_PIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 7 */
    using EXTI_PR1_PIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 8 */
    using EXTI_PR1_PIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 9 */
    using EXTI_PR1_PIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 10 */
    using EXTI_PR1_PIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 11 */
    using EXTI_PR1_PIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 12 */
    using EXTI_PR1_PIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 13 */
    using EXTI_PR1_PIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 14 */
    using EXTI_PR1_PIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 15 */
    using EXTI_PR1_PIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 16 */
    using EXTI_PR1_PIF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 21 */
    using EXTI_PR1_PIF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 22 These bits are set when the selected edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_PR1_PIF22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred. (value: 0)
     *          - B_0x1: Trigger request occurred. (value: 1)
     */
        /** @brief No trigger request occurred. */
    constexpr std::uint32_t EXTI_PR1_PIF22_B_0x0 = 0;
        /** @brief Trigger request occurred. */
    constexpr std::uint32_t EXTI_PR1_PIF22_B_0x1 = 1;

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 34 */
    using EXTI_RTSR2_RT34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 40 */
    using EXTI_RTSR2_RT40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 41 */
    using EXTI_RTSR2_RT41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rising trigger event configuration bit of configurable event input 45 Note: The configurable event inputs are edge triggered. No glitch must be generated on these inputs. If a rising edge on the configurable event input occurs while writing to the register, the associated pending bit is not set. Note: Rising and falling edge triggers can be set for the same configurable event input. In this case, both edges generate a trigger. */
    using EXTI_RTSR2_RT45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_RT45_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR2_RT45_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 34 */
    using EXTI_FTSR2_FT34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 40 */
    using EXTI_FTSR2_FT40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 41 */
    using EXTI_FTSR2_FT41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief falling trigger event configuration bit of configurable event input 45 Note: The configurable event inputs are edge triggered. No glitch must be generated on these inputs. If a falling edge on the configurable event input occurs while writing to the register, the associated pending bit is not set. Note: Rising and falling edge triggers can be set for the same configurable event input. In this case, both edges generate a trigger. */
    using EXTI_FTSR2_FT45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_FT45_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR2_FT45_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software interrupt on event 34 */
    using EXTI_SWIER2_SWI34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software interrupt on event 40 */
    using EXTI_SWIER2_SWI40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software interrupt on event 41 */
    using EXTI_SWIER2_SWI41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software interrupt on event 45 A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. This bit always returns 0 when read. This bit is automatically cleared by hardware. */
    using EXTI_SWIER2_SWI45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 to this bit triggers an event on line 45. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER2_SWI45_B_0x0 = 0;
        /** @brief Writing 1 to this bit triggers an event on line 45. */
    constexpr std::uint32_t EXTI_SWIER2_SWI45_B_0x1 = 1;

    /** @brief EXTI pending register */
    using EXTI_PR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 34 */
    using EXTI_PR2_PIF34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 40 */
    using EXTI_PR2_PIF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 41 */
    using EXTI_PR2_PIF41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pending bit on event input 45 These bits are set when the selected edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_PR2_PIF45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger request occurred. (value: 0)
     *          - B_0x1: Trigger request occurred. (value: 1)
     */
        /** @brief No trigger request occurred. */
    constexpr std::uint32_t EXTI_PR2_PIF45_B_0x0 = 0;
        /** @brief Trigger request occurred. */
    constexpr std::uint32_t EXTI_PR2_PIF45_B_0x1 = 1;

    /** @brief EXTI interrupt mask register */
    using EXTI_C1IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input x For each bit of this field: */
    using EXTI_C1IMR1_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with Interrupt request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from line x is masked. */
    constexpr std::uint32_t EXTI_C1IMR1_IM_B_0x0 = 0;
        /** @brief Wake-up with Interrupt request from line x is unmasked. */
    constexpr std::uint32_t EXTI_C1IMR1_IM_B_0x1 = 1;

    /** @brief EXTI event mask register */
    using EXTI_C1EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 0 */
    using EXTI_C1EMR1_EM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 1 */
    using EXTI_C1EMR1_EM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 2 */
    using EXTI_C1EMR1_EM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 3 */
    using EXTI_C1EMR1_EM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 4 */
    using EXTI_C1EMR1_EM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 5 */
    using EXTI_C1EMR1_EM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 6 */
    using EXTI_C1EMR1_EM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 7 */
    using EXTI_C1EMR1_EM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 8 */
    using EXTI_C1EMR1_EM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 19 */
    using EXTI_C1EMR1_EM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 10 */
    using EXTI_C1EMR1_EM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 11 */
    using EXTI_C1EMR1_EM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 12 */
    using EXTI_C1EMR1_EM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 13 */
    using EXTI_C1EMR1_EM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 14 */
    using EXTI_C1EMR1_EM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 15 */
    using EXTI_C1EMR1_EM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 17 */
    using EXTI_C1EMR1_EM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 18 */
    using EXTI_C1EMR1_EM18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 19 */
    using EXTI_C1EMR1_EM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 20 */
    using EXTI_C1EMR1_EM20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 21 */
    using EXTI_C1EMR1_EM21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 22 */
    using EXTI_C1EMR1_EM22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 22 is masked. (value: 0)
     *          - B_0x1: Event request from line 22 is unmasked. (value: 1)
     */
        /** @brief Event request from line 22 is masked. */
    constexpr std::uint32_t EXTI_C1EMR1_EM22_B_0x0 = 0;
        /** @brief Event request from line 22 is unmasked. */
    constexpr std::uint32_t EXTI_C1EMR1_EM22_B_0x1 = 1;

    /** @brief EXTI interrupt mask register */
    using EXTI_C1IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 34 */
    using EXTI_C1IMR2_IM34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 36 */
    using EXTI_C1IMR2_IM36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 37 */
    using EXTI_C1IMR2_IM37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 38 */
    using EXTI_C1IMR2_IM38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 39 */
    using EXTI_C1IMR2_IM39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 40 */
    using EXTI_C1IMR2_IM40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 41 */
    using EXTI_C1IMR2_IM41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 42 */
    using EXTI_C1IMR2_IM42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 43 */
    using EXTI_C1IMR2_IM43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 44 */
    using EXTI_C1IMR2_IM44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 45 */
    using EXTI_C1IMR2_IM45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 46 */
    using EXTI_C1IMR2_IM46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from line 46 is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from line 46 is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from line 46 is masked. */
    constexpr std::uint32_t EXTI_C1IMR2_IM46_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from line 46 is unmasked. */
    constexpr std::uint32_t EXTI_C1IMR2_IM46_B_0x1 = 1;

    /** @brief EXTI event mask register */
    using EXTI_C1EMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 40 */
    using EXTI_C1EMR2_EM40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 41 */
    using EXTI_C1EMR2_EM41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 41 is masked. (value: 0)
     *          - B_0x1: Event request from line 41 is unmasked. (value: 1)
     */
        /** @brief Event request from line 41 is masked. */
    constexpr std::uint32_t EXTI_C1EMR2_EM41_B_0x0 = 0;
        /** @brief Event request from line 41 is unmasked. */
    constexpr std::uint32_t EXTI_C1EMR2_EM41_B_0x1 = 1;

    /** @brief EXTI interrupt mask register */
    using EXTI_C2IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input x For each bit of this field: */
    using EXTI_C2IMR1_IM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from line x is masked. (value: 0)
     *          - B_0x1: Wake-up with Interrupt request from line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from line x is masked. */
    constexpr std::uint32_t EXTI_C2IMR1_IM_B_0x0 = 0;
        /** @brief Wake-up with Interrupt request from line x is unmasked. */
    constexpr std::uint32_t EXTI_C2IMR1_IM_B_0x1 = 1;

    /** @brief EXTI event mask register */
    using EXTI_C2EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 0 */
    using EXTI_C2EMR1_EM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 1 */
    using EXTI_C2EMR1_EM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 2 */
    using EXTI_C2EMR1_EM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 3 */
    using EXTI_C2EMR1_EM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 4 */
    using EXTI_C2EMR1_EM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 5 */
    using EXTI_C2EMR1_EM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 6 */
    using EXTI_C2EMR1_EM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 7 */
    using EXTI_C2EMR1_EM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 8 */
    using EXTI_C2EMR1_EM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 19 */
    using EXTI_C2EMR1_EM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 10 */
    using EXTI_C2EMR1_EM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 11 */
    using EXTI_C2EMR1_EM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 12 */
    using EXTI_C2EMR1_EM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 13 */
    using EXTI_C2EMR1_EM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 14 */
    using EXTI_C2EMR1_EM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 15 */
    using EXTI_C2EMR1_EM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 17 */
    using EXTI_C2EMR1_EM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 18 */
    using EXTI_C2EMR1_EM18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 19 */
    using EXTI_C2EMR1_EM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 20 */
    using EXTI_C2EMR1_EM20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 21 */
    using EXTI_C2EMR1_EM21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 22 */
    using EXTI_C2EMR1_EM22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 22 is masked. (value: 0)
     *          - B_0x1: Event request from line 22 is unmasked. (value: 1)
     */
        /** @brief Event request from line 22 is masked. */
    constexpr std::uint32_t EXTI_C2EMR1_EM22_B_0x0 = 0;
        /** @brief Event request from line 22 is unmasked. */
    constexpr std::uint32_t EXTI_C2EMR1_EM22_B_0x1 = 1;

    /** @brief EXTI interrupt mask register */
    using EXTI_C2IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 34 */
    using EXTI_C2IMR2_IM34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 36 */
    using EXTI_C2IMR2_IM36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 37 */
    using EXTI_C2IMR2_IM37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 38 */
    using EXTI_C2IMR2_IM38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 39 */
    using EXTI_C2IMR2_IM39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 40 */
    using EXTI_C2IMR2_IM40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 41 */
    using EXTI_C2IMR2_IM41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 42 */
    using EXTI_C2IMR2_IM42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 43 */
    using EXTI_C2IMR2_IM43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 44 */
    using EXTI_C2IMR2_IM44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 45 */
    using EXTI_C2IMR2_IM45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with interrupt mask on event input 46 */
    using EXTI_C2IMR2_IM46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from line 46 is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from line 46 is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from line 46 is masked. */
    constexpr std::uint32_t EXTI_C2IMR2_IM46_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from line 46 is unmasked. */
    constexpr std::uint32_t EXTI_C2IMR2_IM46_B_0x1 = 1;

    /** @brief EXTI event mask register */
    using EXTI_C2EMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 40 */
    using EXTI_C2EMR2_EM40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up with event generation mask on event input 41 */
    using EXTI_C2EMR2_EM41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event request from line 41 is masked. (value: 0)
     *          - B_0x1: Event request from line 41 is unmasked. (value: 1)
     */
        /** @brief Event request from line 41 is masked. */
    constexpr std::uint32_t EXTI_C2EMR2_EM41_B_0x0 = 0;
        /** @brief Event request from line 41 is unmasked. */
    constexpr std::uint32_t EXTI_C2EMR2_EM41_B_0x1 = 1;

}

#endif
