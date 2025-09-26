/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA50_DBGMCU_HPP
#define EMBEDDED_PP_STM32WBA50_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DBGMCU address block description */
namespace STM32WBA50::DBGMCU {

    /** @brief DBGMCU identity code register */
    using DBGMCU_IDCODER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device ID */
    using DBGMCU_IDCODER_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x492: STM32WBA5xxx (value: 1170)
     */
        /** @brief STM32WBA5xxx */
    constexpr std::uint32_t DBGMCU_IDCODER_DEV_ID_B_0x492 = 1170;

    /** @brief Revision ID */
    using DBGMCU_IDCODER_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1000: Revision A (value: 4096)
     */
        /** @brief Revision A */
    constexpr std::uint32_t DBGMCU_IDCODER_REV_ID_B_0x1000 = 4096;

    /** @brief DBGMCU status and configuration register */
    using DBGMCU_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allows debug in Stop mode Write access can be protected by PWR_SECCFGR.LPMSEC. The CPU debug and DBGMCU clocks remain active and the HSI16 oscillators is used as system clock during Stop debug mode, allowing CPU debug capability. On exit from Stop mode, the clock settings are set to the Stop mode exit state. */
    using DBGMCU_SCR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal Stop mode operation, all clocks are disabled automatically in Stop mode. (value: 0)
     *          - B_0x1: CPU debug clock enabled in Stop mode, all other peripheral clocks are disabled automatically in Stop mode, except for DBGMCU. (value: 1)
     */
        /** @brief Normal Stop mode operation, all clocks are disabled automatically in Stop mode. */
    constexpr std::uint32_t DBGMCU_SCR_DBG_STOP_B_0x0 = 0;
        /** @brief CPU debug clock enabled in Stop mode, all other peripheral clocks are disabled automatically in Stop mode, except for DBGMCU. */
    constexpr std::uint32_t DBGMCU_SCR_DBG_STOP_B_0x1 = 1;

    /** @brief Allows debug in Standby mode Write access can be protected by PWR_SECCFGR.LPMSEC. The CPU debug and DBGMCU clocks remain active and the HSI16 oscillator is used as system clock, the supply and SRAM memory content is maintained during Standby debug mode, allowing CPU debug capability. On exit from Standby mode, a standby reset is performed. */
    using DBGMCU_SCR_DBG_STANDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal Standby mode operation, all clocks are disabled automatically in Stop mode and core is powered down. (value: 0)
     *          - B_0x1: Core power maintained and CPU debug clock enabled in Standby mode, all other are under reset in Stop mode, except for DBGMCU. (value: 1)
     */
        /** @brief Normal Standby mode operation, all clocks are disabled automatically in Stop mode and core is powered down. */
    constexpr std::uint32_t DBGMCU_SCR_DBG_STANDBY_B_0x0 = 0;
        /** @brief Core power maintained and CPU debug clock enabled in Standby mode, all other are under reset in Stop mode, except for DBGMCU. */
    constexpr std::uint32_t DBGMCU_SCR_DBG_STANDBY_B_0x1 = 1;

    /** @brief Device low power mode selected 10x: Standby mode others reserved */
    using DBGMCU_SCR_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop 0 mode (value: 0)
     *          - B_0x1: Stop 1 mode (value: 1)
     */
        /** @brief Stop 0 mode */
    constexpr std::uint32_t DBGMCU_SCR_LPMS_B_0x0 = 0;
        /** @brief Stop 1 mode */
    constexpr std::uint32_t DBGMCU_SCR_LPMS_B_0x1 = 1;

    /** @brief Device Stop flag */
    using DBGMCU_SCR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: device not in Stop mode (value: 0)
     *          - B_0x1: device in Stop mode (value: 1)
     */
        /** @brief device not in Stop mode */
    constexpr std::uint32_t DBGMCU_SCR_STOPF_B_0x0 = 0;
        /** @brief device in Stop mode */
    constexpr std::uint32_t DBGMCU_SCR_STOPF_B_0x1 = 1;

    /** @brief Device Standby flag */
    using DBGMCU_SCR_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device not in Standby mode (value: 0)
     *          - B_0x1: Device in Standby mode (value: 1)
     */
        /** @brief Device not in Standby mode */
    constexpr std::uint32_t DBGMCU_SCR_SBF_B_0x0 = 0;
        /** @brief Device in Standby mode */
    constexpr std::uint32_t DBGMCU_SCR_SBF_B_0x1 = 1;

