/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G081_RCC_HPP
#define EMBEDDED_PP_STM32G081_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Reset and clock control */
namespace STM32G081::RCC {

    /** @brief Clock control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock enable */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator OFF (value: 0)
     *          - B_0x1: HSI16 oscillator ON (value: 1)
     */
        /** @brief HSI16 oscillator OFF */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI16 oscillator ON */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI16 always enable for peripheral kernels. */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect on HSI16 oscillator. (value: 0)
     *          - B_0x1: HSI16 oscillator is forced ON even in Stop mode. (value: 1)
     */
        /** @brief No effect on HSI16 oscillator. */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI16 oscillator is forced ON even in Stop mode. */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x1 = 1;

    /** @brief HSI16 clock ready flag */
    using RCC_CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator not ready (value: 0)
     *          - B_0x1: HSI16 oscillator ready (value: 1)
     */
        /** @brief HSI16 oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x0 = 0;
        /** @brief HSI16 oscillator ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x1 = 1;

    /** @brief HSI16 clock division factor */
    using RCC_CR_HSIDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 4 (value: 2)
     *          - B_0x3: 8 (value: 3)
     *          - B_0x4: 16 (value: 4)
     *          - B_0x5: 32 (value: 5)
     *          - B_0x6: 64 (value: 6)
     *          - B_0x7: 128 (value: 7)
     */
        /** @brief 1 */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x1 = 1;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x2 = 2;
        /** @brief 8 */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x3 = 3;
        /** @brief 16 */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x4 = 4;
        /** @brief 32 */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x5 = 5;
        /** @brief 64 */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x6 = 6;
        /** @brief 128 */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x7 = 7;

    /** @brief HSE clock enable */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator OFF (value: 0)
     *          - B_0x1: HSE oscillator ON (value: 1)
     */
        /** @brief HSE oscillator OFF */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief HSE oscillator ON */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x1 = 1;

    /** @brief HSE clock ready flag */
    using RCC_CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator not ready (value: 0)
     *          - B_0x1: HSE oscillator ready (value: 1)
     */
        /** @brief HSE oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x0 = 0;
        /** @brief HSE oscillator ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x1 = 1;

    /** @brief HSE crystal oscillator bypass */
    using RCC_CR_HSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE crystal oscillator not bypassed (value: 0)
     *          - B_0x1: HSE crystal oscillator bypassed with external clock (value: 1)
     */
        /** @brief HSE crystal oscillator not bypassed */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x0 = 0;
        /** @brief HSE crystal oscillator bypassed with external clock */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x1 = 1;

    /** @brief Clock security system enable */
    using RCC_CR_CSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock security system OFF (clock detector OFF) (value: 0)
     *          - B_0x1: Clock security system ON (Clock detector ON if the HSE oscillator is stable, OFF if not). (value: 1)
     */
        /** @brief Clock security system OFF (clock detector OFF) */
    constexpr std::uint32_t RCC_CR_CSSON_B_0x0 = 0;
        /** @brief Clock security system ON (Clock detector ON if the HSE oscillator is stable, OFF if not). */
    constexpr std::uint32_t RCC_CR_CSSON_B_0x1 = 1;

    /** @brief HSI48 RC oscillator enableless thansup>(1)less than/sup> */
    using RCC_CR_HSI48ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x1 = 1;

    /** @brief HSI48 clock ready flag */
    using RCC_CR_HSI48RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL enable */
    using RCC_CR_PLLON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL OFF (value: 0)
     *          - B_0x1: PLL ON (value: 1)
     */
        /** @brief PLL OFF */
    constexpr std::uint32_t RCC_CR_PLLON_B_0x0 = 0;
        /** @brief PLL ON */
    constexpr std::uint32_t RCC_CR_PLLON_B_0x1 = 1;

    /** @brief PLL clock ready flag */
    using RCC_CR_PLLRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL unlocked (value: 0)
     *          - B_0x1: PLL locked (value: 1)
     */
        /** @brief PLL unlocked */
    constexpr std::uint32_t RCC_CR_PLLRDY_B_0x0 = 0;
        /** @brief PLL locked */
    constexpr std::uint32_t RCC_CR_PLLRDY_B_0x1 = 1;

    /** @brief Internal clock source calibration register */
    using RCC_ICSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock calibration */
    using RCC_ICSCR_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock trimming */
    using RCC_ICSCR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock configuration register */
    using RCC_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System clock switch */
    using RCC_CFGR_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSISYS (value: 0)
     *          - B_0x1: HSE (value: 1)
     *          - B_0x2: PLLRCLK (value: 2)
     *          - B_0x3: LSI (value: 3)
     *          - B_0x4: LSE (value: 4)
     */
        /** @brief HSISYS */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x0 = 0;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x1 = 1;
        /** @brief PLLRCLK */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x2 = 2;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x3 = 3;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x4 = 4;

    /** @brief System clock switch status */
    using RCC_CFGR_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSISYS (value: 0)
     *          - B_0x1: HSE (value: 1)
     *          - B_0x2: PLLRCLK (value: 2)
     *          - B_0x3: LSI (value: 3)
     *          - B_0x4: LSE (value: 4)
     */
        /** @brief HSISYS */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x0 = 0;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x1 = 1;
        /** @brief PLLRCLK */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x2 = 2;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x3 = 3;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x4 = 4;

    /** @brief AHB prescaler */
    using RCC_CFGR_HPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x8: 2 (value: 8)
     *          - B_0x9: 4 (value: 9)
     *          - B_0xA: 8 (value: 10)
     *          - B_0xB: 16 (value: 11)
     *          - B_0xC: 64 (value: 12)
     *          - B_0xD: 128 (value: 13)
     *          - B_0xE: 256 (value: 14)
     *          - B_0xF: 512 (value: 15)
     */
        /** @brief 2 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0x8 = 8;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0x9 = 9;
        /** @brief 8 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xA = 10;
        /** @brief 16 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xB = 11;
        /** @brief 64 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xC = 12;
        /** @brief 128 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xD = 13;
        /** @brief 256 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xE = 14;
        /** @brief 512 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xF = 15;

    /** @brief APB prescaler */
    using RCC_CFGR_PPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: 2 (value: 4)
     *          - B_0x5: 4 (value: 5)
     *          - B_0x6: 8 (value: 6)
     *          - B_0x7: 16 (value: 7)
     */
        /** @brief 2 */
    constexpr std::uint32_t RCC_CFGR_PPRE_B_0x4 = 4;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CFGR_PPRE_B_0x5 = 5;
        /** @brief 8 */
    constexpr std::uint32_t RCC_CFGR_PPRE_B_0x6 = 6;
        /** @brief 16 */
    constexpr std::uint32_t RCC_CFGR_PPRE_B_0x7 = 7;

