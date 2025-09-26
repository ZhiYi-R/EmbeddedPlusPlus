/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_DBGMCU_HPP
#define EMBEDDED_PP_STM32N655_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Microcontroller debug unit */
namespace STM32N655::DBGMCU {

    /** @brief DBGMCU identity code register */
    using DBGMCU_IDCODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device ID */
    using DBGMCU_IDCODE_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x486: STM32N6xx (value: 1158)
     */
        /** @brief STM32N6xx */
    constexpr std::uint32_t DBGMCU_IDCODE_DEV_ID_B_0x486 = 1158;

    /** @brief Revision */
    using DBGMCU_IDCODE_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU configuration register */
    using DBGMCU_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow debug in Sleep mode */
    using DBGMCU_CR_DBG_SLEEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. Peripheral clock are stopped automatically in Sleep mode (value: 0)
     *          - B_0x1: Automatic clock stop disabled. Peripheral clock continues to run, allowing full debug capability. (value: 1)
     */
        /** @brief Normal operation. Peripheral clock are stopped automatically in Sleep mode */
    constexpr std::uint32_t DBGMCU_CR_DBG_SLEEP_B_0x0 = 0;
        /** @brief Automatic clock stop disabled. Peripheral clock continues to run, allowing full debug capability. */
    constexpr std::uint32_t DBGMCU_CR_DBG_SLEEP_B_0x1 = 1;

    /** @brief Allow debug in Stop mode */
    using DBGMCU_CR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. All clocks are disabled automatically in Stop mode (value: 0)
     *          - B_0x1: Automatic clock stop disabled. All active clocks and oscillators continue to run during Stop mode, allowing full debug capability. (value: 1)
     */
        /** @brief Normal operation. All clocks are disabled automatically in Stop mode */
    constexpr std::uint32_t DBGMCU_CR_DBG_STOP_B_0x0 = 0;
        /** @brief Automatic clock stop disabled. All active clocks and oscillators continue to run during Stop mode, allowing full debug capability. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STOP_B_0x1 = 1;

    /** @brief Allow debug in Standby mode */
    using DBGMCU_CR_DBG_STANDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. All clocks are disabled and the Vless thansub>DDless than/sub> domain powered down automatically in Standby mode. (value: 0)
     *          - B_0x1: Automatic clock stop/power down disabled. All active clocks and oscillators continue to run during Standby mode, and the Vless thansub>DDless than/sub> domain supply is maintained, allowing full debug capability. (value: 1)
     */
        /** @brief Normal operation. All clocks are disabled and the Vless thansub>DDless than/sub> domain powered down automatically in Standby mode. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STANDBY_B_0x0 = 0;
        /** @brief Automatic clock stop/power down disabled. All active clocks and oscillators continue to run during Standby mode, and the Vless thansub>DDless than/sub> domain supply is maintained, allowing full debug capability. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STANDBY_B_0x1 = 1;

    /** @brief Debug clock enable through software */
    using DBGMCU_CR_DBGCLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Debug clock is off. (value: 0)
     *          - B_0x1: Debug clock is on. (value: 1)
     */
        /** @brief Debug clock is off. */
    constexpr std::uint32_t DBGMCU_CR_DBGCLKEN_B_0x0 = 0;
        /** @brief Debug clock is on. */
    constexpr std::uint32_t DBGMCU_CR_DBGCLKEN_B_0x1 = 1;

    /** @brief TPIU export clock enable through software */
    using DBGMCU_CR_TRACECLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TPIU clock is off. (value: 0)
     *          - B_0x1: TPIU clock is on. (value: 1)
     */
        /** @brief TPIU clock is off. */
    constexpr std::uint32_t DBGMCU_CR_TRACECLKEN_B_0x0 = 0;
        /** @brief TPIU clock is on. */
    constexpr std::uint32_t DBGMCU_CR_TRACECLKEN_B_0x1 = 1;

    /** @brief DBTRGIO connection control */
    using DBGMCU_CR_DBTRGOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBTRGIO connected to DBTRGIN (value: 0)
     *          - B_0x1: DBTRGIO connected to DBTRGOUT (value: 1)
     */
        /** @brief DBTRGIO connected to DBTRGIN */
    constexpr std::uint32_t DBGMCU_CR_DBTRGOEN_B_0x0 = 0;
        /** @brief DBTRGIO connected to DBTRGOUT */
    constexpr std::uint32_t DBGMCU_CR_DBTRGOEN_B_0x1 = 1;