    /** @brief CPU Sleep */
    using DBGMCU_SCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CPU not in Sleep (value: 0)
     *          - B_0x1: CPU in Sleep (value: 1)
     */
        /** @brief CPU not in Sleep */
    constexpr std::uint32_t DBGMCU_SCR_CS_B_0x0 = 0;
        /** @brief CPU in Sleep */
    constexpr std::uint32_t DBGMCU_SCR_CS_B_0x1 = 1;

    /** @brief CPU DeepSleep */
    using DBGMCU_SCR_CDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CPU not in DeepSleep (value: 0)
     *          - B_0x1: CPU in DeepSleep (value: 1)
     */
        /** @brief CPU not in DeepSleep */
    constexpr std::uint32_t DBGMCU_SCR_CDS_B_0x0 = 0;
        /** @brief CPU in DeepSleep */
    constexpr std::uint32_t DBGMCU_SCR_CDS_B_0x1 = 1;

    /** @brief DBGMCU APB1L peripheral freeze register */
    using DBGMCU_APB1LFZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in CPU debug Write access can be protected by GTZC_TZSC.TIM2SEC. */
    using DBGMCU_APB1LFZR_DBG_TIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM2 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM2 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM2 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM2 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM2_STOP_B_0x1 = 1;

    /** @brief TIM3 stop in CPU debug Write access can be protected by GTZC_TZSC.TIM3SEC. */
    using DBGMCU_APB1LFZR_DBG_TIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM3 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM3 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM3 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM3 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM3_STOP_B_0x1 = 1;

    /** @brief WWDG stop in CPU debug Write access can be protected by GTZC_TZSC.WWDGSEC */
    using DBGMCU_APB1LFZR_DBG_WWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. WWDG continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. WWDG is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. WWDG continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_WWDG_STOP_B_0x0 = 0;
        /** @brief Stop in debug. WWDG is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_WWDG_STOP_B_0x1 = 1;

    /** @brief IWDG stop in CPU debug Write access can be protected by GTZC_TZSC.IWDGSEC. */
    using DBGMCU_APB1LFZR_DBG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. IWDG continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. IWDG is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. IWDG continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_IWDG_STOP_B_0x0 = 0;
        /** @brief Stop in debug. IWDG is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_IWDG_STOP_B_0x1 = 1;

    /** @brief I2C1 SMBUS timeout stop in CPU debug Write access can be protected by GTZC_TZSC.I2C1SEC. */
    using DBGMCU_APB1LFZR_DBG_I2C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. I2C1 SMBUS timeout continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. I2C1 SMBUS timeout is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. I2C1 SMBUS timeout continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. I2C1 SMBUS timeout is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C1_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB1H peripheral freeze register */
    using DBGMCU_APB1HFZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 stop in CPU debug Write access can be protected by GTZC_TZSC.LPTIM2SEC. */
    using DBGMCU_APB1HFZR_DBG_LPTIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. LPTIM2 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. LPTIM2 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. LPTIM2 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1HFZR_DBG_LPTIM2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. LPTIM2 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1HFZR_DBG_LPTIM2_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB2 peripheral freeze register */
    using DBGMCU_APB2FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 stop in CPU debug Write access can be protected by GTZC_TZSC.TIM1SEC. */
    using DBGMCU_APB2FZR_DBG_TIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM1 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM1 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM1 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM1 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM1_STOP_B_0x1 = 1;

    /** @brief TIM16 stop in CPU debug Write access can be protected by GTZC_TZSC.TIM16SEC. */
    using DBGMCU_APB2FZR_DBG_TIM16_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM16 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM16 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM16 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM16_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM16 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM16_STOP_B_0x1 = 1;

    /** @brief TIM17 stop in CPU debug Write access can be protected by GTZC_TZSC.TIM17SEC. */
    using DBGMCU_APB2FZR_DBG_TIM17_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. TIM17 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. TIM17 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. TIM17 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM17_STOP_B_0x0 = 0;
        /** @brief Stop in debug. TIM17 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM17_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB7 peripheral freeze register */
    using DBGMCU_APB7FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 stop in CPU debug Access can be protected by GTZC_TZSC.I2C3SEC. */
    using DBGMCU_APB7FZR_DBG_I2C3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. I2C3 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. I2C3 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. I2C3 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB7FZR_DBG_I2C3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. I2C3 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB7FZR_DBG_I2C3_STOP_B_0x1 = 1;

