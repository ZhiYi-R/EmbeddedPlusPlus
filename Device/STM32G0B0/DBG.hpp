/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G0B0_DBG_HPP
#define EMBEDDED_PP_STM32G0B0_DBG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Debug support */
namespace STM32G0B0::DBG {

    /** @brief MCU Device ID Code Register */
    using IDCODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device Identifier */
    using IDCODE_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision Identifier */
    using IDCODE_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG configuration register */
    using DBG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Stop mode Debug options in Stop mode. Upon Stop mode exit, the software must re-establish the desired clock configuration. */
    using DBG_CR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All clocks disabled, including FCLK and HCLK. Upon Stop mode exit, the CPU is clocked by the HSI internal RC oscillator. (value: 0)
     *          - B_0x1: FCLK and HCLK running, derived from the internal RC oscillator remaining active. If Systick is enabled, it may generate periodic interrupt and wake up events. (value: 1)
     */
        /** @brief All clocks disabled, including FCLK and HCLK. Upon Stop mode exit, the CPU is clocked by the HSI internal RC oscillator. */
    constexpr std::uint32_t DBG_CR_DBG_STOP_B_0x0 = 0;
        /** @brief FCLK and HCLK running, derived from the internal RC oscillator remaining active. If Systick is enabled, it may generate periodic interrupt and wake up events. */
    constexpr std::uint32_t DBG_CR_DBG_STOP_B_0x1 = 1;

    /** @brief Debug Standby and Shutdown modes Debug options in Standby or Shutdown mode. */
    using DBG_CR_DBG_STANDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital part powered. From software point of view, exiting Standby and Shutdown modes is identical as fetching reset vector (except for status bits indicating that the MCU exits Standby) (value: 0)
     *          - B_0x1: Digital part powered and FCLK and HCLK running, derived from the internal RC oscillator remaining active. The MCU generates a system reset so that exiting Standby and Shutdown has the same effect as starting from reset. (value: 1)
     */
        /** @brief Digital part powered. From software point of view, exiting Standby and Shutdown modes is identical as fetching reset vector (except for status bits indicating that the MCU exits Standby) */
    constexpr std::uint32_t DBG_CR_DBG_STANDBY_B_0x0 = 0;
        /** @brief Digital part powered and FCLK and HCLK running, derived from the internal RC oscillator remaining active. The MCU generates a system reset so that exiting Standby and Shutdown has the same effect as starting from reset. */
    constexpr std::uint32_t DBG_CR_DBG_STANDBY_B_0x1 = 1;

    /** @brief DBG APB freeze register 1 */
    using DBG_APB_FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clocking of TIM2 counter when the core is halted This bit enables/disables the clock to the counter of TIM2 when the core is halted: */
    using DBG_APB_FZ1_DBG_TIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_TIM2_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_TIM2_STOP_B_0x1 = 1;

    /** @brief Clocking of TIM3 counter when the core is halted This bit enables/disables the clock to the counter of TIM3 when the core is halted: */
    using DBG_APB_FZ1_DBG_TIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_TIM3_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_TIM3_STOP_B_0x1 = 1;

    /** @brief Clocking of TIM6 counter when the core is halted This bit enables/disables the clock to the counter of TIM6 when the core is halted: */
    using DBG_APB_FZ1_DBG_TIM6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_TIM6_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_TIM6_STOP_B_0x1 = 1;

    /** @brief Clocking of TIM7 counter when the core is halted. This bit enables/disables the clock to the counter of ITIM7 when the core is halted: */
    using DBG_APB_FZ1_DBG_TIM7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_TIM7_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_TIM7_STOP_B_0x1 = 1;

    /** @brief Clocking of RTC counter when the core is halted This bit enables/disables the clock to the counter of RTC when the core is halted: */
    using DBG_APB_FZ1_DBG_RTC_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_RTC_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_RTC_STOP_B_0x1 = 1;

    /** @brief Clocking of WWDG counter when the core is halted This bit enables/disables the clock to the counter of WWDG when the core is halted: */
    using DBG_APB_FZ1_DBG_WWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_WWDG_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_WWDG_STOP_B_0x1 = 1;

    /** @brief Clocking of IWDG counter when the core is halted This bit enables/disables the clock to the counter of IWDG when the core is halted: */
    using DBG_APB_FZ1_DBG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_IWDG_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_IWDG_STOP_B_0x1 = 1;

    /** @brief SMBUS timeout when core is halted */
    using DBG_APB_FZ1_DBG_I2C1_SMBUS_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Same behavior as in normal mode (value: 0)
     *          - B_0x1: The SMBUS timeout is frozen (value: 1)
     */
        /** @brief Same behavior as in normal mode */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_I2C1_SMBUS_TIMEOUT_B_0x0 = 0;
        /** @brief The SMBUS timeout is frozen */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_I2C1_SMBUS_TIMEOUT_B_0x1 = 1;

    /** @brief Clocking of LPTIMER2 counter when the core is halted This bit enables/disables the clock to the counter of LPTIMER2 when the core is halted: */
    using DBG_APB_FZ1_DBG_LPTIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_LPTIM2_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_LPTIM2_STOP_B_0x1 = 1;

    /** @brief Clocking of LPTIMER1 counter when the core is halted This bit enables/disables the clock to the counter of LPTIMER1 when the core is halted: */
    using DBG_APB_FZ1_DBG_LPTIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_LPTIM1_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ1_DBG_LPTIM1_STOP_B_0x1 = 1;

    /** @brief DBG APB freeze register 2 */
    using DBG_APB_FZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clocking of TIM1 counter when the core is halted This bit enables/disables the clock to the counter of TIM1 when the core is halted: */
    using DBG_APB_FZ2_DBG_TIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM1_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM1_STOP_B_0x1 = 1;

    /** @brief Clocking of TIM14 counter when the core is halted This bit enables/disables the clock to the counter of TIM14 when the core is halted: */
    using DBG_APB_FZ2_DBG_TIM14_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM14_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM14_STOP_B_0x1 = 1;

    /** @brief Clocking of TIM15 counter when the core is halted This bit enables/disables the clock to the counter of TIM15 when the core is halted: Only available on STM32G071xx and STM32G081xx, reserved on STM32G031xx and STM32G041xx. */
    using DBG_APB_FZ2_DBG_TIM15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM15_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM15_STOP_B_0x1 = 1;

    /** @brief Clocking of TIM16 counter when the core is halted This bit enables/disables the clock to the counter of TIM16 when the core is halted: */
    using DBG_APB_FZ2_DBG_TIM16_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM16_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM16_STOP_B_0x1 = 1;

    /** @brief Clocking of TIM17 counter when the core is halted This bit enables/disables the clock to the counter of TIM17 when the core is halted: */
    using DBG_APB_FZ2_DBG_TIM17_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM17_STOP_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t DBG_APB_FZ2_DBG_TIM17_STOP_B_0x1 = 1;

}

#endif