    /** @brief TSGEN halt enable */
    using DBGMCU_CR_HLT_TSGEN_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: TSGEN stops counting when processor is in halt. (value: 1)
     *          - B_0x0: TSGEN keeps on counting when processor is in halt. (value: 0)
     */
        /** @brief TSGEN stops counting when processor is in halt. */
    constexpr std::uint32_t DBGMCU_CR_HLT_TSGEN_EN_B_0x1 = 1;
        /** @brief TSGEN keeps on counting when processor is in halt. */
    constexpr std::uint32_t DBGMCU_CR_HLT_TSGEN_EN_B_0x0 = 0;

    /** @brief DBGMCU APB1L peripheral freeze register */
    using DBGMCU_APB1LFZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM2 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM2 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM2 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM2 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM2_STOP_B_0x1 = 1;

    /** @brief TIM3 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM3 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM3 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM3 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM3 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM3_STOP_B_0x1 = 1;

    /** @brief TIM4 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM4 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM4 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM4 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM4_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM4 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM4_STOP_B_0x1 = 1;

    /** @brief TIM5 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM5 continues to operate while Cortex-M55 is in debug mod.e (value: 0)
     *          - B_0x1: Stop in debug. TIM5 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM5 continues to operate while Cortex-M55 is in debug mod.e */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM5_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM5 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM5_STOP_B_0x1 = 1;

    /** @brief TIM6 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM6 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM6 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM6 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM6_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM6 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM6_STOP_B_0x1 = 1;

    /** @brief TIM7 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM7 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM7 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM7 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM7_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM7 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM7_STOP_B_0x1 = 1;

    /** @brief TIM12 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM12_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM12 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM12 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM12 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM12_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM12 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM12_STOP_B_0x1 = 1;

    /** @brief TIM13 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM13_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM13 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM13 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM13 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM13_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM13 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM13_STOP_B_0x1 = 1;

    /** @brief TIM14 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM14_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM14 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM14 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM14 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM14_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM14 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM14_STOP_B_0x1 = 1;

    /** @brief LPTIM1 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_LPTIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. LPTIM1 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. LPTIM1 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. LPTIM1 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_LPTIM1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. LPTIM1 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_LPTIM1_STOP_B_0x1 = 1;

    /** @brief WWDG1 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_WWDG1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. WWDG1 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. WWDG1 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. WWDG1 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_WWDG1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. WWDG1 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_WWDG1_STOP_B_0x1 = 1;

    /** @brief TIM10 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM10_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM10 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM10 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM10 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM10_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM10 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM10_STOP_B_0x1 = 1;

    /** @brief TIM11 stop in debug */
    using DBGMCU_APB1LFZ1_DBG_TIM11_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM11 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM11 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM11 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM11_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM11 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_TIM11_STOP_B_0x1 = 1;

    /** @brief I2C1 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZ1_DBG_I2C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. I2C1 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. I2C1 SMBUS timeout is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. I2C1 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I2C1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. I2C1 SMBUS timeout is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I2C1_STOP_B_0x1 = 1;

    /** @brief I2C2 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZ1_DBG_I2C2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. I2C2 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. I2C2 SMBUS timeout is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. I2C2 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I2C2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. I2C2 SMBUS timeout is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I2C2_STOP_B_0x1 = 1;

    /** @brief I2C3 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZ1_DBG_I2C3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. I2C3 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. I2C3 SMBUS timeout is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. I2C3 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I2C3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. I2C3 SMBUS timeout is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I2C3_STOP_B_0x1 = 1;

    /** @brief I3C1 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZ1_DBG_I3C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. I3C1 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. I3C1 SMBUS timeout is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. I3C1 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I3C1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. I3C1 SMBUS timeout is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I3C1_STOP_B_0x1 = 1;

    /** @brief I3C2 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZ1_DBG_I3C2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. I3C2 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. I3C2 SMBUS timeout is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. I3C2 SMBUS timeout continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I3C2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. I3C2 SMBUS timeout is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZ1_DBG_I3C2_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB1H peripheral freeze register */
    using DBGMCU_APB1HFZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN stop in debug */
    using DBGMCU_APB1HFZ1_DBG_FDCAN_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. FDCAN continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. FDCAN is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. FDCAN continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1HFZ1_DBG_FDCAN_STOP_B_0x0 = 0;
        /** @brief Stop in debug. FDCAN is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1HFZ1_DBG_FDCAN_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB2 peripheral freeze register */
    using DBGMCU_APB2FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 stop in debug */
    using DBGMCU_APB2FZ1_DBG_TIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM1 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM1 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM1 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM1 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM1_STOP_B_0x1 = 1;