    /** @brief LPTIM1 stop in CPU debug Access can be protected by GTZC_TZSC.LPTIM1SEC. */
    using DBGMCU_APB7FZR_DBG_LPTIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. LPTIM1 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. LPTIM1 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. LPTIM1 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB7FZR_DBG_LPTIM1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. LPTIM1 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB7FZR_DBG_LPTIM1_STOP_B_0x1 = 1;

    /** @brief RTC stop in CPU debug Access can be protected by GTZC_TZSC.TIM17SEC. Can only be accessed secure when one or more features in the RTC or TAMP is/are secure. */
    using DBGMCU_APB7FZR_DBG_RTC_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. RTC continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. RTC is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. RTC continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB7FZR_DBG_RTC_STOP_B_0x0 = 0;
        /** @brief Stop in debug. RTC is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB7FZR_DBG_RTC_STOP_B_0x1 = 1;

    /** @brief DBGMCU AHB1 peripheral freeze register */
    using DBGMCU_AHB1FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA 1 channel 0 stop in CPU debug Write access can be protected by GPDMA_SECCFGR.SEC0. */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_CH0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA 1 channel 0 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA 1 channel 0 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA 1 channel 0 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH0_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA 1 channel 0 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH0_STOP_B_0x1 = 1;

    /** @brief GPDMA 1 channel 1 stop in CPU debug Write access can be protected by GPDMA_SECCFGR.SEC1. */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_CH1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA 1 channel 1 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA 1 channel 1 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA 1 channel 1 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA 1 channel 1 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH1_STOP_B_0x1 = 1;

    /** @brief GPDMA 1 channel 2 stop in CPU debug Write access can be protected by GPDMA_SECCFGR.SEC2. */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_CH2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA 1 channel 2 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA 1 channel 2 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA 1 channel 2 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA 1 channel 2 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH2_STOP_B_0x1 = 1;

    /** @brief GPDMA 1 channel 3 stop in CPU debug Write access can be protected by GPDMA_SECCFGR.SEC3. */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_CH3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA 1 channel 3 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA 1 channel 3 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA 1 channel 3 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA 1 channel 3 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH3_STOP_B_0x1 = 1;

    /** @brief GPDMA 1 channel 4 stop in CPU debug Write access can be protected by GPDMA_SECCFGR.SEC4. */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_CH4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA 1 channel 4 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA 1 channel 4 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA 1 channel 4 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH4_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA 1 channel 4 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH4_STOP_B_0x1 = 1;

    /** @brief GPDMA 1 channel 5 stop in CPU debug Write access can be protected by GPDMA_SECCFGR.SEC5. */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_CH5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA 1 channel 5 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA 1 channel 5 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA 1 channel 5 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH5_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA 1 channel 5 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH5_STOP_B_0x1 = 1;

    /** @brief GPDMA 1 channel 6 stop in CPU debug Write access can be protected by GPDMA_SECCFGR.SEC6. */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_CH6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA 1 channel 6 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA 1 channel 6 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA 1 channel 6 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH6_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA 1 channel 6 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH6_STOP_B_0x1 = 1;

    /** @brief GPDMA 1 channel 7 stop in CPU debug Write access can be protected by GPDMA_SECCFGR.SEC7. */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_CH7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. GPDMA 1 channel 7 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: Stop in debug. GPDMA 1 channel 7 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief Normal operation. GPDMA 1 channel 7 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH7_STOP_B_0x0 = 0;
        /** @brief Stop in debug. GPDMA 1 channel 7 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_CH7_STOP_B_0x1 = 1;

    /** @brief DBGMCU status register */
    using DBGMCU_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit n identifies whether access port APn is present in device Bit n = 0: APn absent Bit n = 1: APn present */
    using DBGMCU_SR_AP_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit n identifies whether access port APn is open (can be accessed via the debug port) or locked (debug access to the APn is blocked, except for DBGMCU access) Bit n = 0: APn locked (except for access to DBGMCU) Bit n = 1: APn enabled */
    using DBGMCU_SR_AP_ENABLED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug host authentication register */
    using DBGMCU_DBG_AUTH_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device authentication key The device specific 64-bit authentication key (OEMn key) must be written to this register (in two successive 32-bit writes, least significant word first) to permit RDP regression. Writing a wrong key locks access to the device and prevent code execution from the Flash memory. */
    using DBGMCU_DBG_AUTH_HOST_AUTH_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug device authentication register */
    using DBGMCU_DBG_AUTH_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device specific ID Device specific ID used for RDP regression. */
    using DBGMCU_DBG_AUTH_DEVICE_AUTH_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU part number codification register */
    using DBGMCU_PNCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number codification */
    using DBGMCU_PNCR_CODIFICATION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00323541: STMicroelectronics STM32WBA52xx part number codification. (value: 3290433)
     */
        /** @brief STMicroelectronics STM32WBA52xx part number codification. */
    constexpr std::uint32_t DBGMCU_PNCR_CODIFICATION_B_0x00323541 = 3290433;