    /** @brief Microcontroller clock output 2 clock selectorless thansup>(1)less than/sup> */
    using RCC_CFGR_MCO2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock, MCO2 output disabled (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSI48 (value: 2)
     *          - B_0x3: HSI16 (value: 3)
     *          - B_0x4: HSE (value: 4)
     *          - B_0x5: PLLRCLK (value: 5)
     *          - B_0x6: LSI (value: 6)
     *          - B_0x7: LSE (value: 7)
     *          - B_0x8: PLLPCLK (value: 8)
     *          - B_0x9: PLLQCLK (value: 9)
     *          - B_0xA: RTCCLK (value: 10)
     *          - B_0xB: RTC WAKEUP (value: 11)
     */
        /** @brief no clock, MCO2 output disabled */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x1 = 1;
        /** @brief HSI48 */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x2 = 2;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x3 = 3;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x4 = 4;
        /** @brief PLLRCLK */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x5 = 5;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x6 = 6;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x7 = 7;
        /** @brief PLLPCLK */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x8 = 8;
        /** @brief PLLQCLK */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x9 = 9;
        /** @brief RTCCLK */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0xA = 10;
        /** @brief RTC WAKEUP */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0xB = 11;

    /** @brief Microcontroller clock output 2 prescalerless thansup>(1)less than/sup> */
    using RCC_CFGR_MCO2PRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 4 (value: 2)
     *          - B_0x7: 128 (value: 7)
     *          - B_0x8: 256 (value: 8)
     *          - B_0x9: 512 (value: 9)
     *          - B_0xA: 1024 (value: 10)
     */
        /** @brief 1 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x1 = 1;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x7 = 7;
        /** @brief 256 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x8 = 8;
        /** @brief 512 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x9 = 9;
        /** @brief 1024 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0xA = 10;

    /** @brief Microcontroller clock output clock selector */
    using RCC_CFGR_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock, MCO output disabled (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSI48 (value: 2)
     *          - B_0x3: HSI16 (value: 3)
     *          - B_0x4: HSE (value: 4)
     *          - B_0x5: PLLRCLK (value: 5)
     *          - B_0x6: LSI (value: 6)
     *          - B_0x7: LSE (value: 7)
     *          - B_0x8: PLLPCLK (value: 8)
     *          - B_0x9: PLLQCLK (value: 9)
     *          - B_0xA: RTCCLK (value: 10)
     *          - B_0xB: RTC WAKEUP (value: 11)
     */
        /** @brief no clock, MCO output disabled */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x1 = 1;
        /** @brief HSI48 */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x2 = 2;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x3 = 3;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x4 = 4;
        /** @brief PLLRCLK */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x5 = 5;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x6 = 6;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x7 = 7;
        /** @brief PLLPCLK */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x8 = 8;
        /** @brief PLLQCLK */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x9 = 9;
        /** @brief RTCCLK */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0xA = 10;
        /** @brief RTC WAKEUP */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0xB = 11;

    /** @brief Microcontroller clock output prescaler */
    using RCC_CFGR_MCOPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 4 (value: 2)
     *          - B_0x7: 128 (value: 7)
     *          - B_0x8: 256 (value: 8)
     *          - B_0x9: 512 (value: 9)
     *          - B_0xA: 1024 (value: 10)
     */
        /** @brief 1 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x1 = 1;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x7 = 7;
        /** @brief 256 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x8 = 8;
        /** @brief 512 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x9 = 9;
        /** @brief 1024 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0xA = 10;

    /** @brief PLL configuration register */
    using RCC_PLLCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL input clock source */
    using RCC_PLLCFGR_PLLSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock (value: 0)
     *          - B_0x2: HSI16 (value: 2)
     *          - B_0x3: HSE (value: 3)
     */
        /** @brief No clock */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x0 = 0;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x2 = 2;
        /** @brief HSE */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x3 = 3;

    /** @brief Division factor M of the PLL input clock divider */
    using RCC_PLLCFGR_PLLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 3 (value: 2)
     *          - B_0x3: 4 (value: 3)
     *          - B_0x4: 5 (value: 4)
     *          - B_0x5: 6 (value: 5)
     *          - B_0x6: 7 (value: 6)
     *          - B_0x7: 8 (value: 7)
     */
        /** @brief 1 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x1 = 1;
        /** @brief 3 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x2 = 2;
        /** @brief 4 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x3 = 3;
        /** @brief 5 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x4 = 4;
        /** @brief 6 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x5 = 5;
        /** @brief 7 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x6 = 6;
        /** @brief 8 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x7 = 7;

    /** @brief PLL frequency multiplication factor N */
    using RCC_PLLCFGR_PLLN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Invalid (value: 0)
     *          - B_0x8: 8 (value: 8)
     *          - B_0x9: 9 (value: 9)
     *          - B_0x55: 85 (value: 85)
     *          - B_0x56: 86 (value: 86)
     */
        /** @brief Invalid */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x0 = 0;
        /** @brief 8 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x8 = 8;
        /** @brief 9 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x9 = 9;
        /** @brief 85 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x55 = 85;
        /** @brief 86 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x56 = 86;

    /** @brief PLLPCLK clock output enable */
    using RCC_PLLCFGR_PLLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPEN_B_0x1 = 1;

    /** @brief PLL VCO division factor P for PLLPCLK clock output */
    using RCC_PLLCFGR_PLLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2 (value: 1)
     *          - B_0x1F: 32 (value: 31)
     */
        /** @brief 2 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLP_B_0x1 = 1;
        /** @brief 32 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLP_B_0x1F = 31;

    /** @brief PLLQCLK clock output enable */
    using RCC_PLLCFGR_PLLQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQEN_B_0x1 = 1;

    /** @brief PLL VCO division factor Q for PLLQCLK clock output */
    using RCC_PLLCFGR_PLLQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 3 (value: 2)
     *          - B_0x3: 4 (value: 3)
     *          - B_0x4: 5 (value: 4)
     *          - B_0x5: 6 (value: 5)
     *          - B_0x6: 7 (value: 6)
     *          - B_0x7: 8 (value: 7)
     */
        /** @brief 2 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x1 = 1;
        /** @brief 3 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x2 = 2;
        /** @brief 4 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x3 = 3;
        /** @brief 5 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x4 = 4;
        /** @brief 6 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x5 = 5;
        /** @brief 7 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x6 = 6;
        /** @brief 8 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x7 = 7;

    /** @brief PLLRCLK clock output enable */
    using RCC_PLLCFGR_PLLREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLREN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLREN_B_0x1 = 1;

    /** @brief PLL VCO division factor R for PLLRCLK clock output */
    using RCC_PLLCFGR_PLLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 3 (value: 2)
     *          - B_0x3: 4 (value: 3)
     *          - B_0x4: 5 (value: 4)
     *          - B_0x5: 6 (value: 5)
     *          - B_0x6: 7 (value: 6)
     *          - B_0x7: 8 (value: 7)
     */
        /** @brief 2 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x1 = 1;
        /** @brief 3 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x2 = 2;
        /** @brief 4 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x3 = 3;
        /** @brief 5 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x4 = 4;
        /** @brief 6 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x5 = 5;
        /** @brief 7 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x6 = 6;
        /** @brief 8 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x7 = 7;

    /** @brief RCC clock recovery RC register */
    using RCC_CRRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 clock calibration */
    using RCC_CRRCR_HSI48CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt enable */
    using RCC_CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x1 = 1;

    /** @brief LSE ready interrupt enable */
    using RCC_CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x1 = 1;

    /** @brief HSI48 ready interrupt enable */
    using RCC_CIER_HSI48RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x1 = 1;

    /** @brief HSI16 ready interrupt enable */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE ready interrupt enable */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

    /** @brief PLL ready interrupt enable */
    using RCC_CIER_PLLRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_PLLRDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_PLLRDYIE_B_0x1 = 1;

    /** @brief Clock interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt flag */
    using RCC_CIFR_LSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the LSI oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the LSI oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the LSI oscillator */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the LSI oscillator */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the LSE oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the LSE oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief HSI48 ready interrupt flag */
    using RCC_CIFR_HSI48RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSI48 oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSI48 oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSI48 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSI48 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x1 = 1;

    /** @brief HSI16 ready interrupt flag */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSI16 oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSI16 oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSE oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSE oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief PLL ready interrupt flag */
    using RCC_CIFR_PLLRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by PLL lock (value: 0)
     *          - B_0x1: Clock ready interrupt caused by PLL lock (value: 1)
     */
        /** @brief No clock ready interrupt caused by PLL lock */
    constexpr std::uint32_t RCC_CIFR_PLLRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by PLL lock */
    constexpr std::uint32_t RCC_CIFR_PLLRDYF_B_0x1 = 1;

    /** @brief HSE clock security system interrupt flag */
    using RCC_CIFR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock security interrupt caused by HSE clock failure (value: 0)
     *          - B_0x1: Clock security interrupt caused by HSE clock failure (value: 1)
     */
        /** @brief No clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x0 = 0;
        /** @brief Clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x1 = 1;

    /** @brief LSE clock security system interrupt flag */
    using RCC_CIFR_LSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock security interrupt caused by LSE clock failure (value: 0)
     *          - B_0x1: Clock security interrupt caused by LSE clock failure (value: 1)
     */
        /** @brief No clock security interrupt caused by LSE clock failure */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x0 = 0;
        /** @brief Clock security interrupt caused by LSE clock failure */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x1 = 1;

    /** @brief Clock interrupt clear register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt clear */
    using RCC_CICR_LSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear LSIRDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x0 = 0;
        /** @brief Clear LSIRDYF flag */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x1 = 1;

    /** @brief LSE ready interrupt clear */
    using RCC_CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear LSERDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x0 = 0;
        /** @brief Clear LSERDYF flag */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x1 = 1;

    /** @brief HSI48 ready interrupt clear */
    using RCC_CICR_HSI48RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear HSI48RDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_HSI48RDYC_B_0x0 = 0;
        /** @brief Clear HSI48RDYF flag */
    constexpr std::uint32_t RCC_CICR_HSI48RDYC_B_0x1 = 1;

    /** @brief None */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE ready interrupt clear */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear HSERDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x0 = 0;
        /** @brief Clear HSERDYF flag */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x1 = 1;

    /** @brief PLL ready interrupt clear */
    using RCC_CICR_PLLRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear PLLRDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_PLLRDYC_B_0x0 = 0;
        /** @brief Clear PLLRDYF flag */
    constexpr std::uint32_t RCC_CICR_PLLRDYC_B_0x1 = 1;

    /** @brief Clock security system interrupt clear */
    using RCC_CICR_CSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear CSSF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_CSSC_B_0x0 = 0;
        /** @brief Clear CSSF flag */
    constexpr std::uint32_t RCC_CICR_CSSC_B_0x1 = 1;

    /** @brief LSE Clock security system interrupt clear */
    using RCC_CICR_LSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear LSECSSF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x0 = 0;
        /** @brief Clear LSECSSF flag */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x1 = 1;

    /** @brief I/O port reset register */
    using RCC_IOPRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port A reset */
    using RCC_IOPRSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port A (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOARST_B_0x0 = 0;
        /** @brief Reset I/O port A */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOARST_B_0x1 = 1;

    /** @brief I/O port B reset */
    using RCC_IOPRSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port B (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOBRST_B_0x0 = 0;
        /** @brief Reset I/O port B */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOBRST_B_0x1 = 1;

    /** @brief I/O port C reset */
    using RCC_IOPRSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port C (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOCRST_B_0x0 = 0;
        /** @brief Reset I/O port C */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOCRST_B_0x1 = 1;

    /** @brief I/O port D reset */
    using RCC_IOPRSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port D (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIODRST_B_0x0 = 0;
        /** @brief Reset I/O port D */
    constexpr std::uint32_t RCC_IOPRSTR_GPIODRST_B_0x1 = 1;

    /** @brief I/O port E reset */
    using RCC_IOPRSTR_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port E (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOERST_B_0x0 = 0;
        /** @brief Reset I/O port E */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOERST_B_0x1 = 1;

    /** @brief I/O port F reset */
    using RCC_IOPRSTR_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port F (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOFRST_B_0x0 = 0;
        /** @brief Reset I/O port F */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOFRST_B_0x1 = 1;

    /** @brief AHB peripheral reset register */
    using RCC_AHBRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 and DMAMUX reset */
    using RCC_AHBRSTR_DMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DMA1 and DMAMUX (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_DMA1RST_B_0x0 = 0;
        /** @brief Reset DMA1 and DMAMUX */
    constexpr std::uint32_t RCC_AHBRSTR_DMA1RST_B_0x1 = 1;

    /** @brief None */
    using RCC_AHBRSTR_DMA2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash memory interface reset */
    using RCC_AHBRSTR_FLASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset Flash memory interface (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_FLASHRST_B_0x0 = 0;
        /** @brief Reset Flash memory interface */
    constexpr std::uint32_t RCC_AHBRSTR_FLASHRST_B_0x1 = 1;

    /** @brief CRC reset */
    using RCC_AHBRSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CRC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_CRCRST_B_0x0 = 0;
        /** @brief Reset CRC */
    constexpr std::uint32_t RCC_AHBRSTR_CRCRST_B_0x1 = 1;

    /** @brief AES hardware accelerator resetless thansup>(1)less than/sup> */
    using RCC_AHBRSTR_AESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset AES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_AESRST_B_0x0 = 0;
        /** @brief Reset AES */
    constexpr std::uint32_t RCC_AHBRSTR_AESRST_B_0x1 = 1;

    /** @brief Random number generator reset */
    using RCC_AHBRSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset RNG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_RNGRST_B_0x0 = 0;
        /** @brief Reset RNG */
    constexpr std::uint32_t RCC_AHBRSTR_RNGRST_B_0x1 = 1;

    /** @brief APB peripheral reset register 1 */
    using RCC_APBRSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 timer reset */
    using RCC_APBRSTR1_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_TIM2RST_B_0x0 = 0;
        /** @brief Reset TIM2 */
    constexpr std::uint32_t RCC_APBRSTR1_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 timer reset */
    using RCC_APBRSTR1_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_TIM3RST_B_0x0 = 0;
        /** @brief Reset TIM3 */
    constexpr std::uint32_t RCC_APBRSTR1_TIM3RST_B_0x1 = 1;

    /** @brief TIM3 timer resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_TIM4RST_B_0x0 = 0;
        /** @brief Reset TIM4 */
    constexpr std::uint32_t RCC_APBRSTR1_TIM4RST_B_0x1 = 1;

    /** @brief TIM6 timer resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM6 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_TIM6RST_B_0x0 = 0;
        /** @brief Reset TIM6 */
    constexpr std::uint32_t RCC_APBRSTR1_TIM6RST_B_0x1 = 1;

    /** @brief TIM7 timer resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM7 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_TIM7RST_B_0x0 = 0;
        /** @brief Reset TIM7 */
    constexpr std::uint32_t RCC_APBRSTR1_TIM7RST_B_0x1 = 1;

    /** @brief LPUART2 resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_LPUART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPUART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_LPUART2RST_B_0x0 = 0;
        /** @brief Reset LPUART2 */
    constexpr std::uint32_t RCC_APBRSTR1_LPUART2RST_B_0x1 = 1;

    /** @brief USART3 resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_USART5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART5 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USART5RST_B_0x0 = 0;
        /** @brief Reset USART5 */
    constexpr std::uint32_t RCC_APBRSTR1_USART5RST_B_0x1 = 1;

    /** @brief USART3 resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_USART6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART6 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USART6RST_B_0x0 = 0;
        /** @brief Reset USART6 */
    constexpr std::uint32_t RCC_APBRSTR1_USART6RST_B_0x1 = 1;

    /** @brief None */
    using RCC_APBRSTR1_FDCANRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USB (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USBRST_B_0x0 = 0;
        /** @brief Reset USB */
    constexpr std::uint32_t RCC_APBRSTR1_USBRST_B_0x1 = 1;

    /** @brief SPI2 reset */
    using RCC_APBRSTR1_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_SPI2RST_B_0x0 = 0;
        /** @brief Reset SPI2 */
    constexpr std::uint32_t RCC_APBRSTR1_SPI2RST_B_0x1 = 1;

    /** @brief SPI3 resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_SPI3RST_B_0x0 = 0;
        /** @brief Reset SPI3 */
    constexpr std::uint32_t RCC_APBRSTR1_SPI3RST_B_0x1 = 1;

    /** @brief CRS resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_CRSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CRS (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_CRSRST_B_0x0 = 0;
        /** @brief Reset CRS */
    constexpr std::uint32_t RCC_APBRSTR1_CRSRST_B_0x1 = 1;

    /** @brief USART2 reset */
    using RCC_APBRSTR1_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USART2RST_B_0x0 = 0;
        /** @brief Reset USART2 */
    constexpr std::uint32_t RCC_APBRSTR1_USART2RST_B_0x1 = 1;

    /** @brief USART3 resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USART3RST_B_0x0 = 0;
        /** @brief Reset USART3 */
    constexpr std::uint32_t RCC_APBRSTR1_USART3RST_B_0x1 = 1;

    /** @brief USART4 resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_USART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USART4RST_B_0x0 = 0;
        /** @brief Reset USART4 */
    constexpr std::uint32_t RCC_APBRSTR1_USART4RST_B_0x1 = 1;

    /** @brief LPUART1 reset */
    using RCC_APBRSTR1_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPUART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_LPUART1RST_B_0x0 = 0;
        /** @brief Reset LPUART1 */
    constexpr std::uint32_t RCC_APBRSTR1_LPUART1RST_B_0x1 = 1;

    /** @brief I2C1 reset */
    using RCC_APBRSTR1_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_I2C1RST_B_0x0 = 0;
        /** @brief Reset I2C1 */
    constexpr std::uint32_t RCC_APBRSTR1_I2C1RST_B_0x1 = 1;

    /** @brief I2C2 reset */
    using RCC_APBRSTR1_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_I2C2RST_B_0x0 = 0;
        /** @brief Reset I2C2 */
    constexpr std::uint32_t RCC_APBRSTR1_I2C2RST_B_0x1 = 1;

    /** @brief I2C3 resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_I2C3RST_B_0x0 = 0;
        /** @brief Reset I2C3 */
    constexpr std::uint32_t RCC_APBRSTR1_I2C3RST_B_0x1 = 1;

    /** @brief HDMI CEC resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_CECRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the HDMI CEC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_CECRST_B_0x0 = 0;
        /** @brief Reset the HDMI CEC */
    constexpr std::uint32_t RCC_APBRSTR1_CECRST_B_0x1 = 1;

    /** @brief UCPD1 resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_UCPD1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UCPD1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_UCPD1RST_B_0x0 = 0;
        /** @brief Reset UCPD1 */
    constexpr std::uint32_t RCC_APBRSTR1_UCPD1RST_B_0x1 = 1;

    /** @brief UCPD2 resetless thansup>(1)less than/sup> */
    using RCC_APBRSTR1_UCPD2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UCPD2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_UCPD2RST_B_0x0 = 0;
        /** @brief Reset UCPD2 */
    constexpr std::uint32_t RCC_APBRSTR1_UCPD2RST_B_0x1 = 1;

    /** @brief Debug support reset */
    using RCC_APBRSTR1_DBGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DBG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_DBGRST_B_0x0 = 0;
        /** @brief Reset DBG */
    constexpr std::uint32_t RCC_APBRSTR1_DBGRST_B_0x1 = 1;

    /** @brief Power interface reset */
    using RCC_APBRSTR1_PWRRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset PWR (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_PWRRST_B_0x0 = 0;
        /** @brief Reset PWR */
    constexpr std::uint32_t RCC_APBRSTR1_PWRRST_B_0x1 = 1;

    /** @brief DAC1 interface reset */
    using RCC_APBRSTR1_DAC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DAC1 interface (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_DAC1RST_B_0x0 = 0;
        /** @brief Reset DAC1 interface */
    constexpr std::uint32_t RCC_APBRSTR1_DAC1RST_B_0x1 = 1;

    /** @brief Low Power Timer 2 reset */
    using RCC_APBRSTR1_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_LPTIM2RST_B_0x0 = 0;
        /** @brief Reset LPTIM2 */
    constexpr std::uint32_t RCC_APBRSTR1_LPTIM2RST_B_0x1 = 1;

    /** @brief Low Power Timer 1 reset */
    using RCC_APBRSTR1_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_LPTIM1RST_B_0x0 = 0;
        /** @brief Reset LPTIM1 */
    constexpr std::uint32_t RCC_APBRSTR1_LPTIM1RST_B_0x1 = 1;

    /** @brief APB peripheral reset register 2 */
    using RCC_APBRSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG, COMP and VREFBUF reset */
    using RCC_APBRSTR2_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SYSCFG + COMP + VREFBUF (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_SYSCFGRST_B_0x0 = 0;
        /** @brief Reset SYSCFG + COMP + VREFBUF */
    constexpr std::uint32_t RCC_APBRSTR2_SYSCFGRST_B_0x1 = 1;

    /** @brief TIM1 timer reset */
    using RCC_APBRSTR2_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM1 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM1RST_B_0x0 = 0;
        /** @brief Reset TIM1 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM1RST_B_0x1 = 1;

    /** @brief SPI1 reset */
    using RCC_APBRSTR2_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_SPI1RST_B_0x0 = 0;
        /** @brief Reset SPI1 */
    constexpr std::uint32_t RCC_APBRSTR2_SPI1RST_B_0x1 = 1;

    /** @brief USART1 reset */
    using RCC_APBRSTR2_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_USART1RST_B_0x0 = 0;
        /** @brief Reset USART1 */
    constexpr std::uint32_t RCC_APBRSTR2_USART1RST_B_0x1 = 1;

    /** @brief TIM14 timer reset */
    using RCC_APBRSTR2_TIM14RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM14 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM14RST_B_0x0 = 0;
        /** @brief Reset TIM14 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM14RST_B_0x1 = 1;

    /** @brief TIM15 timer reset */
    using RCC_APBRSTR2_TIM15RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM15 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM15RST_B_0x0 = 0;
        /** @brief Reset TIM15 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM15RST_B_0x1 = 1;

    /** @brief TIM16 timer reset */
    using RCC_APBRSTR2_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM16 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM16RST_B_0x0 = 0;
        /** @brief Reset TIM16 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM16RST_B_0x1 = 1;

    /** @brief TIM16 timer reset */
    using RCC_APBRSTR2_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM17 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM17RST_B_0x0 = 0;
        /** @brief Reset TIM17 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM17RST_B_0x1 = 1;

    /** @brief ADC reset */
    using RCC_APBRSTR2_ADCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset ADC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_ADCRST_B_0x0 = 0;
        /** @brief Reset ADC */
    constexpr std::uint32_t RCC_APBRSTR2_ADCRST_B_0x1 = 1;

    /** @brief I/O port clock enable register */
    using RCC_IOPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port A clock enable */
    using RCC_IOPENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIOAEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIOAEN_B_0x1 = 1;

    /** @brief I/O port B clock enable */
    using RCC_IOPENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIOBEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIOBEN_B_0x1 = 1;

    /** @brief I/O port C clock enable */
    using RCC_IOPENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIOCEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIOCEN_B_0x1 = 1;

    /** @brief I/O port D clock enable */
    using RCC_IOPENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIODEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIODEN_B_0x1 = 1;

    /** @brief I/O port F clock enable */
    using RCC_IOPENR_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIOFEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIOFEN_B_0x1 = 1;

    /** @brief AHB peripheral clock enable register */
    using RCC_AHBENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 and DMAMUX clock enable */
    using RCC_AHBENR_DMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_DMA1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_DMA1EN_B_0x1 = 1;

    /** @brief Flash memory interface clock enable */
    using RCC_AHBENR_FLASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_FLASHEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_FLASHEN_B_0x1 = 1;

    /** @brief CRC clock enable */
    using RCC_AHBENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_CRCEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_CRCEN_B_0x1 = 1;

    /** @brief AES hardware acceleratorless thansup>(1)less than/sup> */
    using RCC_AHBENR_AESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_AESEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_AESEN_B_0x1 = 1;

    /** @brief Random number generator clock enable */
    using RCC_AHBENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_RNGEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_RNGEN_B_0x1 = 1;

    /** @brief APB peripheral clock enable register 1 */
    using RCC_APBENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 timer clock enable */
    using RCC_APBENR1_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_TIM2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 timer clock enable */
    using RCC_APBENR1_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_TIM3EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_TIM3EN_B_0x1 = 1;

    /** @brief TIM6 timer clock enableless thansup>(1)less than/sup> */
    using RCC_APBENR1_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_TIM6EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 timer clock enableless thansup>(1)less than/sup> */
    using RCC_APBENR1_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_TIM7EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_TIM7EN_B_0x1 = 1;

    /** @brief RTC APB clock enable */
    using RCC_APBENR1_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_RTCAPBEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_RTCAPBEN_B_0x1 = 1;

    /** @brief WWDG clock enable */
    using RCC_APBENR1_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_WWDGEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_WWDGEN_B_0x1 = 1;

    /** @brief SPI2 clock enable */
    using RCC_APBENR1_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_SPI2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_SPI2EN_B_0x1 = 1;

    /** @brief USART2 clock enable */
    using RCC_APBENR1_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_USART2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_USART2EN_B_0x1 = 1;

    /** @brief USART3 clock enableless thansup>(1)less than/sup> */
    using RCC_APBENR1_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_USART3EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_USART3EN_B_0x1 = 1;

    /** @brief USART4 clock enableless thansup>(1)less than/sup> */
    using RCC_APBENR1_USART4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_USART4EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_USART4EN_B_0x1 = 1;

    /** @brief LPUART1 clock enable */
    using RCC_APBENR1_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_LPUART1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_LPUART1EN_B_0x1 = 1;

    /** @brief I2C1 clock enable */
    using RCC_APBENR1_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_I2C1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 clock enable */
    using RCC_APBENR1_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_I2C2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_I2C2EN_B_0x1 = 1;

    /** @brief HDMI CEC clock enable */
    using RCC_APBENR1_CECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_CECEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_CECEN_B_0x1 = 1;

    /** @brief UCPD1 clock enableless thansup>(1)less than/sup> */
    using RCC_APBENR1_UCPD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_UCPD1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_UCPD1EN_B_0x1 = 1;

    /** @brief UCPD2 clock enable */
    using RCC_APBENR1_UCPD2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_UCPD2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_UCPD2EN_B_0x1 = 1;

    /** @brief Debug support clock enable */
    using RCC_APBENR1_DBGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_DBGEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_DBGEN_B_0x1 = 1;

    /** @brief Power interface clock enable */
    using RCC_APBENR1_PWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_PWREN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_PWREN_B_0x1 = 1;

    /** @brief DAC1 interface clock enable */
    using RCC_APBENR1_DAC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_DAC1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_DAC1EN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable */
    using RCC_APBENR1_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_LPTIM2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_LPTIM2EN_B_0x1 = 1;

    /** @brief LPTIM1 clock enable */
    using RCC_APBENR1_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_LPTIM1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_LPTIM1EN_B_0x1 = 1;

    /** @brief APB peripheral clock enable register 2 */
    using RCC_APBENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG, COMP and VREFBUF clock enable */
    using RCC_APBENR2_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_SYSCFGEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_SYSCFGEN_B_0x1 = 1;

    /** @brief TIM1 timer clock enable */
    using RCC_APBENR2_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM1EN_B_0x1 = 1;

    /** @brief SPI1 clock enable */
    using RCC_APBENR2_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_SPI1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_SPI1EN_B_0x1 = 1;

    /** @brief USART1 clock enable */
    using RCC_APBENR2_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_USART1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_USART1EN_B_0x1 = 1;

    /** @brief TIM14 timer clock enable */
    using RCC_APBENR2_TIM14EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM14EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM14EN_B_0x1 = 1;

    /** @brief TIM15 timer clock enable */
    using RCC_APBENR2_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM15EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM15EN_B_0x1 = 1;

    /** @brief TIM16 timer clock enable */
    using RCC_APBENR2_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM16EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM16EN_B_0x1 = 1;

    /** @brief TIM16 timer clock enable */
    using RCC_APBENR2_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM17EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM17EN_B_0x1 = 1;

    /** @brief ADC clock enable */
    using RCC_APBENR2_ADCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_ADCEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_ADCEN_B_0x1 = 1;

    /** @brief I/O port in Sleep mode clock enable register */
    using RCC_IOPSMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port A clock enable during Sleep mode */
    using RCC_IOPSMENR_GPIOASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOASMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOASMEN_B_0x1 = 1;

    /** @brief I/O port B clock enable during Sleep mode */
    using RCC_IOPSMENR_GPIOBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOBSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOBSMEN_B_0x1 = 1;

    /** @brief I/O port C clock enable during Sleep mode */
    using RCC_IOPSMENR_GPIOCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOCSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOCSMEN_B_0x1 = 1;

    /** @brief I/O port D clock enable during Sleep mode */
    using RCC_IOPSMENR_GPIODSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIODSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIODSMEN_B_0x1 = 1;

    /** @brief I/O port F clock enable during Sleep mode */
    using RCC_IOPSMENR_GPIOFSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOFSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOFSMEN_B_0x1 = 1;

    /** @brief AHB peripheral clock enable in Sleep/Stop mode register */
    using RCC_AHBSMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 and DMAMUX clock enable during Sleep mode */
    using RCC_AHBSMENR_DMA1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_DMA1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_DMA1SMEN_B_0x1 = 1;

    /** @brief Flash memory interface clock enable during Sleep mode */
    using RCC_AHBSMENR_FLASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_FLASHSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_FLASHSMEN_B_0x1 = 1;

    /** @brief SRAM clock enable during Sleep mode */
    using RCC_AHBSMENR_SRAMSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_SRAMSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_SRAMSMEN_B_0x1 = 1;

    /** @brief CRC clock enable during Sleep mode */
    using RCC_AHBSMENR_CRCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_CRCSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_CRCSMEN_B_0x1 = 1;

    /** @brief AES hardware accelerator clock enable during Sleep modeless thansup>(1)less than/sup> */
    using RCC_AHBSMENR_AESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_AESSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_AESSMEN_B_0x1 = 1;

    /** @brief RNG clock enable during Sleep and Stop mode */
    using RCC_AHBSMENR_RNGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_RNGSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_RNGSMEN_B_0x1 = 1;

    /** @brief APB peripheral clock enable in Sleep/Stop mode register 1 */
    using RCC_APBSMENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 timer clock enable during Sleep mode */
    using RCC_APBSMENR1_TIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM2SMEN_B_0x1 = 1;

    /** @brief TIM3 timer clock enable during Sleep mode */
    using RCC_APBSMENR1_TIM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM3SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM3SMEN_B_0x1 = 1;

    /** @brief TIM6 timer clock enable during Sleep modeless thansup>(1)less than/sup> */
    using RCC_APBSMENR1_TIM6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM6SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM6SMEN_B_0x1 = 1;

    /** @brief TIM7 timer clock enable during Sleep modeless thansup>(1)less than/sup> */
    using RCC_APBSMENR1_TIM7SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM7SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM7SMEN_B_0x1 = 1;

    /** @brief RTC APB clock enable during Sleep mode */
    using RCC_APBSMENR1_RTCAPBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_RTCAPBSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_RTCAPBSMEN_B_0x1 = 1;

    /** @brief WWDG clock enable during Sleep and Stop modes */
    using RCC_APBSMENR1_WWDGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_WWDGSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_WWDGSMEN_B_0x1 = 1;

    /** @brief SPI2 clock enable during Sleep mode */
    using RCC_APBSMENR1_SPI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_SPI2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_SPI2SMEN_B_0x1 = 1;

    /** @brief USART2 clock enable during Sleep and Stop modes */
    using RCC_APBSMENR1_USART2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_USART2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_USART2SMEN_B_0x1 = 1;

    /** @brief USART3 clock enable during Sleep modeless thansup>(1)less than/sup> */
    using RCC_APBSMENR1_USART3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_USART3SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_USART3SMEN_B_0x1 = 1;

    /** @brief USART4 clock enable during Sleep modeless thansup>(1)less than/sup> */
    using RCC_APBSMENR1_USART4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_USART4SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_USART4SMEN_B_0x1 = 1;

    /** @brief LPUART1 clock enable during Sleep and Stop modes */
    using RCC_APBSMENR1_LPUART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_LPUART1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_LPUART1SMEN_B_0x1 = 1;

    /** @brief I2C1 clock enable during Sleep and Stop modes */
    using RCC_APBSMENR1_I2C1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C1SMEN_B_0x1 = 1;

    /** @brief I2C2 clock enable during Sleep mode */
    using RCC_APBSMENR1_I2C2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C2SMEN_B_0x1 = 1;

    /** @brief HDMI CEC clock enable during Sleep and Stop modesless thansup>(1)less than/sup> */
    using RCC_APBSMENR1_CECSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_CECSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_CECSMEN_B_0x1 = 1;

    /** @brief UCPD1 clock enable during Sleep modeless thansup>(1)less than/sup> */
    using RCC_APBSMENR1_UCPD1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_UCPD1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_UCPD1SMEN_B_0x1 = 1;

    /** @brief UCPD2 clock enable during Sleep modeless thansup>(1)less than/sup> */
    using RCC_APBSMENR1_UCPD2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_UCPD2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_UCPD2SMEN_B_0x1 = 1;

    /** @brief Debug support clock enable during Sleep mode */
    using RCC_APBSMENR1_DBGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_DBGSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_DBGSMEN_B_0x1 = 1;

    /** @brief Power interface clock enable during Sleep mode */
    using RCC_APBSMENR1_PWRSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_PWRSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_PWRSMEN_B_0x1 = 1;

    /** @brief DAC1 interface clock enable during Sleep and Stop modes */
    using RCC_APBSMENR1_DAC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_DAC1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_DAC1SMEN_B_0x1 = 1;

    /** @brief Low Power Timer 2 clock enable during Sleep and Stop modes */
    using RCC_APBSMENR1_LPTIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_LPTIM2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_LPTIM2SMEN_B_0x1 = 1;

    /** @brief Low Power Timer 1 clock enable during Sleep and Stop modes */
    using RCC_APBSMENR1_LPTIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_LPTIM1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_LPTIM1SMEN_B_0x1 = 1;

    /** @brief APB peripheral clock enable in Sleep/Stop mode register 2 */
    using RCC_APBSMENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG, COMP and VREFBUF clock enable during Sleep and Stop modes */
    using RCC_APBSMENR2_SYSCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_SYSCFGSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_SYSCFGSMEN_B_0x1 = 1;

    /** @brief TIM1 timer clock enable during Sleep mode */
    using RCC_APBSMENR2_TIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM1SMEN_B_0x1 = 1;

    /** @brief SPI1 clock enable during Sleep mode */
    using RCC_APBSMENR2_SPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_SPI1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_SPI1SMEN_B_0x1 = 1;

    /** @brief USART1 clock enable during Sleep and Stop modes */
    using RCC_APBSMENR2_USART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_USART1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_USART1SMEN_B_0x1 = 1;

    /** @brief TIM14 timer clock enable during Sleep mode */
    using RCC_APBSMENR2_TIM14SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM14SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM14SMEN_B_0x1 = 1;

    /** @brief TIM15 timer clock enable during Sleep mode */
    using RCC_APBSMENR2_TIM15SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM15SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM15SMEN_B_0x1 = 1;

    /** @brief TIM16 timer clock enable during Sleep mode */
    using RCC_APBSMENR2_TIM16SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM16SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM16SMEN_B_0x1 = 1;

    /** @brief TIM16 timer clock enable during Sleep mode */
    using RCC_APBSMENR2_TIM17SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM17SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM17SMEN_B_0x1 = 1;

    /** @brief ADC clock enable during Sleep mode */
    using RCC_APBSMENR2_ADCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_ADCSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_ADCSMEN_B_0x1 = 1;

    /** @brief Peripherals independent clock configuration register */
    using RCC_CCIPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 clock source selection */
    using RCC_CCIPR_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     *          - B_0x3: LSE (value: 3)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x2 = 2;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x3 = 3;

    /** @brief USART2 clock source selectionless thansup>(1)less than/sup> */
    using RCC_CCIPR_USART2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     *          - B_0x3: LSE (value: 3)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_USART2SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_USART2SEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_USART2SEL_B_0x2 = 2;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CCIPR_USART2SEL_B_0x3 = 3;

    /** @brief USART3 clock source selectionless thansup>(1)less than/sup> */
    using RCC_CCIPR_USART3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     *          - B_0x3: LSE (value: 3)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_USART3SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_USART3SEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_USART3SEL_B_0x2 = 2;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CCIPR_USART3SEL_B_0x3 = 3;

    /** @brief HDMI CEC clock source selection */
    using RCC_CCIPR_CECSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 divided by 488 (value: 0)
     *          - B_0x1: LSE (value: 1)
     */
        /** @brief HSI16 divided by 488 */
    constexpr std::uint32_t RCC_CCIPR_CECSEL_B_0x0 = 0;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CCIPR_CECSEL_B_0x1 = 1;

    /** @brief LPUART1 clock source selection */
    using RCC_CCIPR_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     *          - B_0x3: LSE (value: 3)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_LPUART1SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_LPUART1SEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_LPUART1SEL_B_0x2 = 2;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CCIPR_LPUART1SEL_B_0x3 = 3;

    /** @brief I2C1 clock source selection */
    using RCC_CCIPR_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_I2C1SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_I2C1SEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_I2C1SEL_B_0x2 = 2;

    /** @brief I2C2/I2S1 clock source selection */
    using RCC_CCIPR_I2C2I2S1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK/SYSCLK (value: 0)
     *          - B_0x1: SYSCLK/PLLPCLK (value: 1)
     *          - B_0x2: HSI16/HSI16 (value: 2)
     */
        /** @brief PCLK/SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_I2C2I2S1SEL_B_0x0 = 0;
        /** @brief SYSCLK/PLLPCLK */
    constexpr std::uint32_t RCC_CCIPR_I2C2I2S1SEL_B_0x1 = 1;
        /** @brief HSI16/HSI16 */
    constexpr std::uint32_t RCC_CCIPR_I2C2I2S1SEL_B_0x2 = 2;

    /** @brief LPTIM1 clock source selection */
    using RCC_CCIPR_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: LSI (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     *          - B_0x3: LSE (value: 3)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_LPTIM1SEL_B_0x0 = 0;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CCIPR_LPTIM1SEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_LPTIM1SEL_B_0x2 = 2;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CCIPR_LPTIM1SEL_B_0x3 = 3;

    /** @brief LPTIM2 clock source selection */
    using RCC_CCIPR_LPTIM2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: LSI (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     *          - B_0x3: LSE (value: 3)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_LPTIM2SEL_B_0x0 = 0;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CCIPR_LPTIM2SEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_LPTIM2SEL_B_0x2 = 2;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CCIPR_LPTIM2SEL_B_0x3 = 3;

    /** @brief TIM1 clock source selection */
    using RCC_CCIPR_TIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMPCLK (value: 0)
     *          - B_0x1: PLLQCLKless thansup>(1)less than/sup> (value: 1)
     */
        /** @brief TIMPCLK */
    constexpr std::uint32_t RCC_CCIPR_TIM1SEL_B_0x0 = 0;
        /** @brief PLLQCLKless thansup>(1)less than/sup> */
    constexpr std::uint32_t RCC_CCIPR_TIM1SEL_B_0x1 = 1;

    /** @brief TIM15 clock source selection */
    using RCC_CCIPR_TIM15SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMPCLK (value: 0)
     *          - B_0x1: PLLQCLK (value: 1)
     */
        /** @brief TIMPCLK */
    constexpr std::uint32_t RCC_CCIPR_TIM15SEL_B_0x0 = 0;
        /** @brief PLLQCLK */
    constexpr std::uint32_t RCC_CCIPR_TIM15SEL_B_0x1 = 1;

    /** @brief RNG clock source selection */
    using RCC_CCIPR_RNGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock (value: 0)
     *          - B_0x1: HSI16 (value: 1)
     *          - B_0x2: SYSCLK (value: 2)
     *          - B_0x3: PLLQCLK (value: 3)
     */
        /** @brief No clock */
    constexpr std::uint32_t RCC_CCIPR_RNGSEL_B_0x0 = 0;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_RNGSEL_B_0x1 = 1;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_RNGSEL_B_0x2 = 2;
        /** @brief PLLQCLK */
    constexpr std::uint32_t RCC_CCIPR_RNGSEL_B_0x3 = 3;

    /** @brief Division factor of RNG clock divider */
    using RCC_CCIPR_RNGDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 4 (value: 2)
     *          - B_0x3: 8 (value: 3)
     */
        /** @brief 1 */
    constexpr std::uint32_t RCC_CCIPR_RNGDIV_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t RCC_CCIPR_RNGDIV_B_0x1 = 1;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CCIPR_RNGDIV_B_0x2 = 2;
        /** @brief 8 */
    constexpr std::uint32_t RCC_CCIPR_RNGDIV_B_0x3 = 3;

    /** @brief ADCs clock source selection */
    using RCC_CCIPR_ADCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System clock (value: 0)
     *          - B_0x1: PLLPCLK (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     */
        /** @brief System clock */
    constexpr std::uint32_t RCC_CCIPR_ADCSEL_B_0x0 = 0;
        /** @brief PLLPCLK */
    constexpr std::uint32_t RCC_CCIPR_ADCSEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_ADCSEL_B_0x2 = 2;

    /** @brief RTC domain control register */
    using RCC_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable */
    using RCC_BDCR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x1 = 1;

    /** @brief LSE oscillator ready */
    using RCC_BDCR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready (value: 0)
     *          - B_0x1: Ready (value: 1)
     */
        /** @brief Not ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x0 = 0;
        /** @brief Ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x1 = 1;

    /** @brief LSE oscillator bypass */
    using RCC_BDCR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not bypassed (value: 0)
     *          - B_0x1: Bypassed (value: 1)
     */
        /** @brief Not bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x0 = 0;
        /** @brief Bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x1 = 1;

    /** @brief None */
    using RCC_BDCR_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using RCC_BDCR_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using RCC_BDCR_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC clock source selection */
    using RCC_BDCR_RTCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock (value: 0)
     *          - B_0x1: LSE (value: 1)
     *          - B_0x2: LSI (value: 2)
     *          - B_0x3: HSE divided by 32 (value: 3)
     */
        /** @brief No clock */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x0 = 0;
        /** @brief LSE */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x1 = 1;
        /** @brief LSI */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x2 = 2;
        /** @brief HSE divided by 32 */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x3 = 3;

    /** @brief RTC clock enable */
    using RCC_BDCR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x1 = 1;

    /** @brief RTC domain software reset */
    using RCC_BDCR_BDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_BDCR_BDRST_B_0x0 = 0;
        /** @brief Reset */
    constexpr std::uint32_t RCC_BDCR_BDRST_B_0x1 = 1;

    /** @brief Low-speed clock output (LSCO) enable */
    using RCC_BDCR_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x1 = 1;

    /** @brief Low-speed clock output selection */
    using RCC_BDCR_LSCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI (value: 0)
     *          - B_0x1: LSE (value: 1)
     */
        /** @brief LSI */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x0 = 0;
        /** @brief LSE */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x1 = 1;

    /** @brief Control/status register */
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable */
    using RCC_CSR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x1 = 1;

    /** @brief LSI oscillator ready */
    using RCC_CSR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready (value: 0)
     *          - B_0x1: Ready (value: 1)
     */
        /** @brief Not ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x0 = 0;
        /** @brief Ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x1 = 1;

    /** @brief Remove reset flags */
    using RCC_CSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear reset flags (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x0 = 0;
        /** @brief Clear reset flags */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x1 = 1;

    /** @brief Option byte loader reset flag */
    using RCC_CSR_OBLRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from Option byte loading occurred (value: 0)
     *          - B_0x1: Reset from Option byte loading occurred (value: 1)
     */
        /** @brief No reset from Option byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x0 = 0;
        /** @brief Reset from Option byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x1 = 1;

    /** @brief Pin reset flag */
    using RCC_CSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from NRST pin occurred (value: 0)
     *          - B_0x1: Reset from NRST pin occurred (value: 1)
     */
        /** @brief No reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x0 = 0;
        /** @brief Reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x1 = 1;

    /** @brief BOR or POR/PDR flag */
    using RCC_CSR_PWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No BOR or POR occurred (value: 0)
     *          - B_0x1: BOR or POR occurred (value: 1)
     */
        /** @brief No BOR or POR occurred */
    constexpr std::uint32_t RCC_CSR_PWRRSTF_B_0x0 = 0;
        /** @brief BOR or POR occurred */
    constexpr std::uint32_t RCC_CSR_PWRRSTF_B_0x1 = 1;

    /** @brief Software reset flag */
    using RCC_CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No software reset occurred (value: 0)
     *          - B_0x1: Software reset occurred (value: 1)
     */
        /** @brief No software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x0 = 0;
        /** @brief Software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x1 = 1;

    /** @brief None */
    using RCC_CSR_IWWGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Window watchdog reset flag */
    using RCC_CSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No window watchdog reset occurred (value: 0)
     *          - B_0x1: Window watchdog reset occurred (value: 1)
     */
        /** @brief No window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x0 = 0;
        /** @brief Window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Low-power reset flag */
    using RCC_CSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal mode reset occurred (value: 0)
     *          - B_0x1: Illegal mode reset occurred (value: 1)
     */
        /** @brief No illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x0 = 0;
        /** @brief Illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x1 = 1;

}

#endif
