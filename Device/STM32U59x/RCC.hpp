/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U59X_RCC_HPP
#define EMBEDDED_PP_STM32U59X_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Reset and clock control */
namespace STM32U59x::RCC {

    /** @brief Clock control register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIS clock enable */
    using CR_MSISON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI enable for some peripheral kernels */
    using CR_MSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIS clock ready flag */
    using CR_MSISRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock PLL-mode enable */
    using CR_MSIPLLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK clock enable */
    using CR_MSIKON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK clock ready flag */
    using CR_MSIKRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock with PLL mode selection */
    using CR_MSIPLLSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI PLL mode fast startup */
    using CR_MSIPLLFAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock enable */
    using CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 enable for some peripheral kernels */
    using CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock ready flag */
    using CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 clock enable */
    using CR_HSI48ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 clock ready flag */
    using CR_HSI48RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHSI clock enable */
    using CR_SHSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHSI clock ready flag */
    using CR_SHSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE clock enable */
    using CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE clock ready flag */
    using CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE crystal oscillator bypass */
    using CR_HSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock security system enable */
    using CR_CSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM3 page 5 (64 Kbytes) power-down in Stop modes */
    using CR_HSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 enable */
    using CR_PLL1ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 clock ready flag */
    using CR_PLL1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 enable */
    using CR_PLL2ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 clock ready flag */
    using CR_PLL2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 enable */
    using CR_PLL3ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 clock ready flag */
    using CR_PLL3RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal clock sources calibration register 1 */
    using ICSCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC3 clock calibration */
    using ICSCR1_MSICAL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC2 clock calibration */
    using ICSCR1_MSICAL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC1 clock calibration */
    using ICSCR1_MSICAL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock calibration */
    using ICSCR1_MSICAL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI bias mode selection */
    using ICSCR1_MSIBIAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock range selection */
    using ICSCR1_MSIRGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK clock ranges */
    using ICSCR1_MSIKRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIS clock ranges */
    using ICSCR1_MSISRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal clock sources calibration register 2 */
    using ICSCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC3 clock calibration */
    using ICSCR2_MSITRIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC2 clock calibration */
    using ICSCR2_MSITRIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC1 clock calibration */
    using ICSCR2_MSITRIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock calibration */
    using ICSCR2_MSITRIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal clock sources calibration register 3 */
    using ICSCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock calibration */
    using ICSCR3_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock trimming */
    using ICSCR3_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock recovery RC register */
    using CRRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 clock calibration */
    using CRRCR_HSI48CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock configuration register 1 */
    using CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock switch */
    using CFGR1_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock switch status */
    using CFGR1_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief wakeup from Stop and CSS backup clock selection */
    using CFGR1_STOPWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief wakeup from Stop kernel clock automatic enable selection */
    using CFGR1_STOPKERWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief microcontroller clock output */
    using CFGR1_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief microcontroller clock output prescaler */
    using CFGR1_MCOPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock configuration register 2 */
    using CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB prescaler */
    using CFGR2_HPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 prescaler */
    using CFGR2_PPRE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2 prescaler */
    using CFGR2_PPRE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock configuration register 3 */
    using CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB3 prescaler */
    using CFGR3_PPRE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 configuration register */
    using PLL1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 entry clock source */
    using PLL1CFGR_PLL1SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 input frequency range */
    using PLL1CFGR_PLL1RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 fractional latch enable */
    using PLL1CFGR_PLL1FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler for PLL1 */
    using PLL1CFGR_PLL1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler for EPOD booster input clock */
    using PLL1CFGR_PLL1MBOOST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 DIVP divider output enable */
    using PLL1CFGR_PLL1PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 DIVQ divider output enable */
    using PLL1CFGR_PLL1QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 DIVR divider output enable */
    using PLL1CFGR_PLL1REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 configuration register */
    using PLL2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 entry clock source */
    using PLL2CFGR_PLL2SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 input frequency range */
    using PLL2CFGR_PLL2RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 fractional latch enable */
    using PLL2CFGR_PLL2FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler for PLL2 */
    using PLL2CFGR_PLL2M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 DIVP divider output enable */
    using PLL2CFGR_PLL2PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 DIVQ divider output enable */
    using PLL2CFGR_PLL2QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 DIVR divider output enable */
    using PLL2CFGR_PLL2REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 configuration register */
    using PLL3CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 entry clock source */
    using PLL3CFGR_PLL3SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 input frequency range */
    using PLL3CFGR_PLL3RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 fractional latch enable */
    using PLL3CFGR_PLL3FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler for PLL3 */
    using PLL3CFGR_PLL3M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 DIVP divider output enable */
    using PLL3CFGR_PLL3PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 DIVQ divider output enable */
    using PLL3CFGR_PLL3QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 DIVR divider output enable */
    using PLL3CFGR_PLL3REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 dividers register */
    using PLL1DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL1 VCO */
    using PLL1DIVR_PLL1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 DIVP division factor */
    using PLL1DIVR_PLL1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 DIVQ division factor */
    using PLL1DIVR_PLL1Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 DIVR division factor */
    using PLL1DIVR_PLL1R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 fractional divider register */
    using PLL1FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fractional part of the multiplication factor for PLL1 VCO */
    using PLL1FRACR_PLL1FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 dividers register */
    using PLL2DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL2 VCO */
    using PLL2DIVR_PLL2N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 DIVP division factor */
    using PLL2DIVR_PLL2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 DIVQ division factor */
    using PLL2DIVR_PLL2Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 DIVR division factor */
    using PLL2DIVR_PLL2R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 fractional divider register */
    using PLL2FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fractional part of the multiplication factor for PLL2 VCO */
    using PLL2FRACR_PLL2FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 dividers register */
    using PLL3DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL3 VCO */
    using PLL3DIVR_PLL3N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 DIVP division factor */
    using PLL3DIVR_PLL3P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 DIVQ division factor */
    using PLL3DIVR_PLL3Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 DIVR division factor */
    using PLL3DIVR_PLL3R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 fractional divider register */
    using PLL3FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fractional part of the multiplication factor for PLL3 VCO */
    using PLL3FRACR_PLL3FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock interrupt enable register */
    using CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt enable */
    using CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE ready interrupt enable */
    using CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIS ready interrupt enable */
    using CIER_MSISRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 ready interrupt enable */
    using CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE ready interrupt enable */
    using CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 ready interrupt enable */
    using CIER_HSI48RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL ready interrupt enable */
    using CIER_PLL1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 ready interrupt enable */
    using CIER_PLL2RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 ready interrupt enable */
    using CIER_PLL3RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK ready interrupt enable */
    using CIER_MSIKRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHSI ready interrupt enable */
    using CIER_SHSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock interrupt flag register */
    using CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt flag */
    using CIFR_LSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE ready interrupt flag */
    using CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIS ready interrupt flag */
    using CIFR_MSISRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 ready interrupt flag */
    using CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE ready interrupt flag */
    using CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 ready interrupt flag */
    using CIFR_HSI48RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 ready interrupt flag */
    using CIFR_PLL1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 ready interrupt flag */
    using CIFR_PLL2RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 ready interrupt flag */
    using CIFR_PLL3RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock security system interrupt flag */
    using CIFR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK ready interrupt flag */
    using CIFR_MSIKRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHSI ready interrupt flag */
    using CIFR_SHSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock interrupt clear register */
    using CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt clear */
    using CICR_LSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE ready interrupt clear */
    using CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIS ready interrupt clear */
    using CICR_MSISRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 ready interrupt clear */
    using CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE ready interrupt clear */
    using CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 ready interrupt clear */
    using CICR_HSI48RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 ready interrupt clear */
    using CICR_PLL1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 ready interrupt clear */
    using CICR_PLL2RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 ready interrupt clear */
    using CICR_PLL3RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock security system interrupt clear */
    using CICR_CSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK ready interrupt clear */
    using CICR_MSIKRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHSI ready interrupt clear */
    using CICR_SHSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1 peripheral reset register */
    using AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 reset Set and cleared by software. */
    using AHB1RSTR_GPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset GPDMA1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_GPDMA1RST_B_0x0 = 0;
        /** @brief Reset GPDMA1 */
    constexpr std::uint32_t AHB1RSTR_GPDMA1RST_B_0x1 = 1;

    /** @brief CORDIC reset Set and cleared by software. */
    using AHB1RSTR_CORDICRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CORDIC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_CORDICRST_B_0x0 = 0;
        /** @brief Reset CORDIC */
    constexpr std::uint32_t AHB1RSTR_CORDICRST_B_0x1 = 1;

    /** @brief FMAC reset Set and cleared by software. */
    using AHB1RSTR_FMACRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset FMAC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_FMACRST_B_0x0 = 0;
        /** @brief Reset FMAC */
    constexpr std::uint32_t AHB1RSTR_FMACRST_B_0x1 = 1;

    /** @brief MDF1 reset Set and cleared by software. */
    using AHB1RSTR_MDF1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset MDF1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_MDF1RST_B_0x0 = 0;
        /** @brief Reset MDF1 */
    constexpr std::uint32_t AHB1RSTR_MDF1RST_B_0x1 = 1;

    /** @brief CRC reset Set and cleared by software. */
    using AHB1RSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CRC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_CRCRST_B_0x0 = 0;
        /** @brief Reset CRC */
    constexpr std::uint32_t AHB1RSTR_CRCRST_B_0x1 = 1;

    /** @brief TSC reset Set and cleared by software. */
    using AHB1RSTR_TSCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TSC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_TSCRST_B_0x0 = 0;
        /** @brief Reset TSC */
    constexpr std::uint32_t AHB1RSTR_TSCRST_B_0x1 = 1;

    /** @brief RAMCFG reset Set and cleared by software. */
    using AHB1RSTR_RAMCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset RAMCFG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_RAMCFGRST_B_0x0 = 0;
        /** @brief Reset RAMCFG */
    constexpr std::uint32_t AHB1RSTR_RAMCFGRST_B_0x1 = 1;