    /** @brief DBGMCU CoreSight peripheral identity register 4 */
    using DBGMCU_PIDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 continuation code */
    using DBGMCU_PIDR4_JEP106CON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STMicroelectronics JEDEC code (value: 0)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR4_JEP106CON_B_0x0 = 0;

    /** @brief Register file size */
    using DBGMCU_PIDR4_F4KCOUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The register file occupies a single 4-Kbyte region (value: 0)
     */
        /** @brief The register file occupies a single 4-Kbyte region */
    constexpr std::uint32_t DBGMCU_PIDR4_F4KCOUNT_B_0x0 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 0 */
    using DBGMCU_PIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number bits [7:0] */
    using DBGMCU_PIDR0_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: DBGMCU part number (value: 0)
     */
        /** @brief DBGMCU part number */
    constexpr std::uint32_t DBGMCU_PIDR0_PARTNUM_B_0x00 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 1 */
    using DBGMCU_PIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number bits [11:8] */
    using DBGMCU_PIDR1_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBGMCU part number (value: 0)
     */
        /** @brief DBGMCU part number */
    constexpr std::uint32_t DBGMCU_PIDR1_PARTNUM_B_0x0 = 0;

    /** @brief JEP106 identity code bits [3:0] */
    using DBGMCU_PIDR1_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STMicroelectronics JEDEC code (value: 0)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR1_JEP106ID_B_0x0 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 2 */
    using DBGMCU_PIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 identity code bits [6:4] */
    using DBGMCU_PIDR2_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: STMicroelectronics JEDEC code (value: 2)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR2_JEP106ID_B_0x2 = 2;

    /** @brief JEDEC assigned value */
    using DBGMCU_PIDR2_JEDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Designer identifier specified by JEDEC (value: 1)
     */
        /** @brief Designer identifier specified by JEDEC */
    constexpr std::uint32_t DBGMCU_PIDR2_JEDEC_B_0x1 = 1;

    /** @brief Component revision number */
    using DBGMCU_PIDR2_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: r0p0 (value: 0)
     */
        /** @brief r0p0 */
    constexpr std::uint32_t DBGMCU_PIDR2_REVISION_B_0x0 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 3 */
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

    /** @brief DBGMCU CoreSight component identity register 0 */
    using DBGMCU_CIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID bits [7:0] */
    using DBGMCU_CIDR0_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0D: Common ID value (value: 13)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR0_PREAMBLE_B_0x0D = 13;

    /** @brief DBGMCU CoreSight peripheral identity register 1 */
    using DBGMCU_CIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID bits [11:8] */
    using DBGMCU_CIDR1_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: common ID value (value: 0)
     */
        /** @brief common ID value */
    constexpr std::uint32_t DBGMCU_CIDR1_PREAMBLE_B_0x0 = 0;

    /** @brief Component ID bits [15:12] - component class */
    using DBGMCU_CIDR1_CLASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xF: no CoreSight component (value: 15)
     */
        /** @brief no CoreSight component */
    constexpr std::uint32_t DBGMCU_CIDR1_CLASS_B_0xF = 15;

    /** @brief DBGMCU CoreSight component identity register 2 */
    using DBGMCU_CIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID bits [23:16] */
    using DBGMCU_CIDR2_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x05: Common ID value (value: 5)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR2_PREAMBLE_B_0x05 = 5;

    /** @brief DBGMCU CoreSight component identity register 3 */
    using DBGMCU_CIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID bits [31:24] */
    using DBGMCU_CIDR3_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB1: Common ID value (value: 177)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR3_PREAMBLE_B_0xB1 = 177;

}

#endif
