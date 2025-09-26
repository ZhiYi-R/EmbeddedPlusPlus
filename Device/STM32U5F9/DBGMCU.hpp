/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5F9_DBGMCU_HPP
#define EMBEDDED_PP_STM32U5F9_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief MCU debug component */
namespace STM32U5F9::DBGMCU {

    /** @brief DBGMCU_IDCODE */
    using IDCODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device dentification */
    using IDCODE_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision */
    using IDCODE_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU configuration */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Stop mode */
    using CR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Standby mode */
    using CR_DBG_STANDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trace pin assignment */
    using CR_TRACE_IOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trace port and clock */
    using CR_TRACE_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trace pin assignment */
    using CR_TRACE_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU APB1L peripheral freeze */
    using APB1LFZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in debug */
    using APB1LFZR_DBG_TIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 stop in debug */
    using APB1LFZR_DBG_TIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 stop in debug */
    using APB1LFZR_DBG_TIM4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 stop in debug */
    using APB1LFZR_DBG_TIM5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 stop in debug */
    using APB1LFZR_DBG_TIM6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7 stop in debug */
    using APB1LFZR_DBG_TIM7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Window watchdog counter stop in debug */
    using APB1LFZR_DBG_WWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Independent watchdog counter stop in debug */
    using APB1LFZR_DBG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 SMBUS timeout stop in debug */
    using APB1LFZR_DBG_I2C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 SMBUS timeout stop in debug */
    using APB1LFZR_DBG_I2C2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU APB1H peripheral freeze register */
    using APB1HFZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 stop in debug */
    using APB1HFZR_DBG_I2C4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 stop in debug */
    using APB1HFZR_DBG_LPTIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU APB2 peripheral freeze register */
    using APB2FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 counter stopped when core is */
    using APB2FZR_DBG_TIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8 stop in debug */
    using APB2FZR_DBG_TIM8_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 counter stopped when core is */
    using APB2FZR_DBG_TIM15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 counter stopped when core is */
    using APB2FZR_DBG_TIM16_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG_TIM17_STOP */
    using APB2FZR_DBG_TIM17_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU APB3 peripheral freeze register */
    using APB3FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 stop in debug */
    using APB3FZR_DBG_I2C3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 stop in debug */
    using APB3FZR_DBG_LPTIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3 stop in debug */
    using APB3FZR_DBG_LPTIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 stop in debug */
    using APB3FZR_DBG_LPTIM4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC stop in debug */
    using APB3FZR_DBG_RTC_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU AHB1 peripheral freeze register */
    using AHB1FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 stop in debug */
    using AHB1FZR_DBG_GPDMA0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 stop in debug */
    using AHB1FZR_DBG_GPDMA1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 stop in debug */
    using AHB1FZR_DBG_GPDMA2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 stop in debug */
    using AHB1FZR_DBG_GPDMA3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 stop in debug */
    using AHB1FZR_DBG_GPDMA4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 stop in debug */
    using AHB1FZR_DBG_GPDMA5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 stop in debug */
    using AHB1FZR_DBG_GPDMA6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 stop in debug */
    using AHB1FZR_DBG_GPDMA7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 stop in debug */
    using AHB1FZR_DBG_GPDMA8_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 stop in debug */
    using AHB1FZR_DBG_GPDMA9_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 stop in debug */
    using AHB1FZR_DBG_GPDMA10_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 stop in debug */
    using AHB1FZR_DBG_GPDMA11_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 12 stop in debug */
    using AHB1FZR_DBG_GPDMA12_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 13 stop in debug */
    using AHB1FZR_DBG_GPDMA13_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 14 stop in debug */
    using AHB1FZR_DBG_GPDMA14_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 15 stop in debug */
    using AHB1FZR_DBG_GPDMA15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU AHB3 peripheral freeze register */
    using AHB3FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 0 stop in debug */
    using AHB3FZR_DBG_LPDMA0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 1 stop in debug */
    using AHB3FZR_DBG_LPDMA1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 2 stop in debug */
    using AHB3FZR_DBG_LPDMA2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 3 stop in debug */
    using AHB3FZR_DBG_LPDMA3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU status register */
    using SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_PRESENT */
    using SR_AP_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_LOCKED */
    using SR_AP_LOCKED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug host authentication register */
    using DBGMCU_DBG_AUTH_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AUTH_KEY */
    using DBGMCU_DBG_AUTH_HOST_AUTH_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug device authentication register */
    using DBG_AUTH_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AUTH_ID */
    using DBG_AUTH_DEVICE_AUTH_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU CoreSight peripheral identity register 4 */
    using PIDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 continuation code */
    using PIDR4_JEP106CON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief register file size */
    using PIDR4_KCOUNT_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU CoreSight peripheral identity register 0 */
    using PIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief part number bits [7:0] */
    using PIDR0_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU CoreSight peripheral identity register 1 */
    using PIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief part number bits [11:8] */
    using PIDR1_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 identity code bits [3:0] */
    using PIDR1_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU CoreSight peripheral identity register 2 */
    using PIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 identity code bits [6:4] */
    using PIDR2_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEDEC assigned value */
    using PIDR2_JEDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component revision number */
    using PIDR2_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU CoreSight peripheral identity register 3 */
    using PIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief customer modified */
    using PIDR3_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief metal fix version */
    using PIDR3_REVAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU CoreSight component identity register 0 */
    using CIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component identification bits [7:0] */
    using CIDR0_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU CoreSight component identity register 1 */
    using CIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component identification bits [11:8] */
    using CIDR1_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component identification bits [15:12] - component class */
    using CIDR1_CLASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU CoreSight component identity register 2 */
    using CIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component identification bits [23:16] */
    using CIDR2_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU CoreSight component identity register 3 */
    using CIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component identification bits [31:24] */
    using CIDR3_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
