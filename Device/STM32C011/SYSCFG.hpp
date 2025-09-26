/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32C011_SYSCFG_HPP
#define EMBEDDED_PP_STM32C011_SYSCFG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SYSCFG register block */
namespace STM32C011::SYSCFG {

    /** @brief SYSCFG configuration register 1 */
    using SYSCFG_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory mapping selection bits This bitfield controlled by software selects the memory internally mapped at the address 0x0000 0000. Its reset value is determined by the boot mode configuration. Refer to for more details. x0: Main Flash memory */
    using SYSCFG_CFGR1_MEM_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: System Flash memory (value: 1)
     *          - B_0x3: Embedded SRAM (value: 3)
     */
        /** @brief System Flash memory */
    constexpr std::uint32_t SYSCFG_CFGR1_MEM_MODE_B_0x1 = 1;
        /** @brief Embedded SRAM */
    constexpr std::uint32_t SYSCFG_CFGR1_MEM_MODE_B_0x3 = 3;

    /** @brief PA11 pin remapping This bit is set and cleared by software. When set, it remaps the PA11 pin to operate as PA9 GPIO port, instead as PA11 GPIO port. */
    using SYSCFG_CFGR1_PA11_RMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remap (PA11) (value: 0)
     *          - B_0x1: Remap (PA9) (value: 1)
     */
        /** @brief No remap (PA11) */
    constexpr std::uint32_t SYSCFG_CFGR1_PA11_RMP_B_0x0 = 0;
        /** @brief Remap (PA9) */
    constexpr std::uint32_t SYSCFG_CFGR1_PA11_RMP_B_0x1 = 1;

    /** @brief PA12 pin remapping This bit is set and cleared by software. When set, it remaps the PA12 pin to operate as PA10 GPIO port, instead as PA12 GPIO port. */
    using SYSCFG_CFGR1_PA12_RMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remap (PA12) (value: 0)
     *          - B_0x1: Remap (PA10) (value: 1)
     */
        /** @brief No remap (PA12) */
    constexpr std::uint32_t SYSCFG_CFGR1_PA12_RMP_B_0x0 = 0;
        /** @brief Remap (PA10) */
    constexpr std::uint32_t SYSCFG_CFGR1_PA12_RMP_B_0x1 = 1;

    /** @brief IR output polarity selection */
    using SYSCFG_CFGR1_IR_POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output of IRTIM (IR_OUT) is not inverted (value: 0)
     *          - B_0x1: Output of IRTIM (IR_OUT) is inverted (value: 1)
     */
        /** @brief Output of IRTIM (IR_OUT) is not inverted */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_POL_B_0x0 = 0;
        /** @brief Output of IRTIM (IR_OUT) is inverted */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_POL_B_0x1 = 1;

    /** @brief IR Modulation Envelope signal selection This bitfield selects the signal for IR modulation envelope: */
    using SYSCFG_CFGR1_IR_MOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 (value: 0)
     *          - B_0x1: USART1 (value: 1)
     *          - B_0x2: USART2 (value: 2)
     */
        /** @brief TIM16 */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_MOD_B_0x0 = 0;
        /** @brief USART1 */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_MOD_B_0x1 = 1;
        /** @brief USART2 */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_MOD_B_0x2 = 2;

    /** @brief Fast Mode Plus (FM+) enable for PB6 This bit is set and cleared by software. It enables I2C FM+ driving capability on PB6 I/O port. With this bit in disable state, the I2C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I2C FM+ is enabled, the speed control is ignored. */
    using SYSCFG_CFGR1_I2C_PB6_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB6_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB6_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PB7 This bit is set and cleared by software. It enables I2C FM+ driving capability on PB7 I/O port. With this bit in disable state, the I2C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I2C FM+ is enabled, the speed control is ignored. */
    using SYSCFG_CFGR1_I2C_PB7_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB7_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB7_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PB8 This bit is set and cleared by software. It enables I2C FM+ driving capability on PB8 I/O port. With this bit in disable state, the I2C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I2C FM+ is enabled, the speed control is ignored. */
    using SYSCFG_CFGR1_I2C_PB8_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB8_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB8_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PB9 This bit is set and cleared by software. It enables I2C FM+ driving capability on PB9 I/O port. With this bit in disable state, the I2C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I2C FM+ is enabled, the speed control is ignored. */
    using SYSCFG_CFGR1_I2C_PB9_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB9_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB9_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for I2C1 This bit is set and cleared by software. It enables I2C FM+ driving capability on I/O ports configured as I2C1 through GPIOx_AFR registers. With this bit in disable state, the I2C FM+ driving capability on I/O ports configured as I2C1 can be enabled through their corresponding I2Cx_FMP bit. When I2C FM+ is enabled, the speed control is ignored. */
    using SYSCFG_CFGR1_I2C1_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C1_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C1_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PA9 This bit is set and cleared by software. It enables I2C FM+ driving capability on PA9 I/O port. With this bit in disable state, the I2C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I2C FM+ is enabled, the speed control is ignored. */
    using SYSCFG_CFGR1_I2C_PA9_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PA9_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PA9_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PA10 This bit is set and cleared by software. It enables I2C FM+ driving capability on PA10 I/O port. With this bit in disable state, the I2C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I2C FM+ is enabled, the speed control is ignored. */
    using SYSCFG_CFGR1_I2C_PA10_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PA10_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PA10_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PC14 This bit is set and cleared by software. It enables I2C FM+ driving capability on PC14 I/O port. With this bit in disable state, the I2C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I2C FM+ is enabled, the speed control is ignored. */
    using SYSCFG_CFGR1_I2C_PC14_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PC14_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PC14_FMP_B_0x1 = 1;

