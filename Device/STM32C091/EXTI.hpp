/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32C091_EXTI_HPP
#define EMBEDDED_PP_STM32C091_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief EXTI address block description */
namespace STM32C091::EXTI {

    /** @brief EXTI rising trigger selection register 1 */
    using EXTI_RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT0_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT0_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT1_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT1_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT2_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT2_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT3_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT3_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT4_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT4_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT5_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT5_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT6_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT6_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT7_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT7_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT8_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT8_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT9_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT9_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT10_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT10_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT11_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT11_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT12_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT12_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT13_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT13_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT14_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT14_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable line x (x = 15 to 0) Each bit enables/disables the rising edge trigger for the event and interrupt on the corresponding line. Note: The configurable lines are edge triggered; no glitch must be generated on these inputs. If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR1_RT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR1_RT15_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR1_RT15_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register 1 */
    using EXTI_FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT0_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT0_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT1_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT1_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT2_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT2_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT3_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT3_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT4_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT4_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT5_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT5_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT6_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT6_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT7_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT7_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT8_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT8_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT9_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT9_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT10_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT10_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT11_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT11_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT12_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT12_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT13_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT13_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT14_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT14_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable line x (x = 15 to 0). Each bit enables/disables the falling edge trigger for the event and interrupt on the corresponding line. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR1_FT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR1_FT15_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR1_FT15_B_0x1 = 1;

    /** @brief EXTI software interrupt event register 1 */
    using EXTI_SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI0_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI0_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI1_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI1_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI2_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI2_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI3_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI3_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI4_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI4_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI5_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI5_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI6_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI6_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI7_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI7_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI8_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI8_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI9_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI9_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI10_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI10_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI11_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI11_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI12_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI12_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI13_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI13_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI14_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI14_B_0x1 = 1;

    /** @brief Software rising edge event trigger on line x (x = 15 to 0) Setting of any bit by software triggers a rising edge event on the corresponding line x, resulting in an interrupt, independently of EXTI_RTSR1 and EXTI_FTSR1 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER1_SWI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER1_SWI15_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER1_SWI15_B_0x1 = 1;

    /** @brief EXTI rising edge pending register 1 */
    using EXTI_RPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF0_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF0_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF1_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF1_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF2_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF2_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF3_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF3_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF4_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF4_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF5_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF5_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF6_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF6_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF7_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF7_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF8_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF8_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF9_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF9_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF10_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF10_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF11_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF11_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF12_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF12_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF13_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF13_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF14_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF14_B_0x1 = 1;

    /** @brief Rising edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR1_RPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF15_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF15_B_0x1 = 1;

    /** @brief EXTI falling edge pending register 1 */
    using EXTI_FPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF0_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF0_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF1_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF1_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF2_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF2_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF3_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF3_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF4_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF4_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF5_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF5_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF6_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF6_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF7_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF7_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF8_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF8_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF9_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF9_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF10_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF10_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF11_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF11_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF12_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF12_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF13_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF13_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF14_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF14_B_0x1 = 1;

    /** @brief Falling edge event pending for configurable line x (x = 15 to 0) Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER1 register) on the corresponding line. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR1_FPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF15_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF15_B_0x1 = 1;

    /** @brief EXTI rising trigger selection register 2 */
    using EXTI_RTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable line 34 Each bit enables/disables the rising edge trigger for the event and interrupt on the line 34. This configurable line is edge triggered; no glitch must be generated on this inputs. Note: If a rising edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Rising edge trigger can be set for a line with falling edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_RTSR2_RT34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_RTSR2_RT34_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_RTSR2_RT34_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register 2 */
    using EXTI_FTSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable line 34. Each bit enables/disables the falling edge trigger for the event and interrupt on the line 34. The configurable lines are edge triggered; no glitch must be generated on these inputs. Note: If a falling edge on the configurable line occurs during writing of the register, the associated pending bit is not set. Falling edge trigger can be set for a line with rising edge trigger enabled. In this case, both edges generate a trigger. */
    using EXTI_FTSR2_FT34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t EXTI_FTSR2_FT34_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t EXTI_FTSR2_FT34_B_0x1 = 1;

