/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA64_RCC_HPP
#define EMBEDDED_PP_STM32WBA64_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RCC address block description */
namespace STM32WBA64::RCC {

    /** @brief RCC clock control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock enable */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator off (value: 0)
     *          - B_0x1: HSI16 oscillator on (value: 1)
     */
        /** @brief HSI16 oscillator off */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI16 oscillator on */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI16 enable for some peripheral kernels */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect on HSI16 oscillator (value: 0)
     *          - B_0x1: HSI16 oscillator forced on even in Stop mode (value: 1)
     */
        /** @brief No effect on HSI16 oscillator */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI16 oscillator forced on even in Stop mode */
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

    /** @brief HSE32 clock enable */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 oscillator not requested by the CPU. (value: 0)
     *          - B_0x1: HSE32 oscillator ON (value: 1)
     */
        /** @brief HSE32 oscillator not requested by the CPU. */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief HSE32 oscillator ON */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x1 = 1;

    /** @brief HSE32 clock ready flag */
    using RCC_CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 oscillator not ready (value: 0)
     *          - B_0x1: HSE32 oscillator ready to be used by the CPU (value: 1)
     */
        /** @brief HSE32 oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x0 = 0;
        /** @brief HSE32 oscillator ready to be used by the CPU */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x1 = 1;

    /** @brief HSE32 clock security system enable */
    using RCC_CR_HSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 clock security system off (clock detector off) (value: 0)
     *          - B_0x1: HSE32 clock security system on (clock detector on if the HSE32 oscillator is stable, off if not). (value: 1)
     */
        /** @brief HSE32 clock security system off (clock detector off) */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x0 = 0;
        /** @brief HSE32 clock security system on (clock detector on if the HSE32 oscillator is stable, off if not). */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x1 = 1;

    /** @brief HSE32 clock for SYSCLK prescaler */
    using RCC_CR_HSEPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 not divided, SYSCLK = HSE32 (value: 0)
     *          - B_0x1: HSE32 divided, SYSCLK = HSE32/2 (value: 1)
     */
        /** @brief HSE32 not divided, SYSCLK = HSE32 */
    constexpr std::uint32_t RCC_CR_HSEPRE_B_0x0 = 0;
        /** @brief HSE32 divided, SYSCLK = HSE32/2 */
    constexpr std::uint32_t RCC_CR_HSEPRE_B_0x1 = 1;

    /** @brief PLL1 enable */
    using RCC_CR_PLL1ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 off (value: 0)
     *          - B_0x1: PLL1 on (value: 1)
     */
        /** @brief PLL1 off */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x0 = 0;
        /** @brief PLL1 on */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x1 = 1;

    /** @brief PLL1 clock ready flag */
    using RCC_CR_PLL1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 unlocked (value: 0)
     *          - B_0x1: PLL1 locked (PLL1RDY remains set when PLL1 is selected as sysclk and PLL1 is disabled by HSECSS failure). (value: 1)
     */
        /** @brief PLL1 unlocked */
    constexpr std::uint32_t RCC_CR_PLL1RDY_B_0x0 = 0;
        /** @brief PLL1 locked (PLL1RDY remains set when PLL1 is selected as sysclk and PLL1 is disabled by HSECSS failure). */
    constexpr std::uint32_t RCC_CR_PLL1RDY_B_0x1 = 1;

    /** @brief RCC internal clock sources calibration register 3 */
    using RCC_ICSCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock calibration */
    using RCC_ICSCR3_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock trimming */
    using RCC_ICSCR3_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock configuration register 1 */
    using RCC_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock switch */
    using RCC_CFGR1_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 selected as system clock (value: 0)
     *          - B_0x2: HSE32 or HSE32/2, as defined by HSEPRE, selected as system clock (value: 2)
     *          - B_0x3: pll1rclk selected as system clock (value: 3)
     */
        /** @brief HSI16 selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x0 = 0;
        /** @brief HSE32 or HSE32/2, as defined by HSEPRE, selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x2 = 2;
        /** @brief pll1rclk selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x3 = 3;

    /** @brief system clock switch status */
    using RCC_CFGR1_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator used as system clock (value: 0)
     *          - B_0x2: HSE32 or HSE32/2, as defined by HSEPRE, used as system clock (value: 2)
     *          - B_0x3: pll1rclk used as system clock (value: 3)
     */
        /** @brief HSI16 oscillator used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x0 = 0;
        /** @brief HSE32 or HSE32/2, as defined by HSEPRE, used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x2 = 2;
        /** @brief pll1rclk used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x3 = 3;

    /** @brief microcontroller clock output */
    using RCC_CFGR1_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO output disabled, no clock on MCO (value: 0)
     *          - B_0x1: sysclkpre system clock after PLL1RCLKPRE division selected (value: 1)
     *          - B_0x3: HSI16 clock selected (value: 3)
     *          - B_0x4: HSE32 clock selected (value: 4)
     *          - B_0x5: pll1rclk clock selected (value: 5)
     *          - B_0x6: LSI clock selected (value: 6)
     *          - B_0x7: LSE clock selected (value: 7)
     *          - B_0x8: pll1pclk clock selected (value: 8)
     *          - B_0x9: pll1qclk clock selected (value: 9)
     *          - B_0xA: hclk5 clock selected (value: 10)
     */
        /** @brief MCO output disabled, no clock on MCO */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x0 = 0;
        /** @brief sysclkpre system clock after PLL1RCLKPRE division selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x1 = 1;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x3 = 3;
        /** @brief HSE32 clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x4 = 4;
        /** @brief pll1rclk clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x5 = 5;
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x6 = 6;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x7 = 7;
        /** @brief pll1pclk clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x8 = 8;
        /** @brief pll1qclk clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x9 = 9;
        /** @brief hclk5 clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0xA = 10;

    /** @brief microcontroller clock output prescaler */
    using RCC_CFGR1_MCOPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO divided by 1 (value: 0)
     *          - B_0x1: MCO divided by 2 (value: 1)
     *          - B_0x2: MCO divided by 4 (value: 2)
     *          - B_0x3: MCO divided by 8 (value: 3)
     *          - B_0x4: MCO divided by 16 (value: 4)
     */
        /** @brief MCO divided by 1 */
    constexpr std::uint32_t RCC_CFGR1_MCOPRE_B_0x0 = 0;
        /** @brief MCO divided by 2 */
    constexpr std::uint32_t RCC_CFGR1_MCOPRE_B_0x1 = 1;
        /** @brief MCO divided by 4 */
    constexpr std::uint32_t RCC_CFGR1_MCOPRE_B_0x2 = 2;
        /** @brief MCO divided by 8 */
    constexpr std::uint32_t RCC_CFGR1_MCOPRE_B_0x3 = 3;
        /** @brief MCO divided by 16 */
    constexpr std::uint32_t RCC_CFGR1_MCOPRE_B_0x4 = 4;

    /** @brief RCC clock configuration register 2 */
    using RCC_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1, AHB2 and AHB4 prescaler */
    using RCC_CFGR2_HPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: hclk1 = SYSCLK divided by 2 (value: 4)
     *          - B_0x5: hclk1 = SYSCLK divided by 4 (value: 5)
     *          - B_0x6: hclk1 = SYSCLK divided by 8 (value: 6)
     *          - B_0x7: hclk1 = SYSCLK divided by 16 (value: 7)
     */
        /** @brief hclk1 = SYSCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x4 = 4;
        /** @brief hclk1 = SYSCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x5 = 5;
        /** @brief hclk1 = SYSCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x6 = 6;
        /** @brief hclk1 = SYSCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x7 = 7;

    /** @brief APB1 prescaler */
    using RCC_CFGR2_PPRE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: pclk1 = hclk1 divided by 2 (value: 4)
     *          - B_0x5: pclk1 = hclk1 divided by 4 (value: 5)
     *          - B_0x6: pclk1 = hclk1 divided by 8 (value: 6)
     *          - B_0x7: pclk1 = hclk1 divided by 16 (value: 7)
     */
        /** @brief pclk1 = hclk1 divided by 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x4 = 4;
        /** @brief pclk1 = hclk1 divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x5 = 5;
        /** @brief pclk1 = hclk1 divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x6 = 6;
        /** @brief pclk1 = hclk1 divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x7 = 7;

    /** @brief APB2 prescaler */
    using RCC_CFGR2_PPRE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: pclk2 = hclk1 divided by 2 (value: 4)
     *          - B_0x5: pclk2 = hclk1 divided by 4 (value: 5)
     *          - B_0x6: pclk2 = hclk1 divided by 8 (value: 6)
     *          - B_0x7: pclk2 = hclk1 divided by 16 (value: 7)
     */
        /** @brief pclk2 = hclk1 divided by 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x4 = 4;
        /** @brief pclk2 = hclk1 divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x5 = 5;
        /** @brief pclk2 = hclk1 divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x6 = 6;
        /** @brief pclk2 = hclk1 divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x7 = 7;

    /** @brief RCC clock configuration register 3 */
    using RCC_CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB7 prescaler */
    using RCC_CFGR3_PPRE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: hclk1 divided by 2 (value: 4)
     *          - B_0x5: hclk1 divided by 4 (value: 5)
     *          - B_0x6: hclk1 divided by 8 (value: 6)
     *          - B_0x7: hclk1 divided by 16 (value: 7)
     */
        /** @brief hclk1 divided by 2 */
    constexpr std::uint32_t RCC_CFGR3_PPRE7_B_0x4 = 4;
        /** @brief hclk1 divided by 4 */
    constexpr std::uint32_t RCC_CFGR3_PPRE7_B_0x5 = 5;
        /** @brief hclk1 divided by 8 */
    constexpr std::uint32_t RCC_CFGR3_PPRE7_B_0x6 = 6;
        /** @brief hclk1 divided by 16 */
    constexpr std::uint32_t RCC_CFGR3_PPRE7_B_0x7 = 7;

    /** @brief RCC PLL1 configuration register */
    using RCC_PLL1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 entry clock source */
    using RCC_PLL1CFGR_PLL1SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock sent to PLL1 (value: 0)
     *          - B_0x2: HSI16 clock selected as PLL1 clock entry (value: 2)
     *          - B_0x3: HSE32 clock after HSEPRE divider selected as PLL1 clock entry (value: 3)
     */
        /** @brief no clock sent to PLL1 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x0 = 0;
        /** @brief HSI16 clock selected as PLL1 clock entry */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x2 = 2;
        /** @brief HSE32 clock after HSEPRE divider selected as PLL1 clock entry */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x3 = 3;