    /** @brief SYSCFG configuration register 2 */
    using SYSCFG_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cortex<Superscript><Default Font>-M0+ LOCKUP enable This bit is set by software and cleared by system reset. When set, it enables the connection of Cortex<Superscript><Default Font>-M0+ LOCKUP (HardFault) output to the TIM1/16/17 Break input. */
    using SYSCFG_CFGR2_LOCKUP_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR2_LOCKUP_LOCK_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR2_LOCKUP_LOCK_B_0x1 = 1;

    /** @brief SYSCFG configuration register 3 */
    using SYSCFG_CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pin GPIO multiplexer 0 This bit is set by software and cleared by system reset. It assigns a GPIO to a pin. 1x: Reserved Pin F2 of WLCSP14 package GPIO assignment 1x: Reserved */
    using SYSCFG_CFGR3_PINMUX0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_1: PB7 (value: 0)
     *          - B_0x1_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_1: PC14 (value: 1)
     */
        /** @brief PB7 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX0_B_0x0_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_1 = 0;
        /** @brief PC14 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX0_B_0x1_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_1 = 1;

    /** @brief Pin GPIO multiplexer 1 This bit is set by software and cleared by system reset. It assigns a GPIO to a pin. 1x: Reserved */
    using SYSCFG_CFGR3_PINMUX1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_4: PF2 (value: 0)
     *          - B_0x1_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_4: PA0 (value: 1)
     *          - B_0x2_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_4: PA1 (value: 2)
     *          - B_0x3_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_4: PA2 (value: 3)
     */
        /** @brief PF2 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX1_B_0x0_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_4 = 0;
        /** @brief PA0 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX1_B_0x1_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_4 = 1;
        /** @brief PA1 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX1_B_0x2_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_4 = 2;
        /** @brief PA2 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX1_B_0x3_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_4 = 3;

    /** @brief Pin GPIO multiplexer 2 This bit is set by software and cleared by system reset. It assigns a GPIO to a pin. 1x: Reserved 1x: Reserved */
    using SYSCFG_CFGR3_PINMUX2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_5: PA8 (value: 0)
     *          - B_0x1_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_5: PA11 (value: 1)
     */
        /** @brief PA8 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX2_B_0x0_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_5 = 0;
        /** @brief PA11 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX2_B_0x1_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_5 = 1;

    /** @brief Pin GPIO multiplexer 3 This bit is set by software and cleared by system reset. It assigns a GPIO to a pin. 1x: Reserved */
    using SYSCFG_CFGR3_PINMUX3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_8: PA14 (value: 0)
     *          - B_0x1_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_8: PB6 (value: 1)
     *          - B_0x2_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_8: PC15 (value: 2)
     */
        /** @brief PA14 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX3_B_0x0_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_8 = 0;
        /** @brief PB6 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX3_B_0x1_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_8 = 1;
        /** @brief PC15 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX3_B_0x2_STM32C011X___GPIO_ASSIGNED_TO_SO8_PIN_8 = 2;

    /** @brief Pin GPIO multiplexer 4 This bit is set by software and cleared by system reset. It assigns a GPIO to a pin. 1x: Reserved 1x: Reserved */
    using SYSCFG_CFGR3_PINMUX4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_E2: PA7 (value: 0)
     *          - B_0x1_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_E2: PA12 (value: 1)
     */
        /** @brief PA7 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX4_B_0x0_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_E2 = 0;
        /** @brief PA12 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX4_B_0x1_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_E2 = 1;

    /** @brief Pin GPIO multiplexer 5 This bit is set by software and cleared by system reset. It assigns a GPIO to a pin. 1x: Reserved */
    using SYSCFG_CFGR3_PINMUX5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_F1: PA3 (value: 0)
     *          - B_0x1_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_F1: PA4 (value: 1)
     *          - B_0x2_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_F1: PA5 (value: 2)
     *          - B_0x3_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_F1: PA6 (value: 3)
     */
        /** @brief PA3 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX5_B_0x0_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_F1 = 0;
        /** @brief PA4 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX5_B_0x1_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_F1 = 1;
        /** @brief PA5 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX5_B_0x2_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_F1 = 2;
        /** @brief PA6 */
    constexpr std::uint32_t SYSCFG_CFGR3_PINMUX5_B_0x3_STM32C011X___GPIO_ASSIGNED_TO_WLCSP12_PIN_F1 = 3;

