/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H723_DBGMCU_HPP
#define EMBEDDED_PP_STM32H723_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DBGMCU address block description */
namespace STM32H723::DBGMCU {

    /** @brief DBGMCU_IDC register */
    using DBGMCU_IDC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device ID */
    using DBGMCU_IDC_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x483: STM32H72x, STM32H73x (value: 1155)
     */
        /** @brief STM32H72x, STM32H73x */
    constexpr std::uint32_t DBGMCU_IDC_DEV_ID_B_0x483 = 1155;

    /** @brief Revision */
    using DBGMCU_IDC_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU_CR register */
    using DBGMCU_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief D1 domain debug in Sleep mode enable */
    using DBGMCU_CR_DBGSLEEP_D1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - the processor clock is stopped automatically in Sleep mode (value: 0)
     *          - B_0x1: Automatic clock stop disabled - processor clock continues to run, allowing full debug capability (value: 1)
     */
        /** @brief Normal operation - the processor clock is stopped automatically in Sleep mode */
    constexpr std::uint32_t DBGMCU_CR_DBGSLEEP_D1_B_0x0 = 0;
        /** @brief Automatic clock stop disabled - processor clock continues to run, allowing full debug capability */
    constexpr std::uint32_t DBGMCU_CR_DBGSLEEP_D1_B_0x1 = 1;

    /** @brief D1 domain debug in Stop mode enable */
    using DBGMCU_CR_DBGSTOP_D1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - all clocks are disabled automatically in Stop mode (value: 0)
     *          - B_0x1: Automatic clock stop disabled - all active clocks and oscillators continue to run during Stop mode, allowing full debug capability. (value: 1)
     */
        /** @brief Normal operation - all clocks are disabled automatically in Stop mode */
    constexpr std::uint32_t DBGMCU_CR_DBGSTOP_D1_B_0x0 = 0;
        /** @brief Automatic clock stop disabled - all active clocks and oscillators continue to run during Stop mode, allowing full debug capability. */
    constexpr std::uint32_t DBGMCU_CR_DBGSTOP_D1_B_0x1 = 1;

    /** @brief D1 domain debug in Standby mode enable */
    using DBGMCU_CR_DBGSTBY_D1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - all clocks is disabled and the domain powered down automatically in Standby mode. (value: 0)
     *          - B_0x1: Automatic clock stop/power-down disabled - all active clocks and oscillators continue to run during Standby mode, and the domain supply is maintained, allowing full debug capability. (value: 1)
     */
        /** @brief Normal operation - all clocks is disabled and the domain powered down automatically in Standby mode. */
    constexpr std::uint32_t DBGMCU_CR_DBGSTBY_D1_B_0x0 = 0;
        /** @brief Automatic clock stop/power-down disabled - all active clocks and oscillators continue to run during Standby mode, and the domain supply is maintained, allowing full debug capability. */
    constexpr std::uint32_t DBGMCU_CR_DBGSTBY_D1_B_0x1 = 1;

    /** @brief Trace port clock enable */
    using DBGMCU_CR_TRACECLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled - TRACECLK is disabled (value: 0)
     *          - B_0x1: Enabled - TRACECLK is active (value: 1)
     */
        /** @brief Disabled - TRACECLK is disabled */
    constexpr std::uint32_t DBGMCU_CR_TRACECLKEN_B_0x0 = 0;
        /** @brief Enabled - TRACECLK is active */
    constexpr std::uint32_t DBGMCU_CR_TRACECLKEN_B_0x1 = 1;

    /** @brief D1 debug clock enable */
    using DBGMCU_CR_D1DBGCKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled - D1 domain debug components are disabled and their clocks gated (value: 0)
     *          - B_0x1: Enabled - D1 domain debug components are clocked whenever the corresponding domain clock (CK_HCLK_D1) is active (value: 1)
     */
        /** @brief Disabled - D1 domain debug components are disabled and their clocks gated */
    constexpr std::uint32_t DBGMCU_CR_D1DBGCKEN_B_0x0 = 0;
        /** @brief Enabled - D1 domain debug components are clocked whenever the corresponding domain clock (CK_HCLK_D1) is active */
    constexpr std::uint32_t DBGMCU_CR_D1DBGCKEN_B_0x1 = 1;