    /** @brief TIM8 stop in debug */
    using DBGMCU_APB2FZ1_DBG_TIM8_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM8 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM8 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM8 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM8_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM8 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM8_STOP_B_0x1 = 1;

    /** @brief TIM18 stop in debug */
    using DBGMCU_APB2FZ1_DBG_TIM18_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM18 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM18 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM18 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM18_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM18 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM18_STOP_B_0x1 = 1;

    /** @brief TIM15 stop in debug */
    using DBGMCU_APB2FZ1_DBG_TIM15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM15 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM15 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM15 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM15_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM15 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM15_STOP_B_0x1 = 1;

    /** @brief TIM16 stop in debug */
    using DBGMCU_APB2FZ1_DBG_TIM16_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM16 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM16 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM16 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM16_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM16 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM16_STOP_B_0x1 = 1;

    /** @brief TIM17 stop in debug */
    using DBGMCU_APB2FZ1_DBG_TIM17_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM17 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM17 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM17 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM17_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM17 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM17_STOP_B_0x1 = 1;

    /** @brief TIM9 stop in debug */
    using DBGMCU_APB2FZ1_DBG_TIM9_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM9 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM9 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM9 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM9_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM9 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ1_DBG_TIM9_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB4 peripheral freeze register */
    using DBGMCU_APB4FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 stop in debug */
    using DBGMCU_APB4FZ1_DBG_I2C4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. I2C4 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. I2C4 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. I2C4 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_I2C4_STOP_B_0x0 = 0;
        /** @brief Stop in debug. I2C4 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_I2C4_STOP_B_0x1 = 1;

    /** @brief LPTIM2 stop in debug */
    using DBGMCU_APB4FZ1_DBG_LPTIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. LPTIM2 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. LPTIM2 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. LPTIM2 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_LPTIM2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. LPTIM2 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_LPTIM2_STOP_B_0x1 = 1;

    /** @brief LPTIM3 stop in debug */
    using DBGMCU_APB4FZ1_DBG_LPTIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. LPTIM3 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. LPTIM3 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. LPTIM3 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_LPTIM3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. LPTIM3 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_LPTIM3_STOP_B_0x1 = 1;

    /** @brief LPTIM4 stop in debug */
    using DBGMCU_APB4FZ1_DBG_LPTIM4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. LPTIM4 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. LPTIM4 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. LPTIM4 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_LPTIM4_STOP_B_0x0 = 0;
        /** @brief Stop in debug. LPTIM4 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_LPTIM4_STOP_B_0x1 = 1;

    /** @brief LPTIM5 stop in debug */
    using DBGMCU_APB4FZ1_DBG_LPTIM5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. LPTIM5 continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. LPTIM5 is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. LPTIM5 continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_LPTIM5_STOP_B_0x0 = 0;
        /** @brief Stop in debug. LPTIM5 is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_LPTIM5_STOP_B_0x1 = 1;

    /** @brief RTC clock is suspended in debug */
    using DBGMCU_APB4FZ1_DBG_RTC_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. Real time clock continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. Real time clock is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. Real time clock continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_RTC_STOP_B_0x0 = 0;
        /** @brief Stop in debug. Real time clock is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_RTC_STOP_B_0x1 = 1;

    /** @brief WWDG stop in debug */
    using DBGMCU_APB4FZ1_DBG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. IWDG continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. IWDG is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. IWDG continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_IWDG_STOP_B_0x0 = 0;
        /** @brief Stop in debug. IWDG is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB4FZ1_DBG_IWDG_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB5 peripheral freeze register */
    using DBGMCU_APB5FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM stop in debug */
    using DBGMCU_APB5FZ1_DBG_GFXTIM_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GFX timer continues counting while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GFX timer is frozen while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GFX timer continues counting while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB5FZ1_DBG_GFXTIM_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GFX timer is frozen while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB5FZ1_DBG_GFXTIM_STOP_B_0x1 = 1;

    /** @brief DBGMCU AHB1 peripheral freeze register */
    using DBGMCU_AHB1FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH0_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH0_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH1_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH2_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH3_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH4_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH4_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH5_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH5_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH6_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH6_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH7_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH7_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH8_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH8_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH8_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH9_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH9_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH9_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH10_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH10_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH10_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH11_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH11_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH11_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH12_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH12_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH12_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH13_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH13_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH13_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH14_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH14_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH14_STOP_B_0x1 = 1;

    /** @brief GPDMA1_CHn suspend in debug */
    using DBGMCU_AHB1FZ1_DBG_GPDMA1_CH15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA1_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH15_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA1_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZ1_DBG_GPDMA1_CH15_STOP_B_0x1 = 1;

