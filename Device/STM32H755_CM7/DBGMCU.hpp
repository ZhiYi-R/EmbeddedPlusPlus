/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H755_CM7_DBGMCU_HPP
#define EMBEDDED_PP_STM32H755_CM7_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Microcontroller Debug Unit */
namespace STM32H755_CM7::DBGMCU {

    /** @brief DBGMCU Identity Code Register */
    using IDC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device ID */
    using IDC_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision */
    using IDC_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU Configuration Register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow D1 domain debug in Sleep mode */
    using CR_DBGSLPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow D1 domain debug in Stop mode */
    using CR_DBGSTPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow D1 domain debug in Standby mode */
    using CR_DBGSTBD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow D2 domain debug in Sleep mode */
    using CR_DBGSLPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow D2 domain debug in Stop mode */
    using CR_DBGSTPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow D2 domain debug in Standby mode */
    using CR_DBGSTBD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow debug in D3 Stop mode */
    using CR_DBGSTPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow debug in D3 Standby mode */
    using CR_DBGSTBD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trace port clock enable */
    using CR_TRACECLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D1 debug clock enable */
    using CR_D1DBGCKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D3 debug clock enable */
    using CR_D3DBGCKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger output enable */
    using CR_TRGOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU APB3 peripheral freeze register CPU1 */
    using APB3FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG1 stop in debug */
    using APB3FZ1_WWDG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU APB3 peripheral freeze register CPU2 */
    using APB3FZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG1 stop in debug */
    using APB3FZ2_WWDG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU APB1L peripheral freeze register */
    using APB1LFZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in debug */
    using APB1LFZ1_DBG_TIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 stop in debug */
    using APB1LFZ1_DBG_TIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 stop in debug */
    using APB1LFZ1_DBG_TIM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 stop in debug */
    using APB1LFZ1_DBG_TIM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 stop in debug */
    using APB1LFZ1_DBG_TIM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7 stop in debug */
    using APB1LFZ1_DBG_TIM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 stop in debug */
    using APB1LFZ1_DBG_TIM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM13 stop in debug */
    using APB1LFZ1_DBG_TIM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM14 stop in debug */
    using APB1LFZ1_DBG_TIM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 stop in debug */
    using APB1LFZ1_DBG_LPTIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG2 stop in debug */
    using APB1LFZ1_DBG_WWDG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 SMBUS timeout stop in debug */
    using APB1LFZ1_DBG_I2C1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 SMBUS timeout stop in debug */
    using APB1LFZ1_DBG_I2C2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 SMBUS timeout stop in debug */
    using APB1LFZ1_DBG_I2C3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU APB1L peripheral freeze register CPU2 */
    using APB1LFZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in debug */
    using APB1LFZ2_DBG_TIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 stop in debug */
    using APB1LFZ2_DBG_TIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 stop in debug */
    using APB1LFZ2_DBG_TIM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 stop in debug */
    using APB1LFZ2_DBG_TIM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 stop in debug */
    using APB1LFZ2_DBG_TIM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 stop in debug */
    using APB1LFZ2_DBG_TIM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 stop in debug */
    using APB1LFZ2_DBG_TIM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM13 stop in debug */
    using APB1LFZ2_DBG_TIM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM14 stop in debug */
    using APB1LFZ2_DBG_TIM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 stop in debug */
    using APB1LFZ2_DBG_LPTIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG2 stop in debug */
    using APB1LFZ2_DBG_WWDG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 SMBUS timeout stop in debug */
    using APB1LFZ2_DBG_I2C1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 SMBUS timeout stop in debug */
    using APB1LFZ2_DBG_I2C2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 SMBUS timeout stop in debug */
    using APB1LFZ2_DBG_I2C3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU APB2 peripheral freeze register */
    using APB2FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 stop in debug */
    using APB2FZ1_DBG_TIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8 stop in debug */
    using APB2FZ1_DBG_TIM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 stop in debug */
    using APB2FZ1_DBG_TIM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 stop in debug */
    using APB2FZ1_DBG_TIM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17 stop in debug */
    using APB2FZ1_DBG_TIM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HRTIM stop in debug */
    using APB2FZ1_DBG_HRTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU APB2 peripheral freeze register CPU2 */
    using APB2FZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 stop in debug */
    using APB2FZ2_DBG_TIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8 stop in debug */
    using APB2FZ2_DBG_TIM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 stop in debug */
    using APB2FZ2_DBG_TIM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 stop in debug */
    using APB2FZ2_DBG_TIM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17 stop in debug */
    using APB2FZ2_DBG_TIM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HRTIM stop in debug */
    using APB2FZ2_DBG_HRTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU APB4 peripheral freeze register */
    using APB4FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 SMBUS timeout stop in debug */
    using APB4FZ1_DBG_I2C4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 stop in debug */
    using APB4FZ1_DBG_LPTIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 stop in debug */
    using APB4FZ1_DBG_LPTIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 stop in debug */
    using APB4FZ1_DBG_LPTIM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM5 stop in debug */
    using APB4FZ1_DBG_LPTIM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC stop in debug */
    using APB4FZ1_DBG_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Independent watchdog for D1 stop in debug */
    using APB4FZ1_DBG_WDGLSD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Independent watchdog for D2 stop in debug */
    using APB4FZ1_DBG_WDGLSD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU APB4 peripheral freeze register CPU2 */
    using APB4FZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 SMBUS timeout stop in debug */
    using APB4FZ2_DBG_I2C4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 stop in debug */
    using APB4FZ2_DBG_LPTIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 stop in debug */
    using APB4FZ2_DBG_LPTIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 stop in debug */
    using APB4FZ2_DBG_LPTIM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM5 stop in debug */
    using APB4FZ2_DBG_LPTIM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC stop in debug */
    using APB4FZ2_DBG_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LS watchdog for D1 stop in debug */
    using APB4FZ2_DBG_WDGLSD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LS watchdog for D2 stop in debug */
    using APB4FZ2_DBG_WDGLSD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
