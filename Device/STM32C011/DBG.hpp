/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32C011_DBG_HPP
#define EMBEDDED_PP_STM32C011_DBG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DBG register block */
namespace STM32C011::DBG {

    /** @brief DBG device ID code register */
    using DBG_IDCODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device identifier This bitfield indicates the device ID. */
    using DBG_IDCODE_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision identifier This bitfield indicates the revision of the device. */
    using DBG_IDCODE_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG configuration register */
    using DBG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Stop mode */
    using DBG_CR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Standby and Shutdown modes */
    using DBG_CR_DBG_STANDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG APB freeze register 1 */
    using DBG_APB_FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