    /** @brief PLL1 input frequency range */
    using RCC_PLL1CFGR_PLL1RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: PLL1 input (ref_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL1 input (ref_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RGE_B_0x3 = 3;

    /** @brief PLL1 fractional latch enable */
    using RCC_PLL1CFGR_PLL1FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler for PLL1 */
    using RCC_PLL1CFGR_PLL1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: division by 1 (bypass) (value: 0)
     *          - B_0x1: division by 2 (value: 1)
     *          - B_0x2: division by 3 (value: 2)
     *          - B_0x7: division by 8 (value: 7)
     */
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x0 = 0;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x1 = 1;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x2 = 2;
        /** @brief division by 8 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x7 = 7;

    /** @brief PLL1 DIVP divider output enable */
    using RCC_PLL1CFGR_PLL1PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1pclk output disabled (value: 0)
     *          - B_0x1: pll1pclk output enabled (value: 1)
     */
        /** @brief pll1pclk output disabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x0 = 0;
        /** @brief pll1pclk output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x1 = 1;

    /** @brief PLL1 DIVQ divider output enable */
    using RCC_PLL1CFGR_PLL1QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1qclk output disabled (value: 0)
     *          - B_0x1: pll1qclk output enabled (value: 1)
     */
        /** @brief pll1qclk output disabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x0 = 0;
        /** @brief pll1qclk output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x1 = 1;

    /** @brief PLL1 DIVR divider output enable */
    using RCC_PLL1CFGR_PLL1REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1rclk output disabled (value: 0)
     *          - B_0x1: pll1rclk output enabled (value: 1)
     */
        /** @brief pll1rclk output disabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1REN_B_0x0 = 0;
        /** @brief pll1rclk output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1REN_B_0x1 = 1;

    /** @brief pll1rclk clock for SYSCLK prescaler division enable */
    using RCC_PLL1CFGR_PLL1RCLKPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1rclk not divided, sysclkpre = pll1rclk (value: 0)
     *          - B_0x1: pll1rclk divided, sysclkpre = pll1rclk divided (value: 1)
     */
        /** @brief pll1rclk not divided, sysclkpre = pll1rclk */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRE_B_0x0 = 0;
        /** @brief pll1rclk divided, sysclkpre = pll1rclk divided */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRE_B_0x1 = 1;

    /** @brief pll1rclk clock for SYSCLK prescaler division step selection */
    using RCC_PLL1CFGR_PLL1RCLKPRESTEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1rclk 2-step division (value: 0)
     *          - B_0x1: pll1rclk 3-step division (value: 1)
     */
        /** @brief pll1rclk 2-step division */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRESTEP_B_0x0 = 0;
        /** @brief pll1rclk 3-step division */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRESTEP_B_0x1 = 1;

    /** @brief pll1rclkpre not divided ready. */
    using RCC_PLL1CFGR_PLL1RCLKPRERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1rclk divided (value: 0)
     *          - B_0x1: pll1rclk not divided ready (value: 1)
     */
        /** @brief pll1rclk divided */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRERDY_B_0x0 = 0;
        /** @brief pll1rclk not divided ready */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRERDY_B_0x1 = 1;

    /** @brief RCC PLL1 dividers register */
    using RCC_PLL1DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL1 VCO */
    using RCC_PLL1DIVR_PLL1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x003: multiplication factor for PLL1 VCO = 4 (value: 3)
     *          - B_0x004: multiplication factor for PLL1 VCO = 5 (value: 4)
     *          - B_0x005: multiplication factor for PLL1 VCO = 6 (value: 5)
     *          - B_0x080: multiplication factor for PLL1 VCO = 129 (default after reset) (value: 128)
     *          - B_0x1FF: multiplication factor for PLL1 VCO = 512 (value: 511)
     */
        /** @brief multiplication factor for PLL1 VCO = 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x003 = 3;
        /** @brief multiplication factor for PLL1 VCO = 5 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x004 = 4;
        /** @brief multiplication factor for PLL1 VCO = 6 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x005 = 5;
        /** @brief multiplication factor for PLL1 VCO = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x080 = 128;
        /** @brief multiplication factor for PLL1 VCO = 512 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x1FF = 511;

    /** @brief PLL1 DIVP division factor */
    using RCC_PLL1DIVR_PLL1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1pclk = VCO output frequency (value: 0)
     *          - B_0x1: pll1pclk = VCO output frequency / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1pclk = VCO output frequency (value: 2)
     *          - B_0x3: pll1pclk = VCO output frequency / 4 (value: 3)
     *          - B_0x7F: pll1pclk = VCO output frequency / 128 (value: 127)
     */
        /** @brief pll1pclk = VCO output frequency */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x0 = 0;
        /** @brief pll1pclk = VCO output frequency / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x1 = 1;
        /** @brief pll1pclk = VCO output frequency */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x2 = 2;
        /** @brief pll1pclk = VCO output frequency / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x3 = 3;
        /** @brief pll1pclk = VCO output frequency / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x7F = 127;

    /** @brief PLL1 DIVQ division factor */
    using RCC_PLL1DIVR_PLL1Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1qclk = VCO output frequency (value: 0)
     *          - B_0x1: pll1qclk = VCO output frequency / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1qclk = VCO output frequency / 3 (value: 2)
     *          - B_0x3: pll1qclk = VCO output frequency / 4 (value: 3)
     *          - B_0x7F: pll1qclk = VCO output frequency / 128 (value: 127)
     */
        /** @brief pll1qclk = VCO output frequency */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x0 = 0;
        /** @brief pll1qclk = VCO output frequency / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x1 = 1;
        /** @brief pll1qclk = VCO output frequency / 3 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x2 = 2;
        /** @brief pll1qclk = VCO output frequency / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x3 = 3;
        /** @brief pll1qclk = VCO output frequency / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x7F = 127;

    /** @brief PLL1 DIVR division factor */
    using RCC_PLL1DIVR_PLL1R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1rclk = VCO output frequency (value: 0)
     *          - B_0x1: pll1rclk = VCO output frequency / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1rclk = VCO output frequency / 3 (value: 2)
     *          - B_0x3: pll1rclk = VCO output frequency / 4 (value: 3)
     *          - B_0x7F: pll1rclk = VCO output frequency / 128 (value: 127)
     */
        /** @brief pll1rclk = VCO output frequency */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x0 = 0;
        /** @brief pll1rclk = VCO output frequency / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x1 = 1;
        /** @brief pll1rclk = VCO output frequency / 3 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x2 = 2;
        /** @brief pll1rclk = VCO output frequency / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x3 = 3;
        /** @brief pll1rclk = VCO output frequency / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x7F = 127;

    /** @brief RCC PLL1 fractional divider register */
    using RCC_PLL1FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fractional part of the multiplication factor for PLL1 VCO */
    using RCC_PLL1FRACR_PLL1FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI1 ready interrupt enable */
    using RCC_CIER_LSI1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI1 ready interrupt disabled (value: 0)
     *          - B_0x1: LSI1 ready interrupt enabled (value: 1)
     */
        /** @brief LSI1 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_LSI1RDYIE_B_0x0 = 0;
        /** @brief LSI1 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSI1RDYIE_B_0x1 = 1;

    /** @brief LSE ready interrupt enable */
    using RCC_CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE ready interrupt disabled (value: 0)
     *          - B_0x1: LSE ready interrupt enabled (value: 1)
     */
        /** @brief LSE ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x0 = 0;
        /** @brief LSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x1 = 1;

    /** @brief HSI16 ready interrupt enable */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 ready interrupt disabled (value: 0)
     *          - B_0x1: HSI16 ready interrupt enabled (value: 1)
     */
        /** @brief HSI16 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief HSI16 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE32 ready interrupt enable */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 ready interrupt disabled (value: 0)
     *          - B_0x1: HSE32 ready interrupt enabled (value: 1)
     */
        /** @brief HSE32 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE32 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

    /** @brief PLL1 ready interrupt enable */
    using RCC_CIER_PLL1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 lock interrupt disabled (value: 0)
     *          - B_0x1: PLL1 lock interrupt enabled (value: 1)
     */
        /** @brief PLL1 lock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x0 = 0;
        /** @brief PLL1 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x1 = 1;

    /** @brief LSI2 ready interrupt enable */
    using RCC_CIER_LSI2RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI2 ready interrupt disabled (value: 0)
     *          - B_0x1: LSI2 ready interrupt enabled (value: 1)
     */
        /** @brief LSI2 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_LSI2RDYIE_B_0x0 = 0;
        /** @brief LSI2 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSI2RDYIE_B_0x1 = 1;

    /** @brief RCC clock interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI1 ready interrupt flag */
    using RCC_CIFR_LSI1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSI1 oscillator (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSI1 oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSI1 oscillator */
    constexpr std::uint32_t RCC_CIFR_LSI1RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSI1 oscillator */
    constexpr std::uint32_t RCC_CIFR_LSI1RDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSE oscillator (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSE oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief HSI16 ready interrupt flag */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSI16 oscillator (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSI16 oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE32 ready interrupt flag */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSE32 oscillator (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSE32 oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSE32 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSE32 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief PLL1 ready interrupt flag */
    using RCC_CIFR_PLL1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by PLL1 lock (value: 0)
     *          - B_0x1: clock ready interrupt caused by PLL1 lock (value: 1)
     */
        /** @brief no clock ready interrupt caused by PLL1 lock */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by PLL1 lock */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x1 = 1;

    /** @brief HSE32 clock security system interrupt flag */
    using RCC_CIFR_HSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock security interrupt caused by HSE32 clock failure (value: 0)
     *          - B_0x1: clock security interrupt caused by HSE32 clock failure (value: 1)
     */
        /** @brief no clock security interrupt caused by HSE32 clock failure */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x0 = 0;
        /** @brief clock security interrupt caused by HSE32 clock failure */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x1 = 1;

    /** @brief LSI2 ready interrupt flag */
    using RCC_CIFR_LSI2RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSI2 oscillator (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSI2 oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSI2 oscillator */
    constexpr std::uint32_t RCC_CIFR_LSI2RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSI2 oscillator */
    constexpr std::uint32_t RCC_CIFR_LSI2RDYF_B_0x1 = 1;

    /** @brief RCC clock interrupt clear register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI1 ready interrupt clear */
    using RCC_CICR_LSI1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE ready interrupt clear */
    using RCC_CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 ready interrupt clear */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE32 ready interrupt clear */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 ready interrupt clear */
    using RCC_CICR_PLL1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High speed external clock security system interrupt clear */
    using RCC_CICR_HSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI2 ready interrupt clear */
    using RCC_CICR_LSI2RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 peripheral reset register */
    using RCC_AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 reset */
    using RCC_AHB1RSTR_GPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset GPDMA1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x0 = 0;
        /** @brief Reset GPDMA1 */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x1 = 1;

    /** @brief CRC reset */
    using RCC_AHB1RSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CRC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x0 = 0;
        /** @brief Reset CRC */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x1 = 1;

    /** @brief TSC reset */
    using RCC_AHB1RSTR_TSCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TSC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_TSCRST_B_0x0 = 0;
        /** @brief Reset TSC */
    constexpr std::uint32_t RCC_AHB1RSTR_TSCRST_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral reset register */
    using RCC_AHB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO port A reset */
    using RCC_AHB2RSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port A (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x0 = 0;
        /** @brief Reset IO port A */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x1 = 1;

    /** @brief IO port B reset */
    using RCC_AHB2RSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port B (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x0 = 0;
        /** @brief Reset IO port B */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x1 = 1;

    /** @brief IO port C reset */
    using RCC_AHB2RSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port C (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x0 = 0;
        /** @brief Reset IO port C */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x1 = 1;

    /** @brief IO port D reset */
    using RCC_AHB2RSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port D (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIODRST_B_0x0 = 0;
        /** @brief Reset IO port D */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIODRST_B_0x1 = 1;

    /** @brief IO port E reset */
    using RCC_AHB2RSTR_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port E (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOERST_B_0x0 = 0;
        /** @brief Reset IO port E */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOERST_B_0x1 = 1;

    /** @brief IO port G reset */
    using RCC_AHB2RSTR_GPIOGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port G (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOGRST_B_0x0 = 0;
        /** @brief Reset IO port G */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOGRST_B_0x1 = 1;

    /** @brief IO port H reset */
    using RCC_AHB2RSTR_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port H (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOHRST_B_0x0 = 0;
        /** @brief Reset IO port H */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOHRST_B_0x1 = 1;

    /** @brief USB OTG_HS reset */
    using RCC_AHB2RSTR_OTGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USB OTG_HS and USB OTG_HS PHY (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_OTGRST_B_0x0 = 0;
        /** @brief Reset USB OTG_HS and USB OTG_HS PHY */
    constexpr std::uint32_t RCC_AHB2RSTR_OTGRST_B_0x1 = 1;

    /** @brief AES hardware accelerator reset */
    using RCC_AHB2RSTR_AESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset AES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_AESRST_B_0x0 = 0;
        /** @brief Reset AES */
    constexpr std::uint32_t RCC_AHB2RSTR_AESRST_B_0x1 = 1;

    /** @brief Hash reset */
    using RCC_AHB2RSTR_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset HASH (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x0 = 0;
        /** @brief Reset HASH */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x1 = 1;

    /** @brief Random number generator reset */
    using RCC_AHB2RSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset RNG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x0 = 0;
        /** @brief Reset RNG */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x1 = 1;

    /** @brief SAES hardware accelerator reset */
    using RCC_AHB2RSTR_SAESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SAES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_SAESRST_B_0x0 = 0;
        /** @brief Reset SAES */
    constexpr std::uint32_t RCC_AHB2RSTR_SAESRST_B_0x1 = 1;

    /** @brief HSEM reset */
    using RCC_AHB2RSTR_HSEMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset HSEM (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_HSEMRST_B_0x0 = 0;
        /** @brief Reset HSEM */
    constexpr std::uint32_t RCC_AHB2RSTR_HSEMRST_B_0x1 = 1;

    /** @brief PKA reset */
    using RCC_AHB2RSTR_PKARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset PKA (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_PKARST_B_0x0 = 0;
        /** @brief Reset PKA */
    constexpr std::uint32_t RCC_AHB2RSTR_PKARST_B_0x1 = 1;

    /** @brief RCC AHB4 peripheral reset register */
    using RCC_AHB4RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC4 reset */
    using RCC_AHB4RSTR_ADC4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset ADC4 interface (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB4RSTR_ADC4RST_B_0x0 = 0;
        /** @brief Reset ADC4 interface */
    constexpr std::uint32_t RCC_AHB4RSTR_ADC4RST_B_0x1 = 1;

    /** @brief RCC AHB5 peripheral reset register */
    using RCC_AHB5RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2. */
    using RCC_AHB5RSTR_RADIORST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset 2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB5RSTR_RADIORST_B_0x0 = 0;
        /** @brief Reset 2. */
    constexpr std::uint32_t RCC_AHB5RSTR_RADIORST_B_0x1 = 1;

    /** @brief PTACONV reset */
    using RCC_AHB5RSTR_PTACONVRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset PTACONV (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB5RSTR_PTACONVRST_B_0x0 = 0;
        /** @brief Reset PTACONV */
    constexpr std::uint32_t RCC_AHB5RSTR_PTACONVRST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 1 */
    using RCC_APB1RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 reset */
    using RCC_APB1RSTR1_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x0 = 0;
        /** @brief Reset TIM2 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 reset */
    using RCC_APB1RSTR1_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x0 = 0;
        /** @brief Reset TIM3 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x1 = 1;

    /** @brief TIM4 reset */
    using RCC_APB1RSTR1_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x0 = 0;
        /** @brief Reset TIM4 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x1 = 1;

    /** @brief SPI2 reset */
    using RCC_APB1RSTR1_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x0 = 0;
        /** @brief Reset SPI2 */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x1 = 1;

    /** @brief USART2 reset */
    using RCC_APB1RSTR1_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x0 = 0;
        /** @brief Reset USART2 */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x1 = 1;

    /** @brief USART3 reset */
    using RCC_APB1RSTR1_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x0 = 0;
        /** @brief Reset USART3 */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x1 = 1;

    /** @brief I2C1 reset */
    using RCC_APB1RSTR1_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x0 = 0;
        /** @brief Reset I2C1 */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x1 = 1;

    /** @brief I2C2 reset */
    using RCC_APB1RSTR1_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x0 = 0;
        /** @brief Reset I2C2 */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 2 */
    using RCC_APB1RSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 reset */
    using RCC_APB1RSTR2_I2C4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C4RST_B_0x0 = 0;
        /** @brief Reset I2C4 */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C4RST_B_0x1 = 1;

    /** @brief LPTIM2 reset */
    using RCC_APB1RSTR2_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_LPTIM2RST_B_0x0 = 0;
        /** @brief Reset LPTIM2 */
    constexpr std::uint32_t RCC_APB1RSTR2_LPTIM2RST_B_0x1 = 1;

    /** @brief RCC APB2 peripheral reset register */
    using RCC_APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 reset */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief Reset TIM1 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief SPI1 reset */
    using RCC_APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief Reset SPI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief USART1 reset */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief Reset USART1 */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief TIM16 reset */
    using RCC_APB2RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM16 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x0 = 0;
        /** @brief Reset TIM16 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x1 = 1;

    /** @brief TIM17 reset */
    using RCC_APB2RSTR_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM17 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x0 = 0;
        /** @brief Reset TIM17 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x1 = 1;

    /** @brief SAI1 reset */
    using RCC_APB2RSTR_SAI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SAI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x0 = 0;
        /** @brief Reset SAI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x1 = 1;

    /** @brief RCC APB7 peripheral reset register */
    using RCC_APB7RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG reset */
    using RCC_APB7RSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SYSCFG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_SYSCFGRST_B_0x0 = 0;
        /** @brief Reset SYSCFG */
    constexpr std::uint32_t RCC_APB7RSTR_SYSCFGRST_B_0x1 = 1;

    /** @brief SPI3 reset */
    using RCC_APB7RSTR_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_SPI3RST_B_0x0 = 0;
        /** @brief Reset SPI3 */
    constexpr std::uint32_t RCC_APB7RSTR_SPI3RST_B_0x1 = 1;

    /** @brief LPUART1 reset */
    using RCC_APB7RSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPUART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_LPUART1RST_B_0x0 = 0;
        /** @brief Reset LPUART1 */
    constexpr std::uint32_t RCC_APB7RSTR_LPUART1RST_B_0x1 = 1;

    /** @brief I2C3 reset */
    using RCC_APB7RSTR_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_I2C3RST_B_0x0 = 0;
        /** @brief Reset I2C3 */
    constexpr std::uint32_t RCC_APB7RSTR_I2C3RST_B_0x1 = 1;

    /** @brief LPTIM1 reset */
    using RCC_APB7RSTR_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_LPTIM1RST_B_0x0 = 0;
        /** @brief Reset LPTIM1 */
    constexpr std::uint32_t RCC_APB7RSTR_LPTIM1RST_B_0x1 = 1;

    /** @brief COMP reset */
    using RCC_APB7RSTR_COMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset COMP (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_COMPRST_B_0x0 = 0;
        /** @brief Reset COMP */
    constexpr std::uint32_t RCC_APB7RSTR_COMPRST_B_0x1 = 1;

    /** @brief VREFBUF reset */
    using RCC_APB7RSTR_VREFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset VREFBUF (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_VREFRST_B_0x0 = 0;
        /** @brief Reset VREFBUF */
    constexpr std::uint32_t RCC_APB7RSTR_VREFRST_B_0x1 = 1;

    /** @brief RCC AHB1 peripheral clock enable register */
    using RCC_AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 bus clock enable */
    using RCC_AHB1ENR_GPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 bus clock disabled (value: 0)
     *          - B_0x1: GPDMA1 bus clock enabled (value: 1)
     */
        /** @brief GPDMA1 bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x0 = 0;
        /** @brief GPDMA1 bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x1 = 1;

    /** @brief FLASH bus clock enable */
    using RCC_AHB1ENR_FLASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH bus clock disabled (value: 0)
     *          - B_0x1: FLASH bus clock enabled (value: 1)
     */
        /** @brief FLASH bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_FLASHEN_B_0x0 = 0;
        /** @brief FLASH bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_FLASHEN_B_0x1 = 1;

    /** @brief CRC bus clock enable */
    using RCC_AHB1ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC bus clock disabled (value: 0)
     *          - B_0x1: CRC bus clock enabled (value: 1)
     */
        /** @brief CRC bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x0 = 0;
        /** @brief CRC bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x1 = 1;

    /** @brief Touch sensing controller bus clock enable */
    using RCC_AHB1ENR_TSCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC bus clock disabled (value: 0)
     *          - B_0x1: TSC bus clock enabled (value: 1)
     */
        /** @brief TSC bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_TSCEN_B_0x0 = 0;
        /** @brief TSC bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_TSCEN_B_0x1 = 1;

    /** @brief RAMCFG bus clock enable */
    using RCC_AHB1ENR_RAMCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG bus clock disabled (value: 0)
     *          - B_0x1: RAMCFG bus clock enabled (value: 1)
     */
        /** @brief RAMCFG bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x0 = 0;
        /** @brief RAMCFG bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x1 = 1;

    /** @brief GTZC1 bus clock enable */
    using RCC_AHB1ENR_GTZC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 bus clock disabled (value: 0)
     *          - B_0x1: GTZC1 bus clock enabled (value: 1)
     */
        /** @brief GTZC1 bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_GTZC1EN_B_0x0 = 0;
        /** @brief GTZC1 bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GTZC1EN_B_0x1 = 1;

    /** @brief SRAM1 bus clock enable */
    using RCC_AHB1ENR_SRAM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 bus clock disabled (value: 0)
     *          - B_0x1: SRAM1 bus clock enabled (value: 1)
     */
        /** @brief SRAM1 bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_SRAM1EN_B_0x0 = 0;
        /** @brief SRAM1 bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_SRAM1EN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock enable register */
    using RCC_AHB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO port A bus clock enable */
    using RCC_AHB2ENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port A bus clock disabled (value: 0)
     *          - B_0x1: IO port A bus clock enabled (value: 1)
     */
        /** @brief IO port A bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x0 = 0;
        /** @brief IO port A bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x1 = 1;

    /** @brief IO port B bus clock enable */
    using RCC_AHB2ENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port B bus clock disabled (value: 0)
     *          - B_0x1: IO port B bus clock enabled (value: 1)
     */
        /** @brief IO port B bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x0 = 0;
        /** @brief IO port B bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x1 = 1;

    /** @brief IO port C bus clock enable */
    using RCC_AHB2ENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port C bus clock disabled (value: 0)
     *          - B_0x1: IO port C bus clock enabled (value: 1)
     */
        /** @brief IO port C bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x0 = 0;
        /** @brief IO port C bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x1 = 1;

    /** @brief IO port D bus clock enable */
    using RCC_AHB2ENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port D bus clock disabled (value: 0)
     *          - B_0x1: IO port D bus clock enabled (value: 1)
     */
        /** @brief IO port D bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIODEN_B_0x0 = 0;
        /** @brief IO port D bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIODEN_B_0x1 = 1;

    /** @brief IO port E bus clock enable */
    using RCC_AHB2ENR_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port E bus clock disabled (value: 0)
     *          - B_0x1: IO port E bus clock enabled (value: 1)
     */
        /** @brief IO port E bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOEEN_B_0x0 = 0;
        /** @brief IO port E bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOEEN_B_0x1 = 1;

    /** @brief IO port G bus clock enable */
    using RCC_AHB2ENR_GPIOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port G bus clock disabled (value: 0)
     *          - B_0x1: IO port G bus clock enabled (value: 1)
     */
        /** @brief IO port G bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOGEN_B_0x0 = 0;
        /** @brief IO port G bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOGEN_B_0x1 = 1;

    /** @brief IO port H bus clock enable */
    using RCC_AHB2ENR_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port H bus clock disabled (value: 0)
     *          - B_0x1: IO port H bus clock enabled (value: 1)
     */
        /** @brief IO port H bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOHEN_B_0x0 = 0;
        /** @brief IO port H bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOHEN_B_0x1 = 1;

    /** @brief USB OTG_HS bus and kernel clock enable */
    using RCC_AHB2ENR_OTGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB OTG_HS bus and kernel clock disabled (value: 0)
     *          - B_0x1: USB OTG_HS bus and kernel clock enabled (value: 1)
     */
        /** @brief USB OTG_HS bus and kernel clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_OTGEN_B_0x0 = 0;
        /** @brief USB OTG_HS bus and kernel clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_OTGEN_B_0x1 = 1;

    /** @brief USB OTG_HS PHY kernel clock enable */
    using RCC_AHB2ENR_OTGHSPHYEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB OTG_HS PHY kernel clock disabled (value: 0)
     *          - B_0x1: USB OTG_HS PHY kernel clock enabled (value: 1)
     */
        /** @brief USB OTG_HS PHY kernel clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_OTGHSPHYEN_B_0x0 = 0;
        /** @brief USB OTG_HS PHY kernel clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_OTGHSPHYEN_B_0x1 = 1;

    /** @brief AES bus clock enable */
    using RCC_AHB2ENR_AESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES bus clock disabled (value: 0)
     *          - B_0x1: AES bus clock enabled (value: 1)
     */
        /** @brief AES bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_AESEN_B_0x0 = 0;
        /** @brief AES bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_AESEN_B_0x1 = 1;

    /** @brief HASH bus clock enable */
    using RCC_AHB2ENR_HASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH bus clock disabled (value: 0)
     *          - B_0x1: HASH bus clock enabled (value: 1)
     */
        /** @brief HASH bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x0 = 0;
        /** @brief HASH bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x1 = 1;

    /** @brief RNG bus and kernel clocks enable */
    using RCC_AHB2ENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG bus and kernel clocks disabled (value: 0)
     *          - B_0x1: RNG bus and kernel clocks enabled (value: 1)
     */
        /** @brief RNG bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x0 = 0;
        /** @brief RNG bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x1 = 1;

    /** @brief SAES bus clock enable */
    using RCC_AHB2ENR_SAESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES bus clock disabled (value: 0)
     *          - B_0x1: SAES bus clock enabled (value: 1)
     */
        /** @brief SAES bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_SAESEN_B_0x0 = 0;
        /** @brief SAES bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_SAESEN_B_0x1 = 1;

    /** @brief HSEM bus clock enable */
    using RCC_AHB2ENR_HSEMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSEM bus clock disabled (value: 0)
     *          - B_0x1: HSEM bus clock enabled (value: 1)
     */
        /** @brief HSEM bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_HSEMEN_B_0x0 = 0;
        /** @brief HSEM bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_HSEMEN_B_0x1 = 1;

    /** @brief PKA bus clock enable */
    using RCC_AHB2ENR_PKAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA bus clock disabled (value: 0)
     *          - B_0x1: PKA bus clock enabled (value: 1)
     */
        /** @brief PKA bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_PKAEN_B_0x0 = 0;
        /** @brief PKA bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_PKAEN_B_0x1 = 1;

    /** @brief SRAM2 bus clock enable */
    using RCC_AHB2ENR_SRAM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 bus clock disabled (value: 0)
     *          - B_0x1: SRAM2 bus clock enabled (value: 1)
     */
        /** @brief SRAM2 bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM2EN_B_0x0 = 0;
        /** @brief SRAM2 bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM2EN_B_0x1 = 1;

    /** @brief RCC AHB4 peripheral clock enable register */
    using RCC_AHB4ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR bus clock enable */
    using RCC_AHB4ENR_PWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR bus clock disabled (value: 0)
     *          - B_0x1: PWR bus clock enabled (value: 1)
     */
        /** @brief PWR bus clock disabled */
    constexpr std::uint32_t RCC_AHB4ENR_PWREN_B_0x0 = 0;
        /** @brief PWR bus clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_PWREN_B_0x1 = 1;

    /** @brief ADC4 bus and kernel clocks enable */
    using RCC_AHB4ENR_ADC4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC4 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: ADC4 bus and kernel clocks enabled (value: 1)
     */
        /** @brief ADC4 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_AHB4ENR_ADC4EN_B_0x0 = 0;
        /** @brief ADC4 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_AHB4ENR_ADC4EN_B_0x1 = 1;

    /** @brief RCC AHB5 peripheral clock enable register */
    using RCC_AHB5ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2. */
    using RCC_AHB5ENR_RADIOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t RCC_AHB5ENR_RADIOEN_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t RCC_AHB5ENR_RADIOEN_B_0x1 = 1;

    /** @brief PTACONV bus clock enable */
    using RCC_AHB5ENR_PTACONVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PTACONV bus clock disabled (value: 0)
     *          - B_0x1: PTACONV bus clock enabled (value: 1)
     */
        /** @brief PTACONV bus clock disabled */
    constexpr std::uint32_t RCC_AHB5ENR_PTACONVEN_B_0x0 = 0;
        /** @brief PTACONV bus clock enabled */
    constexpr std::uint32_t RCC_AHB5ENR_PTACONVEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable register 1 */
    using RCC_APB1ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 bus and kernel clocks enable */
    using RCC_APB1ENR1_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM2 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM2 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 bus and kernel clocks enable */
    using RCC_APB1ENR1_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM3 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM3 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x1 = 1;

    /** @brief TIM4 bus and kernel clocks enable */
    using RCC_APB1ENR1_TIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM4 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM4 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x0 = 0;
        /** @brief TIM4 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x1 = 1;

    /** @brief WWDG bus clock enable */
    using RCC_APB1ENR1_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG bus clock disabled (value: 0)
     *          - B_0x1: WWDG bus clock enabled (value: 1)
     */
        /** @brief WWDG bus clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x0 = 0;
        /** @brief WWDG bus clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x1 = 1;

    /** @brief SPI2 bus and kernel clocks enable */
    using RCC_APB1ENR1_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: SPI2 bus and kernel clocks enabled (value: 1)
     */
        /** @brief SPI2 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI2EN_B_0x0 = 0;
        /** @brief SPI2 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI2EN_B_0x1 = 1;

    /** @brief USART2 bus and kernel clocks enable */
    using RCC_APB1ENR1_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: USART2 bus and kernel clocks enabled (value: 1)
     */
        /** @brief USART2 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x0 = 0;
        /** @brief USART2 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x1 = 1;

    /** @brief USART3 bus and kernel clocks enable */
    using RCC_APB1ENR1_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: USART3 bus and kernel clocks enabled (value: 1)
     */
        /** @brief USART3 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART3EN_B_0x0 = 0;
        /** @brief USART3 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART3EN_B_0x1 = 1;

    /** @brief I2C1 bus and kernel clocks enable */
    using RCC_APB1ENR1_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: I2C1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief I2C1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1EN_B_0x0 = 0;
        /** @brief I2C1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 bus and kernel clocks enable */
    using RCC_APB1ENR1_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: I2C2 bus and kernel clocks enabled (value: 1)
     */
        /** @brief I2C2 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C2EN_B_0x0 = 0;
        /** @brief I2C2 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C2EN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable register 2 */
    using RCC_APB1ENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 bus and kernel clocks enable */
    using RCC_APB1ENR2_I2C4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: I2C4 bus and kernel clocks enabled (value: 1)
     */
        /** @brief I2C4 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C4EN_B_0x0 = 0;
        /** @brief I2C4 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C4EN_B_0x1 = 1;

    /** @brief LPTIM2 bus and kernel clocks enable */
    using RCC_APB1ENR2_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: LPTIM2 bus and kernel clocks enabled (value: 1)
     */
        /** @brief LPTIM2 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR2_LPTIM2EN_B_0x0 = 0;
        /** @brief LPTIM2 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR2_LPTIM2EN_B_0x1 = 1;

    /** @brief RCC APB2 peripheral clock enable register */
    using RCC_APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 bus and kernel clocks enable */
    using RCC_APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief SPI1 bus and kernel clocks enable */
    using RCC_APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: SPI1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief SPI1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief USART1bus and kernel clocks enable */
    using RCC_APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: USART1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief USART1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief TIM16 bus and kernel clocks enable */
    using RCC_APB2ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM16 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM16 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x0 = 0;
        /** @brief TIM16 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x1 = 1;

    /** @brief TIM17 bus and kernel clocks enable */
    using RCC_APB2ENR_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM17 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM17 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x0 = 0;
        /** @brief TIM17 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x1 = 1;

    /** @brief SAI1 bus and kernel clocks enable */
    using RCC_APB2ENR_SAI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: SAI1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief SAI1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x0 = 0;
        /** @brief SAI1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x1 = 1;

    /** @brief RCC APB7 peripheral clock enable register */
    using RCC_APB7ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG bus clock enable */
    using RCC_APB7ENR_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG bus clock disabled (value: 0)
     *          - B_0x1: SYSCFG bus clock enabled (value: 1)
     */
        /** @brief SYSCFG bus clock disabled */
    constexpr std::uint32_t RCC_APB7ENR_SYSCFGEN_B_0x0 = 0;
        /** @brief SYSCFG bus clock enabled */
    constexpr std::uint32_t RCC_APB7ENR_SYSCFGEN_B_0x1 = 1;

    /** @brief SPI3 bus and kernel clocks enable */
    using RCC_APB7ENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: SPI3 bus and kernel clocks enabled (value: 1)
     */
        /** @brief SPI3 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB7ENR_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB7ENR_SPI3EN_B_0x1 = 1;

    /** @brief LPUART1 bus and kernel clocks enable */
    using RCC_APB7ENR_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: LPUART1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief LPUART1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB7ENR_LPUART1EN_B_0x0 = 0;
        /** @brief LPUART1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB7ENR_LPUART1EN_B_0x1 = 1;

    /** @brief I2C3 bus and kernel clocks enable */
    using RCC_APB7ENR_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: I2C3 bus and kernel clocks enabled (value: 1)
     */
        /** @brief I2C3 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB7ENR_I2C3EN_B_0x0 = 0;
        /** @brief I2C3 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB7ENR_I2C3EN_B_0x1 = 1;

    /** @brief LPTIM1 bus and kernel clocks enable */
    using RCC_APB7ENR_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: LPTIM1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief LPTIM1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB7ENR_LPTIM1EN_B_0x0 = 0;
        /** @brief LPTIM1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB7ENR_LPTIM1EN_B_0x1 = 1;

    /** @brief COMP bus clock enable */
    using RCC_APB7ENR_COMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP bus clock disabled (value: 0)
     *          - B_0x1: COMP bus clock enabled (value: 1)
     */
        /** @brief COMP bus clock disabled */
    constexpr std::uint32_t RCC_APB7ENR_COMPEN_B_0x0 = 0;
        /** @brief COMP bus clock enabled */
    constexpr std::uint32_t RCC_APB7ENR_COMPEN_B_0x1 = 1;

    /** @brief VREFBUF bus clock enable */
    using RCC_APB7ENR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF bus clock disabled (value: 0)
     *          - B_0x1: VREFBUS bus clock enabled (value: 1)
     */
        /** @brief VREFBUF bus clock disabled */
    constexpr std::uint32_t RCC_APB7ENR_VREFEN_B_0x0 = 0;
        /** @brief VREFBUS bus clock enabled */
    constexpr std::uint32_t RCC_APB7ENR_VREFEN_B_0x1 = 1;

    /** @brief RTC and TAMP bus clock enable */
    using RCC_APB7ENR_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC bus clock disabled (value: 0)
     *          - B_0x1: RTC bus clock enabled (value: 1)
     */
        /** @brief RTC bus clock disabled */
    constexpr std::uint32_t RCC_APB7ENR_RTCAPBEN_B_0x0 = 0;
        /** @brief RTC bus clock enabled */
    constexpr std::uint32_t RCC_APB7ENR_RTCAPBEN_B_0x1 = 1;

    /** @brief RCC AHB1 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_AHB1SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 bus clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_GPDMA1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GPDMA1 bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GPDMA1 bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GPDMA1SMEN_B_0x0 = 0;
        /** @brief GPDMA1 bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GPDMA1SMEN_B_0x1 = 1;

    /** @brief FLASH bus clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_FLASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FLASH bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FLASH bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FLASHSMEN_B_0x0 = 0;
        /** @brief FLASH bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FLASHSMEN_B_0x1 = 1;

    /** @brief CRC bus clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_CRCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: CRC bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief CRC bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CRCSMEN_B_0x0 = 0;
        /** @brief CRC bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CRCSMEN_B_0x1 = 1;

    /** @brief TSC bus clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_TSCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TSC bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TSC bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_TSCSMEN_B_0x0 = 0;
        /** @brief TSC bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_TSCSMEN_B_0x1 = 1;

    /** @brief RAMCFG bus clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_RAMCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RAMCFG bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RAMCFG bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_RAMCFGSMEN_B_0x0 = 0;
        /** @brief RAMCFG bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_RAMCFGSMEN_B_0x1 = 1;

    /** @brief GTZC1 bus clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_GTZC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GTZC1 bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GTZC1 bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GTZC1SMEN_B_0x0 = 0;
        /** @brief GTZC1 bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GTZC1SMEN_B_0x1 = 1;

    /** @brief ICACHE bus clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_ICACHESMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ICACHE bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief ICACHE bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_ICACHESMEN_B_0x0 = 0;
        /** @brief ICACHE bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_ICACHESMEN_B_0x1 = 1;

    /** @brief SRAM1 bus clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_SRAM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM1 bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM1 bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_SRAM1SMEN_B_0x0 = 0;
        /** @brief SRAM1 bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_SRAM1SMEN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_AHB2SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO port A bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_GPIOASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port A bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port A bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port A bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOASMEN_B_0x0 = 0;
        /** @brief IO port A bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOASMEN_B_0x1 = 1;

    /** @brief IO port B bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_GPIOBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port B bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port B bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port B bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOBSMEN_B_0x0 = 0;
        /** @brief IO port B bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOBSMEN_B_0x1 = 1;

    /** @brief IO port C bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_GPIOCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port C bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port C bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port C bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOCSMEN_B_0x0 = 0;
        /** @brief IO port C bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOCSMEN_B_0x1 = 1;

    /** @brief IO port D bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_GPIODSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port D bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port D bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port D bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIODSMEN_B_0x0 = 0;
        /** @brief IO port D bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIODSMEN_B_0x1 = 1;

    /** @brief IO port E bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_GPIOESMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port E bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port E bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port E bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOESMEN_B_0x0 = 0;
        /** @brief IO port E bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOESMEN_B_0x1 = 1;

    /** @brief IO port G bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_GPIOGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port G bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port G bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port G bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOGSMEN_B_0x0 = 0;
        /** @brief IO port G bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOGSMEN_B_0x1 = 1;

    /** @brief IO port H bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_GPIOHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port H bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port H bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port H bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOHSMEN_B_0x0 = 0;
        /** @brief IO port H bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOHSMEN_B_0x1 = 1;

    /** @brief USB OTG_HS bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_OTGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB OTG_HS bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USB OTG_HS bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USB OTG_HS bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_OTGSMEN_B_0x0 = 0;
        /** @brief USB OTG_HS bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_OTGSMEN_B_0x1 = 1;

    /** @brief USB OTG_HS PHY kernel clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_OTGHSPHYSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB OTG_HS PHY kernel clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USB OTG_HS PHY kernel clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USB OTG_HS PHY kernel clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_OTGHSPHYSMEN_B_0x0 = 0;
        /** @brief USB OTG_HS PHY kernel clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_OTGHSPHYSMEN_B_0x1 = 1;

    /** @brief AES bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_AESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: AES bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief AES bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_AESSMEN_B_0x0 = 0;
        /** @brief AES bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_AESSMEN_B_0x1 = 1;

    /** @brief HASH bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_HASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: HASH bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief HASH bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_HASHSMEN_B_0x0 = 0;
        /** @brief HASH bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_HASHSMEN_B_0x1 = 1;

    /** @brief Random number generator (RNG) bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_RNGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RNG bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RNG bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_RNGSMEN_B_0x0 = 0;
        /** @brief RNG bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_RNGSMEN_B_0x1 = 1;

    /** @brief SAES accelerator bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_SAESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAES bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SAES bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_SAESSMEN_B_0x0 = 0;
        /** @brief SAES bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_SAESSMEN_B_0x1 = 1;

    /** @brief PKA bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_PKASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: PKA bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief PKA bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_PKASMEN_B_0x0 = 0;
        /** @brief PKA bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_PKASMEN_B_0x1 = 1;

    /** @brief SRAM2 bus clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR_SRAM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM2 bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM2 bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_SRAM2SMEN_B_0x0 = 0;
        /** @brief SRAM2 bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_SRAM2SMEN_B_0x1 = 1;

    /** @brief RCC AHB4 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_AHB4SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR bus clock enable during Sleep and Stop modes */
    using RCC_AHB4SMENR_PWRSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: PWR bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief PWR bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB4SMENR_PWRSMEN_B_0x0 = 0;
        /** @brief PWR bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB4SMENR_PWRSMEN_B_0x1 = 1;

    /** @brief ADC4 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_AHB4SMENR_ADC4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC4 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ADC4 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief ADC4 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB4SMENR_ADC4SMEN_B_0x0 = 0;
        /** @brief ADC4 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB4SMENR_ADC4SMEN_B_0x1 = 1;

    /** @brief RCC AHB5 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_AHB5SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2. */
    using RCC_AHB5SMENR_RADIOSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t RCC_AHB5SMENR_RADIOSMEN_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t RCC_AHB5SMENR_RADIOSMEN_B_0x1 = 1;

    /** @brief PTACONV bus clock enable during Sleep and Stop modes */
    using RCC_AHB5SMENR_PTACONVSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PTACONV bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: PTACONV bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief PTACONV bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB5SMENR_PTACONVSMEN_B_0x0 = 0;
        /** @brief PTACONV bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB5SMENR_PTACONVSMEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clocks enable in Sleep and Stop modes	register 1 */
    using RCC_APB1SMENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_TIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM2SMEN_B_0x0 = 0;
        /** @brief TIM2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM2SMEN_B_0x1 = 1;

    /** @brief TIM3 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_TIM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM3SMEN_B_0x0 = 0;
        /** @brief TIM3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM3SMEN_B_0x1 = 1;

    /** @brief TIM4 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_TIM4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM4 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM4 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM4SMEN_B_0x0 = 0;
        /** @brief TIM4 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM4SMEN_B_0x1 = 1;

    /** @brief Window watchdog bus clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_WWDGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG bus clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: WWDG bus clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief WWDG bus clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SMENR1_WWDGSMEN_B_0x0 = 0;
        /** @brief WWDG bus clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SMENR1_WWDGSMEN_B_0x1 = 1;

    /** @brief SPI2 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_SPI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_SPI2SMEN_B_0x0 = 0;
        /** @brief SPI2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_SPI2SMEN_B_0x1 = 1;

    /** @brief USART2 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_USART2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART2SMEN_B_0x0 = 0;
        /** @brief USART2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART2SMEN_B_0x1 = 1;

    /** @brief USART3 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_USART3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART3SMEN_B_0x0 = 0;
        /** @brief USART3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART3SMEN_B_0x1 = 1;

    /** @brief I2C1 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_I2C1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C1SMEN_B_0x0 = 0;
        /** @brief I2C1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C1SMEN_B_0x1 = 1;

    /** @brief I2C2 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_I2C2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C2SMEN_B_0x0 = 0;
        /** @brief I2C2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C2SMEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clocks enable in Sleep and Stop modes 	register 2 */
    using RCC_APB1SMENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR2_I2C4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C4 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C4 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C4SMEN_B_0x0 = 0;
        /** @brief I2C4 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C4SMEN_B_0x1 = 1;

    /** @brief LPTIM2 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB1SMENR2_LPTIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPTIM2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPTIM2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_LPTIM2SMEN_B_0x0 = 0;
        /** @brief LPTIM2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_LPTIM2SMEN_B_0x1 = 1;

    /** @brief RCC APB2 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_APB2SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB2SMENR_TIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM1SMEN_B_0x0 = 0;
        /** @brief TIM1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM1SMEN_B_0x1 = 1;

    /** @brief SPI1 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB2SMENR_SPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SPI1SMEN_B_0x0 = 0;
        /** @brief SPI1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SPI1SMEN_B_0x1 = 1;

    /** @brief USART1 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB2SMENR_USART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USART1SMEN_B_0x0 = 0;
        /** @brief USART1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USART1SMEN_B_0x1 = 1;

    /** @brief TIM16 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB2SMENR_TIM16SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM16 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM16 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM16SMEN_B_0x0 = 0;
        /** @brief TIM16 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM16SMEN_B_0x1 = 1;

    /** @brief TIM17 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB2SMENR_TIM17SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM17 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM17 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM17SMEN_B_0x0 = 0;
        /** @brief TIM17 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM17SMEN_B_0x1 = 1;

    /** @brief SAI1 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB2SMENR_SAI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAI1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SAI1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SAI1SMEN_B_0x0 = 0;
        /** @brief SAI1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SAI1SMEN_B_0x1 = 1;

    /** @brief RCC APB7 peripheral clock enable in Sleep and Stop modes register */
    using RCC_APB7SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG bus clock enable during Sleep and Stop modes */
    using RCC_APB7SMENR_SYSCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SYSCFG bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SYSCFG bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_SYSCFGSMEN_B_0x0 = 0;
        /** @brief SYSCFG bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_SYSCFGSMEN_B_0x1 = 1;

    /** @brief SPI3 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB7SMENR_SPI3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_SPI3SMEN_B_0x0 = 0;
        /** @brief SPI3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_SPI3SMEN_B_0x1 = 1;

    /** @brief LPUART1 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB7SMENR_LPUART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPUART1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPUART1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_LPUART1SMEN_B_0x0 = 0;
        /** @brief LPUART1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_LPUART1SMEN_B_0x1 = 1;

    /** @brief I2C3 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB7SMENR_I2C3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_I2C3SMEN_B_0x0 = 0;
        /** @brief I2C3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_I2C3SMEN_B_0x1 = 1;

    /** @brief LPTIM1 bus and kernel clocks enable during Sleep and Stop modes */
    using RCC_APB7SMENR_LPTIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPTIM1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPTIM1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_LPTIM1SMEN_B_0x0 = 0;
        /** @brief LPTIM1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_LPTIM1SMEN_B_0x1 = 1;

    /** @brief COMP bus clock enable during Sleep and Stop modes */
    using RCC_APB7SMENR_COMPSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: COMP bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief COMP bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_COMPSMEN_B_0x0 = 0;
        /** @brief COMP bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_COMPSMEN_B_0x1 = 1;

    /** @brief VREFBUF bus clock enable during Sleep and Stop modes */
    using RCC_APB7SMENR_VREFSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: VREFBUF bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief VREFBUF bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_VREFSMEN_B_0x0 = 0;
        /** @brief VREFBUF bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_VREFSMEN_B_0x1 = 1;

    /** @brief RTC and TAMP APB clock enable during Sleep and Stop modes */
    using RCC_APB7SMENR_RTCAPBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC and TAMP APB clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RTC and TAMP APB clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RTC and TAMP APB clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_RTCAPBSMEN_B_0x0 = 0;
        /** @brief RTC and TAMP APB clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_RTCAPBSMEN_B_0x1 = 1;

    /** @brief RCC peripherals independent clock configuration register 1 */
    using RCC_CCIPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 kernel clock source selection */
    using RCC_CCIPR1_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief pclk2 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x3 = 3;

    /** @brief USART2 kernel clock source selection */
    using RCC_CCIPR1_USART2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief pclk1 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x3 = 3;

    /** @brief USART3 kernel clock source selection */
    using RCC_CCIPR1_USART3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief pclk1 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x3 = 3;

    /** @brief I2C1 kernel clock source selection */
    using RCC_CCIPR1_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     */
        /** @brief pclk1 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C1SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C1SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C1SEL_B_0x2 = 2;

    /** @brief I2C2 kernel clock source selection */
    using RCC_CCIPR1_I2C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     */
        /** @brief pclk1 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C2SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C2SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C2SEL_B_0x2 = 2;

    /** @brief I2C4 kernel clock source selection */
    using RCC_CCIPR1_I2C4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     */
        /** @brief pclk1 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C4SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C4SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C4SEL_B_0x2 = 2;

    /** @brief SPI2 kernel clock source selection */
    using RCC_CCIPR1_SPI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     */
        /** @brief pclk1 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI2SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI2SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI2SEL_B_0x2 = 2;

    /** @brief Low-power timer 2 kernel clock source selection */
    using RCC_CCIPR1_LPTIM2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief pclk1 selected */
    constexpr std::uint32_t RCC_CCIPR1_LPTIM2SEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR1_LPTIM2SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_LPTIM2SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_LPTIM2SEL_B_0x3 = 3;

    /** @brief SPI1 kernel clock source selection */
    using RCC_CCIPR1_SPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     */
        /** @brief pclk2 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI1SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI1SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI1SEL_B_0x2 = 2;

    /** @brief SysTick clock source selection */
    using RCC_CCIPR1_SYSTICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk1 divided by 8 selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: LSE selected (value: 2)
     *          - B_0x3: HSI16 divided by 4 selected (value: 3)
     */
        /** @brief hclk1 divided by 8 selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x1 = 1;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x2 = 2;
        /** @brief HSI16 divided by 4 selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x3 = 3;

    /** @brief Clocks sources for TIM16,TIM17 and LPTIM2 internal input capture */
    using RCC_CCIPR1_TIMICSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 divider disabled (value: 0)
     *          - B_0x1: HSI16/256 generated and can be selected by TIM16, TIM17 and LPTIM2 as internal input capture (value: 1)
     */
        /** @brief HSI16 divider disabled */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x0 = 0;
        /** @brief HSI16/256 generated and can be selected by TIM16, TIM17 and LPTIM2 as internal input capture */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x1 = 1;

    /** @brief RCC peripherals independent clock configuration register 2 */
    using RCC_CCIPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1 kernel clock source selection */
    using RCC_CCIPR2_SAI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1pclk selected (value: 0)
     *          - B_0x1: pll1qclk selected (value: 1)
     *          - B_0x2: SYSCLK selected (value: 2)
     *          - B_0x3: input pin AUDIOCLK selected (value: 3)
     *          - B_0x4: HSI16 clock selected (value: 4)
     */
        /** @brief pll1pclk selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x0 = 0;
        /** @brief pll1qclk selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x1 = 1;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x2 = 2;
        /** @brief input pin AUDIOCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x3 = 3;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x4 = 4;

    /** @brief RNGSEL kernel clock source selection */
    using RCC_CCIPR2_RNGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: pll1qclk divide by 2 selected (value: 3)
     */
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR2_RNGSEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR2_RNGSEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR2_RNGSEL_B_0x2 = 2;
        /** @brief pll1qclk divide by 2 selected */
    constexpr std::uint32_t RCC_CCIPR2_RNGSEL_B_0x3 = 3;

    /** @brief USB OTG_HS PHY kernel clock source selection */
    using RCC_CCIPR2_OTGHSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 selected (value: 0)
     *          - B_0x1: pll1pclk selected, (value: 1)
     *          - B_0x2: HSE32 divided by 2 selected (value: 2)
     *          - B_0x3: pll1pclk divided by 2 selected (value: 3)
     */
        /** @brief HSE32 selected */
    constexpr std::uint32_t RCC_CCIPR2_OTGHSSEL_B_0x0 = 0;
        /** @brief pll1pclk selected, */
    constexpr std::uint32_t RCC_CCIPR2_OTGHSSEL_B_0x1 = 1;
        /** @brief HSE32 divided by 2 selected */
    constexpr std::uint32_t RCC_CCIPR2_OTGHSSEL_B_0x2 = 2;
        /** @brief pll1pclk divided by 2 selected */
    constexpr std::uint32_t RCC_CCIPR2_OTGHSSEL_B_0x3 = 3;

    /** @brief RCC audio synchronization kernel clock source selection */
    using RCC_CCIPR2_ASSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1pclk selected (value: 0)
     *          - B_0x1: pll1qclk selected (value: 1)
     */
        /** @brief pll1pclk selected */
    constexpr std::uint32_t RCC_CCIPR2_ASSEL_B_0x0 = 0;
        /** @brief pll1qclk selected */
    constexpr std::uint32_t RCC_CCIPR2_ASSEL_B_0x1 = 1;

    /** @brief RCC peripherals independent clock configuration register 3 */
    using RCC_CCIPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 kernel clock source selection */
    using RCC_CCIPR3_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk7 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief pclk7 selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x3 = 3;

    /** @brief SPI3 kernel clock source selection */
    using RCC_CCIPR3_SPI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk7 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     */
        /** @brief pclk7 selected */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x2 = 2;

    /** @brief I2C3 kernel clock source selection */
    using RCC_CCIPR3_I2C3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk7 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     */
        /** @brief pclk7 selected */
    constexpr std::uint32_t RCC_CCIPR3_I2C3SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_I2C3SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR3_I2C3SEL_B_0x2 = 2;

    /** @brief LPTIM1 kernel clock source selection */
    using RCC_CCIPR3_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk7 selected. (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief pclk7 selected. */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM1SEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM1SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM1SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM1SEL_B_0x3 = 3;

    /** @brief ADC4 kernel clock source selection */
    using RCC_CCIPR3_ADCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk1 clock selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: pll1pclk selected (value: 2)
     *          - B_0x3: HSE32 clock selected (value: 3)
     *          - B_0x4: HSI16 clock selected (value: 4)
     */
        /** @brief hclk1 clock selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCSEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCSEL_B_0x1 = 1;
        /** @brief pll1pclk selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCSEL_B_0x2 = 2;
        /** @brief HSE32 clock selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCSEL_B_0x3 = 3;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCSEL_B_0x4 = 4;

    /** @brief RCC Backup domain control register */
    using RCC_BDCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable */
    using RCC_BDCR1_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator off (value: 0)
     *          - B_0x1: LSE oscillator on (value: 1)
     */
        /** @brief LSE oscillator off */
    constexpr std::uint32_t RCC_BDCR1_LSEON_B_0x0 = 0;
        /** @brief LSE oscillator on */
    constexpr std::uint32_t RCC_BDCR1_LSEON_B_0x1 = 1;

    /** @brief LSE oscillator ready */
    using RCC_BDCR1_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not ready (value: 0)
     *          - B_0x1: LSE oscillator ready (value: 1)
     */
        /** @brief LSE oscillator not ready */
    constexpr std::uint32_t RCC_BDCR1_LSERDY_B_0x0 = 0;
        /** @brief LSE oscillator ready */
    constexpr std::uint32_t RCC_BDCR1_LSERDY_B_0x1 = 1;

    /** @brief LSE oscillator bypass */
    using RCC_BDCR1_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator Xtal' mode (value: 0)
     *          - B_0x1: LSE oscillator bypassed (value: 1)
     */
        /** @brief LSE oscillator Xtal' mode */
    constexpr std::uint32_t RCC_BDCR1_LSEBYP_B_0x0 = 0;
        /** @brief LSE oscillator bypassed */
    constexpr std::uint32_t RCC_BDCR1_LSEBYP_B_0x1 = 1;

    /** @brief LSE oscillator drive capability */
    using RCC_BDCR1_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Xtal mode' medium-low driving capability (value: 1)
     *          - B_0x2: Xtal mode' medium-high driving capability (value: 2)
     *          - B_0x3: Xtal mode' higher driving capability (value: 3)
     */
        /** @brief Xtal mode' medium-low driving capability */
    constexpr std::uint32_t RCC_BDCR1_LSEDRV_B_0x1 = 1;
        /** @brief Xtal mode' medium-high driving capability */
    constexpr std::uint32_t RCC_BDCR1_LSEDRV_B_0x2 = 2;
        /** @brief Xtal mode' higher driving capability */
    constexpr std::uint32_t RCC_BDCR1_LSEDRV_B_0x3 = 3;

    /** @brief Low speed external clock security enable */
    using RCC_BDCR1_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSECSS disabled off (value: 0)
     *          - B_0x1: LSECSS enabled on (value: 1)
     */
        /** @brief LSECSS disabled off */
    constexpr std::uint32_t RCC_BDCR1_LSECSSON_B_0x0 = 0;
        /** @brief LSECSS enabled on */
    constexpr std::uint32_t RCC_BDCR1_LSECSSON_B_0x1 = 1;

    /** @brief Low speed external clock security, LSE failure Detection */
    using RCC_BDCR1_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no failure detected on LSE (value: 0)
     *          - B_0x1: failure detected on LSE (value: 1)
     */
        /** @brief no failure detected on LSE */
    constexpr std::uint32_t RCC_BDCR1_LSECSSD_B_0x0 = 0;
        /** @brief failure detected on LSE */
    constexpr std::uint32_t RCC_BDCR1_LSECSSD_B_0x1 = 1;

    /** @brief LSE system clock (LSESYS) enable */
    using RCC_BDCR1_LSESYSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSESYS clock disabled (value: 0)
     *          - B_0x1: LSESYS clock enabled (value: 1)
     */
        /** @brief LSESYS clock disabled */
    constexpr std::uint32_t RCC_BDCR1_LSESYSEN_B_0x0 = 0;
        /** @brief LSESYS clock enabled */
    constexpr std::uint32_t RCC_BDCR1_LSESYSEN_B_0x1 = 1;

    /** @brief RTC and TAMP kernel clock source enable and selection */
    using RCC_BDCR1_RTCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock selected, RTC and TAMP kernel clock disabled (value: 0)
     *          - B_0x1: LSE oscillator clock selected, and enabled (value: 1)
     *          - B_0x2: LSI oscillator clock selected, and enabled (value: 2)
     *          - B_0x3: HSE32 oscillator clock divided by 32 selected, and enabled (value: 3)
     */
        /** @brief no clock selected, RTC and TAMP kernel clock disabled */
    constexpr std::uint32_t RCC_BDCR1_RTCSEL_B_0x0 = 0;
        /** @brief LSE oscillator clock selected, and enabled */
    constexpr std::uint32_t RCC_BDCR1_RTCSEL_B_0x1 = 1;
        /** @brief LSI oscillator clock selected, and enabled */
    constexpr std::uint32_t RCC_BDCR1_RTCSEL_B_0x2 = 2;
        /** @brief HSE32 oscillator clock divided by 32 selected, and enabled */
    constexpr std::uint32_t RCC_BDCR1_RTCSEL_B_0x3 = 3;

    /** @brief LSE system clock (LSESYS) ready */
    using RCC_BDCR1_LSESYSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSESYS clock not ready (value: 0)
     *          - B_0x1: LSESYS clock ready (value: 1)
     */
        /** @brief LSESYS clock not ready */
    constexpr std::uint32_t RCC_BDCR1_LSESYSRDY_B_0x0 = 0;
        /** @brief LSESYS clock ready */
    constexpr std::uint32_t RCC_BDCR1_LSESYSRDY_B_0x1 = 1;

    /** @brief LSE clock glitch filter enable */
    using RCC_BDCR1_LSEGFON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE glitch filter disabled (value: 0)
     *          - B_0x1: LSE glitch filter enabled (value: 1)
     */
        /** @brief LSE glitch filter disabled */
    constexpr std::uint32_t RCC_BDCR1_LSEGFON_B_0x0 = 0;
        /** @brief LSE glitch filter enabled */
    constexpr std::uint32_t RCC_BDCR1_LSEGFON_B_0x1 = 1;

    /** @brief LSE trimming */
    using RCC_BDCR1_LSETRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: current source resistance 5/4 x R (value: 0)
     *          - B_0x1: current source resistance R (value: 1)
     *          - B_0x2: current source resistance 3/4 x R (value: 2)
     *          - B_0x3: current source resistance 2/3 x R (value: 3)
     */
        /** @brief current source resistance 5/4 x R */
    constexpr std::uint32_t RCC_BDCR1_LSETRIM_B_0x0 = 0;
        /** @brief current source resistance R */
    constexpr std::uint32_t RCC_BDCR1_LSETRIM_B_0x1 = 1;
        /** @brief current source resistance 3/4 x R */
    constexpr std::uint32_t RCC_BDCR1_LSETRIM_B_0x2 = 2;
        /** @brief current source resistance 2/3 x R */
    constexpr std::uint32_t RCC_BDCR1_LSETRIM_B_0x3 = 3;

    /** @brief Backup domain software reset */
    using RCC_BDCR1_BDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset not activated (value: 0)
     *          - B_0x1: Reset the entire Backup domain when the protection is disabled (value: 1)
     */
        /** @brief Reset not activated */
    constexpr std::uint32_t RCC_BDCR1_BDRST_B_0x0 = 0;
        /** @brief Reset the entire Backup domain when the protection is disabled */
    constexpr std::uint32_t RCC_BDCR1_BDRST_B_0x1 = 1;

    /** @brief 2. */
    using RCC_BDCR1_RADIOSTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock selected, 2. (value: 0)
     *          - B_0x1: LSE oscillator clock selected (value: 1)
     *          - B_0x2: LSI oscillator clock selected (value: 2)
     *          - B_0x3: HSE32 oscillator clock divided by 1000 selected (value: 3)
     */
        /** @brief no clock selected, 2. */
    constexpr std::uint32_t RCC_BDCR1_RADIOSTSEL_B_0x0 = 0;
        /** @brief LSE oscillator clock selected */
    constexpr std::uint32_t RCC_BDCR1_RADIOSTSEL_B_0x1 = 1;
        /** @brief LSI oscillator clock selected */
    constexpr std::uint32_t RCC_BDCR1_RADIOSTSEL_B_0x2 = 2;
        /** @brief HSE32 oscillator clock divided by 1000 selected */
    constexpr std::uint32_t RCC_BDCR1_RADIOSTSEL_B_0x3 = 3;

    /** @brief Low-speed clock output (LSCO) enable */
    using RCC_BDCR1_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSCO disabled (value: 0)
     *          - B_0x1: LSCO enabled (value: 1)
     */
        /** @brief LSCO disabled */
    constexpr std::uint32_t RCC_BDCR1_LSCOEN_B_0x0 = 0;
        /** @brief LSCO enabled */
    constexpr std::uint32_t RCC_BDCR1_LSCOEN_B_0x1 = 1;

    /** @brief Low-speed clock output selection */
    using RCC_BDCR1_LSCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI clock selected (value: 0)
     *          - B_0x1: LSE clock selected (value: 1)
     */
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_BDCR1_LSCOSEL_B_0x0 = 0;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_BDCR1_LSCOSEL_B_0x1 = 1;

    /** @brief LSI1 oscillator enable */
    using RCC_BDCR1_LSI1ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI1 oscillator off (value: 0)
     *          - B_0x1: LSI1 oscillator on (value: 1)
     */
        /** @brief LSI1 oscillator off */
    constexpr std::uint32_t RCC_BDCR1_LSI1ON_B_0x0 = 0;
        /** @brief LSI1 oscillator on */
    constexpr std::uint32_t RCC_BDCR1_LSI1ON_B_0x1 = 1;

    /** @brief LSI1 oscillator ready */
    using RCC_BDCR1_LSI1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI1 oscillator not ready (value: 0)
     *          - B_0x1: LSI1 oscillator ready (value: 1)
     */
        /** @brief LSI1 oscillator not ready */
    constexpr std::uint32_t RCC_BDCR1_LSI1RDY_B_0x0 = 0;
        /** @brief LSI1 oscillator ready */
    constexpr std::uint32_t RCC_BDCR1_LSI1RDY_B_0x1 = 1;

    /** @brief LSI1 Low-speed clock divider configuration */
    using RCC_BDCR1_LSI1PREDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI1 not divided (value: 0)
     *          - B_0x1: LSI1 divided by 128 (value: 1)
     */
        /** @brief LSI1 not divided */
    constexpr std::uint32_t RCC_BDCR1_LSI1PREDIV_B_0x0 = 0;
        /** @brief LSI1 divided by 128 */
    constexpr std::uint32_t RCC_BDCR1_LSI1PREDIV_B_0x1 = 1;

    /** @brief LSI2 oscillator enable */
    using RCC_BDCR1_LSI2ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI2 oscillator off (value: 0)
     *          - B_0x1: LSI2 oscillator on (value: 1)
     */
        /** @brief LSI2 oscillator off */
    constexpr std::uint32_t RCC_BDCR1_LSI2ON_B_0x0 = 0;
        /** @brief LSI2 oscillator on */
    constexpr std::uint32_t RCC_BDCR1_LSI2ON_B_0x1 = 1;

    /** @brief LSI2 oscillator ready */
    using RCC_BDCR1_LSI2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI2 oscillator not ready (value: 0)
     *          - B_0x1: LSI2 oscillator ready (value: 1)
     */
        /** @brief LSI2 oscillator not ready */
    constexpr std::uint32_t RCC_BDCR1_LSI2RDY_B_0x0 = 0;
        /** @brief LSI2 oscillator ready */
    constexpr std::uint32_t RCC_BDCR1_LSI2RDY_B_0x1 = 1;

    /** @brief RCC control/status register */
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remove reset flag */
    using RCC_CSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear the reset flags (once set by software bit is cleared automatically by hardware) (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x0 = 0;
        /** @brief Clear the reset flags (once set by software bit is cleared automatically by hardware) */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x1 = 1;

    /** @brief Option byte loader reset flag */
    using RCC_CSR_OBLRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from option byte loading occurred (value: 0)
     *          - B_0x1: Reset from option byte loading occurred (value: 1)
     */
        /** @brief No reset from option byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x0 = 0;
        /** @brief Reset from option byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x1 = 1;

    /** @brief NRST pin reset flag */
    using RCC_CSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from NRST pin occurred (value: 0)
     *          - B_0x1: Reset from NRST pin occurred (value: 1)
     */
        /** @brief No reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x0 = 0;
        /** @brief Reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x1 = 1;

    /** @brief BOR flag */
    using RCC_CSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no BOR occurred (value: 0)
     *          - B_0x1: BOR occurred (value: 1)
     */
        /** @brief no BOR occurred */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR occurred */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x1 = 1;

    /** @brief Software reset flag */
    using RCC_CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software reset occurred (value: 0)
     *          - B_0x1: software reset occurred (value: 1)
     */
        /** @brief no software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x0 = 0;
        /** @brief software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x1 = 1;

    /** @brief Independent watchdog reset flag */
    using RCC_CSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no independent watchdog reset occurred (value: 0)
     *          - B_0x1: independent watchdog reset occurred (value: 1)
     */
        /** @brief no independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x0 = 0;
        /** @brief independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x1 = 1;

    /** @brief Window watchdog reset flag */
    using RCC_CSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no window watchdog reset occurred (value: 0)
     *          - B_0x1: window watchdog reset occurred (value: 1)
     */
        /** @brief no window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x0 = 0;
        /** @brief window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Low-power reset flag */
    using RCC_CSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no illegal mode reset occurred (value: 0)
     *          - B_0x1: illegal mode reset occurred (value: 1)
     */
        /** @brief no illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x0 = 0;
        /** @brief illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC Backup domain control register */
    using RCC_BDCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI2 oscillator operating mode configuration */
    using RCC_BDCR2_LSI2MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: nominal-power, high accuracy (value: 0)
     *          - B_0x1: low-power, medium accuracy (value: 1)
     *          - B_0x2: ultra-low-power, low accuracy (value: 2)
     */
        /** @brief nominal-power, high accuracy */
    constexpr std::uint32_t RCC_BDCR2_LSI2MODE_B_0x0 = 0;
        /** @brief low-power, medium accuracy */
    constexpr std::uint32_t RCC_BDCR2_LSI2MODE_B_0x1 = 1;
        /** @brief ultra-low-power, low accuracy */
    constexpr std::uint32_t RCC_BDCR2_LSI2MODE_B_0x2 = 2;

    /** @brief LSI2 oscillator configuration */
    using RCC_BDCR2_LSI2CFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI2 frequency temperature sensitivity is close to 0 at +80 less thansup oless than/sup C (value: 0)
     *          - B_0x1: LSI2 frequency temperature sensitivity is close to 0 at +50 less thansup oless than/sup C (value: 1)
     *          - B_0x2: LSI2 frequency temperature sensitivity is close to 0 at +20 less thansup oless than/sup C (value: 2)
     */
        /** @brief LSI2 frequency temperature sensitivity is close to 0 at +80 less thansup oless than/sup C */
    constexpr std::uint32_t RCC_BDCR2_LSI2CFG_B_0x0 = 0;
        /** @brief LSI2 frequency temperature sensitivity is close to 0 at +50 less thansup oless than/sup C */
    constexpr std::uint32_t RCC_BDCR2_LSI2CFG_B_0x1 = 1;
        /** @brief LSI2 frequency temperature sensitivity is close to 0 at +20 less thansup oless than/sup C */
    constexpr std::uint32_t RCC_BDCR2_LSI2CFG_B_0x2 = 2;

    /** @brief RCC secure configuration register */
    using RCC_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock configuration and status bits security */
    using RCC_SECCFGR_HSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x1 = 1;

    /** @brief HSE32 clock configuration bits, status bits and HSECSS security */
    using RCC_SECCFGR_HSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x1 = 1;

    /** @brief LSI clock configuration and status bits security */
    using RCC_SECCFGR_LSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x1 = 1;

    /** @brief LSE clock configuration and status bits security */
    using RCC_SECCFGR_LSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_LSESEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_LSESEC_B_0x1 = 1;

    /** @brief SYSCLK selection, clock output on MCO configuration security */
    using RCC_SECCFGR_SYSCLKSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_SYSCLKSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_SYSCLKSEC_B_0x1 = 1;

    /** @brief AHBx/APBx prescaler configuration bits security */
    using RCC_SECCFGR_PRESCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_PRESCSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_PRESCSEC_B_0x1 = 1;

    /** @brief PLL1 clock configuration and status bits security */
    using RCC_SECCFGR_PLL1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL1SEC_B_0x1 = 1;

    /** @brief Remove reset flag security */
    using RCC_SECCFGR_RMVFSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_RMVFSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_RMVFSEC_B_0x1 = 1;

    /** @brief RCC privilege configuration register */
    using RCC_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC secure functions privilege configuration */
    using RCC_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to RCC secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to RCC secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to RCC secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t RCC_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to RCC secure functions can be done by privileged access only. */
    constexpr std::uint32_t RCC_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief RCC non-secure functions privilege configuration */
    using RCC_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to RCC non-secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to RCC non-secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to RCC non-secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to RCC non-secure functions can be done by privileged access only. */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x1 = 1;

    /** @brief RCC audio synchronization control register */
    using RCC_ASCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter enable */
    using RCC_ASCR_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Audio synchronization counter and kernel clock disabled (value: 0)
     *          - B_0x1: Audio synchronization counter and kernel clock enabled (value: 1)
     */
        /** @brief Audio synchronization counter and kernel clock disabled */
    constexpr std::uint32_t RCC_ASCR_CEN_B_0x0 = 0;
        /** @brief Audio synchronization counter and kernel clock enabled */
    constexpr std::uint32_t RCC_ASCR_CEN_B_0x1 = 1;

    /** @brief Clock prescaler */
    using RCC_ASCR_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture prescaler */
    using RCC_ASCR_CPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC audio synchronization interrupt enable register */
    using RCC_ASIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture trigger interrupt enable */
    using RCC_ASIER_CAIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture trigger interrupt disabled and flag masked (value: 0)
     *          - B_0x1: Capture trigger interrupt and flag enabled (value: 1)
     */
        /** @brief Capture trigger interrupt disabled and flag masked */
    constexpr std::uint32_t RCC_ASIER_CAIE_B_0x0 = 0;
        /** @brief Capture trigger interrupt and flag enabled */
    constexpr std::uint32_t RCC_ASIER_CAIE_B_0x1 = 1;

    /** @brief Comparer interrupt enable */
    using RCC_ASIER_COIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Compare interrupt disabled and flag masked (value: 0)
     *          - B_0x1: Compare interrupt and flag enabled (value: 1)
     */
        /** @brief Compare interrupt disabled and flag masked */
    constexpr std::uint32_t RCC_ASIER_COIE_B_0x0 = 0;
        /** @brief Compare interrupt and flag enabled */
    constexpr std::uint32_t RCC_ASIER_COIE_B_0x1 = 1;

    /** @brief Capture error interrupt enable */
    using RCC_ASIER_CAEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture error interrupt disabled and flag masked (value: 0)
     *          - B_0x1: Capture error interrupt and flag enabled (value: 1)
     */
        /** @brief Capture error interrupt disabled and flag masked */
    constexpr std::uint32_t RCC_ASIER_CAEIE_B_0x0 = 0;
        /** @brief Capture error interrupt and flag enabled */
    constexpr std::uint32_t RCC_ASIER_CAEIE_B_0x1 = 1;

    /** @brief RCC audio synchronization status register */
    using RCC_ASSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture trigger interrupt flag */
    using RCC_ASSR_CAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture update occurred (value: 0)
     *          - B_0x1: A capture update has occurred (value: 1)
     */
        /** @brief No capture update occurred */
    constexpr std::uint32_t RCC_ASSR_CAF_B_0x0 = 0;
        /** @brief A capture update has occurred */
    constexpr std::uint32_t RCC_ASSR_CAF_B_0x1 = 1;

    /** @brief Comparer interrupt flag */
    using RCC_ASSR_COF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No counter compare occurred (value: 0)
     *          - B_0x1: A counter compare has occurred (value: 1)
     */
        /** @brief No counter compare occurred */
    constexpr std::uint32_t RCC_ASSR_COF_B_0x0 = 0;
        /** @brief A counter compare has occurred */
    constexpr std::uint32_t RCC_ASSR_COF_B_0x1 = 1;

    /** @brief Capture error interrupt flag */
    using RCC_ASSR_CAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture error has been detected (value: 0)
     *          - B_0x1: A capture error has been detected (value: 1)
     */
        /** @brief No capture error has been detected */
    constexpr std::uint32_t RCC_ASSR_CAEF_B_0x0 = 0;
        /** @brief A capture error has been detected */
    constexpr std::uint32_t RCC_ASSR_CAEF_B_0x1 = 1;

    /** @brief RCC audio synchronization counter register */
    using RCC_ASCNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using RCC_ASCNTR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC audio synchronization auto-reload register */
    using RCC_ASARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto-reload value */
    using RCC_ASARR_AR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC audio synchronization capture register */
    using RCC_ASCAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture value */
    using RCC_ASCAR_CA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC audio synchronization compare register */
    using RCC_ASCOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare value */
    using RCC_ASCOR_CO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock configuration register 2 */
    using RCC_CFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB5 prescaler when SWS select PLL1 */
    using RCC_CFGR4_HPRE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: hclk5 = SYSCLK divided by 2 (value: 4)
     *          - B_0x5: hclk5 = SYSCLK divided by 3 (value: 5)
     *          - B_0x6: hclk5 = SYSCLK divided by 4 (value: 6)
     *          - B_0x7: hclk5 = SYSCLK divided by 6 (value: 7)
     */
        /** @brief hclk5 = SYSCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR4_HPRE5_B_0x4 = 4;
        /** @brief hclk5 = SYSCLK divided by 3 */
    constexpr std::uint32_t RCC_CFGR4_HPRE5_B_0x5 = 5;
        /** @brief hclk5 = SYSCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR4_HPRE5_B_0x6 = 6;
        /** @brief hclk5 = SYSCLK divided by 6 */
    constexpr std::uint32_t RCC_CFGR4_HPRE5_B_0x7 = 7;

    /** @brief AHB5 divider when SWS select HSI16 or HSE32 */
    using RCC_CFGR4_HDIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 = SYSCLK not divided (value: 0)
     *          - B_0x1: hclk5 = SYSCLK divided by 2 (value: 1)
     */
        /** @brief hclk5 = SYSCLK not divided */
    constexpr std::uint32_t RCC_CFGR4_HDIV5_B_0x0 = 0;
        /** @brief hclk5 = SYSCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR4_HDIV5_B_0x1 = 1;

    /** @brief RCC RADIO peripheral clock enable register */
    using RCC_RADIOENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2. */
    using RCC_RADIOENR_BBCLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t RCC_RADIOENR_BBCLKEN_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t RCC_RADIOENR_BBCLKEN_B_0x1 = 1;

    /** @brief 2. */
    using RCC_RADIOENR_STRADIOCLKON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t RCC_RADIOENR_STRADIOCLKON_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t RCC_RADIOENR_STRADIOCLKON_B_0x1 = 1;

    /** @brief 2. */
    using RCC_RADIOENR_RADIOCLKRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t RCC_RADIOENR_RADIOCLKRDY_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t RCC_RADIOENR_RADIOCLKRDY_B_0x1 = 1;

    /** @brief RCC external clock sources calibration register 1 */
    using RCC_ECSCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE32 clock trimming */
    using RCC_ECSCR1_HSETRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