    /** @brief SYSCFG interrupt line 0 status register */
    using SYSCFG_ITLINE0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Window watchdog interrupt pending flag */
    using SYSCFG_ITLINE0_WWDG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 2 status register */
    using SYSCFG_ITLINE2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC interrupt request pending (EXTI line 19) */
    using SYSCFG_ITLINE2_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 3 status register */
    using SYSCFG_ITLINE3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash interface interrupt request pending */
    using SYSCFG_ITLINE3_FLASH_ITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 4 status register */
    using SYSCFG_ITLINE4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset and clock control interrupt request pending */
    using SYSCFG_ITLINE4_RCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 5 status register */
    using SYSCFG_ITLINE5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 0 interrupt request pending */
    using SYSCFG_ITLINE5_EXTI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 1 interrupt request pending */
    using SYSCFG_ITLINE5_EXTI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 6 status register */
    using SYSCFG_ITLINE6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 2 interrupt request pending */
    using SYSCFG_ITLINE6_EXTI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 3 interrupt request pending */
    using SYSCFG_ITLINE6_EXTI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 7 status register */
    using SYSCFG_ITLINE7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 4 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 5 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 6 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 7 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 8 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 9 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 10 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 11 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 12 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 13 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 14 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 15 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 9 status register */
    using SYSCFG_ITLINE9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 1interrupt request pending */
    using SYSCFG_ITLINE9_DMA1_CH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 10 status register */
    using SYSCFG_ITLINE10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 2 interrupt request pending */
    using SYSCFG_ITLINE10_DMA1_CH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 3 interrupt request pending */
    using SYSCFG_ITLINE10_DMA1_CH3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 11 status register */
    using SYSCFG_ITLINE11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX interrupt request pending */
    using SYSCFG_ITLINE11_DMAMUX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 12 status register */
    using SYSCFG_ITLINE12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC interrupt request pending */
    using SYSCFG_ITLINE12_ADC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 13 status register */
    using SYSCFG_ITLINE13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 commutation interrupt request pending */
    using SYSCFG_ITLINE13_TIM1_CCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 trigger interrupt request pending */
    using SYSCFG_ITLINE13_TIM1_TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 update interrupt request pending */
    using SYSCFG_ITLINE13_TIM1_UPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 break interrupt request pending */
    using SYSCFG_ITLINE13_TIM1_BRK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 14 status register */
    using SYSCFG_ITLINE14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 capture compare interrupt request pending */
    using SYSCFG_ITLINE14_TIM1_CC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 16 status register */
    using SYSCFG_ITLINE16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 3 interrupt request pending */
    using SYSCFG_ITLINE16_TIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 19 status register */
    using SYSCFG_ITLINE19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 14 interrupt request pending */
    using SYSCFG_ITLINE19_TIM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 21 status register */
    using SYSCFG_ITLINE21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 16 interrupt request pending */
    using SYSCFG_ITLINE21_TIM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 22 status register */
    using SYSCFG_ITLINE22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 17 interrupt request pending */
    using SYSCFG_ITLINE22_TIM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 23 status register */
    using SYSCFG_ITLINE23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 interrupt request pending, combined with EXTI line 23 */
    using SYSCFG_ITLINE23_I2C1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 25 status register */
    using SYSCFG_ITLINE25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 interrupt request pending */
    using SYSCFG_ITLINE25_SPI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 27 status register */
    using SYSCFG_ITLINE27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 interrupt request pending, combined with EXTI line 25 */
    using SYSCFG_ITLINE27_USART1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 28 status register */
    using SYSCFG_ITLINE28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2 interrupt request pending (EXTI line 26) */
    using SYSCFG_ITLINE28_USART2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