    /** @brief D3 debug clock enable */
    using DBGMCU_CR_D3DBGCKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled - D3 domain debug components are disabled and their clocks gated (value: 0)
     *          - B_0x1: Enabled - D3 domain debug components are clocked whenever the corresponding domain clock (CK_HCLK_D3) is active (value: 1)
     */
        /** @brief Disabled - D3 domain debug components are disabled and their clocks gated */
    constexpr std::uint32_t DBGMCU_CR_D3DBGCKEN_B_0x0 = 0;
        /** @brief Enabled - D3 domain debug components are clocked whenever the corresponding domain clock (CK_HCLK_D3) is active */
    constexpr std::uint32_t DBGMCU_CR_D3DBGCKEN_B_0x1 = 1;

    /** @brief External trigger output enable */
    using DBGMCU_CR_TRGOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input - TRGIO is connected to TRGIN (value: 0)
     *          - B_0x1: Output - TRGIO is connected to TRGOUT (value: 1)
     */
        /** @brief Input - TRGIO is connected to TRGIN */
    constexpr std::uint32_t DBGMCU_CR_TRGOEN_B_0x0 = 0;
        /** @brief Output - TRGIO is connected to TRGOUT */
    constexpr std::uint32_t DBGMCU_CR_TRGOEN_B_0x1 = 1;

    /** @brief DBGMCU_APB3FZ1 register */
    using DBGMCU_APB3FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG1 stop in debug */
    using DBGMCU_APB3FZ1_WWDG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - WWDG1 continues to operate while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - WWDG1 is frozen while the core is in Debug mode (value: 1)
     */
        /** @brief Normal operation - WWDG1 continues to operate while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB3FZ1_WWDG1_B_0x0 = 0;
        /** @brief Stop in debug - WWDG1 is frozen while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB3FZ1_WWDG1_B_0x1 = 1;

    /** @brief DBGMCU_APB1LFZ1 register */
    using DBGMCU_APB1LFZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in debug */
    using DBGMCU_APB1LFZ1_TIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM2 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM2 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM2 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM2_B_0x0 = 0;
        /** @brief Stop in debug - TIM2 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM2_B_0x1 = 1;

    /** @brief TIM3 stop in debug */
    using DBGMCU_APB1LFZ1_TIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM3 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM3 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM3 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM3_B_0x0 = 0;
        /** @brief Stop in debug - TIM3 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM3_B_0x1 = 1;

    /** @brief TIM4 stop in debug */
    using DBGMCU_APB1LFZ1_TIM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM4 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM4 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM4 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM4_B_0x0 = 0;
        /** @brief Stop in debug - TIM4 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM4_B_0x1 = 1;

    /** @brief TIM5 stop in debug */
    using DBGMCU_APB1LFZ1_TIM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM5 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM5 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM5 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM5_B_0x0 = 0;
        /** @brief Stop in debug - TIM5 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM5_B_0x1 = 1;

    /** @brief TIM6 stop in debug */
    using DBGMCU_APB1LFZ1_TIM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM6 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM6 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM6 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM6_B_0x0 = 0;
        /** @brief Stop in debug - TIM6 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM6_B_0x1 = 1;

    /** @brief TIM7 stop in debug */
    using DBGMCU_APB1LFZ1_TIM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM7 continues operatinge while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM7 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM7 continues operatinge while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM7_B_0x0 = 0;
        /** @brief Stop in debug - TIM7 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM7_B_0x1 = 1;

    /** @brief TIM12 stop in debug */
    using DBGMCU_APB1LFZ1_TIM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM12 continues operatinge while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM12 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM12 continues operatinge while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM12_B_0x0 = 0;
        /** @brief Stop in debug - TIM12 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM12_B_0x1 = 1;

    /** @brief TIM13 stop in debug */
    using DBGMCU_APB1LFZ1_TIM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM13 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM13 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM13 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM13_B_0x0 = 0;
        /** @brief Stop in debug - TIM13 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM13_B_0x1 = 1;

    /** @brief TIM14 stop in debug */
    using DBGMCU_APB1LFZ1_TIM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM14 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM14 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM14 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM14_B_0x0 = 0;
        /** @brief Stop in debug - TIM14 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_TIM14_B_0x1 = 1;

    /** @brief LPTIM1 stop in debug */
    using DBGMCU_APB1LFZ1_LPTIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM1 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM1 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM1 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_LPTIM1_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM1 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_LPTIM1_B_0x1 = 1;