    /** @brief EXTI software interrupt event register 2 */
    using EXTI_SWIER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software rising edge event trigger on line 34 Setting of any bit by software triggers a rising edge event on the line 34, resulting in an interrupt, independently of EXTI_RTSR2 and EXTI_FTSR2 settings. The bits are automatically cleared by HW. Reading of any bit always returns 0. */
    using EXTI_SWIER2_SWI34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rising edge event generated on the corresponding line, followed by an interrupt (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t EXTI_SWIER2_SWI34_B_0x0 = 0;
        /** @brief Rising edge event generated on the corresponding line, followed by an interrupt */
    constexpr std::uint32_t EXTI_SWIER2_SWI34_B_0x1 = 1;

    /** @brief EXTI rising edge pending register 2 */
    using EXTI_RPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising edge event pending for configurable line 34 Each bit is set upon a rising edge event generated by hardware or by software (through the EXTI_SWIER2 register) on the line 34. Each bit is cleared by writing 1 into it. */
    using EXTI_RPR2_RPIF34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR2_RPIF34_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR2_RPIF34_B_0x1 = 1;

    /** @brief EXTI falling edge pending register 2 */
    using EXTI_FPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling edge event pending for configurable line 34 Each bit is set upon a falling edge event generated by hardware or by software (through the EXTI_SWIER2 register) on the line 34. Each bit is cleared by writing 1 into it. */
    using EXTI_FPR2_FPIF34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR2_FPIF34_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR2_FPIF34_B_0x1 = 1;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI0 GPIO port selection These bits are written by software to select the source input for EXTI0 external interrupt. Others reserved */
    using EXTI_EXTICR1_EXTI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[0] pin (value: 0)
     *          - B_0x01: PB[0] pin (value: 1)
     *          - B_0x02: PC[0] pin (value: 2)
     *          - B_0x03: PD[0] pin (value: 3)
     *          - B_0x05: PF[0] pin (value: 5)
     */
        /** @brief PA[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x00 = 0;
        /** @brief PB[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x01 = 1;
        /** @brief PC[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x02 = 2;
        /** @brief PD[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x03 = 3;
        /** @brief PF[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x05 = 5;

    /** @brief EXTI1 GPIO port selection These bits are written by software to select the source input for EXTI1 external interrupt. Others reserved */
    using EXTI_EXTICR1_EXTI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[1] pin (value: 0)
     *          - B_0x01: PB[1] pin (value: 1)
     *          - B_0x02: PC[1] pin (value: 2)
     *          - B_0x03: PD[1] pin (value: 3)
     *          - B_0x05: PF[1] pin (value: 5)
     */
        /** @brief PA[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x00 = 0;
        /** @brief PB[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x01 = 1;
        /** @brief PC[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x02 = 2;
        /** @brief PD[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x03 = 3;
        /** @brief PF[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x05 = 5;

    /** @brief EXTI2 GPIO port selection These bits are written by software to select the source input for EXTI2 external interrupt. Others reserved */
    using EXTI_EXTICR1_EXTI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[2] pin (value: 0)
     *          - B_0x01: PB[2] pin (value: 1)
     *          - B_0x02: PC[2] pin (value: 2)
     *          - B_0x03: PD[2] pin (value: 3)
     *          - B_0x05: PF[2] pin (value: 5)
     */
        /** @brief PA[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x00 = 0;
        /** @brief PB[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x01 = 1;
        /** @brief PC[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x02 = 2;
        /** @brief PD[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x03 = 3;
        /** @brief PF[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x05 = 5;

    /** @brief EXTI3 GPIO port selection These bits are written by software to select the source input for EXTI3 external interrupt. Others reserved */
    using EXTI_EXTICR1_EXTI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[3] pin (value: 0)
     *          - B_0x01: PB[3] pin (value: 1)
     *          - B_0x02: PC[3] pin (value: 2)
     *          - B_0x03: PD[3] pin (value: 3)
     *          - B_0x05: PF[3] pin (value: 5)
     */
        /** @brief PA[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x00 = 0;
        /** @brief PB[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x01 = 1;
        /** @brief PC[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x02 = 2;
        /** @brief PD[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x03 = 3;
        /** @brief PF[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x05 = 5;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI4 GPIO port selection These bits are written by software to select the source input for EXTI4 external interrupt. Others reserved */
    using EXTI_EXTICR2_EXTI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[4] pin (value: 0)
     *          - B_0x01: PB[4] pin (value: 1)
     *          - B_0x02: PC[4] pin (value: 2)
     *          - B_0x03: PD[4] pin (value: 3)
     *          - B_0x05: PF[4] pin (value: 5)
     */
        /** @brief PA[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x00 = 0;
        /** @brief PB[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x01 = 1;
        /** @brief PC[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x02 = 2;
        /** @brief PD[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x03 = 3;
        /** @brief PF[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x05 = 5;

    /** @brief EXTI5 GPIO port selection These bits are written by software to select the source input for EXTI5 external interrupt. Others reserved */
    using EXTI_EXTICR2_EXTI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[5] pin (value: 0)
     *          - B_0x01: PB[5] pin (value: 1)
     *          - B_0x02: PC[5] pin (value: 2)
     *          - B_0x03: PD[5] pin (value: 3)
     *          - B_0x05: PF[5] pin (value: 5)
     */
        /** @brief PA[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x00 = 0;
        /** @brief PB[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x01 = 1;
        /** @brief PC[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x02 = 2;
        /** @brief PD[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x03 = 3;
        /** @brief PF[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x05 = 5;

    /** @brief EXTI6 GPIO port selection These bits are written by software to select the source input for EXTI6 external interrupt. Others reserved */
    using EXTI_EXTICR2_EXTI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[6] pin (value: 0)
     *          - B_0x01: PB[6] pin (value: 1)
     *          - B_0x02: PC[6] pin (value: 2)
     *          - B_0x03: PD[6] pin (value: 3)
     *          - B_0x05: PF[6] pin (value: 5)
     */
        /** @brief PA[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x00 = 0;
        /** @brief PB[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x01 = 1;
        /** @brief PC[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x02 = 2;
        /** @brief PD[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x03 = 3;
        /** @brief PF[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x05 = 5;

    /** @brief EXTI7 GPIO port selection These bits are written by software to select the source input for EXTI7 external interrupt. Others reserved */
    using EXTI_EXTICR2_EXTI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[7] pin (value: 0)
     *          - B_0x01: PB[7] pin (value: 1)
     *          - B_0x02: PC[7] pin (value: 2)
     *          - B_0x03: PD[7] pin (value: 3)
     *          - B_0x05: PF[7] pin (value: 5)
     */
        /** @brief PA[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x00 = 0;
        /** @brief PB[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x01 = 1;
        /** @brief PC[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x02 = 2;
        /** @brief PD[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x03 = 3;
        /** @brief PF[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x05 = 5;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI8 GPIO port selection These bits are written by software to select the source input for EXTI8 external interrupt. Others reserved */
    using EXTI_EXTICR3_EXTI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[8] pin (value: 0)
     *          - B_0x01: PB[8] pin (value: 1)
     *          - B_0x02: PC[8] pin (value: 2)
     *          - B_0x03: PD[8] pin (value: 3)
     *          - B_0x05: PF[8] pin (value: 5)
     */
        /** @brief PA[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x00 = 0;
        /** @brief PB[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x01 = 1;
        /** @brief PC[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x02 = 2;
        /** @brief PD[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x03 = 3;
        /** @brief PF[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x05 = 5;

    /** @brief EXTI9 GPIO port selection These bits are written by software to select the source input for EXTI9 external interrupt. Others reserved */
    using EXTI_EXTICR3_EXTI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[9] pin (value: 0)
     *          - B_0x01: PB[9] pin (value: 1)
     *          - B_0x02: PC[9] pin (value: 2)
     *          - B_0x03: PD[9] pin (value: 3)
     *          - B_0x05: PF[9] pin (value: 5)
     */
        /** @brief PA[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x00 = 0;
        /** @brief PB[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x01 = 1;
        /** @brief PC[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x02 = 2;
        /** @brief PD[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x03 = 3;
        /** @brief PF[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x05 = 5;

    /** @brief EXTI10 GPIO port selection These bits are written by software to select the source input for EXTI10 external interrupt. Others reserved */
    using EXTI_EXTICR3_EXTI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[10] pin (value: 0)
     *          - B_0x01: PB[10] pin (value: 1)
     *          - B_0x02: PC[10] pin (value: 2)
     *          - B_0x03: PD[10] pin (value: 3)
     *          - B_0x05: PF[10] pin (value: 5)
     */
        /** @brief PA[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x00 = 0;
        /** @brief PB[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x01 = 1;
        /** @brief PC[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x02 = 2;
        /** @brief PD[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x03 = 3;
        /** @brief PF[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x05 = 5;

    /** @brief EXTI11 GPIO port selection These bits are written by software to select the source input for EXTI11 external interrupt. Others reserved */
    using EXTI_EXTICR3_EXTI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[11] pin (value: 0)
     *          - B_0x01: PB[11] pin (value: 1)
     *          - B_0x02: PC[11] pin (value: 2)
     *          - B_0x03: PD[11] pin (value: 3)
     *          - B_0x05: PF[11] pin (value: 5)
     */
        /** @brief PA[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x00 = 0;
        /** @brief PB[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x01 = 1;
        /** @brief PC[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x02 = 2;
        /** @brief PD[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x03 = 3;
        /** @brief PF[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x05 = 5;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI12 GPIO port selection These bits are written by software to select the source input for EXTI12 external interrupt. Others reserved */
    using EXTI_EXTICR4_EXTI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[12] pin (value: 0)
     *          - B_0x01: PB[12] pin (value: 1)
     *          - B_0x02: PC[12] pin (value: 2)
     *          - B_0x03: PD[12] pin (value: 3)
     *          - B_0x05: PF[12] pin (value: 5)
     */
        /** @brief PA[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x00 = 0;
        /** @brief PB[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x01 = 1;
        /** @brief PC[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x02 = 2;
        /** @brief PD[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x03 = 3;
        /** @brief PF[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x05 = 5;

    /** @brief EXTI13 GPIO port selection These bits are written by software to select the source input for EXTI13 external interrupt. Others reserved */
    using EXTI_EXTICR4_EXTI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[13] pin (value: 0)
     *          - B_0x01: PB[13] pin (value: 1)
     *          - B_0x02: PC[13] pin (value: 2)
     *          - B_0x03: PD[13] pin (value: 3)
     *          - B_0x05: PF[13] pin (value: 5)
     */
        /** @brief PA[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x00 = 0;
        /** @brief PB[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x01 = 1;
        /** @brief PC[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x02 = 2;
        /** @brief PD[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x03 = 3;
        /** @brief PF[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x05 = 5;

    /** @brief EXTI14 GPIO port selection These bits are written by software to select the source input for EXTI14 external interrupt. Others reserved */
    using EXTI_EXTICR4_EXTI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[14] pin (value: 0)
     *          - B_0x01: PB[14] pin (value: 1)
     *          - B_0x02: PC[14] pin (value: 2)
     *          - B_0x03: PD[14] pin (value: 3)
     *          - B_0x05: PF[14] pin (value: 5)
     */
        /** @brief PA[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x00 = 0;
        /** @brief PB[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x01 = 1;
        /** @brief PC[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x02 = 2;
        /** @brief PD[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x03 = 3;
        /** @brief PF[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x05 = 5;

    /** @brief EXTI15 GPIO port selection These bits are written by software to select the source input for EXTI15 external interrupt. Others reserved */
    using EXTI_EXTICR4_EXTI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[15] pin (value: 0)
     *          - B_0x01: PB[15] pin (value: 1)
     *          - B_0x02: PC[15] pin (value: 2)
     *          - B_0x03: PD[15] pin (value: 3)
     *          - B_0x05: PF[15] pin (value: 5)
     */
        /** @brief PA[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x00 = 0;
        /** @brief PB[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x01 = 1;
        /** @brief PC[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x02 = 2;
        /** @brief PD[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x03 = 3;
        /** @brief PF[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x05 = 5;

    /** @brief EXTI CPU wakeup with interrupt mask register 1 */
    using EXTI_IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM0_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM0_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM1_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM1_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM2_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM2_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM3_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM3_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM4_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM4_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM5_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM5_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM6_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM6_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM7_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM7_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM8_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM8_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM9_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM9_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM10_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM10_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM11_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM11_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM12_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM12_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM13_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM13_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM14_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM14_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM15_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM15_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line 19 Setting/clearing this bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM19_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM19_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line 23 Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM23_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM23_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line 25 Setting/clearing each bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM25_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM25_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on line 31 Setting/clearing this bit unmasks/masks the CPU wakeup with interrupt, by an event on the corresponding line. */
    using EXTI_IMR1_IM31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR1_IM31_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR1_IM31_B_0x1 = 1;

    /** @brief EXTI CPU wakeup with event mask register */
    using EXTI_EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM0_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM0_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM1_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM1_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM2_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM2_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM3_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM3_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM4_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM4_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM5_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM5_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM6_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM6_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM7_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM7_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM8_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM8_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM9_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM9_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM10_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM10_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM11_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM11_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM12_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM12_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM13_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM13_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM14_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM14_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line x (x = 15 to 0) Setting/clearing each bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM15_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM15_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line 19 Setting/clearing this bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM19_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM19_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line 23 Setting/clearing this bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM23_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM23_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line 25 Setting/clearing this bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM25_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM25_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on line 31 Setting/clearing this bit unmasks/masks the CPU wakeup with event generation on the corresponding line. */
    using EXTI_EMR1_EM31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR1_EM31_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR1_EM31_B_0x1 = 1;

    /** @brief EXTI CPU wakeup with interrupt mask register 2 */
    using EXTI_IMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wakeup with interrupt mask on line 34 Setting/clearing the bit unmasks/masks the CPU wakeup with interrupt request from the line 34. */
    using EXTI_IMR2_IM34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with interrupt masked (value: 0)
     *          - B_0x1: wakeup with interrupt unmasked (value: 1)
     */
        /** @brief wakeup with interrupt masked */
    constexpr std::uint32_t EXTI_IMR2_IM34_B_0x0 = 0;
        /** @brief wakeup with interrupt unmasked */
    constexpr std::uint32_t EXTI_IMR2_IM34_B_0x1 = 1;

    /** @brief EXTI CPU wakeup with event mask register 2 */
    using EXTI_EMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wakeup with event generation mask on line 34 Setting/clearing this bit unmasks/masks the CPU wakeup with event generation on the line 34. */
    using EXTI_EMR2_EM34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wakeup with event generation masked (value: 0)
     *          - B_0x1: wakeup with event generation unmasked (value: 1)
     */
        /** @brief wakeup with event generation masked */
    constexpr std::uint32_t EXTI_EMR2_EM34_B_0x0 = 0;
        /** @brief wakeup with event generation unmasked */
    constexpr std::uint32_t EXTI_EMR2_EM34_B_0x1 = 1;

}

#endif