    /** @brief DMA2D reset Set and cleared by software. */
    using AHB1RSTR_DMA2DRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DMA2D (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_DMA2DRST_B_0x0 = 0;
        /** @brief Reset DMA2D */
    constexpr std::uint32_t AHB1RSTR_DMA2DRST_B_0x1 = 1;

    /** @brief GFXMMU reset Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB1RSTR_GFXMMURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset GFXMMU (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_GFXMMURST_B_0x0 = 0;
        /** @brief Reset GFXMMU */
    constexpr std::uint32_t AHB1RSTR_GFXMMURST_B_0x1 = 1;

    /** @brief GPU2D reset Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB1RSTR_GPU2DRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset GPU2D (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB1RSTR_GPU2DRST_B_0x0 = 0;
        /** @brief Reset GPU2D */
    constexpr std::uint32_t AHB1RSTR_GPU2DRST_B_0x1 = 1;

    /** @brief AHB2 peripheral reset register */
    using AHB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO port A reset Set and cleared by software. */
    using AHB2RSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port A (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIOARST_B_0x0 = 0;
        /** @brief Reset IO port A */
    constexpr std::uint32_t AHB2RSTR_GPIOARST_B_0x1 = 1;

    /** @brief IO port B reset Set and cleared by software. */
    using AHB2RSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port B (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIOBRST_B_0x0 = 0;
        /** @brief Reset IO port B */
    constexpr std::uint32_t AHB2RSTR_GPIOBRST_B_0x1 = 1;

    /** @brief IO port C reset Set and cleared by software. */
    using AHB2RSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port C (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIOCRST_B_0x0 = 0;
        /** @brief Reset IO port C */
    constexpr std::uint32_t AHB2RSTR_GPIOCRST_B_0x1 = 1;

    /** @brief IO port D reset Set and cleared by software. */
    using AHB2RSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port D (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIODRST_B_0x0 = 0;
        /** @brief Reset IO port D */
    constexpr std::uint32_t AHB2RSTR_GPIODRST_B_0x1 = 1;

    /** @brief IO port E reset Set and cleared by software. */
    using AHB2RSTR_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port E (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIOERST_B_0x0 = 0;
        /** @brief Reset IO port E */
    constexpr std::uint32_t AHB2RSTR_GPIOERST_B_0x1 = 1;

    /** @brief IO port F reset Set and cleared by software. */
    using AHB2RSTR_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port F (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIOFRST_B_0x0 = 0;
        /** @brief Reset IO port F */
    constexpr std::uint32_t AHB2RSTR_GPIOFRST_B_0x1 = 1;

    /** @brief IO port G reset Set and cleared by software. */
    using AHB2RSTR_GPIOGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port G (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIOGRST_B_0x0 = 0;
        /** @brief Reset IO port G */
    constexpr std::uint32_t AHB2RSTR_GPIOGRST_B_0x1 = 1;

    /** @brief IO port H reset Set and cleared by software. */
    using AHB2RSTR_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port H (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIOHRST_B_0x0 = 0;
        /** @brief Reset IO port H */
    constexpr std::uint32_t AHB2RSTR_GPIOHRST_B_0x1 = 1;

    /** @brief IO port I reset Set and cleared by software. */
    using AHB2RSTR_GPIOIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port I (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIOIRST_B_0x0 = 0;
        /** @brief Reset IO port I */
    constexpr std::uint32_t AHB2RSTR_GPIOIRST_B_0x1 = 1;

    /** @brief IO port J reset Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB2RSTR_GPIOJRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port J (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_GPIOJRST_B_0x0 = 0;
        /** @brief Reset IO port J */
    constexpr std::uint32_t AHB2RSTR_GPIOJRST_B_0x1 = 1;

    /** @brief ADC1 and ADC2 reset Set and cleared by software. */
    using AHB2RSTR_ADC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset ADC1 and ADC2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_ADC1RST_B_0x0 = 0;
        /** @brief Reset ADC1 and ADC2 */
    constexpr std::uint32_t AHB2RSTR_ADC1RST_B_0x1 = 1;

    /** @brief DCMI and PSSI reset Set and cleared by software. */
    using AHB2RSTR_DCMI_PSSIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DCMI and PSSI (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_DCMI_PSSIRST_B_0x0 = 0;
        /** @brief Reset DCMI and PSSI */
    constexpr std::uint32_t AHB2RSTR_DCMI_PSSIRST_B_0x1 = 1;

    /** @brief OTG_FS or OTG_HS reset Set and cleared by software. Note: This bit impacts OTG_FS in STM32U575/585 and in OTG_HS in STM32U59x/5Ax. */
    using AHB2RSTR_OTGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset OTG_FS or OTG_HS (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_OTGRST_B_0x0 = 0;
        /** @brief Reset OTG_FS or OTG_HS */
    constexpr std::uint32_t AHB2RSTR_OTGRST_B_0x1 = 1;

    /** @brief AES hardware accelerator reset Set and cleared by software. */
    using AHB2RSTR_AESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset AES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_AESRST_B_0x0 = 0;
        /** @brief Reset AES */
    constexpr std::uint32_t AHB2RSTR_AESRST_B_0x1 = 1;

    /** @brief Hash reset Set and cleared by software. */
    using AHB2RSTR_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset HASH (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_HASHRST_B_0x0 = 0;
        /** @brief Reset HASH */
    constexpr std::uint32_t AHB2RSTR_HASHRST_B_0x1 = 1;

    /** @brief Random number generator reset Set and cleared by software. */
    using AHB2RSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset RNG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_RNGRST_B_0x0 = 0;
        /** @brief Reset RNG */
    constexpr std::uint32_t AHB2RSTR_RNGRST_B_0x1 = 1;

    /** @brief PKA reset Set and cleared by software. */
    using AHB2RSTR_PKARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset PKA (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_PKARST_B_0x0 = 0;
        /** @brief Reset PKA */
    constexpr std::uint32_t AHB2RSTR_PKARST_B_0x1 = 1;

    /** @brief SAES hardware accelerator reset Set and cleared by software. */
    using AHB2RSTR_SAESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SAES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_SAESRST_B_0x0 = 0;
        /** @brief Reset SAES */
    constexpr std::uint32_t AHB2RSTR_SAESRST_B_0x1 = 1;

    /** @brief OCTOSPIM reset Set and cleared by software. */
    using AHB2RSTR_OCTOSPIMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset OCTOSPIM (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_OCTOSPIMRST_B_0x0 = 0;
        /** @brief Reset OCTOSPIM */
    constexpr std::uint32_t AHB2RSTR_OCTOSPIMRST_B_0x1 = 1;

    /** @brief OTFDEC1 reset Set and cleared by software. */
    using AHB2RSTR_OTFDEC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset OTFDEC1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_OTFDEC1RST_B_0x0 = 0;
        /** @brief Reset OTFDEC1 */
    constexpr std::uint32_t AHB2RSTR_OTFDEC1RST_B_0x1 = 1;

    /** @brief OTFDEC2 reset Set and cleared by software. */
    using AHB2RSTR_OTFDEC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset OTFDEC2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_OTFDEC2RST_B_0x0 = 0;
        /** @brief Reset OTFDEC2 */
    constexpr std::uint32_t AHB2RSTR_OTFDEC2RST_B_0x1 = 1;

    /** @brief SDMMC1 reset Set and cleared by software. */
    using AHB2RSTR_SDMMC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SDMMC1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_SDMMC1RST_B_0x0 = 0;
        /** @brief Reset SDMMC1 */
    constexpr std::uint32_t AHB2RSTR_SDMMC1RST_B_0x1 = 1;

    /** @brief SDMMC2 reset Set and cleared by software. */
    using AHB2RSTR_SDMMC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SDMMC2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB2RSTR_SDMMC2RST_B_0x0 = 0;
        /** @brief Reset SDMMC2 */
    constexpr std::uint32_t AHB2RSTR_SDMMC2RST_B_0x1 = 1;

    /** @brief AHB4 peripheral reset register */
    using AHB4RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flexible memory controller reset Set and cleared by software. */
    using AHB4RSTR_FSMCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset FSMC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB4RSTR_FSMCRST_B_0x0 = 0;
        /** @brief Reset FSMC */
    constexpr std::uint32_t AHB4RSTR_FSMCRST_B_0x1 = 1;

    /** @brief OCTOSPI1 reset Set and cleared by software. */
    using AHB4RSTR_OCTOSPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset OCTOSPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB4RSTR_OCTOSPI1RST_B_0x0 = 0;
        /** @brief Reset OCTOSPI1 */
    constexpr std::uint32_t AHB4RSTR_OCTOSPI1RST_B_0x1 = 1;

    /** @brief OCTOSPI2 reset Set and cleared by software. */
    using AHB4RSTR_OCTOSPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset OCTOSPI2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB4RSTR_OCTOSPI2RST_B_0x0 = 0;
        /** @brief Reset OCTOSPI2 */
    constexpr std::uint32_t AHB4RSTR_OCTOSPI2RST_B_0x1 = 1;

    /** @brief HSPI1 reset Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB4RSTR_HSPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset HSPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AHB4RSTR_HSPI1RST_B_0x0 = 0;
        /** @brief Reset HSPI1 */
    constexpr std::uint32_t AHB4RSTR_HSPI1RST_B_0x1 = 1;

    /** @brief AHB3 peripheral reset register */
    using AHB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPGPIO1 reset */
    using AHB3RSTR_LPGPIO1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC2 reset */
    using AHB3RSTR_ADC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC1 reset */
    using AHB3RSTR_DAC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA1 reset */
    using AHB3RSTR_LPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1 reset */
    using AHB3RSTR_ADF1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 peripheral reset register 1 */
    using APB1RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 reset Set and cleared by software. */
    using APB1RSTR1_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_TIM2RST_B_0x0 = 0;
        /** @brief Reset TIM2 */
    constexpr std::uint32_t APB1RSTR1_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 reset Set and cleared by software. */
    using APB1RSTR1_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_TIM3RST_B_0x0 = 0;
        /** @brief Reset TIM3 */
    constexpr std::uint32_t APB1RSTR1_TIM3RST_B_0x1 = 1;

    /** @brief TIM4 reset Set and cleared by software. */
    using APB1RSTR1_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_TIM4RST_B_0x0 = 0;
        /** @brief Reset TIM4 */
    constexpr std::uint32_t APB1RSTR1_TIM4RST_B_0x1 = 1;

    /** @brief TIM5 reset Set and cleared by software. */
    using APB1RSTR1_TIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM5 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_TIM5RST_B_0x0 = 0;
        /** @brief Reset TIM5 */
    constexpr std::uint32_t APB1RSTR1_TIM5RST_B_0x1 = 1;

    /** @brief TIM6 reset Set and cleared by software. */
    using APB1RSTR1_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM6 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_TIM6RST_B_0x0 = 0;
        /** @brief Reset TIM6 */
    constexpr std::uint32_t APB1RSTR1_TIM6RST_B_0x1 = 1;

    /** @brief TIM7 reset Set and cleared by software. */
    using APB1RSTR1_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM7 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_TIM7RST_B_0x0 = 0;
        /** @brief Reset TIM7 */
    constexpr std::uint32_t APB1RSTR1_TIM7RST_B_0x1 = 1;

    /** @brief SPI2 reset Set and cleared by software. */
    using APB1RSTR1_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_SPI2RST_B_0x0 = 0;
        /** @brief Reset SPI2 */
    constexpr std::uint32_t APB1RSTR1_SPI2RST_B_0x1 = 1;

    /** @brief USART2 reset Set and cleared by software. */
    using APB1RSTR1_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_USART2RST_B_0x0 = 0;
        /** @brief Reset USART2 */
    constexpr std::uint32_t APB1RSTR1_USART2RST_B_0x1 = 1;

    /** @brief USART3 reset Set and cleared by software. */
    using APB1RSTR1_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_USART3RST_B_0x0 = 0;
        /** @brief Reset USART3 */
    constexpr std::uint32_t APB1RSTR1_USART3RST_B_0x1 = 1;

    /** @brief UART4 reset Set and cleared by software. */
    using APB1RSTR1_UART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UART4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_UART4RST_B_0x0 = 0;
        /** @brief Reset UART4 */
    constexpr std::uint32_t APB1RSTR1_UART4RST_B_0x1 = 1;

    /** @brief UART5 reset Set and cleared by software. */
    using APB1RSTR1_UART5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UART5 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_UART5RST_B_0x0 = 0;
        /** @brief Reset UART5 */
    constexpr std::uint32_t APB1RSTR1_UART5RST_B_0x1 = 1;

    /** @brief I2C1 reset Set and cleared by software. */
    using APB1RSTR1_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_I2C1RST_B_0x0 = 0;
        /** @brief Reset I2C1 */
    constexpr std::uint32_t APB1RSTR1_I2C1RST_B_0x1 = 1;

    /** @brief I2C2 reset Set and cleared by software. */
    using APB1RSTR1_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_I2C2RST_B_0x0 = 0;
        /** @brief Reset I2C2 */
    constexpr std::uint32_t APB1RSTR1_I2C2RST_B_0x1 = 1;

    /** @brief CRS reset Set and cleared by software. */
    using APB1RSTR1_CRSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the CRS (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_CRSRST_B_0x0 = 0;
        /** @brief Reset the CRS */
    constexpr std::uint32_t APB1RSTR1_CRSRST_B_0x1 = 1;

    /** @brief USART6 reset Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB1RSTR1_USART6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the USART6 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR1_USART6RST_B_0x0 = 0;
        /** @brief Reset the USART6 */
    constexpr std::uint32_t APB1RSTR1_USART6RST_B_0x1 = 1;

    /** @brief APB1 peripheral reset register 2 */
    using APB1RSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 reset Set and cleared by software */
    using APB1RSTR2_I2C4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR2_I2C4RST_B_0x0 = 0;
        /** @brief Reset I2C4 */
    constexpr std::uint32_t APB1RSTR2_I2C4RST_B_0x1 = 1;

    /** @brief LPTIM2 reset Set and cleared by software. */
    using APB1RSTR2_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR2_LPTIM2RST_B_0x0 = 0;
        /** @brief Reset LPTIM2 */
    constexpr std::uint32_t APB1RSTR2_LPTIM2RST_B_0x1 = 1;

    /** @brief I2C5 reset Set and cleared by software Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB1RSTR2_I2C5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C5 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR2_I2C5RST_B_0x0 = 0;
        /** @brief Reset I2C5 */
    constexpr std::uint32_t APB1RSTR2_I2C5RST_B_0x1 = 1;

    /** @brief I2C6 reset Set and cleared by software Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB1RSTR2_I2C6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C6 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR2_I2C6RST_B_0x0 = 0;
        /** @brief Reset I2C6 */
    constexpr std::uint32_t APB1RSTR2_I2C6RST_B_0x1 = 1;

    /** @brief FDCAN1 reset Set and cleared by software. */
    using APB1RSTR2_FDCAN1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset FDCAN1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR2_FDCAN1RST_B_0x0 = 0;
        /** @brief Reset FDCAN1 */
    constexpr std::uint32_t APB1RSTR2_FDCAN1RST_B_0x1 = 1;

    /** @brief UCPD1 reset Set and cleared by software. */
    using APB1RSTR2_UCPD1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UCPD1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB1RSTR2_UCPD1RST_B_0x0 = 0;
        /** @brief Reset UCPD1 */
    constexpr std::uint32_t APB1RSTR2_UCPD1RST_B_0x1 = 1;

    /** @brief APB2 peripheral reset register */
    using APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 reset Set and cleared by software. */
    using APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief Reset TIM1 */
    constexpr std::uint32_t APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief SPI1 reset Set and cleared by software. */
    using APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief Reset SPI1 */
    constexpr std::uint32_t APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief TIM8 reset Set and cleared by software. */
    using APB2RSTR_TIM8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM8 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_TIM8RST_B_0x0 = 0;
        /** @brief Reset TIM8 */
    constexpr std::uint32_t APB2RSTR_TIM8RST_B_0x1 = 1;

    /** @brief USART1 reset Set and cleared by software. */
    using APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief Reset USART1 */
    constexpr std::uint32_t APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief TIM15 reset Set and cleared by software. */
    using APB2RSTR_TIM15RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM15 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_TIM15RST_B_0x0 = 0;
        /** @brief Reset TIM15 */
    constexpr std::uint32_t APB2RSTR_TIM15RST_B_0x1 = 1;

    /** @brief TIM16 reset Set and cleared by software. */
    using APB2RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM16 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_TIM16RST_B_0x0 = 0;
        /** @brief Reset TIM16 */
    constexpr std::uint32_t APB2RSTR_TIM16RST_B_0x1 = 1;

    /** @brief TIM17 reset Set and cleared by software. */
    using APB2RSTR_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM17 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_TIM17RST_B_0x0 = 0;
        /** @brief Reset TIM17 */
    constexpr std::uint32_t APB2RSTR_TIM17RST_B_0x1 = 1;

    /** @brief SAI1 reset Set and cleared by software. */
    using APB2RSTR_SAI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SAI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_SAI1RST_B_0x0 = 0;
        /** @brief Reset SAI1 */
    constexpr std::uint32_t APB2RSTR_SAI1RST_B_0x1 = 1;

    /** @brief SAI2 reset Set and cleared by software. */
    using APB2RSTR_SAI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SAI2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_SAI2RST_B_0x0 = 0;
        /** @brief Reset SAI2 */
    constexpr std::uint32_t APB2RSTR_SAI2RST_B_0x1 = 1;

    /** @brief LTDC reset Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB2RSTR_LTDCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LTDC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_LTDCRST_B_0x0 = 0;
        /** @brief Reset LTDC */
    constexpr std::uint32_t APB2RSTR_LTDCRST_B_0x1 = 1;

    /** @brief DSI reset Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB2RSTR_DSIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DSI (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t APB2RSTR_DSIRST_B_0x0 = 0;
        /** @brief Reset DSI */
    constexpr std::uint32_t APB2RSTR_DSIRST_B_0x1 = 1;

    /** @brief APB3 peripheral reset register */
    using APB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG reset */
    using APB3RSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 reset */
    using APB3RSTR_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 reset */
    using APB3RSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 reset */
    using APB3RSTR_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 reset */
    using APB3RSTR_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3 reset */
    using APB3RSTR_LPTIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 reset */
    using APB3RSTR_LPTIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP reset */
    using APB3RSTR_OPAMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP reset */
    using APB3RSTR_COMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUF reset */
    using APB3RSTR_VREFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1 peripheral clock enable register */
    using AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable */
    using AHB1ENR_GPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CORDIC clock enable */
    using AHB1ENR_CORDICEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMAC clock enable */
    using AHB1ENR_FMACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF1 clock enable */
    using AHB1ENR_MDF1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH clock enable */
    using AHB1ENR_FLASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC clock enable */
    using AHB1ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Touch sensing controller clock enable */
    using AHB1ENR_TSCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG clock enable */
    using AHB1ENR_RAMCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D clock enable */
    using AHB1ENR_DMA2DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXMMUEN */
    using AHB1ENR_GFXMMUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPU2DEN */
    using AHB1ENR_GPU2DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCACHE2EN */
    using AHB1ENR_DCACHE2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC1 clock enable */
    using AHB1ENR_GTZC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKPSRAM clock enable */
    using AHB1ENR_BKPSRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCACHE clock enable */
    using AHB1ENR_DCACHEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1EN */
    using AHB1ENR_SRAM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB2 peripheral clock enable register */
    using AHB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO port A clock enable Set and cleared by software. */
    using AHB2ENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port A clock disabled (value: 0)
     *          - B_0x1: IO port A clock enabled (value: 1)
     */
        /** @brief IO port A clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIOAEN_B_0x0 = 0;
        /** @brief IO port A clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIOAEN_B_0x1 = 1;

    /** @brief IO port B clock enable Set and cleared by software. */
    using AHB2ENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port B clock disabled (value: 0)
     *          - B_0x1: IO port B clock enabled (value: 1)
     */
        /** @brief IO port B clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIOBEN_B_0x0 = 0;
        /** @brief IO port B clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIOBEN_B_0x1 = 1;

    /** @brief IO port C clock enable Set and cleared by software. */
    using AHB2ENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port C clock disabled (value: 0)
     *          - B_0x1: IO port C clock enabled (value: 1)
     */
        /** @brief IO port C clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIOCEN_B_0x0 = 0;
        /** @brief IO port C clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIOCEN_B_0x1 = 1;

    /** @brief IO port D clock enable Set and cleared by software. */
    using AHB2ENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port D clock disabled (value: 0)
     *          - B_0x1: IO port D clock enabled (value: 1)
     */
        /** @brief IO port D clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIODEN_B_0x0 = 0;
        /** @brief IO port D clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIODEN_B_0x1 = 1;

    /** @brief IO port E clock enable Set and cleared by software. */
    using AHB2ENR_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port E clock disabled (value: 0)
     *          - B_0x1: IO port E clock enabled (value: 1)
     */
        /** @brief IO port E clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIOEEN_B_0x0 = 0;
        /** @brief IO port E clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIOEEN_B_0x1 = 1;

    /** @brief IO port F clock enable Set and cleared by software. */
    using AHB2ENR_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port F clock disabled (value: 0)
     *          - B_0x1: IO port F clock enabled (value: 1)
     */
        /** @brief IO port F clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIOFEN_B_0x0 = 0;
        /** @brief IO port F clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIOFEN_B_0x1 = 1;

    /** @brief IO port G clock enable Set and cleared by software. */
    using AHB2ENR_GPIOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port G clock disabled (value: 0)
     *          - B_0x1: IO port G clock enabled (value: 1)
     */
        /** @brief IO port G clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIOGEN_B_0x0 = 0;
        /** @brief IO port G clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIOGEN_B_0x1 = 1;

    /** @brief IO port H clock enable Set and cleared by software. */
    using AHB2ENR_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port H clock disabled (value: 0)
     *          - B_0x1: IO port H clock enabled (value: 1)
     */
        /** @brief IO port H clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIOHEN_B_0x0 = 0;
        /** @brief IO port H clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIOHEN_B_0x1 = 1;

    /** @brief IO port I clock enable Set and cleared by software. */
    using AHB2ENR_GPIOIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port I clock disabled (value: 0)
     *          - B_0x1: IO port I clock enabled (value: 1)
     */
        /** @brief IO port I clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIOIEN_B_0x0 = 0;
        /** @brief IO port I clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIOIEN_B_0x1 = 1;

    /** @brief IO port J clock enable Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB2ENR_GPIOJEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port J clock disabled (value: 0)
     *          - B_0x1: IO port J clock enabled (value: 1)
     */
        /** @brief IO port J clock disabled */
    constexpr std::uint32_t AHB2ENR_GPIOJEN_B_0x0 = 0;
        /** @brief IO port J clock enabled */
    constexpr std::uint32_t AHB2ENR_GPIOJEN_B_0x1 = 1;

    /** @brief ADC1 and ADC2 clock enable Set and cleared by software. Note: This bit impacts ADC1 in STM32U575/585 and ADC1/ADC2 in STM32U59x/5Ax. */
    using AHB2ENR_ADC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and ADC2 clock disabled (value: 0)
     *          - B_0x1: ADC1 and ADC2 clock enabled (value: 1)
     */
        /** @brief ADC1 and ADC2 clock disabled */
    constexpr std::uint32_t AHB2ENR_ADC1EN_B_0x0 = 0;
        /** @brief ADC1 and ADC2 clock enabled */
    constexpr std::uint32_t AHB2ENR_ADC1EN_B_0x1 = 1;

    /** @brief DCMI and PSSI clock enable Set and cleared by software. */
    using AHB2ENR_DCMI_PSSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI and PSSI clock disabled (value: 0)
     *          - B_0x1: DCMI and PSSI clock enabled (value: 1)
     */
        /** @brief DCMI and PSSI clock disabled */
    constexpr std::uint32_t AHB2ENR_DCMI_PSSIEN_B_0x0 = 0;
        /** @brief DCMI and PSSI clock enabled */
    constexpr std::uint32_t AHB2ENR_DCMI_PSSIEN_B_0x1 = 1;

    /** @brief OTG_FS or OTG_HS clock enable Set and cleared by software. Note: This bit impacts OTG_FS in STM32U575/585 and OTG_HS in STM32U59x/5Ax. */
    using AHB2ENR_OTGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG_FS or OTG_HS clock disabled (value: 0)
     *          - B_0x1: OTG_FS or OTG_HS clock enabled (value: 1)
     */
        /** @brief OTG_FS or OTG_HS clock disabled */
    constexpr std::uint32_t AHB2ENR_OTGEN_B_0x0 = 0;
        /** @brief OTG_FS or OTG_HS clock enabled */
    constexpr std::uint32_t AHB2ENR_OTGEN_B_0x1 = 1;

    /** @brief OTG_HS PHY clock enable Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB2ENR_OTGHSPHYEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG_HS PHY clock disabled (value: 0)
     *          - B_0x1: OTG_HS PHY clock enabled (value: 1)
     */
        /** @brief OTG_HS PHY clock disabled */
    constexpr std::uint32_t AHB2ENR_OTGHSPHYEN_B_0x0 = 0;
        /** @brief OTG_HS PHY clock enabled */
    constexpr std::uint32_t AHB2ENR_OTGHSPHYEN_B_0x1 = 1;

    /** @brief AES clock enable Set and cleared by software. */
    using AHB2ENR_AESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES clock disabled (value: 0)
     *          - B_0x1: AES clock enabled (value: 1)
     */
        /** @brief AES clock disabled */
    constexpr std::uint32_t AHB2ENR_AESEN_B_0x0 = 0;
        /** @brief AES clock enabled */
    constexpr std::uint32_t AHB2ENR_AESEN_B_0x1 = 1;

    /** @brief HASH clock enable Set and cleared by software */
    using AHB2ENR_HASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH clock disabled (value: 0)
     *          - B_0x1: HASH clock enabled (value: 1)
     */
        /** @brief HASH clock disabled */
    constexpr std::uint32_t AHB2ENR_HASHEN_B_0x0 = 0;
        /** @brief HASH clock enabled */
    constexpr std::uint32_t AHB2ENR_HASHEN_B_0x1 = 1;

    /** @brief RNG clock enable Set and cleared by software. */
    using AHB2ENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG clock disabled (value: 0)
     *          - B_0x1: RNG clock enabled (value: 1)
     */
        /** @brief RNG clock disabled */
    constexpr std::uint32_t AHB2ENR_RNGEN_B_0x0 = 0;
        /** @brief RNG clock enabled */
    constexpr std::uint32_t AHB2ENR_RNGEN_B_0x1 = 1;

    /** @brief PKA clock enable Set and cleared by software. */
    using AHB2ENR_PKAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA clock disabled (value: 0)
     *          - B_0x1: PKA clock enabled (value: 1)
     */
        /** @brief PKA clock disabled */
    constexpr std::uint32_t AHB2ENR_PKAEN_B_0x0 = 0;
        /** @brief PKA clock enabled */
    constexpr std::uint32_t AHB2ENR_PKAEN_B_0x1 = 1;

    /** @brief SAES clock enable Set and cleared by software. */
    using AHB2ENR_SAESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES clock disabled (value: 0)
     *          - B_0x1: SAES clock enabled (value: 1)
     */
        /** @brief SAES clock disabled */
    constexpr std::uint32_t AHB2ENR_SAESEN_B_0x0 = 0;
        /** @brief SAES clock enabled */
    constexpr std::uint32_t AHB2ENR_SAESEN_B_0x1 = 1;

    /** @brief OCTOSPIM clock enable Set and cleared by software. */
    using AHB2ENR_OCTOSPIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPIM clock disabled (value: 0)
     *          - B_0x1: OCTOSPIM clock enabled (value: 1)
     */
        /** @brief OCTOSPIM clock disabled */
    constexpr std::uint32_t AHB2ENR_OCTOSPIMEN_B_0x0 = 0;
        /** @brief OCTOSPIM clock enabled */
    constexpr std::uint32_t AHB2ENR_OCTOSPIMEN_B_0x1 = 1;

    /** @brief OTFDEC1 clock enable Set and cleared by software. */
    using AHB2ENR_OTFDEC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC1 clock disabled (value: 0)
     *          - B_0x1: OTFDEC1 clock enabled (value: 1)
     */
        /** @brief OTFDEC1 clock disabled */
    constexpr std::uint32_t AHB2ENR_OTFDEC1EN_B_0x0 = 0;
        /** @brief OTFDEC1 clock enabled */
    constexpr std::uint32_t AHB2ENR_OTFDEC1EN_B_0x1 = 1;

    /** @brief OTFDEC2 clock enable Set and cleared by software. */
    using AHB2ENR_OTFDEC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC2 clock disabled (value: 0)
     *          - B_0x1: OTFDEC2 clock enabled (value: 1)
     */
        /** @brief OTFDEC2 clock disabled */
    constexpr std::uint32_t AHB2ENR_OTFDEC2EN_B_0x0 = 0;
        /** @brief OTFDEC2 clock enabled */
    constexpr std::uint32_t AHB2ENR_OTFDEC2EN_B_0x1 = 1;

    /** @brief SDMMC1 clock enable Set and cleared by software. */
    using AHB2ENR_SDMMC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 clock disabled (value: 0)
     *          - B_0x1: SDMMC1 clock enabled (value: 1)
     */
        /** @brief SDMMC1 clock disabled */
    constexpr std::uint32_t AHB2ENR_SDMMC1EN_B_0x0 = 0;
        /** @brief SDMMC1 clock enabled */
    constexpr std::uint32_t AHB2ENR_SDMMC1EN_B_0x1 = 1;

    /** @brief SDMMC2 clock enable Set and cleared by software. */
    using AHB2ENR_SDMMC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 clock disabled (value: 0)
     *          - B_0x1: SDMMC2 clock enabled (value: 1)
     */
        /** @brief SDMMC2 clock disabled */
    constexpr std::uint32_t AHB2ENR_SDMMC2EN_B_0x0 = 0;
        /** @brief SDMMC2 clock enabled */
    constexpr std::uint32_t AHB2ENR_SDMMC2EN_B_0x1 = 1;

    /** @brief SRAM2 clock enable Set and reset by software. */
    using AHB2ENR_SRAM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clock disabled (value: 0)
     *          - B_0x1: SRAM2 clock enabled (value: 1)
     */
        /** @brief SRAM2 clock disabled */
    constexpr std::uint32_t AHB2ENR_SRAM2EN_B_0x0 = 0;
        /** @brief SRAM2 clock enabled */
    constexpr std::uint32_t AHB2ENR_SRAM2EN_B_0x1 = 1;

    /** @brief SRAM3 clock enable Set and reset by software. */
    using AHB2ENR_SRAM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 clock disabled (value: 0)
     *          - B_0x1: SRAM3 clock enabled (value: 1)
     */
        /** @brief SRAM3 clock disabled */
    constexpr std::uint32_t AHB2ENR_SRAM3EN_B_0x0 = 0;
        /** @brief SRAM3 clock enabled */
    constexpr std::uint32_t AHB2ENR_SRAM3EN_B_0x1 = 1;

    /** @brief AHB4 peripheral clock enable register */
    using AHB4ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FSMC clock enable Set and cleared by software. */
    using AHB4ENR_FSMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FSMC clock disabled (value: 0)
     *          - B_0x1: FSMC clock enabled (value: 1)
     */
        /** @brief FSMC clock disabled */
    constexpr std::uint32_t AHB4ENR_FSMCEN_B_0x0 = 0;
        /** @brief FSMC clock enabled */
    constexpr std::uint32_t AHB4ENR_FSMCEN_B_0x1 = 1;

    /** @brief OCTOSPI1 clock enable Set and cleared by software. */
    using AHB4ENR_OCTOSPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI1 clock disabled (value: 0)
     *          - B_0x1: OCTOSPI1 clock enabled (value: 1)
     */
        /** @brief OCTOSPI1 clock disabled */
    constexpr std::uint32_t AHB4ENR_OCTOSPI1EN_B_0x0 = 0;
        /** @brief OCTOSPI1 clock enabled */
    constexpr std::uint32_t AHB4ENR_OCTOSPI1EN_B_0x1 = 1;

    /** @brief OCTOSPI2 clock enable Set and cleared by software. */
    using AHB4ENR_OCTOSPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI2 clock disabled (value: 0)
     *          - B_0x1: OCTOSPI2 clock enabled (value: 1)
     */
        /** @brief OCTOSPI2 clock disabled */
    constexpr std::uint32_t AHB4ENR_OCTOSPI2EN_B_0x0 = 0;
        /** @brief OCTOSPI2 clock enabled */
    constexpr std::uint32_t AHB4ENR_OCTOSPI2EN_B_0x1 = 1;

    /** @brief HSPI1 clock enable Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB4ENR_HSPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSPI1 clock disabled (value: 0)
     *          - B_0x1: HSPI1 clock enabled (value: 1)
     */
        /** @brief HSPI1 clock disabled */
    constexpr std::uint32_t AHB4ENR_HSPI1EN_B_0x0 = 0;
        /** @brief HSPI1 clock enabled */
    constexpr std::uint32_t AHB4ENR_HSPI1EN_B_0x1 = 1;

    /** @brief SRAM5 clock enable Set and reset by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB4ENR_SRAM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM5 clock disabled (value: 0)
     *          - B_0x1: SRAM5 clock enabled (value: 1)
     */
        /** @brief SRAM5 clock disabled */
    constexpr std::uint32_t AHB4ENR_SRAM5EN_B_0x0 = 0;
        /** @brief SRAM5 clock enabled */
    constexpr std::uint32_t AHB4ENR_SRAM5EN_B_0x1 = 1;

    /** @brief AHB3 peripheral clock enable register */
    using AHB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPGPIO1 enable */
    using AHB3ENR_LPGPIO1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR clock enable */
    using AHB3ENR_PWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC2 clock enable */
    using AHB3ENR_ADC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC1 clock enable */
    using AHB3ENR_DAC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA1 clock enable */
    using AHB3ENR_LPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1 clock enable */
    using AHB3ENR_ADF1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC2 clock enable */
    using AHB3ENR_GTZC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM4EN */
    using AHB3ENR_SRAM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 peripheral clock enable register 1 */
    using APB1ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 clock enable Set and cleared by software. */
    using APB1ENR1_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 clock disabled (value: 0)
     *          - B_0x1: TIM2 clock enabled (value: 1)
     */
        /** @brief TIM2 clock disabled */
    constexpr std::uint32_t APB1ENR1_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 clock enabled */
    constexpr std::uint32_t APB1ENR1_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 clock enable Set and cleared by software. */
    using APB1ENR1_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 clock disabled (value: 0)
     *          - B_0x1: TIM3 clock enabled (value: 1)
     */
        /** @brief TIM3 clock disabled */
    constexpr std::uint32_t APB1ENR1_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 clock enabled */
    constexpr std::uint32_t APB1ENR1_TIM3EN_B_0x1 = 1;

    /** @brief TIM4 clock enable Set and cleared by software. */
    using APB1ENR1_TIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 clock disabled (value: 0)
     *          - B_0x1: TIM4 clock enabled (value: 1)
     */
        /** @brief TIM4 clock disabled */
    constexpr std::uint32_t APB1ENR1_TIM4EN_B_0x0 = 0;
        /** @brief TIM4 clock enabled */
    constexpr std::uint32_t APB1ENR1_TIM4EN_B_0x1 = 1;

    /** @brief TIM5 clock enable Set and cleared by software. */
    using APB1ENR1_TIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 clock disabled (value: 0)
     *          - B_0x1: TIM5 clock enabled (value: 1)
     */
        /** @brief TIM5 clock disabled */
    constexpr std::uint32_t APB1ENR1_TIM5EN_B_0x0 = 0;
        /** @brief TIM5 clock enabled */
    constexpr std::uint32_t APB1ENR1_TIM5EN_B_0x1 = 1;

    /** @brief TIM6 clock enable Set and cleared by software. */
    using APB1ENR1_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 clock disabled (value: 0)
     *          - B_0x1: TIM6 clock enabled (value: 1)
     */
        /** @brief TIM6 clock disabled */
    constexpr std::uint32_t APB1ENR1_TIM6EN_B_0x0 = 0;
        /** @brief TIM6 clock enabled */
    constexpr std::uint32_t APB1ENR1_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 clock enable Set and cleared by software. */
    using APB1ENR1_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 clock disabled (value: 0)
     *          - B_0x1: TIM7 clock enabled (value: 1)
     */
        /** @brief TIM7 clock disabled */
    constexpr std::uint32_t APB1ENR1_TIM7EN_B_0x0 = 0;
        /** @brief TIM7 clock enabled */
    constexpr std::uint32_t APB1ENR1_TIM7EN_B_0x1 = 1;

    /** @brief WWDG clock enable Set by software to enable the window watchdog clock. Reset by hardware system reset. This bit can also be set by hardware if the WWDG_SW option bit is reset. */
    using APB1ENR1_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG clock disabled (value: 0)
     *          - B_0x1: WWDG clock enabled (value: 1)
     */
        /** @brief WWDG clock disabled */
    constexpr std::uint32_t APB1ENR1_WWDGEN_B_0x0 = 0;
        /** @brief WWDG clock enabled */
    constexpr std::uint32_t APB1ENR1_WWDGEN_B_0x1 = 1;

    /** @brief SPI2 clock enable Set and cleared by software. */
    using APB1ENR1_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 clock disabled (value: 0)
     *          - B_0x1: SPI2 clock enabled (value: 1)
     */
        /** @brief SPI2 clock disabled */
    constexpr std::uint32_t APB1ENR1_SPI2EN_B_0x0 = 0;
        /** @brief SPI2 clock enabled */
    constexpr std::uint32_t APB1ENR1_SPI2EN_B_0x1 = 1;

    /** @brief USART2 clock enable Set and cleared by software. */
    using APB1ENR1_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 clock disabled (value: 0)
     *          - B_0x1: USART2 clock enabled (value: 1)
     */
        /** @brief USART2 clock disabled */
    constexpr std::uint32_t APB1ENR1_USART2EN_B_0x0 = 0;
        /** @brief USART2 clock enabled */
    constexpr std::uint32_t APB1ENR1_USART2EN_B_0x1 = 1;

    /** @brief USART3 clock enable Set and cleared by software. */
    using APB1ENR1_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 clock disabled (value: 0)
     *          - B_0x1: USART3 clock enabled (value: 1)
     */
        /** @brief USART3 clock disabled */
    constexpr std::uint32_t APB1ENR1_USART3EN_B_0x0 = 0;
        /** @brief USART3 clock enabled */
    constexpr std::uint32_t APB1ENR1_USART3EN_B_0x1 = 1;

    /** @brief UART4 clock enable Set and cleared by software. */
    using APB1ENR1_UART4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 clock disabled (value: 0)
     *          - B_0x1: UART4 clock enabled (value: 1)
     */
        /** @brief UART4 clock disabled */
    constexpr std::uint32_t APB1ENR1_UART4EN_B_0x0 = 0;
        /** @brief UART4 clock enabled */
    constexpr std::uint32_t APB1ENR1_UART4EN_B_0x1 = 1;

    /** @brief UART5 clock enable Set and cleared by software. */
    using APB1ENR1_UART5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 clock disabled (value: 0)
     *          - B_0x1: UART5 clock enabled (value: 1)
     */
        /** @brief UART5 clock disabled */
    constexpr std::uint32_t APB1ENR1_UART5EN_B_0x0 = 0;
        /** @brief UART5 clock enabled */
    constexpr std::uint32_t APB1ENR1_UART5EN_B_0x1 = 1;

    /** @brief I2C1 clock enable Set and cleared by software. */
    using APB1ENR1_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 clock disabled (value: 0)
     *          - B_0x1: I2C1 clock enabled (value: 1)
     */
        /** @brief I2C1 clock disabled */
    constexpr std::uint32_t APB1ENR1_I2C1EN_B_0x0 = 0;
        /** @brief I2C1 clock enabled */
    constexpr std::uint32_t APB1ENR1_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 clock enable Set and cleared by software. */
    using APB1ENR1_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 clock disabled (value: 0)
     *          - B_0x1: I2C2 clock enabled (value: 1)
     */
        /** @brief I2C2 clock disabled */
    constexpr std::uint32_t APB1ENR1_I2C2EN_B_0x0 = 0;
        /** @brief I2C2 clock enabled */
    constexpr std::uint32_t APB1ENR1_I2C2EN_B_0x1 = 1;

    /** @brief CRS clock enable Set and cleared by software. */
    using APB1ENR1_CRSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS clock disabled (value: 0)
     *          - B_0x1: CRS clock enabled (value: 1)
     */
        /** @brief CRS clock disabled */
    constexpr std::uint32_t APB1ENR1_CRSEN_B_0x0 = 0;
        /** @brief CRS clock enabled */
    constexpr std::uint32_t APB1ENR1_CRSEN_B_0x1 = 1;

    /** @brief USART6 clock enable Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB1ENR1_USART6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 clock disabled (value: 0)
     *          - B_0x1: USART6 clock enabled (value: 1)
     */
        /** @brief USART6 clock disabled */
    constexpr std::uint32_t APB1ENR1_USART6EN_B_0x0 = 0;
        /** @brief USART6 clock enabled */
    constexpr std::uint32_t APB1ENR1_USART6EN_B_0x1 = 1;

    /** @brief APB1 peripheral clock enable register 2 */
    using APB1ENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 clock enable Set and cleared by software */
    using APB1ENR2_I2C4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 clock disabled (value: 0)
     *          - B_0x1: I2C4 clock enabled (value: 1)
     */
        /** @brief I2C4 clock disabled */
    constexpr std::uint32_t APB1ENR2_I2C4EN_B_0x0 = 0;
        /** @brief I2C4 clock enabled */
    constexpr std::uint32_t APB1ENR2_I2C4EN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable Set and cleared by software. */
    using APB1ENR2_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 clock disabled (value: 0)
     *          - B_0x1: LPTIM2 clock enabled (value: 1)
     */
        /** @brief LPTIM2 clock disabled */
    constexpr std::uint32_t APB1ENR2_LPTIM2EN_B_0x0 = 0;
        /** @brief LPTIM2 clock enabled */
    constexpr std::uint32_t APB1ENR2_LPTIM2EN_B_0x1 = 1;

    /** @brief I2C5 clock enable Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB1ENR2_I2C5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C5 clock disabled (value: 0)
     *          - B_0x1: I2C5 clock enabled (value: 1)
     */
        /** @brief I2C5 clock disabled */
    constexpr std::uint32_t APB1ENR2_I2C5EN_B_0x0 = 0;
        /** @brief I2C5 clock enabled */
    constexpr std::uint32_t APB1ENR2_I2C5EN_B_0x1 = 1;

    /** @brief I2C6 clock enable Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB1ENR2_I2C6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C6 clock disabled (value: 0)
     *          - B_0x1: I2C6 clock enabled (value: 1)
     */
        /** @brief I2C6 clock disabled */
    constexpr std::uint32_t APB1ENR2_I2C6EN_B_0x0 = 0;
        /** @brief I2C6 clock enabled */
    constexpr std::uint32_t APB1ENR2_I2C6EN_B_0x1 = 1;

    /** @brief FDCAN1 clock enable Set and cleared by software. */
    using APB1ENR2_FDCAN1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 clock disabled (value: 0)
     *          - B_0x1: FDCAN1 clock enabled (value: 1)
     */
        /** @brief FDCAN1 clock disabled */
    constexpr std::uint32_t APB1ENR2_FDCAN1EN_B_0x0 = 0;
        /** @brief FDCAN1 clock enabled */
    constexpr std::uint32_t APB1ENR2_FDCAN1EN_B_0x1 = 1;

    /** @brief UCPD1 clock enable Set and cleared by software. */
    using APB1ENR2_UCPD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD1 clock disabled (value: 0)
     *          - B_0x1: UCPD1 clock enabled (value: 1)
     */
        /** @brief UCPD1 clock disabled */
    constexpr std::uint32_t APB1ENR2_UCPD1EN_B_0x0 = 0;
        /** @brief UCPD1 clock enabled */
    constexpr std::uint32_t APB1ENR2_UCPD1EN_B_0x1 = 1;

    /** @brief APB2 peripheral clock enable register */
    using APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 clock enable Set and cleared by software. */
    using APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 clock disabled (value: 0)
     *          - B_0x1: TIM1 clock enabled (value: 1)
     */
        /** @brief TIM1 clock disabled */
    constexpr std::uint32_t APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1 clock enabled */
    constexpr std::uint32_t APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief SPI1 clock enable Set and cleared by software. */
    using APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 clock disabled (value: 0)
     *          - B_0x1: SPI1 clock enabled (value: 1)
     */
        /** @brief SPI1 clock disabled */
    constexpr std::uint32_t APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI1 clock enabled */
    constexpr std::uint32_t APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief TIM8 clock enable Set and cleared by software. */
    using APB2ENR_TIM8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 clock disabled (value: 0)
     *          - B_0x1: TIM8 clock enabled (value: 1)
     */
        /** @brief TIM8 clock disabled */
    constexpr std::uint32_t APB2ENR_TIM8EN_B_0x0 = 0;
        /** @brief TIM8 clock enabled */
    constexpr std::uint32_t APB2ENR_TIM8EN_B_0x1 = 1;

    /** @brief USART1clock enable Set and cleared by software. */
    using APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 clock disabled (value: 0)
     *          - B_0x1: USART1 clock enabled (value: 1)
     */
        /** @brief USART1 clock disabled */
    constexpr std::uint32_t APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1 clock enabled */
    constexpr std::uint32_t APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief TIM15 clock enable Set and cleared by software. */
    using APB2ENR_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 clock disabled (value: 0)
     *          - B_0x1: TIM15 clock enabled (value: 1)
     */
        /** @brief TIM15 clock disabled */
    constexpr std::uint32_t APB2ENR_TIM15EN_B_0x0 = 0;
        /** @brief TIM15 clock enabled */
    constexpr std::uint32_t APB2ENR_TIM15EN_B_0x1 = 1;

    /** @brief TIM16 clock enable Set and cleared by software. */
    using APB2ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 clock disabled (value: 0)
     *          - B_0x1: TIM16 clock enabled (value: 1)
     */
        /** @brief TIM16 clock disabled */
    constexpr std::uint32_t APB2ENR_TIM16EN_B_0x0 = 0;
        /** @brief TIM16 clock enabled */
    constexpr std::uint32_t APB2ENR_TIM16EN_B_0x1 = 1;

    /** @brief TIM17 clock enable Set and cleared by software. */
    using APB2ENR_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 clock disabled (value: 0)
     *          - B_0x1: TIM17 clock enabled (value: 1)
     */
        /** @brief TIM17 clock disabled */
    constexpr std::uint32_t APB2ENR_TIM17EN_B_0x0 = 0;
        /** @brief TIM17 clock enabled */
    constexpr std::uint32_t APB2ENR_TIM17EN_B_0x1 = 1;

    /** @brief SAI1 clock enable Set and cleared by software. */
    using APB2ENR_SAI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 clock disabled (value: 0)
     *          - B_0x1: SAI1 clock enabled (value: 1)
     */
        /** @brief SAI1 clock disabled */
    constexpr std::uint32_t APB2ENR_SAI1EN_B_0x0 = 0;
        /** @brief SAI1 clock enabled */
    constexpr std::uint32_t APB2ENR_SAI1EN_B_0x1 = 1;

    /** @brief SAI2 clock enable Set and cleared by software. */
    using APB2ENR_SAI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 clock disabled (value: 0)
     *          - B_0x1: SAI2 clock enabled (value: 1)
     */
        /** @brief SAI2 clock disabled */
    constexpr std::uint32_t APB2ENR_SAI2EN_B_0x0 = 0;
        /** @brief SAI2 clock enabled */
    constexpr std::uint32_t APB2ENR_SAI2EN_B_0x1 = 1;

    /** @brief LTDC clock enable Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB2ENR_LTDCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC clock disabled (value: 0)
     *          - B_0x1: LTDC clock enabled (value: 1)
     */
        /** @brief LTDC clock disabled */
    constexpr std::uint32_t APB2ENR_LTDCEN_B_0x0 = 0;
        /** @brief LTDC clock enabled */
    constexpr std::uint32_t APB2ENR_LTDCEN_B_0x1 = 1;

    /** @brief DSI clock enable Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB2ENR_DSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI clock disabled (value: 0)
     *          - B_0x1: DSI clock enabled (value: 1)
     */
        /** @brief DSI clock disabled */
    constexpr std::uint32_t APB2ENR_DSIEN_B_0x0 = 0;
        /** @brief DSI clock enabled */
    constexpr std::uint32_t APB2ENR_DSIEN_B_0x1 = 1;

    /** @brief APB3 peripheral clock enable register */
    using APB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFGEN */
    using APB3ENR_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3EN */
    using APB3ENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1EN */
    using APB3ENR_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3EN */
    using APB3ENR_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1EN */
    using APB3ENR_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3EN */
    using APB3ENR_LPTIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4EN */
    using APB3ENR_LPTIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMPEN */
    using APB3ENR_OPAMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMPEN */
    using APB3ENR_COMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFEN */
    using APB3ENR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCAPBEN */
    using APB3ENR_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1 peripheral clocks enable in Sleep and Stop modes register */
    using AHB1SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using AHB1SMENR_GPDMA1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GPDMA1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GPDMA1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_GPDMA1SMEN_B_0x0 = 0;
        /** @brief GPDMA1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_GPDMA1SMEN_B_0x1 = 1;

    /** @brief CORDIC clocks enable during Sleep and Stop modes Set and cleared by software during Sleep mode. */
    using AHB1SMENR_CORDICSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CORDIC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: CORDIC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief CORDIC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_CORDICSMEN_B_0x0 = 0;
        /** @brief CORDIC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_CORDICSMEN_B_0x1 = 1;

    /** @brief FMAC clocks enable during Sleep and Stop modes. Set and cleared by software. */
    using AHB1SMENR_FMACSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMAC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FMAC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FMAC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_FMACSMEN_B_0x0 = 0;
        /** @brief FMAC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_FMACSMEN_B_0x1 = 1;

    /** @brief MDF1 clocks enable during Sleep and Stop modes. Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using AHB1SMENR_MDF1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: MDF1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief MDF1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_MDF1SMEN_B_0x0 = 0;
        /** @brief MDF1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_MDF1SMEN_B_0x1 = 1;

    /** @brief FLASH clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB1SMENR_FLASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FLASH clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FLASH clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_FLASHSMEN_B_0x0 = 0;
        /** @brief FLASH clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_FLASHSMEN_B_0x1 = 1;

    /** @brief CRC clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB1SMENR_CRCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: CRC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief CRC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_CRCSMEN_B_0x0 = 0;
        /** @brief CRC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_CRCSMEN_B_0x1 = 1;

    /** @brief TSC clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB1SMENR_TSCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TSC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TSC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_TSCSMEN_B_0x0 = 0;
        /** @brief TSC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_TSCSMEN_B_0x1 = 1;

    /** @brief RAMCFG clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB1SMENR_RAMCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RAMCFG clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RAMCFG clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_RAMCFGSMEN_B_0x0 = 0;
        /** @brief RAMCFG clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_RAMCFGSMEN_B_0x1 = 1;

    /** @brief DMA2D clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB1SMENR_DMA2DSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DMA2D clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DMA2D clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_DMA2DSMEN_B_0x0 = 0;
        /** @brief DMA2D clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_DMA2DSMEN_B_0x1 = 1;

    /** @brief GFXMMU clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB1SMENR_GFXMMUSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GFXMMU clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GFXMMU clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_GFXMMUSMEN_B_0x0 = 0;
        /** @brief GFXMMU clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_GFXMMUSMEN_B_0x1 = 1;

    /** @brief GPU2D clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB1SMENR_GPU2DSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPU2D clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GPU2D clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GPU2D clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_GPU2DSMEN_B_0x0 = 0;
        /** @brief GPU2D clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_GPU2DSMEN_B_0x1 = 1;

    /** @brief DCACHE2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB1SMENR_DCACHE2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DCACHE2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DCACHE2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_DCACHE2SMEN_B_0x0 = 0;
        /** @brief DCACHE2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_DCACHE2SMEN_B_0x1 = 1;

    /** @brief GTZC1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB1SMENR_GTZC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GTZC1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GTZC1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_GTZC1SMEN_B_0x0 = 0;
        /** @brief GTZC1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_GTZC1SMEN_B_0x1 = 1;

    /** @brief BKPSRAM clocks enable during Sleep and Stop modes Set and cleared by software */
    using AHB1SMENR_BKPSRAMSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPSRAM clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: BKPSRAM clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief BKPSRAM clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_BKPSRAMSMEN_B_0x0 = 0;
        /** @brief BKPSRAM clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_BKPSRAMSMEN_B_0x1 = 1;

    /** @brief ICACHE clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB1SMENR_ICACHESMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ICACHE clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief ICACHE clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_ICACHESMEN_B_0x0 = 0;
        /** @brief ICACHE clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_ICACHESMEN_B_0x1 = 1;

    /** @brief DCACHE1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB1SMENR_DCACHE1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DCACHE1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DCACHE1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_DCACHE1SMEN_B_0x0 = 0;
        /** @brief DCACHE1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_DCACHE1SMEN_B_0x1 = 1;

    /** @brief SRAM1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB1SMENR_SRAM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_SRAM1SMEN_B_0x0 = 0;
        /** @brief SRAM1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB1SMENR_SRAM1SMEN_B_0x1 = 1;

    /** @brief AHB2 peripheral clocks enable in Sleep and Stop modes register */
    using AHB2SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO port A clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_GPIOASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port A clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port A clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port A clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOASMEN_B_0x0 = 0;
        /** @brief IO port A clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOASMEN_B_0x1 = 1;

    /** @brief IO port B clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_GPIOBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port B clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port B clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port B clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOBSMEN_B_0x0 = 0;
        /** @brief IO port B clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOBSMEN_B_0x1 = 1;

    /** @brief IO port C clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_GPIOCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port C clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port C clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port C clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOCSMEN_B_0x0 = 0;
        /** @brief IO port C clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOCSMEN_B_0x1 = 1;

    /** @brief IO port D clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_GPIODSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port D clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port D clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port D clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIODSMEN_B_0x0 = 0;
        /** @brief IO port D clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIODSMEN_B_0x1 = 1;

    /** @brief IO port E clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_GPIOESMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port E clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port E clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port E clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOESMEN_B_0x0 = 0;
        /** @brief IO port E clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOESMEN_B_0x1 = 1;

    /** @brief IO port F clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_GPIOFSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port F clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port F clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port F clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOFSMEN_B_0x0 = 0;
        /** @brief IO port F clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOFSMEN_B_0x1 = 1;

    /** @brief IO port G clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_GPIOGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port G clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port G clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port G clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOGSMEN_B_0x0 = 0;
        /** @brief IO port G clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOGSMEN_B_0x1 = 1;

    /** @brief IO port H clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_GPIOHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port H clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port H clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port H clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOHSMEN_B_0x0 = 0;
        /** @brief IO port H clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOHSMEN_B_0x1 = 1;

    /** @brief IO port I clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_GPIOISMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port I clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port I clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port I clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOISMEN_B_0x0 = 0;
        /** @brief IO port I clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOISMEN_B_0x1 = 1;

    /** @brief IO port J clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB2SMENR_GPIOJSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port J clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port J clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port J clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOJSMEN_B_0x0 = 0;
        /** @brief IO port J clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_GPIOJSMEN_B_0x1 = 1;

    /** @brief ADC1 and ADC2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit impacts ADC1 in STM32U575/585 and ADC1/ADC2 in STM32U59x/5Ax. */
    using AHB2SMENR_ADC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and ADC2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ADC1 and ADC2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief ADC1 and ADC2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_ADC1SMEN_B_0x0 = 0;
        /** @brief ADC1 and ADC2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_ADC1SMEN_B_0x1 = 1;

    /** @brief DCMI and PSSI clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_DCMI_PSSISMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI and PSSI clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DCMI and PSSI clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DCMI and PSSI clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_DCMI_PSSISMEN_B_0x0 = 0;
        /** @brief DCMI and PSSI clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_DCMI_PSSISMEN_B_0x1 = 1;

    /** @brief OTG_FS and OTG_HS clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit impacts OTG_FS in STM32U575/585 and OTG_HS in STM32U59x/5Ax. */
    using AHB2SMENR_OTGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG_FS and OTG_HS clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OTG_FS and OTG_HS clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OTG_FS and OTG_HS clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OTGSMEN_B_0x0 = 0;
        /** @brief OTG_FS and OTG_HS clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OTGSMEN_B_0x1 = 1;

    /** @brief OTG_HS PHY clock enable during Sleep and Stop modes Set and cleared by software Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB2SMENR_OTGHSPHYSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG_HS PHY clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OTG_HS PHY clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OTG_HS PHY clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OTGHSPHYSMEN_B_0x0 = 0;
        /** @brief OTG_HS PHY clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OTGHSPHYSMEN_B_0x1 = 1;

    /** @brief AES clock enable during Sleep and Stop modes Set and cleared by software */
    using AHB2SMENR_AESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: AES clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief AES clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_AESSMEN_B_0x0 = 0;
        /** @brief AES clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_AESSMEN_B_0x1 = 1;

    /** @brief HASH clock enable during Sleep and Stop modes Set and cleared by software */
    using AHB2SMENR_HASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: HASH clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief HASH clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_HASHSMEN_B_0x0 = 0;
        /** @brief HASH clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_HASHSMEN_B_0x1 = 1;

    /** @brief Random number generator (RNG) clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_RNGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RNG clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RNG clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_RNGSMEN_B_0x0 = 0;
        /** @brief RNG clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_RNGSMEN_B_0x1 = 1;

    /** @brief PKA clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_PKASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: PKA clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief PKA clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_PKASMEN_B_0x0 = 0;
        /** @brief PKA clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_PKASMEN_B_0x1 = 1;

    /** @brief SAES accelerator clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_SAESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAES clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SAES clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SAESSMEN_B_0x0 = 0;
        /** @brief SAES clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SAESSMEN_B_0x1 = 1;

    /** @brief OCTOSPIM clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_OCTOSPIMSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPIM clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OCTOSPIM clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OCTOSPIM clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OCTOSPIMSMEN_B_0x0 = 0;
        /** @brief OCTOSPIM clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OCTOSPIMSMEN_B_0x1 = 1;

    /** @brief OTFDEC1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_OTFDEC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OTFDEC1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OTFDEC1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OTFDEC1SMEN_B_0x0 = 0;
        /** @brief OTFDEC1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OTFDEC1SMEN_B_0x1 = 1;

    /** @brief OTFDEC2 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_OTFDEC2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OTFDEC2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OTFDEC2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OTFDEC2SMEN_B_0x0 = 0;
        /** @brief OTFDEC2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_OTFDEC2SMEN_B_0x1 = 1;

    /** @brief SDMMC1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_SDMMC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SDMMC1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SDMMC1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SDMMC1SMEN_B_0x0 = 0;
        /** @brief SDMMC1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SDMMC1SMEN_B_0x1 = 1;

    /** @brief SDMMC2 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_SDMMC2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SDMMC2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SDMMC2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SDMMC2SMEN_B_0x0 = 0;
        /** @brief SDMMC2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SDMMC2SMEN_B_0x1 = 1;

    /** @brief SRAM2 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_SRAM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SRAM2SMEN_B_0x0 = 0;
        /** @brief SRAM2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SRAM2SMEN_B_0x1 = 1;

    /** @brief SRAM3 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB2SMENR_SRAM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM3 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM3 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SRAM3SMEN_B_0x0 = 0;
        /** @brief SRAM3 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB2SMENR_SRAM3SMEN_B_0x1 = 1;

    /** @brief AHB4 peripheral clocks enable in Sleep and Stop modes register */
    using AHB4SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FSMC clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB4SMENR_FSMCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FSMC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FSMC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FSMC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_FSMCSMEN_B_0x0 = 0;
        /** @brief FSMC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_FSMCSMEN_B_0x1 = 1;

    /** @brief OCTOSPI1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB4SMENR_OCTOSPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OCTOSPI1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OCTOSPI1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_OCTOSPI1SMEN_B_0x0 = 0;
        /** @brief OCTOSPI1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_OCTOSPI1SMEN_B_0x1 = 1;

    /** @brief OCTOSPI2 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using AHB4SMENR_OCTOSPI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OCTOSPI2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OCTOSPI2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_OCTOSPI2SMEN_B_0x0 = 0;
        /** @brief OCTOSPI2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_OCTOSPI2SMEN_B_0x1 = 1;

    /** @brief HSPI1 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB4SMENR_HSPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSPI1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: HSP1I clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief HSPI1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_HSPI1SMEN_B_0x0 = 0;
        /** @brief HSP1I clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_HSPI1SMEN_B_0x1 = 1;

    /** @brief SRAM5 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using AHB4SMENR_SRAM5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM5 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM5 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM5 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_SRAM5SMEN_B_0x0 = 0;
        /** @brief SRAM5 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t AHB4SMENR_SRAM5SMEN_B_0x1 = 1;

    /** @brief AHB3 peripheral clocks enable in Sleep and Stop modes register */
    using AHB3SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPGPIO1SMEN */
    using AHB3SMENR_LPGPIO1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWRSMEN */
    using AHB3SMENR_PWRSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC2SMEN */
    using AHB3SMENR_ADC2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC1SMEN */
    using AHB3SMENR_DAC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA1SMEN */
    using AHB3SMENR_LPDMA1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1SMEN */
    using AHB3SMENR_ADF1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC2SMEN */
    using AHB3SMENR_GTZC2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM4SMEN */
    using AHB3SMENR_SRAM4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 peripheral clocks enable in Sleep and Stop modes register 1 */
    using APB1SMENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB1SMENR1_TIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM2SMEN_B_0x0 = 0;
        /** @brief TIM2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM2SMEN_B_0x1 = 1;

    /** @brief TIM3 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB1SMENR1_TIM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM3 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM3 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM3SMEN_B_0x0 = 0;
        /** @brief TIM3 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM3SMEN_B_0x1 = 1;

    /** @brief TIM4 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB1SMENR1_TIM4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM4 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM4 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM4SMEN_B_0x0 = 0;
        /** @brief TIM4 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM4SMEN_B_0x1 = 1;

    /** @brief TIM5 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB1SMENR1_TIM5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM5 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM5 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM5SMEN_B_0x0 = 0;
        /** @brief TIM5 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM5SMEN_B_0x1 = 1;

    /** @brief TIM6 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB1SMENR1_TIM6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM6 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM6 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM6SMEN_B_0x0 = 0;
        /** @brief TIM6 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM6SMEN_B_0x1 = 1;

    /** @brief TIM7 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB1SMENR1_TIM7SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM7 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM7 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM7SMEN_B_0x0 = 0;
        /** @brief TIM7 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_TIM7SMEN_B_0x1 = 1;

    /** @brief Window watchdog clocks enable during Sleep and Stop modes Set and cleared by software. This bit is forced to 1 by hardware when the hardware WWDG option is activated. */
    using APB1SMENR1_WWDGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Window watchdog clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: Window watchdog clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief Window watchdog clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_WWDGSMEN_B_0x0 = 0;
        /** @brief Window watchdog clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_WWDGSMEN_B_0x1 = 1;

    /** @brief SPI2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB1SMENR1_SPI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_SPI2SMEN_B_0x0 = 0;
        /** @brief SPI2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_SPI2SMEN_B_0x1 = 1;

    /** @brief USART2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB1SMENR1_USART2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_USART2SMEN_B_0x0 = 0;
        /** @brief USART2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_USART2SMEN_B_0x1 = 1;

    /** @brief USART3 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB1SMENR1_USART3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART3 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART3 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_USART3SMEN_B_0x0 = 0;
        /** @brief USART3 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_USART3SMEN_B_0x1 = 1;

    /** @brief UART4 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB1SMENR1_UART4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: UART4 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief UART4 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_UART4SMEN_B_0x0 = 0;
        /** @brief UART4 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_UART4SMEN_B_0x1 = 1;

    /** @brief UART5 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB1SMENR1_UART5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: UART5 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief UART5 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_UART5SMEN_B_0x0 = 0;
        /** @brief UART5 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_UART5SMEN_B_0x1 = 1;

    /** @brief I2C1 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB1SMENR1_I2C1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_I2C1SMEN_B_0x0 = 0;
        /** @brief I2C1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_I2C1SMEN_B_0x1 = 1;

    /** @brief I2C2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB1SMENR1_I2C2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_I2C2SMEN_B_0x0 = 0;
        /** @brief I2C2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_I2C2SMEN_B_0x1 = 1;

    /** @brief CRS clock enable during Sleep and Stop modes Set and cleared by software. */
    using APB1SMENR1_CRSSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: CRS clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief CRS clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_CRSSMEN_B_0x0 = 0;
        /** @brief CRS clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_CRSSMEN_B_0x1 = 1;

    /** @brief USART6 clock enable during Sleep and Stop modes Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB1SMENR1_USART6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART6 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART6 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_USART6SMEN_B_0x0 = 0;
        /** @brief USART6 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR1_USART6SMEN_B_0x1 = 1;

    /** @brief APB1 peripheral clocks enable in Sleep and Stop modes register 2 */
    using APB1SMENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 clocks enable during Sleep and Stop modes Set and cleared by software Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB1SMENR2_I2C4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C4 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C4 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_I2C4SMEN_B_0x0 = 0;
        /** @brief I2C4 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_I2C4SMEN_B_0x1 = 1;

    /** @brief LPTIM2 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB1SMENR2_LPTIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPTIM2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPTIM2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_LPTIM2SMEN_B_0x0 = 0;
        /** @brief LPTIM2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_LPTIM2SMEN_B_0x1 = 1;

    /** @brief I2C5 clocks enable during Sleep and Stop modes Set and cleared by software Note: This bit must be set to allow the peripheral to wake up from Stop modes. This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB1SMENR2_I2C5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C5 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C5 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C5 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_I2C5SMEN_B_0x0 = 0;
        /** @brief I2C5 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_I2C5SMEN_B_0x1 = 1;

    /** @brief I2C6 clocks enable during Sleep and Stop modes Set and cleared by software Note: This bit must be set to allow the peripheral to wake up from Stop modes. This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB1SMENR2_I2C6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C6 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C6 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C6 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_I2C6SMEN_B_0x0 = 0;
        /** @brief I2C6 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_I2C6SMEN_B_0x1 = 1;

    /** @brief FDCAN1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB1SMENR2_FDCAN1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FDCAN1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FDCAN1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_FDCAN1SMEN_B_0x0 = 0;
        /** @brief FDCAN1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_FDCAN1SMEN_B_0x1 = 1;

    /** @brief UCPD1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB1SMENR2_UCPD1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: UCPD1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief UCPD1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_UCPD1SMEN_B_0x0 = 0;
        /** @brief UCPD1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB1SMENR2_UCPD1SMEN_B_0x1 = 1;

    /** @brief APB2 peripheral clocks enable in Sleep and Stop modes register */
    using APB2SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB2SMENR_TIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM1SMEN_B_0x0 = 0;
        /** @brief TIM1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM1SMEN_B_0x1 = 1;

    /** @brief SPI1 clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB2SMENR_SPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_SPI1SMEN_B_0x0 = 0;
        /** @brief SPI1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_SPI1SMEN_B_0x1 = 1;

    /** @brief TIM8 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB2SMENR_TIM8SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM8 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM8 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM8SMEN_B_0x0 = 0;
        /** @brief TIM8 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM8SMEN_B_0x1 = 1;

    /** @brief USART1clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using APB2SMENR_USART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART1clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART1clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_USART1SMEN_B_0x0 = 0;
        /** @brief USART1clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_USART1SMEN_B_0x1 = 1;

    /** @brief TIM15 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB2SMENR_TIM15SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM15 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM15 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM15SMEN_B_0x0 = 0;
        /** @brief TIM15 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM15SMEN_B_0x1 = 1;

    /** @brief TIM16 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB2SMENR_TIM16SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM16 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM16 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM16SMEN_B_0x0 = 0;
        /** @brief TIM16 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM16SMEN_B_0x1 = 1;

    /** @brief TIM17 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB2SMENR_TIM17SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM17 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM17 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM17SMEN_B_0x0 = 0;
        /** @brief TIM17 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_TIM17SMEN_B_0x1 = 1;

    /** @brief SAI1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB2SMENR_SAI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAI1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SAI1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_SAI1SMEN_B_0x0 = 0;
        /** @brief SAI1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_SAI1SMEN_B_0x1 = 1;

    /** @brief SAI2 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using APB2SMENR_SAI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAI2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SAI2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_SAI2SMEN_B_0x0 = 0;
        /** @brief SAI2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_SAI2SMEN_B_0x1 = 1;

    /** @brief LTDC clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB2SMENR_LTDCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LTDC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LTDC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_LTDCSMEN_B_0x0 = 0;
        /** @brief LTDC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_LTDCSMEN_B_0x1 = 1;

    /** @brief DSI clocks enable during Sleep and Stop modes Set and cleared by software. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using APB2SMENR_DSISMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DSI clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DSI clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_DSISMEN_B_0x0 = 0;
        /** @brief DSI clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t APB2SMENR_DSISMEN_B_0x1 = 1;

    /** @brief APB3 peripheral clocks enable in Sleep and Stop modes register */
    using APB3SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFGSMEN */
    using APB3SMENR_SYSCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3SMEN */
    using APB3SMENR_SPI3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1SMEN */
    using APB3SMENR_LPUART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3SMEN */
    using APB3SMENR_I2C3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1SMEN */
    using APB3SMENR_LPTIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3SMEN */
    using APB3SMENR_LPTIM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4SMEN */
    using APB3SMENR_LPTIM4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMPSMEN */
    using APB3SMENR_OPAMPSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMPSMEN */
    using APB3SMENR_COMPSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFSMEN */
    using APB3SMENR_VREFSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCAPBSMEN */
    using APB3SMENR_RTCAPBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Smart run domain peripheral autonomous mode register */
    using SRDAMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3AMEN */
    using SRDAMR_SPI3AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1AMEN */
    using SRDAMR_LPUART1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3AMEN */
    using SRDAMR_I2C3AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1AMEN */
    using SRDAMR_LPTIM1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3AMEN */
    using SRDAMR_LPTIM3AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4AMEN */
    using SRDAMR_LPTIM4AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMPAMEN */
    using SRDAMR_OPAMPAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMPAMEN */
    using SRDAMR_COMPAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFAMEN */
    using SRDAMR_VREFAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCAPBAMEN */
    using SRDAMR_RTCAPBAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC2AMEN */
    using SRDAMR_ADC2AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPGPIO1AMEN */
    using SRDAMR_LPGPIO1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC1AMEN */
    using SRDAMR_DAC1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA1AMEN */
    using SRDAMR_LPDMA1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1AMEN */
    using SRDAMR_ADF1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM4AMEN */
    using SRDAMR_SRAM4AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripherals independent clock configuration register 1 */
    using CCIPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1SEL */
    using CCIPR1_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2SEL */
    using CCIPR1_USART2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3SEL */
    using CCIPR1_USART3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART4SEL */
    using CCIPR1_UART4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART5SEL */
    using CCIPR1_UART5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1SEL */
    using CCIPR1_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2SEL */
    using CCIPR1_I2C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4SEL */
    using CCIPR1_I2C4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2SEL */
    using CCIPR1_SPI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2SEL */
    using CCIPR1_LPTIM2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1SEL */
    using CCIPR1_SPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSTICKSEL */
    using CCIPR1_SYSTICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN1SEL */
    using CCIPR1_FDCAN1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICLKSEL */
    using CCIPR1_ICLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMICSEL */
    using CCIPR1_TIMICSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripherals independent clock configuration register 2 */
    using CCIPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF1 kernel clock source selection These bits are used to select the MDF1 kernel clock source. others: reserved */
    using CCIPR2_MDF1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HCLK selected (value: 0)
     *          - B_0x1: PLL1 âPâ (pll1_p_ck) selected (value: 1)
     *          - B_0x2: PLL3 âQâ (pll3_q_ck) selected (value: 2)
     *          - B_0x3: input pin AUDIOCLK selected (value: 3)
     *          - B_0x4: MSIK clock selected (value: 4)
     */
        /** @brief HCLK selected */
    constexpr std::uint32_t CCIPR2_MDF1SEL_B_0x0 = 0;
        /** @brief PLL1 âPâ (pll1_p_ck) selected */
    constexpr std::uint32_t CCIPR2_MDF1SEL_B_0x1 = 1;
        /** @brief PLL3 âQâ (pll3_q_ck) selected */
    constexpr std::uint32_t CCIPR2_MDF1SEL_B_0x2 = 2;
        /** @brief input pin AUDIOCLK selected */
    constexpr std::uint32_t CCIPR2_MDF1SEL_B_0x3 = 3;
        /** @brief MSIK clock selected */
    constexpr std::uint32_t CCIPR2_MDF1SEL_B_0x4 = 4;

    /** @brief SAI1 kernel clock source selection These bits are used to select the SAI1 kernel clock source. others: reserved Note: If the selected clock is the external clock and this clock is stopped, a switch to another clock is impossible. */
    using CCIPR2_SAI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 âPâ (pll2_p_ck) selected (value: 0)
     *          - B_0x1: PLL3 âPâ (pll3_p_ck) selected (value: 1)
     *          - B_0x2: PLL1 âPâ (pll1_p_ck) selected (value: 2)
     *          - B_0x3: input pin AUDIOCLK selected (value: 3)
     *          - B_0x4: HSI16 clock selected (value: 4)
     */
        /** @brief PLL2 âPâ (pll2_p_ck) selected */
    constexpr std::uint32_t CCIPR2_SAI1SEL_B_0x0 = 0;
        /** @brief PLL3 âPâ (pll3_p_ck) selected */
    constexpr std::uint32_t CCIPR2_SAI1SEL_B_0x1 = 1;
        /** @brief PLL1 âPâ (pll1_p_ck) selected */
    constexpr std::uint32_t CCIPR2_SAI1SEL_B_0x2 = 2;
        /** @brief input pin AUDIOCLK selected */
    constexpr std::uint32_t CCIPR2_SAI1SEL_B_0x3 = 3;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t CCIPR2_SAI1SEL_B_0x4 = 4;

    /** @brief SAI2 kernel clock source selection These bits are used to select the SAI2 kernel clock source. others: reserved Note: If the selected clock is the external clock and this clock is stopped, a switch to another clock is impossible. */
    using CCIPR2_SAI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 âPâ (pll2_p_ck) selected (value: 0)
     *          - B_0x1: PLL3 âPâ (pll3_p_ck) selected (value: 1)
     *          - B_0x2: PLL1 âPâ (pll1_p_ck) selected (value: 2)
     *          - B_0x3: input pin AUDIOCLK selected (value: 3)
     *          - B_0x4: HSI16 clock selected (value: 4)
     */
        /** @brief PLL2 âPâ (pll2_p_ck) selected */
    constexpr std::uint32_t CCIPR2_SAI2SEL_B_0x0 = 0;
        /** @brief PLL3 âPâ (pll3_p_ck) selected */
    constexpr std::uint32_t CCIPR2_SAI2SEL_B_0x1 = 1;
        /** @brief PLL1 âPâ (pll1_p_ck) selected */
    constexpr std::uint32_t CCIPR2_SAI2SEL_B_0x2 = 2;
        /** @brief input pin AUDIOCLK selected */
    constexpr std::uint32_t CCIPR2_SAI2SEL_B_0x3 = 3;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t CCIPR2_SAI2SEL_B_0x4 = 4;

    /** @brief SAES kernel clock source selection This bit is used to select the SAES kernel clock source. */
    using CCIPR2_SAESSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SHSI selected (value: 0)
     *          - B_0x1: SHSI / 2 selected, can be used in Range 4 (value: 1)
     */
        /** @brief SHSI selected */
    constexpr std::uint32_t CCIPR2_SAESSEL_B_0x0 = 0;
        /** @brief SHSI / 2 selected, can be used in Range 4 */
    constexpr std::uint32_t CCIPR2_SAESSEL_B_0x1 = 1;

    /** @brief RNGSEL kernel clock source selection These bits are used to select the RNG kernel clock source. */
    using CCIPR2_RNGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 selected (value: 0)
     *          - B_0x1: HSI48 / 2 selected, can be used in Range 4 (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     */
        /** @brief HSI48 selected */
    constexpr std::uint32_t CCIPR2_RNGSEL_B_0x0 = 0;
        /** @brief HSI48 / 2 selected, can be used in Range 4 */
    constexpr std::uint32_t CCIPR2_RNGSEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t CCIPR2_RNGSEL_B_0x2 = 2;

    /** @brief SDMMC1 and SDMMC2 kernel clock source selection This bit is used to select the SDMMC kernel clock source. It is recommended to change this bit only after reset and before enabling the SDMMC. */
    using CCIPR2_SDMMCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICLK clock selected (value: 0)
     *          - B_0x1: PLL1 âPâ (pll1_p_ck) selected, in case higher than 48 MHz is needed (for SDR50 mode) (value: 1)
     */
        /** @brief ICLK clock selected */
    constexpr std::uint32_t CCIPR2_SDMMCSEL_B_0x0 = 0;
        /** @brief PLL1 âPâ (pll1_p_ck) selected, in case higher than 48 MHz is needed (for SDR50 mode) */
    constexpr std::uint32_t CCIPR2_SDMMCSEL_B_0x1 = 1;

    /** @brief DSI kernel clock source selection This bit is used to select the DSI kernel clock source. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using CCIPR2_DSISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI PHY PLL output selected (value: 0)
     *          - B_0x1: PLL3 âPâ (pll3_p_ck) selected (value: 1)
     */
        /** @brief DSI PHY PLL output selected */
    constexpr std::uint32_t CCIPR2_DSISEL_B_0x0 = 0;
        /** @brief PLL3 âPâ (pll3_p_ck) selected */
    constexpr std::uint32_t CCIPR2_DSISEL_B_0x1 = 1;

    /** @brief USART6 kernel clock source selection These bits are used to select the USART6 kernel clock source. Note: The USART6 is functional in Stop 0 and Stop 1 modes only when the kernel clock is HSI16 or MSIK. This field is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using CCIPR2_USART6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t CCIPR2_USART6SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t CCIPR2_USART6SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t CCIPR2_USART6SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t CCIPR2_USART6SEL_B_0x3 = 3;

    /** @brief LTDC kernel clock source selection This bit is used to select the LTDC kernel clock source. Note: This bit is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using CCIPR2_LTDCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 âRâ (pll3_r_ck) selected (value: 0)
     *          - B_0x1: PLL2 âRâ (pll2_r_ck) selected (value: 1)
     */
        /** @brief PLL3 âRâ (pll3_r_ck) selected */
    constexpr std::uint32_t CCIPR2_LTDCSEL_B_0x0 = 0;
        /** @brief PLL2 âRâ (pll2_r_ck) selected */
    constexpr std::uint32_t CCIPR2_LTDCSEL_B_0x1 = 1;

    /** @brief OCTOSPI1 and OCTOSPI2 kernel clock source selection These bits are used to select the OCTOSPI1 and OCTOSPI2 kernel clock source. */
    using CCIPR2_OCTOSPISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCLK selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     *          - B_0x2: PLL1 âQâ (pll1_q_ck) selected, can be up to 200 MHz (value: 2)
     *          - B_0x3: PLL2 âQâ (pll2_q_ck) selected, can be up to 200 MHz (value: 3)
     */
        /** @brief SYSCLK selected */
    constexpr std::uint32_t CCIPR2_OCTOSPISEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t CCIPR2_OCTOSPISEL_B_0x1 = 1;
        /** @brief PLL1 âQâ (pll1_q_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t CCIPR2_OCTOSPISEL_B_0x2 = 2;
        /** @brief PLL2 âQâ (pll2_q_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t CCIPR2_OCTOSPISEL_B_0x3 = 3;

    /** @brief HSPI1 kernel clock source selection These bits are used to select the HSPI1 kernel clock source. Note: This field is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using CCIPR2_HSPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCLK selected (value: 0)
     *          - B_0x1: PLL1 âQâ (pll1_q_ck) selected, can be up to 200 MHz (value: 1)
     *          - B_0x2: PLL2 âQâ (pll2_q_ck) selected, can be up to 200 MHz (value: 2)
     *          - B_0x3: PLL3 âRâ (pll3_r_ck) selected, can be up to 200 MHz (value: 3)
     */
        /** @brief SYSCLK selected */
    constexpr std::uint32_t CCIPR2_HSPI1SEL_B_0x0 = 0;
        /** @brief PLL1 âQâ (pll1_q_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t CCIPR2_HSPI1SEL_B_0x1 = 1;
        /** @brief PLL2 âQâ (pll2_q_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t CCIPR2_HSPI1SEL_B_0x2 = 2;
        /** @brief PLL3 âRâ (pll3_r_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t CCIPR2_HSPI1SEL_B_0x3 = 3;

    /** @brief I2C5 kernel clock source selection These bits are used to select the I2C5 kernel clock source. Note: The I2C5 is functional in Stop 0 and Stop 1 modes only when the kernel clock is HSI16 or MSIK. This field is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using CCIPR2_I2C5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t CCIPR2_I2C5SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t CCIPR2_I2C5SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t CCIPR2_I2C5SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t CCIPR2_I2C5SEL_B_0x3 = 3;

    /** @brief I2C6 kernel clock source selection These bits are used to select the I2C6 kernel clock source. Note: The I2C6 is functional in Stop 0 and Stop 1 modes only when the kernel clock is HSI16 or MSIK. This field is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using CCIPR2_I2C6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t CCIPR2_I2C6SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t CCIPR2_I2C6SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t CCIPR2_I2C6SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t CCIPR2_I2C6SEL_B_0x3 = 3;

    /** @brief OTG_HS PHY kernel clock source selection These bits are used to select the OTG_HS PHY kernel clock source. Note: This field is only available in STM32U59x/5Ax. It is reserved in STM32U575/585. */
    using CCIPR2_OTGHSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE selected (value: 0)
     *          - B_0x1: PLL1 âPâ (pll1_q_ck) selected, (value: 1)
     *          - B_0x2: HSE/2 selected (value: 2)
     *          - B_0x3: PLL1 âPâ divided by 2 (pll1_p_ck/2) selected (value: 3)
     */
        /** @brief HSE selected */
    constexpr std::uint32_t CCIPR2_OTGHSSEL_B_0x0 = 0;
        /** @brief PLL1 âPâ (pll1_q_ck) selected, */
    constexpr std::uint32_t CCIPR2_OTGHSSEL_B_0x1 = 1;
        /** @brief HSE/2 selected */
    constexpr std::uint32_t CCIPR2_OTGHSSEL_B_0x2 = 2;
        /** @brief PLL1 âPâ divided by 2 (pll1_p_ck/2) selected */
    constexpr std::uint32_t CCIPR2_OTGHSSEL_B_0x3 = 3;

    /** @brief peripherals independent clock configuration register 3 */
    using CCIPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1SEL */
    using CCIPR3_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3SEL */
    using CCIPR3_SPI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3SEL */
    using CCIPR3_I2C3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM34SEL */
    using CCIPR3_LPTIM34SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1SEL */
    using CCIPR3_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADCDACSEL */
    using CCIPR3_ADCDACSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC1SEL */
    using CCIPR3_DAC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1SEL */
    using CCIPR3_ADF1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup domain control register */
    using BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSEON */
    using BDCR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSERDY */
    using BDCR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSEBYP */
    using BDCR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSEDRV */
    using BDCR_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSECSSON */
    using BDCR_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSECSSD */
    using BDCR_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSESYSEN */
    using BDCR_LSESYSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCSEL */
    using BDCR_RTCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSESYSRDY */
    using BDCR_LSESYSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSEGFON */
    using BDCR_LSEGFON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCEN */
    using BDCR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BDRST */
    using BDCR_BDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSCOEN */
    using BDCR_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSCOSEL */
    using BDCR_LSCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSION */
    using BDCR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSIRDY */
    using BDCR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSIPREDIV */
    using BDCR_LSIPREDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control/status register */
    using CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIKSRANGE */
    using CSR_MSIKSRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSISSRANGE */
    using CSR_MSISSRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RMVF */
    using CSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OBLRSTF */
    using CSR_OBLRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PINRSTF */
    using CSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BORRSTF */
    using CSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SFTRSTF */
    using CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDGRSTF */
    using CSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDGRSTF */
    using CSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPWRRSTF */
    using CSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure configuration register */
    using SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSISEC */
    using SECCFGR_HSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSESEC */
    using SECCFGR_HSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSISEC */
    using SECCFGR_MSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSISEC */
    using SECCFGR_LSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSESEC */
    using SECCFGR_LSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCLKSEC */
    using SECCFGR_SYSCLKSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRESCSEC */
    using SECCFGR_PRESCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1SEC */
    using SECCFGR_PLL1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2SEC */
    using SECCFGR_PLL2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3SEC */
    using SECCFGR_PLL3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLK48MSEC */
    using SECCFGR_CLK48MSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48SEC */
    using SECCFGR_HSI48SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RMVFSEC */
    using SECCFGR_RMVFSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privilege configuration register */
    using PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPRIV */
    using PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSPRIV */
    using PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