    /** @brief I2C1 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZ1_I2C1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - I2C1 SMBUS timeout continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - I2C1 SMBUS timeout is frozen while the core is in Debug mode (value: 1)
     */
        /** @brief Normal operation - I2C1 SMBUS timeout continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_I2C1_B_0x0 = 0;
        /** @brief Stop in debug - I2C1 SMBUS timeout is frozen while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_I2C1_B_0x1 = 1;

    /** @brief I2C2 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZ1_I2C2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - I2C2 SMBUS timeout continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - I2C2 SMBUS timeout is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - I2C2 SMBUS timeout continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_I2C2_B_0x0 = 0;
        /** @brief Stop in debug - I2C2 SMBUS timeout is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_I2C2_B_0x1 = 1;

    /** @brief I2C3 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZ1_I2C3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - I2C3 SMBUS timeout continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - I2C3 SMBUS timeout is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - I2C3 SMBUS timeout continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_I2C3_B_0x0 = 0;
        /** @brief Stop in debug - I2C3 SMBUS timeout is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_I2C3_B_0x1 = 1;

    /** @brief I2C5 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZ1_I2C5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - I2C5 SMBUS timeout continues to operate while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - I2C5 SMBUS timeout is frozen while the Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - I2C5 SMBUS timeout continues to operate while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_I2C5_B_0x0 = 0;
        /** @brief Stop in debug - I2C5 SMBUS timeout is frozen while the Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_I2C5_B_0x1 = 1;

    /** @brief DBGMCU_APB1HFZ1 register */
    using DBGMCU_APB1HFZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM23 stop in debug */
    using DBGMCU_APB1HFZ1_TIM23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM23 continues to operate while the core is in debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM23 is frozen while Cortex-M7 is in debug mode (value: 1)
     */
        /** @brief Normal operation - TIM23 continues to operate while the core is in debug mode */
    constexpr std::uint32_t DBGMCU_APB1HFZ1_TIM23_B_0x0 = 0;
        /** @brief Stop in debug - TIM23 is frozen while Cortex-M7 is in debug mode */
    constexpr std::uint32_t DBGMCU_APB1HFZ1_TIM23_B_0x1 = 1;

    /** @brief TIM24 stop in debug */
    using DBGMCU_APB1HFZ1_TIM24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM24 continues to operate while the core is in debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM24 is frozen while Cortex-M7 is in debug mode (value: 1)
     */
        /** @brief Normal operation - TIM24 continues to operate while the core is in debug mode */
    constexpr std::uint32_t DBGMCU_APB1HFZ1_TIM24_B_0x0 = 0;
        /** @brief Stop in debug - TIM24 is frozen while Cortex-M7 is in debug mode */
    constexpr std::uint32_t DBGMCU_APB1HFZ1_TIM24_B_0x1 = 1;