    /** @brief DBGMCU AHB5 peripheral freeze register */
    using DBGMCU_AHB5FZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH0_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH0_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH1_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH2_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH3_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH4_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH4_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH5_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH5_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH6_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH6_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH7_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH7_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH8_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH8_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH8_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH9_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH9_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH9_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH10_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH10_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH10_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH11_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH11_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH11_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH12_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH12_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH12_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH13_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH13_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH13_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH14_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH14_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH14_STOP_B_0x1 = 1;

    /** @brief HPDMA3_CHn suspend in debug */
    using DBGMCU_AHB5FZ1_DBG_HPDMA1_CH15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. HPDMA3_CHn continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH15_STOP_B_0x0 = 0;
        /** @brief Stop in debug. HPDMA3_CHn is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_DBG_HPDMA1_CH15_STOP_B_0x1 = 1;

    /** @brief NPU stop in debug mode */
    using DBGMCU_AHB5FZ1_NPU_DBG_FREEZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. The NPU continues to operate while Cortex-M55 is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. NPU is suspended while Cortex-M55 is in debug mode. (value: 1)
     */
        /** @brief Normal operation. The NPU continues to operate while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_NPU_DBG_FREEZE_B_0x0 = 0;
        /** @brief Stop in debug. NPU is suspended while Cortex-M55 is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZ1_NPU_DBG_FREEZE_B_0x1 = 1;

    /** @brief DBGMCU status register */
    using DBGMCU_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access point 0 presence */
    using DBGMCU_SR_AP0_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: AP present (value: 1)
     */
        /** @brief AP present */
    constexpr std::uint32_t DBGMCU_SR_AP0_PRESENT_B_0x1 = 1;

    /** @brief Access point 1 presence */
    using DBGMCU_SR_AP1_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: AP present (value: 1)
     */
        /** @brief AP present */
    constexpr std::uint32_t DBGMCU_SR_AP1_PRESENT_B_0x1 = 1;

    /** @brief Access point 0 enable */
    using DBGMCU_SR_AP0_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Always enable (value: 1)
     */
        /** @brief Always enable */
    constexpr std::uint32_t DBGMCU_SR_AP0_ENABLE_B_0x1 = 1;

    /** @brief Access point 1 enable */
    using DBGMCU_SR_AP1_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AP disabled (debug access locked) (value: 0)
     *          - B_0x1: AP enabled (debug access open) (value: 1)
     */
        /** @brief AP disabled (debug access locked) */
    constexpr std::uint32_t DBGMCU_SR_AP1_ENABLE_B_0x0 = 0;
        /** @brief AP enabled (debug access open) */
    constexpr std::uint32_t DBGMCU_SR_AP1_ENABLE_B_0x1 = 1;

    /** @brief DBGMCU host authentication register */
    using DBGMCU_DBG_AUTH_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mailbox between debugger and processor */
    using DBGMCU_DBG_AUTH_HOST_MESSAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU device authentication register */
    using DBGMCU_DBG_AUTH_DEV = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mailbox between debugger and processor */
    using DBGMCU_DBG_AUTH_DEV_MESSAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU message read acknowledge authentication register */
    using DBGMCU_DBG_AUTH_ACK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access status to DBG_AUTH_HOST register */
    using DBGMCU_DBG_AUTH_ACK_HOST_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Debugger has written DBG_AUTH_HOST. (value: 1)
     *          - B_0x0: Processor has read DBG_AUTH_HOST. (value: 0)
     */
        /** @brief Debugger has written DBG_AUTH_HOST. */
    constexpr std::uint32_t DBGMCU_DBG_AUTH_ACK_HOST_ACK_B_0x1 = 1;
        /** @brief Processor has read DBG_AUTH_HOST. */
    constexpr std::uint32_t DBGMCU_DBG_AUTH_ACK_HOST_ACK_B_0x0 = 0;

    /** @brief Access status to DBG_AUTH_DEV register */
    using DBGMCU_DBG_AUTH_ACK_DEVICE_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Processor has written DBG_AUTH_DEV. (value: 1)
     *          - B_0x0: Debugger has read DBG_AUTH_DEV. (value: 0)
     */
        /** @brief Processor has written DBG_AUTH_DEV. */
    constexpr std::uint32_t DBGMCU_DBG_AUTH_ACK_DEVICE_ACK_B_0x1 = 1;
        /** @brief Debugger has read DBG_AUTH_DEV. */
    constexpr std::uint32_t DBGMCU_DBG_AUTH_ACK_DEVICE_ACK_B_0x0 = 0;

}

#endif