    /** @brief DBGMCU_APB2FZ1 register */
    using DBGMCU_APB2FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 stop in debug */
    using DBGMCU_APB2FZ1_TIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM1 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM1 is frozen and TIM1 outputs are disabled while Cortex-M7 is in Debug mode. (value: 1)
     */
        /** @brief Normal operation - TIM1 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM1_B_0x0 = 0;
        /** @brief Stop in debug - TIM1 is frozen and TIM1 outputs are disabled while Cortex-M7 is in Debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM1_B_0x1 = 1;

    /** @brief TIM8 stop in debug */
    using DBGMCU_APB2FZ1_TIM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM8 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM8 is frozen and TIM8 outputs are disabled while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM8 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM8_B_0x0 = 0;
        /** @brief Stop in debug - TIM8 is frozen and TIM8 outputs are disabled while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM8_B_0x1 = 1;

    /** @brief TIM15 stop in debug */
    using DBGMCU_APB2FZ1_TIM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM15 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM15 is frozen and TIM15 outputs are disabled while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM15 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM15_B_0x0 = 0;
        /** @brief Stop in debug - TIM15 is frozen and TIM15 outputs are disabled while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM15_B_0x1 = 1;

    /** @brief TIM16 stop in debug */
    using DBGMCU_APB2FZ1_TIM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM16 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM16 is frozen and TIM16 outputs are disabled while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM16 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM16_B_0x0 = 0;
        /** @brief Stop in debug - TIM16 is frozen and TIM16 outputs are disabled while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM16_B_0x1 = 1;

    /** @brief TIM17 stop in debug */
    using DBGMCU_APB2FZ1_TIM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM17 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM17 is frozen and TIM17 outputs are disabled while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM17 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM17_B_0x0 = 0;
        /** @brief Stop in debug - TIM17 is frozen and TIM17 outputs are disabled while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ1_TIM17_B_0x1 = 1;

    /** @brief DBGMCU_APB4FZ1 register */
    using DBGMCU_APB4FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 SMBUS timeout stop in debug */
    using DBGMCU_APB4FZ1_I2C4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - I2C4 SMBUS timeout continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - I2C4 SMBUS timeout is frozen while the core is in Debug mode (value: 1)
     */
        /** @brief Normal operation - I2C4 SMBUS timeout continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_I2C4_B_0x0 = 0;
        /** @brief Stop in debug - I2C4 SMBUS timeout is frozen while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_I2C4_B_0x1 = 1;

    /** @brief LPTIM2 stop in debug */
    using DBGMCU_APB4FZ1_LPTIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM2 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM2 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM2 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_LPTIM2_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM2 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_LPTIM2_B_0x1 = 1;

    /** @brief LPTIM2 stop in debug */
    using DBGMCU_APB4FZ1_LPTIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM2 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM2 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM2 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_LPTIM3_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM2 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_LPTIM3_B_0x1 = 1;

    /** @brief LPTIM4 stop in debug */
    using DBGMCU_APB4FZ1_LPTIM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM4 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM4 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM4 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_LPTIM4_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM4 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_LPTIM4_B_0x1 = 1;

    /** @brief LPTIM5 stop in debug */
    using DBGMCU_APB4FZ1_LPTIM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM5 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM5 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM5 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_LPTIM5_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM5 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_LPTIM5_B_0x1 = 1;

    /** @brief RTC stop in debug */
    using DBGMCU_APB4FZ1_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - RTC continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - RTC is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - RTC continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_RTC_B_0x0 = 0;
        /** @brief Stop in debug - RTC is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_RTC_B_0x1 = 1;

    /** @brief Independent watchdog for D1 stop in debug */
    using DBGMCU_APB4FZ1_IWDG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - watchdog continues counting while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - watchdog is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - watchdog continues counting while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_IWDG1_B_0x0 = 0;
        /** @brief Stop in debug - watchdog is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZ1_IWDG1_B_0x1 = 1;

    /** @brief DBGMCU_PIDR4 register */
    using DBGMCU_PIDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 continuation code */
    using DBGMCU_PIDR4_JEP106CON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STMicroelectronics JEDEC code (value: 0)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR4_JEP106CON_B_0x0 = 0;

    /** @brief Register file size */
    using DBGMCU_PIDR4_KCOUNT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Register file occupies a single 4 Kbyte region (value: 0)
     */
        /** @brief Register file occupies a single 4 Kbyte region */
    constexpr std::uint32_t DBGMCU_PIDR4_KCOUNT4_B_0x0 = 0;

    /** @brief DBGMCU_PIDR0 register */
    using DBGMCU_PIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number field, bits [7:0] */
    using DBGMCU_PIDR0_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBGMCU (value: 0)
     */
        /** @brief DBGMCU */
    constexpr std::uint32_t DBGMCU_PIDR0_PARTNUM_B_0x0 = 0;

    /** @brief DBGMCU_PIDR1 register */
    using DBGMCU_PIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number field, bits [11:8] */
    using DBGMCU_PIDR1_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBGMCU (value: 0)
     */
        /** @brief DBGMCU */
    constexpr std::uint32_t DBGMCU_PIDR1_PARTNUM_B_0x0 = 0;

    /** @brief JEP106 identity code field, bits [3:0] */
    using DBGMCU_PIDR1_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STMicroelectronics JEDEC code (value: 0)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR1_JEP106ID_B_0x0 = 0;

    /** @brief DBGMCU_PIDR2 register */
    using DBGMCU_PIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 identity code field, bits [6:4] */
    using DBGMCU_PIDR2_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: STMicroelectronics JEDEC code (value: 2)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR2_JEP106ID_B_0x2 = 2;

    /** @brief JEDEC assigned value */
    using DBGMCU_PIDR2_JEDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Designer ID specified by JEDEC (value: 1)
     */
        /** @brief Designer ID specified by JEDEC */
    constexpr std::uint32_t DBGMCU_PIDR2_JEDEC_B_0x1 = 1;

    /** @brief Component revision number */
    using DBGMCU_PIDR2_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rev 0 (value: 0)
     */
        /** @brief rev 0 */
    constexpr std::uint32_t DBGMCU_PIDR2_REVISION_B_0x0 = 0;

    /** @brief DBGMCU_PIDR3 register */
    using DBGMCU_PIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Customer modified */
    using DBGMCU_PIDR3_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No customer modifications (value: 0)
     */
        /** @brief No customer modifications */
    constexpr std::uint32_t DBGMCU_PIDR3_CMOD_B_0x0 = 0;

    /** @brief Metal fix version */
    using DBGMCU_PIDR3_REVAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No metal fix (value: 0)
     */
        /** @brief No metal fix */
    constexpr std::uint32_t DBGMCU_PIDR3_REVAND_B_0x0 = 0;

    /** @brief DBGMCU_CIDR0 register */
    using DBGMCU_CIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID field, bits [7:0] */
    using DBGMCU_CIDR0_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xD: Common ID value (value: 13)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR0_PREAMBLE_B_0xD = 13;

    /** @brief DBGMCU_CIDR1 register */
    using DBGMCU_CIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID field, bits [11:8] */
    using DBGMCU_CIDR1_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Common ID value (value: 0)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR1_PREAMBLE_B_0x0 = 0;

    /** @brief Component ID field, bits [15:12] - component class */
    using DBGMCU_CIDR1_CLASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xF: System component with non-standard register layout (value: 15)
     */
        /** @brief System component with non-standard register layout */
    constexpr std::uint32_t DBGMCU_CIDR1_CLASS_B_0xF = 15;

    /** @brief DBGMCU_CIDR2 register */
    using DBGMCU_CIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID field, bits [23:16] */
    using DBGMCU_CIDR2_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x5: Common ID value (value: 5)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR2_PREAMBLE_B_0x5 = 5;

    /** @brief DBGMCU_CIDR3 register */
    using DBGMCU_CIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID field, bits [31:24] */
    using DBGMCU_CIDR3_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB1: Common ID value (value: 177)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR3_PREAMBLE_B_0xB1 = 177;

}

#endif
