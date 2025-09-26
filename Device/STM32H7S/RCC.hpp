/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_RCC_HPP
#define EMBEDDED_PP_STM32H7S_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RCC register block */
namespace STM32H7S::RCC {

    /** @brief RCC source control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock enable */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI is OFF (value: 0)
     *          - B_0x1: HSI is ON (default after reset) (value: 1)
     */
        /** @brief HSI is OFF */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI is ON (default after reset) */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI clock enable in Stop mode */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect on HSI (default after reset) (value: 0)
     *          - B_0x1: HSI is forced to ON even in Stop mode (value: 1)
     */
        /** @brief no effect on HSI (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI is forced to ON even in Stop mode */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x1 = 1;

    /** @brief HSI clock ready flag */
    using RCC_CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: HSI clock is ready (value: 1)
     */
        /** @brief HSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x0 = 0;
        /** @brief HSI clock is ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x1 = 1;

    /** @brief HSI clock divider */
    using RCC_CR_HSIDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: division by 1, hsi(_ker)_ck = 64 MHz (default after reset) (value: 0)
     *          - B_0x1: division by 2, hsi(_ker)_ck = 32 MHz (value: 1)
     *          - B_0x2: division by 4, hsi(_ker)_ck = 16 MHz (value: 2)
     *          - B_0x3: division by 8, hsi(_ker)_ck = 8 MHz (value: 3)
     */
        /** @brief division by 1, hsi(_ker)_ck = 64 MHz (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x0 = 0;
        /** @brief division by 2, hsi(_ker)_ck = 32 MHz */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x1 = 1;
        /** @brief division by 4, hsi(_ker)_ck = 16 MHz */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x2 = 2;
        /** @brief division by 8, hsi(_ker)_ck = 8 MHz */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x3 = 3;

    /** @brief HSI divider flag */
    using RCC_CR_HSIDIVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: new division ratio not yet propagated to hsi(_ker)_ck (default after reset) (value: 0)
     *          - B_0x1: hsi(_ker)_ck clock frequency reflects the new HSIDIV value (default register value when the (value: 1)
     */
        /** @brief new division ratio not yet propagated to hsi(_ker)_ck (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIDIVF_B_0x0 = 0;
        /** @brief hsi(_ker)_ck clock frequency reflects the new HSIDIV value (default register value when the */
    constexpr std::uint32_t RCC_CR_HSIDIVF_B_0x1 = 1;

    /** @brief CSI clock enable */
    using RCC_CR_CSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI is OFF (default after reset) (value: 0)
     *          - B_0x1: CSI is ON (value: 1)
     */
        /** @brief CSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_CSION_B_0x0 = 0;
        /** @brief CSI is ON */
    constexpr std::uint32_t RCC_CR_CSION_B_0x1 = 1;

    /** @brief CSI clock ready flag */
    using RCC_CR_CSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: CSI clock is ready (value: 1)
     */
        /** @brief CSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_CSIRDY_B_0x0 = 0;
        /** @brief CSI clock is ready */
    constexpr std::uint32_t RCC_CR_CSIRDY_B_0x1 = 1;

    /** @brief CSI clock enable in Stop mode */
    using RCC_CR_CSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect on CSI (default after reset) (value: 0)
     *          - B_0x1: CSI is forced to ON even in Stop mode (value: 1)
     */
        /** @brief no effect on CSI (default after reset) */
    constexpr std::uint32_t RCC_CR_CSIKERON_B_0x0 = 0;
        /** @brief CSI is forced to ON even in Stop mode */
    constexpr std::uint32_t RCC_CR_CSIKERON_B_0x1 = 1;

    /** @brief HSI48 clock enable */
    using RCC_CR_HSI48ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 is OFF (default after reset) (value: 0)
     *          - B_0x1: HSI48 is ON (value: 1)
     */
        /** @brief HSI48 is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x0 = 0;
        /** @brief HSI48 is ON */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x1 = 1;

    /** @brief HSI48 clock ready flag */
    using RCC_CR_HSI48RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 clock is not ready (default after reset) (value: 0)
     *          - B_0x1: HSI48 clock is ready (value: 1)
     */
        /** @brief HSI48 clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_HSI48RDY_B_0x0 = 0;
        /** @brief HSI48 clock is ready */
    constexpr std::uint32_t RCC_CR_HSI48RDY_B_0x1 = 1;

    /** @brief HSE clock enable */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE is OFF (default after reset) (value: 0)
     *          - B_0x1: HSE is ON (value: 1)
     */
        /** @brief HSE is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief HSE is ON */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x1 = 1;

    /** @brief HSE clock ready flag */
    using RCC_CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE clock is not ready (default after reset) (value: 0)
     *          - B_0x1: HSE clock is ready (value: 1)
     */
        /** @brief HSE clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x0 = 0;
        /** @brief HSE clock is ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x1 = 1;

    /** @brief HSE clock bypass */
    using RCC_CR_HSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator not bypassed (default after reset) (value: 0)
     *          - B_0x1: HSE oscillator bypassed with an external clock (value: 1)
     */
        /** @brief HSE oscillator not bypassed (default after reset) */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x0 = 0;
        /** @brief HSE oscillator bypassed with an external clock */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x1 = 1;

    /** @brief external high speed clock type in Bypass mode */
    using RCC_CR_HSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE in analog mode (default after reset) (value: 0)
     *          - B_0x1: HSE in digital mode (value: 1)
     */
        /** @brief HSE in analog mode (default after reset) */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x0 = 0;
        /** @brief HSE in digital mode */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x1 = 1;

    /** @brief HSE clock security system enable */
    using RCC_CR_HSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSS on HSE OFF (clock detector OFF) (default after reset) (value: 0)
     *          - B_0x1: CSS on HSE ON (clock detector ON if the HSE oscillator is stable, OFF if not). (value: 1)
     */
        /** @brief CSS on HSE OFF (clock detector OFF) (default after reset) */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x0 = 0;
        /** @brief CSS on HSE ON (clock detector ON if the HSE oscillator is stable, OFF if not). */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x1 = 1;

    /** @brief PLL1 enable */
    using RCC_CR_PLL1ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 OFF (default after reset) (value: 0)
     *          - B_0x1: PLL1 ON (value: 1)
     */
        /** @brief PLL1 OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x0 = 0;
        /** @brief PLL1 ON */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x1 = 1;

    /** @brief PLL1 clock ready flag */
    using RCC_CR_PLL1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 unlocked (default after reset) (value: 0)
     *          - B_0x1: PLL1 locked (value: 1)
     */
        /** @brief PLL1 unlocked (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL1RDY_B_0x0 = 0;
        /** @brief PLL1 locked */
    constexpr std::uint32_t RCC_CR_PLL1RDY_B_0x1 = 1;

    /** @brief PLL2 enable */
    using RCC_CR_PLL2ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 OFF (default after reset) (value: 0)
     *          - B_0x1: PLL2 ON (value: 1)
     */
        /** @brief PLL2 OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL2ON_B_0x0 = 0;
        /** @brief PLL2 ON */
    constexpr std::uint32_t RCC_CR_PLL2ON_B_0x1 = 1;

    /** @brief PLL2 clock ready flag */
    using RCC_CR_PLL2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 unlocked (default after reset) (value: 0)
     *          - B_0x1: PLL2 locked (value: 1)
     */
        /** @brief PLL2 unlocked (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL2RDY_B_0x0 = 0;
        /** @brief PLL2 locked */
    constexpr std::uint32_t RCC_CR_PLL2RDY_B_0x1 = 1;

    /** @brief PLL3 enable */
    using RCC_CR_PLL3ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 OFF (default after reset) (value: 0)
     *          - B_0x1: PLL3 ON (value: 1)
     */
        /** @brief PLL3 OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL3ON_B_0x0 = 0;
        /** @brief PLL3 ON */
    constexpr std::uint32_t RCC_CR_PLL3ON_B_0x1 = 1;

    /** @brief PLL3 clock ready flag */
    using RCC_CR_PLL3RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 unlocked (default after reset) (value: 0)
     *          - B_0x1: PLL3 locked (value: 1)
     */
        /** @brief PLL3 unlocked (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL3RDY_B_0x0 = 0;
        /** @brief PLL3 locked */
    constexpr std::uint32_t RCC_CR_PLL3RDY_B_0x1 = 1;

    /** @brief RCC HSI calibration register */
    using RCC_HSICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock calibration */
    using RCC_HSICFGR_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock trimming */
    using RCC_HSICFGR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock recovery RC register */
    using RCC_CRRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal RC 48 MHz clock calibration */
    using RCC_CRRCR_HSI48CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC CSI calibration register */
    using RCC_CSICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI clock calibration */
    using RCC_CSICFGR_CSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI clock trimming */
    using RCC_CSICFGR_CSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock configuration register */
    using RCC_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock switch */
    using RCC_CFGR_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as system clock (hsi_ck) (default after reset) (value: 0)
     *          - B_0x1: CSI selected as system clock (csi_ck) (value: 1)
     *          - B_0x2: HSE selected as system clock (hse_ck) (value: 2)
     *          - B_0x3: PLL1 selected as system clock (pll1_p_ck) (value: 3)
     */
        /** @brief HSI selected as system clock (hsi_ck) (default after reset) */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x0 = 0;
        /** @brief CSI selected as system clock (csi_ck) */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x1 = 1;
        /** @brief HSE selected as system clock (hse_ck) */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x2 = 2;
        /** @brief PLL1 selected as system clock (pll1_p_ck) */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x3 = 3;

    /** @brief system clock switch status */
    using RCC_CFGR_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI used as system clock (hsi_ck) (default after reset) (value: 0)
     *          - B_0x1: CSI used as system clock (csi_ck) (value: 1)
     *          - B_0x2: HSE used as system clock (hse_ck) (value: 2)
     *          - B_0x3: PLL1 used as system clock (pll1_p_ck) (value: 3)
     */
        /** @brief HSI used as system clock (hsi_ck) (default after reset) */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x0 = 0;
        /** @brief CSI used as system clock (csi_ck) */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x1 = 1;
        /** @brief HSE used as system clock (hse_ck) */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x2 = 2;
        /** @brief PLL1 used as system clock (pll1_p_ck) */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x3 = 3;

    /** @brief system clock selection after a wake up from system Stop */
    using RCC_CFGR_STOPWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as wake up clock from system Stop (default after reset) (value: 0)
     *          - B_0x1: CSI selected as wake up clock from system Stop (value: 1)
     */
        /** @brief HSI selected as wake up clock from system Stop (default after reset) */
    constexpr std::uint32_t RCC_CFGR_STOPWUCK_B_0x0 = 0;
        /** @brief CSI selected as wake up clock from system Stop */
    constexpr std::uint32_t RCC_CFGR_STOPWUCK_B_0x1 = 1;

    /** @brief kernel clock selection after a wake up from system Stop */
    using RCC_CFGR_STOPKERWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as wake up clock from system Stop (default after reset) (value: 0)
     *          - B_0x1: CSI selected as wake up clock from system Stop (value: 1)
     */
        /** @brief HSI selected as wake up clock from system Stop (default after reset) */
    constexpr std::uint32_t RCC_CFGR_STOPKERWUCK_B_0x0 = 0;
        /** @brief CSI selected as wake up clock from system Stop */
    constexpr std::uint32_t RCC_CFGR_STOPKERWUCK_B_0x1 = 1;

    /** @brief HSE division factor for RTC clock */
    using RCC_CFGR_RTCPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock (default after reset) (value: 0)
     *          - B_0x1: no clock (value: 1)
     *          - B_0x2: HSE/2 (value: 2)
     *          - B_0x3: HSE/3 (value: 3)
     *          - B_0x4: HSE/4 (value: 4)
     *          - B_0x3E: HSE/62 (value: 62)
     *          - B_0x3F: HSE/63 (value: 63)
     */
        /** @brief no clock (default after reset) */
    constexpr std::uint32_t RCC_CFGR_RTCPRE_B_0x0 = 0;
        /** @brief no clock */
    constexpr std::uint32_t RCC_CFGR_RTCPRE_B_0x1 = 1;
        /** @brief HSE/2 */
    constexpr std::uint32_t RCC_CFGR_RTCPRE_B_0x2 = 2;
        /** @brief HSE/3 */
    constexpr std::uint32_t RCC_CFGR_RTCPRE_B_0x3 = 3;
        /** @brief HSE/4 */
    constexpr std::uint32_t RCC_CFGR_RTCPRE_B_0x4 = 4;
        /** @brief HSE/62 */
    constexpr std::uint32_t RCC_CFGR_RTCPRE_B_0x3E = 62;
        /** @brief HSE/63 */
    constexpr std::uint32_t RCC_CFGR_RTCPRE_B_0x3F = 63;

    /** @brief timers clocks prescaler selection */
    using RCC_CFGR_TIMPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The timers kernel clock is equal to rcc_hclk1 if CDPPREx is corresponding to division by 1 or 2, else it is equal to 2 x F<sub>rcc_pclkx_d2 </sub>(default after reset) (value: 0)
     *          - B_0x1: The timers kernel clock is equal to rcc_hclk1 if CDPPREx is corresponding to division by 1, 2 (value: 1)
     */
        /** @brief The timers kernel clock is equal to rcc_hclk1 if CDPPREx is corresponding to division by 1 or 2, else it is equal to 2 x F<sub>rcc_pclkx_d2 </sub>(default after reset) */
    constexpr std::uint32_t RCC_CFGR_TIMPRE_B_0x0 = 0;
        /** @brief The timers kernel clock is equal to rcc_hclk1 if CDPPREx is corresponding to division by 1, 2 */
    constexpr std::uint32_t RCC_CFGR_TIMPRE_B_0x1 = 1;

    /** @brief MCO1 prescaler */
    using RCC_CFGR_MCO1PRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (default after reset) (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x4: division by 4 (value: 4)
     *          - B_0xF: division by 15 (value: 15)
     */
        /** @brief prescaler disabled (default after reset) */
    constexpr std::uint32_t RCC_CFGR_MCO1PRE_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_CFGR_MCO1PRE_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_CFGR_MCO1PRE_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_CFGR_MCO1PRE_B_0x3 = 3;
        /** @brief division by 4 */
    constexpr std::uint32_t RCC_CFGR_MCO1PRE_B_0x4 = 4;
        /** @brief division by 15 */
    constexpr std::uint32_t RCC_CFGR_MCO1PRE_B_0xF = 15;

    /** @brief Microcontroller clock output 1 */
    using RCC_CFGR_MCO1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI clock selected (hsi_ck) (default after reset) (value: 0)
     *          - B_0x1: LSE oscillator clock selected (lse_ck) (value: 1)
     *          - B_0x2: HSE clock selected (hse_ck) (value: 2)
     *          - B_0x3: PLL1 clock selected (pll1_q_ck) (value: 3)
     *          - B_0x4: HSI48 clock selected (hsi48_ck) (value: 4)
     */
        /** @brief HSI clock selected (hsi_ck) (default after reset) */
    constexpr std::uint32_t RCC_CFGR_MCO1SEL_B_0x0 = 0;
        /** @brief LSE oscillator clock selected (lse_ck) */
    constexpr std::uint32_t RCC_CFGR_MCO1SEL_B_0x1 = 1;
        /** @brief HSE clock selected (hse_ck) */
    constexpr std::uint32_t RCC_CFGR_MCO1SEL_B_0x2 = 2;
        /** @brief PLL1 clock selected (pll1_q_ck) */
    constexpr std::uint32_t RCC_CFGR_MCO1SEL_B_0x3 = 3;
        /** @brief HSI48 clock selected (hsi48_ck) */
    constexpr std::uint32_t RCC_CFGR_MCO1SEL_B_0x4 = 4;

    /** @brief MCO2 prescaler */
    using RCC_CFGR_MCO2PRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (default after reset) (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x4: division by 4 (value: 4)
     *          - B_0xF: division by 15 (value: 15)
     */
        /** @brief prescaler disabled (default after reset) */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x3 = 3;
        /** @brief division by 4 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x4 = 4;
        /** @brief division by 15 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0xF = 15;

    /** @brief microcontroller clock output 2 */
    using RCC_CFGR_MCO2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: system clock selected (sys_ck) (default after reset) (value: 0)
     *          - B_0x1: PLL2 oscillator clock selected (pll2_p_ck) (value: 1)
     *          - B_0x2: HSE clock selected (hse_ck) (value: 2)
     *          - B_0x3: PLL1 clock selected (pll1_p_ck) (value: 3)
     *          - B_0x4: CSI clock selected (csi_ck) (value: 4)
     *          - B_0x5: LSI clock selected (lsi_ck) (value: 5)
     */
        /** @brief system clock selected (sys_ck) (default after reset) */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x0 = 0;
        /** @brief PLL2 oscillator clock selected (pll2_p_ck) */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x1 = 1;
        /** @brief HSE clock selected (hse_ck) */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x2 = 2;
        /** @brief PLL1 clock selected (pll1_p_ck) */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x3 = 3;
        /** @brief CSI clock selected (csi_ck) */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x4 = 4;
        /** @brief LSI clock selected (lsi_ck) */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x5 = 5;

    /** @brief RCC CPU domain clock configuration register */
    using RCC_CDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU domain core prescaler */
    using RCC_CDCFGR_CPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x8: sys_ck divided by 2 (value: 8)
     *          - B_0x9: sys_ck divided by 4 (value: 9)
     *          - B_0xA: sys_ck divided by 8 (value: 10)
     *          - B_0xB: sys_ck divided by 16 (value: 11)
     *          - B_0xC: sys_ck divided by 64 (value: 12)
     *          - B_0xD: sys_ck divided by 128 (value: 13)
     *          - B_0xE: sys_ck divided by 256 (value: 14)
     *          - B_0xF: sys_ck divided by 512 (value: 15)
     */
        /** @brief sys_ck divided by 2 */
    constexpr std::uint32_t RCC_CDCFGR_CPRE_B_0x8 = 8;
        /** @brief sys_ck divided by 4 */
    constexpr std::uint32_t RCC_CDCFGR_CPRE_B_0x9 = 9;
        /** @brief sys_ck divided by 8 */
    constexpr std::uint32_t RCC_CDCFGR_CPRE_B_0xA = 10;
        /** @brief sys_ck divided by 16 */
    constexpr std::uint32_t RCC_CDCFGR_CPRE_B_0xB = 11;
        /** @brief sys_ck divided by 64 */
    constexpr std::uint32_t RCC_CDCFGR_CPRE_B_0xC = 12;
        /** @brief sys_ck divided by 128 */
    constexpr std::uint32_t RCC_CDCFGR_CPRE_B_0xD = 13;
        /** @brief sys_ck divided by 256 */
    constexpr std::uint32_t RCC_CDCFGR_CPRE_B_0xE = 14;
        /** @brief sys_ck divided by 512 */
    constexpr std::uint32_t RCC_CDCFGR_CPRE_B_0xF = 15;

    /** @brief RCC AHB clock configuration register */
    using RCC_BMCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus matrix clock prescaler */
    using RCC_BMCFGR_BMPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x8: sys_bus_ck = sys_cpu_ck / 2 (value: 8)
     *          - B_0x9: sys_bus_ck= sys_cpu_ck / 4 (value: 9)
     *          - B_0xA: sys_bus_ck = sys_cpu_ck / 8 (value: 10)
     *          - B_0xB: sys_bus_ck = sys_cpu_ck / 16 (value: 11)
     *          - B_0xC: sys_bus_ck = sys_cpu_ck / 64 (value: 12)
     *          - B_0xD: sys_bus_ck = sys_cpu_ck / 128 (value: 13)
     *          - B_0xE: sys_bus_ck = sys_cpu_ck / 256 (value: 14)
     *          - B_0xF: sys_bus_ck = sys_cpu_ck / 512 (value: 15)
     */
        /** @brief sys_bus_ck = sys_cpu_ck / 2 */
    constexpr std::uint32_t RCC_BMCFGR_BMPRE_B_0x8 = 8;
        /** @brief sys_bus_ck= sys_cpu_ck / 4 */
    constexpr std::uint32_t RCC_BMCFGR_BMPRE_B_0x9 = 9;
        /** @brief sys_bus_ck = sys_cpu_ck / 8 */
    constexpr std::uint32_t RCC_BMCFGR_BMPRE_B_0xA = 10;
        /** @brief sys_bus_ck = sys_cpu_ck / 16 */
    constexpr std::uint32_t RCC_BMCFGR_BMPRE_B_0xB = 11;
        /** @brief sys_bus_ck = sys_cpu_ck / 64 */
    constexpr std::uint32_t RCC_BMCFGR_BMPRE_B_0xC = 12;
        /** @brief sys_bus_ck = sys_cpu_ck / 128 */
    constexpr std::uint32_t RCC_BMCFGR_BMPRE_B_0xD = 13;
        /** @brief sys_bus_ck = sys_cpu_ck / 256 */
    constexpr std::uint32_t RCC_BMCFGR_BMPRE_B_0xE = 14;
        /** @brief sys_bus_ck = sys_cpu_ck / 512 */
    constexpr std::uint32_t RCC_BMCFGR_BMPRE_B_0xF = 15;

    /** @brief RCC APB clocks configuration register */
    using RCC_APBCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU domain APB1 prescaler */
    using RCC_APBCFGR_PPRE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk1 = sys_bus_ck / 2 (value: 4)
     *          - B_0x5: rcc_pclk1 = sys_bus_ck / 4 (value: 5)
     *          - B_0x6: rcc_pclk1 = sys_bus_ck / 8 (value: 6)
     *          - B_0x7: rcc_pclk1 = sys_bus_ck / 16 (value: 7)
     */
        /** @brief rcc_pclk1 = sys_bus_ck / 2 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE1_B_0x4 = 4;
        /** @brief rcc_pclk1 = sys_bus_ck / 4 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE1_B_0x5 = 5;
        /** @brief rcc_pclk1 = sys_bus_ck / 8 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE1_B_0x6 = 6;
        /** @brief rcc_pclk1 = sys_bus_ck / 16 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE1_B_0x7 = 7;

    /** @brief CPU domain APB2 prescaler */
    using RCC_APBCFGR_PPRE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk2 = sys_bus_ck / 2 (value: 4)
     *          - B_0x5: rcc_pclk2 = sys_bus_ck / 4 (value: 5)
     *          - B_0x6: rcc_pclk2 = sys_bus_ck / 8 (value: 6)
     *          - B_0x7: rcc_pclk2 = sys_bus_ck / 16 (value: 7)
     */
        /** @brief rcc_pclk2 = sys_bus_ck / 2 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE2_B_0x4 = 4;
        /** @brief rcc_pclk2 = sys_bus_ck / 4 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE2_B_0x5 = 5;
        /** @brief rcc_pclk2 = sys_bus_ck / 8 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE2_B_0x6 = 6;
        /** @brief rcc_pclk2 = sys_bus_ck / 16 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE2_B_0x7 = 7;

    /** @brief CPU domain APB4 prescaler */
    using RCC_APBCFGR_PPRE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk4 = sys_bus_ck / 2 (value: 4)
     *          - B_0x5: rcc_pclk4 = sys_bus_ck / 4 (value: 5)
     *          - B_0x6: rcc_pclk4 = sys_bus_ck / 8 (value: 6)
     *          - B_0x7: rcc_pclk4 = sys_bus_ck / 16 (value: 7)
     */
        /** @brief rcc_pclk4 = sys_bus_ck / 2 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE4_B_0x4 = 4;
        /** @brief rcc_pclk4 = sys_bus_ck / 4 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE4_B_0x5 = 5;
        /** @brief rcc_pclk4 = sys_bus_ck / 8 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE4_B_0x6 = 6;
        /** @brief rcc_pclk4 = sys_bus_ck / 16 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE4_B_0x7 = 7;

    /** @brief CPU domain APB5 prescaler */
    using RCC_APBCFGR_PPRE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk5 = sys_bus_ck / 2 (value: 4)
     *          - B_0x5: rcc_pclk5 = sys_bus_ck / 4 (value: 5)
     *          - B_0x6: rcc_pclk5 = sys_bus_ck / 8 (value: 6)
     *          - B_0x7: rcc_pclk5 = sys_bus_ck / 16 (value: 7)
     */
        /** @brief rcc_pclk5 = sys_bus_ck / 2 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE5_B_0x4 = 4;
        /** @brief rcc_pclk5 = sys_bus_ck / 4 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE5_B_0x5 = 5;
        /** @brief rcc_pclk5 = sys_bus_ck / 8 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE5_B_0x6 = 6;
        /** @brief rcc_pclk5 = sys_bus_ck / 16 */
    constexpr std::uint32_t RCC_APBCFGR_PPRE5_B_0x7 = 7;

    /** @brief RCC PLLs clock source selection register */
    using RCC_PLLCKSELR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIVMx and PLLs clock source selection */
    using RCC_PLLCKSELR_PLLSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as PLL clock (hsi_ck) (default after reset) (value: 0)
     *          - B_0x1: CSI selected as PLL clock (csi_ck) (value: 1)
     *          - B_0x2: HSE selected as PLL clock (hse_ck) (value: 2)
     *          - B_0x3: no clock send to DIVMx divider and PLLs (value: 3)
     */
        /** @brief HSI selected as PLL clock (hsi_ck) (default after reset) */
    constexpr std::uint32_t RCC_PLLCKSELR_PLLSRC_B_0x0 = 0;
        /** @brief CSI selected as PLL clock (csi_ck) */
    constexpr std::uint32_t RCC_PLLCKSELR_PLLSRC_B_0x1 = 1;
        /** @brief HSE selected as PLL clock (hse_ck) */
    constexpr std::uint32_t RCC_PLLCKSELR_PLLSRC_B_0x2 = 2;
        /** @brief no clock send to DIVMx divider and PLLs */
    constexpr std::uint32_t RCC_PLLCKSELR_PLLSRC_B_0x3 = 3;

    /** @brief prescaler for PLL1 */
    using RCC_PLLCKSELR_DIVM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x20: division by 32 (default after reset) (value: 32)
     *          - B_0x3F: division by 63 (value: 63)
     */
        /** @brief prescaler disabled */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM1_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM1_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM1_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM1_B_0x3 = 3;
        /** @brief division by 32 (default after reset) */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM1_B_0x20 = 32;
        /** @brief division by 63 */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM1_B_0x3F = 63;

    /** @brief prescaler for PLL2 */
    using RCC_PLLCKSELR_DIVM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x20: division by 32 (default after reset) (value: 32)
     *          - B_0x3F: division by 63 (value: 63)
     */
        /** @brief prescaler disabled */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM2_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM2_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM2_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM2_B_0x3 = 3;
        /** @brief division by 32 (default after reset) */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM2_B_0x20 = 32;
        /** @brief division by 63 */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM2_B_0x3F = 63;

    /** @brief prescaler for PLL3 */
    using RCC_PLLCKSELR_DIVM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x20: division by 32 (default after reset) (value: 32)
     *          - B_0x3F: division by 63 (value: 63)
     */
        /** @brief prescaler disabled */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM3_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM3_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM3_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM3_B_0x3 = 3;
        /** @brief division by 32 (default after reset) */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM3_B_0x20 = 32;
        /** @brief division by 63 */
    constexpr std::uint32_t RCC_PLLCKSELR_DIVM3_B_0x3F = 63;

    /** @brief RCC PLLs configuration register */
    using RCC_PLLCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 fractional latch enable */
    using RCC_PLLCFGR_PLL1FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 VCO selection */
    using RCC_PLLCFGR_PLL1VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VCOH selected (default after reset) (value: 0)
     *          - B_0x1: VCOL selected (value: 1)
     */
        /** @brief VCOH selected (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1VCOSEL_B_0x0 = 0;
        /** @brief VCOL selected */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1VCOSEL_B_0x1 = 1;

    /** @brief PLL1 SSCG enable */
    using RCC_PLLCFGR_PLL1SSCGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SSCG disabled (default after reset) (value: 0)
     *          - B_0x1: SSCG enabled (value: 1)
     */
        /** @brief SSCG disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1SSCGEN_B_0x0 = 0;
        /** @brief SSCG enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1SSCGEN_B_0x1 = 1;

    /** @brief PLL1 input frequency range */
    using RCC_PLLCFGR_PLL1RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 input (ref1_ck) clock range frequency between 1 and 2 MHz (default after reset) (value: 0)
     *          - B_0x1: PLL1 input (ref1_ck) clock range frequency between 2 and 4 MHz (value: 1)
     *          - B_0x2: PLL1 input (ref1_ck) clock range frequency between 4 and 8 MHz (value: 2)
     *          - B_0x3: PLL1 input (ref1_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL1 input (ref1_ck) clock range frequency between 1 and 2 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1RGE_B_0x0 = 0;
        /** @brief PLL1 input (ref1_ck) clock range frequency between 2 and 4 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1RGE_B_0x1 = 1;
        /** @brief PLL1 input (ref1_ck) clock range frequency between 4 and 8 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1RGE_B_0x2 = 2;
        /** @brief PLL1 input (ref1_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1RGE_B_0x3 = 3;

    /** @brief PLL1 DIVP divider output enable */
    using RCC_PLLCFGR_PLL1PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll1_p_ck output enabled (value: 1)
     */
        /** @brief pll1_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1PEN_B_0x0 = 0;
        /** @brief pll1_p_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1PEN_B_0x1 = 1;

    /** @brief PLL1 DIVQ divider output enable */
    using RCC_PLLCFGR_PLL1QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck output enabled (value: 1)
     */
        /** @brief pll1_q_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1QEN_B_0x0 = 0;
        /** @brief pll1_q_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1QEN_B_0x1 = 1;

    /** @brief PLL1 DIVS divider output enable */
    using RCC_PLLCFGR_PLL1SEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_s_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll1_s_ck output enabled (value: 1)
     */
        /** @brief pll1_s_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1SEN_B_0x0 = 0;
        /** @brief pll1_s_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1SEN_B_0x1 = 1;

    /** @brief PLL2 fractional latch enable */
    using RCC_PLLCFGR_PLL2FRACLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 VCO selection */
    using RCC_PLLCFGR_PLL2VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VCOH selected (default after reset) (value: 0)
     *          - B_0x1: VCOL selected (value: 1)
     */
        /** @brief VCOH selected (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2VCOSEL_B_0x0 = 0;
        /** @brief VCOL selected */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2VCOSEL_B_0x1 = 1;

    /** @brief PLL2 SSCG enable */
    using RCC_PLLCFGR_PLL2SSCGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SSCG disabled (default after reset) (value: 0)
     *          - B_0x1: SSCG enabled (value: 1)
     */
        /** @brief SSCG disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2SSCGEN_B_0x0 = 0;
        /** @brief SSCG enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2SSCGEN_B_0x1 = 1;

    /** @brief PLL2 input frequency range */
    using RCC_PLLCFGR_PLL2RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 input (ref2_ck) clock range frequency between 1 and 2 MHz (default after reset) (value: 0)
     *          - B_0x1: PLL3 input (ref2_ck) clock range frequency between 2 and 4 MHz (value: 1)
     *          - B_0x2: PLL3 input (ref2_ck) clock range frequency between 4 and 8 MHz (value: 2)
     *          - B_0x3: PLL3 input (ref2_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL3 input (ref2_ck) clock range frequency between 1 and 2 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2RGE_B_0x0 = 0;
        /** @brief PLL3 input (ref2_ck) clock range frequency between 2 and 4 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2RGE_B_0x1 = 1;
        /** @brief PLL3 input (ref2_ck) clock range frequency between 4 and 8 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2RGE_B_0x2 = 2;
        /** @brief PLL3 input (ref2_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2RGE_B_0x3 = 3;

    /** @brief PLL2 DIVP divider output enable */
    using RCC_PLLCFGR_PLL2PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck output enabled (value: 1)
     */
        /** @brief pll2_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2PEN_B_0x0 = 0;
        /** @brief pll2_p_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2PEN_B_0x1 = 1;

    /** @brief PLL2 DIVQ divider output enable */
    using RCC_PLLCFGR_PLL2QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_q_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck output enabled (value: 1)
     */
        /** @brief pll2_q_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2QEN_B_0x0 = 0;
        /** @brief pll2_q_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2QEN_B_0x1 = 1;

    /** @brief PLL2 DIVR divider output enable */
    using RCC_PLLCFGR_PLL2REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_r_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck output enabled (value: 1)
     */
        /** @brief pll2_r_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2REN_B_0x0 = 0;
        /** @brief pll2_r_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2REN_B_0x1 = 1;

    /** @brief PLL2 DIVS divider output enable */
    using RCC_PLLCFGR_PLL2SEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_s_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_s_ck output enabled (value: 1)
     */
        /** @brief pll2_s_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2SEN_B_0x0 = 0;
        /** @brief pll2_s_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2SEN_B_0x1 = 1;

    /** @brief PLL2 DIVT divider output enable */
    using RCC_PLLCFGR_PLL2TEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_t_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_t_ck output enabled (value: 1)
     */
        /** @brief pll2_t_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2TEN_B_0x0 = 0;
        /** @brief pll2_t_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2TEN_B_0x1 = 1;

    /** @brief PLL3 fractional latch enable */
    using RCC_PLLCFGR_PLL3FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 VCO selection */
    using RCC_PLLCFGR_PLL3VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VCOH selected (default after reset) (value: 0)
     *          - B_0x1: VCOL selected (value: 1)
     */
        /** @brief VCOH selected (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3VCOSEL_B_0x0 = 0;
        /** @brief VCOL selected */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3VCOSEL_B_0x1 = 1;

    /** @brief PLL3 SSCG enable */
    using RCC_PLLCFGR_PLL3SSCGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SSCG disabled (default after reset) (value: 0)
     *          - B_0x1: SSCG enabled (value: 1)
     */
        /** @brief SSCG disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3SSCGEN_B_0x0 = 0;
        /** @brief SSCG enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3SSCGEN_B_0x1 = 1;

    /** @brief PLL3 input frequency range */
    using RCC_PLLCFGR_PLL3RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 input (ref3_ck) clock range frequency between 1 and 2 MHz (default after reset) (value: 0)
     *          - B_0x1: PLL3 input (ref3_ck) clock range frequency between 2 and 4 MHz (value: 1)
     *          - B_0x2: PLL3 input (ref3_ck) clock range frequency between 4 and 8 MHz (value: 2)
     *          - B_0x3: PLL3 input (ref3_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL3 input (ref3_ck) clock range frequency between 1 and 2 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3RGE_B_0x0 = 0;
        /** @brief PLL3 input (ref3_ck) clock range frequency between 2 and 4 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3RGE_B_0x1 = 1;
        /** @brief PLL3 input (ref3_ck) clock range frequency between 4 and 8 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3RGE_B_0x2 = 2;
        /** @brief PLL3 input (ref3_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3RGE_B_0x3 = 3;

    /** @brief PLL3 DIVP divider output enable */
    using RCC_PLLCFGR_PLL3PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll3_p_ck output enabled (value: 1)
     */
        /** @brief pll3_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3PEN_B_0x0 = 0;
        /** @brief pll3_p_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3PEN_B_0x1 = 1;

    /** @brief PLL3 DIVQ divider output enable */
    using RCC_PLLCFGR_PLL3QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_q_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll3_q_ck output enabled (value: 1)
     */
        /** @brief pll3_q_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3QEN_B_0x0 = 0;
        /** @brief pll3_q_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3QEN_B_0x1 = 1;

    /** @brief PLL3 DIVR divider output enable */
    using RCC_PLLCFGR_PLL3REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_r_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck output enabled (value: 1)
     */
        /** @brief pll3_r_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3REN_B_0x0 = 0;
        /** @brief pll3_r_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3REN_B_0x1 = 1;

    /** @brief PLL3 DIVS divider output enable */
    using RCC_PLLCFGR_PLL3SEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_s_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll3_s_ck output enabled (value: 1)
     */
        /** @brief pll3_s_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3SEN_B_0x0 = 0;
        /** @brief pll3_s_ck output enabled */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3SEN_B_0x1 = 1;

    /** @brief RCC PLL1 dividers configuration register 1 */
    using RCC_PLL1DIVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief multiplication factor for PLL1 VCO */
    using RCC_PLL1DIVR1_DIVN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x006: wrong configuration (value: 6)
     *          - B_0x007: DIVN = 8 (value: 7)
     *          - B_0x080: DIVN = 129 (default after reset) (value: 128)
     *          - B_0x1A3: DIVN = 420 (value: 419)
     */
        /** @brief wrong configuration */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVN_B_0x006 = 6;
        /** @brief DIVN = 8 */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVN_B_0x007 = 7;
        /** @brief DIVN = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVN_B_0x080 = 128;
        /** @brief DIVN = 420 */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVN_B_0x1A3 = 419;

    /** @brief PLL1 DIVP division factor */
    using RCC_PLL1DIVR1_DIVP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_p_ck = vco1_ck (value: 0)
     *          - B_0x1: pll1_p_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: not allowed (value: 2)
     *          - B_0x3: pll1_p_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_p_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief pll1_p_ck = vco1_ck */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVP_B_0x0 = 0;
        /** @brief pll1_p_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVP_B_0x1 = 1;
        /** @brief not allowed */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVP_B_0x2 = 2;
        /** @brief pll1_p_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVP_B_0x3 = 3;
        /** @brief pll1_p_ck = vco1_ck / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVP_B_0x7F = 127;

    /** @brief PLL1 DIVQ division factor */
    using RCC_PLL1DIVR1_DIVQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck = vco1_ck (value: 0)
     *          - B_0x1: pll1_q_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1_q_ck = vco1_ck / 3 (value: 2)
     *          - B_0x3: pll1_q_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_q_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief pll1_q_ck = vco1_ck */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVQ_B_0x0 = 0;
        /** @brief pll1_q_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVQ_B_0x1 = 1;
        /** @brief pll1_q_ck = vco1_ck / 3 */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVQ_B_0x2 = 2;
        /** @brief pll1_q_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVQ_B_0x3 = 3;
        /** @brief pll1_q_ck = vco1_ck / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR1_DIVQ_B_0x7F = 127;

    /** @brief RCC PLL1 fractional divider register */
    using RCC_PLL1FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fractional part of the multiplication factor for PLL1 VCO */
    using RCC_PLL1FRACR_FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL2 dividers configuration register 1 */
    using RCC_PLL2DIVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief multiplication factor for PLL2 VCO */
    using RCC_PLL2DIVR1_DIVN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x006: wrong configuration (value: 6)
     *          - B_0x007: DIVN = 8 (value: 7)
     *          - B_0x080: DIVN = 129 (default after reset) (value: 128)
     *          - B_0x1A3: DIVN = 420 (value: 419)
     */
        /** @brief wrong configuration */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVN_B_0x006 = 6;
        /** @brief DIVN = 8 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVN_B_0x007 = 7;
        /** @brief DIVN = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVN_B_0x080 = 128;
        /** @brief DIVN = 420 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVN_B_0x1A3 = 419;

    /** @brief PLL2 DIVP division factor */
    using RCC_PLL2DIVR1_DIVP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_p_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_p_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_p_ck = vco2_ck / 4 (value: 3)
     *          - B_0x7F: pll2_p_ck = vco2_ck / 128 (value: 127)
     */
        /** @brief pll2_p_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVP_B_0x0 = 0;
        /** @brief pll2_p_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVP_B_0x1 = 1;
        /** @brief pll2_p_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVP_B_0x2 = 2;
        /** @brief pll2_p_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVP_B_0x3 = 3;
        /** @brief pll2_p_ck = vco2_ck / 128 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVP_B_0x7F = 127;

    /** @brief PLL2 DIVQ division factor */
    using RCC_PLL2DIVR1_DIVQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_q_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_q_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_q_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_q_ck = vco2_ck / 4 (value: 3)
     *          - B_0x7F: pll2_q_ck = vco2_ck / 128 (value: 127)
     */
        /** @brief pll2_q_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVQ_B_0x0 = 0;
        /** @brief pll2_q_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVQ_B_0x1 = 1;
        /** @brief pll2_q_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVQ_B_0x2 = 2;
        /** @brief pll2_q_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVQ_B_0x3 = 3;
        /** @brief pll2_q_ck = vco2_ck / 128 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVQ_B_0x7F = 127;

    /** @brief PLL2 DIVR division factor */
    using RCC_PLL2DIVR1_DIVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_r_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_r_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_r_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_r_ck = vco2_ck / 4 (value: 3)
     *          - B_0x7F: pll2_r_ck = vco2_ck / 128 (value: 127)
     */
        /** @brief pll2_r_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVR_B_0x0 = 0;
        /** @brief pll2_r_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVR_B_0x1 = 1;
        /** @brief pll2_r_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVR_B_0x2 = 2;
        /** @brief pll2_r_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVR_B_0x3 = 3;
        /** @brief pll2_r_ck = vco2_ck / 128 */
    constexpr std::uint32_t RCC_PLL2DIVR1_DIVR_B_0x7F = 127;

    /** @brief RCC PLL2 fractional divider register */
    using RCC_PLL2FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fractional part of the multiplication factor for PLL2 VCO */
    using RCC_PLL2FRACR_FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL3 dividers configuration register 1 */
    using RCC_PLL3DIVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL3 VCO */
    using RCC_PLL3DIVR1_DIVN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x006: wrong configuration (value: 6)
     *          - B_0x007: DIVN = 8 (value: 7)
     *          - B_0x080: DIVN = 129 (default after reset) (value: 128)
     *          - B_0x1A3: DIVN = 420 (value: 419)
     */
        /** @brief wrong configuration */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVN_B_0x006 = 6;
        /** @brief DIVN = 8 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVN_B_0x007 = 7;
        /** @brief DIVN = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVN_B_0x080 = 128;
        /** @brief DIVN = 420 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVN_B_0x1A3 = 419;

    /** @brief PLL3 DIVP division factor */
    using RCC_PLL3DIVR1_DIVP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_p_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_p_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_p_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_p_ck = vco3_ck / 4 (value: 3)
     *          - B_0x7F: pll3_p_ck = vco3_ck / 128 (value: 127)
     */
        /** @brief pll3_p_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVP_B_0x0 = 0;
        /** @brief pll3_p_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVP_B_0x1 = 1;
        /** @brief pll3_p_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVP_B_0x2 = 2;
        /** @brief pll3_p_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVP_B_0x3 = 3;
        /** @brief pll3_p_ck = vco3_ck / 128 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVP_B_0x7F = 127;

    /** @brief PLL3 DIVQ division factor */
    using RCC_PLL3DIVR1_DIVQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_q_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_q_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_q_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_q_ck = vco3_ck / 4 (value: 3)
     *          - B_0x7F: pll3_q_ck = vco3_ck / 128 (value: 127)
     */
        /** @brief pll3_q_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVQ_B_0x0 = 0;
        /** @brief pll3_q_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVQ_B_0x1 = 1;
        /** @brief pll3_q_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVQ_B_0x2 = 2;
        /** @brief pll3_q_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVQ_B_0x3 = 3;
        /** @brief pll3_q_ck = vco3_ck / 128 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVQ_B_0x7F = 127;

    /** @brief PLL3 DIVR division factor */
    using RCC_PLL3DIVR1_DIVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_r_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_r_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_r_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_r_ck = vco3_ck / 4 (value: 3)
     *          - B_0x7F: pll3_r_ck = vco3_ck / 128 (value: 127)
     */
        /** @brief pll3_r_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVR_B_0x0 = 0;
        /** @brief pll3_r_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVR_B_0x1 = 1;
        /** @brief pll3_r_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVR_B_0x2 = 2;
        /** @brief pll3_r_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVR_B_0x3 = 3;
        /** @brief pll3_r_ck = vco3_ck / 128 */
    constexpr std::uint32_t RCC_PLL3DIVR1_DIVR_B_0x7F = 127;

    /** @brief RCC PLL3 fractional divider register */
    using RCC_PLL3FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fractional part of the multiplication factor for PLL3 VCO */
    using RCC_PLL3FRACR_FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB peripheral kernel clock selection register */
    using RCC_CCIPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC kernel clock source selection */
    using RCC_CCIPR1_FMCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll2_r_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel peripheral clock (value: 3)
     */
        /** @brief hclk5 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_FMCSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_FMCSEL_B_0x1 = 1;
        /** @brief pll2_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_FMCSEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_FMCSEL_B_0x3 = 3;

    /** @brief SDMMC1 and SDMMC2 kernel clock source selection */
    using RCC_CCIPR1_SDMMC12SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_s_ck selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_t_ck selected as kernel peripheral clock (value: 1)
     */
        /** @brief pll2_s_ck selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_SDMMC12SEL_B_0x0 = 0;
        /** @brief pll2_t_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_SDMMC12SEL_B_0x1 = 1;

    /** @brief XSPI1 kernel clock source selection */
    using RCC_CCIPR1_XSPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_s_ck selected as kernel peripheral clock (value: 1)
     */
        /** @brief hclk5 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_XSPI1SEL_B_0x0 = 0;
        /** @brief pll2_s_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_XSPI1SEL_B_0x1 = 1;

    /** @brief XSPI2 kernel clock source selection */
    using RCC_CCIPR1_XSPI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_s_ck selected as kernel peripheral clock (value: 1)
     */
        /** @brief hclk5 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_XSPI2SEL_B_0x0 = 0;
        /** @brief pll2_s_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_XSPI2SEL_B_0x1 = 1;

    /** @brief USBPHYC kernel clock frequency selection */
    using RCC_CCIPR1_USBREFCKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: The kernel clock frequency provided to the USBPHYC is 16 MHz (value: 3)
     *          - B_0x8: The kernel clock frequency provided to the USBPHYC is 19. (value: 8)
     *          - B_0x9: The kernel clock frequency provided to the USBPHYC is 20MHz (value: 9)
     *          - B_0xA: The kernel clock frequency provided to the USBPHYC is 24 MHz (default after reset) (value: 10)
     *          - B_0xE: The kernel clock frequency provided to the USBPHYC is 26 MHz (value: 14)
     *          - B_0xB: The kernel clock frequency provided to the USBPHYC is 32 MHz (value: 11)
     */
        /** @brief The kernel clock frequency provided to the USBPHYC is 16 MHz */
    constexpr std::uint32_t RCC_CCIPR1_USBREFCKSEL_B_0x3 = 3;
        /** @brief The kernel clock frequency provided to the USBPHYC is 19. */
    constexpr std::uint32_t RCC_CCIPR1_USBREFCKSEL_B_0x8 = 8;
        /** @brief The kernel clock frequency provided to the USBPHYC is 20MHz */
    constexpr std::uint32_t RCC_CCIPR1_USBREFCKSEL_B_0x9 = 9;
        /** @brief The kernel clock frequency provided to the USBPHYC is 24 MHz (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USBREFCKSEL_B_0xA = 10;
        /** @brief The kernel clock frequency provided to the USBPHYC is 26 MHz */
    constexpr std::uint32_t RCC_CCIPR1_USBREFCKSEL_B_0xE = 14;
        /** @brief The kernel clock frequency provided to the USBPHYC is 32 MHz */
    constexpr std::uint32_t RCC_CCIPR1_USBREFCKSEL_B_0xB = 11;

    /** @brief USBPHYC kernel clock source selection */
    using RCC_CCIPR1_USBPHYCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hse_ker_ck (default after reset) (value: 0)
     *          - B_0x1: hse_ker_ck / 2 (value: 1)
     *          - B_0x2: pll3_q_ck (value: 2)
     */
        /** @brief hse_ker_ck (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USBPHYCSEL_B_0x0 = 0;
        /** @brief hse_ker_ck / 2 */
    constexpr std::uint32_t RCC_CCIPR1_USBPHYCSEL_B_0x1 = 1;
        /** @brief pll3_q_ck */
    constexpr std::uint32_t RCC_CCIPR1_USBPHYCSEL_B_0x2 = 2;

    /** @brief OTGFS kernel clock source selection */
    using RCC_CCIPR1_OTGFSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi48_ker_ck (default after reset) (value: 0)
     *          - B_0x1: pll3_q_ck (value: 1)
     *          - B_0x2: hse_ker_ck (value: 2)
     *          - B_0x3: clk48mohci (value: 3)
     */
        /** @brief hsi48_ker_ck (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_OTGFSSEL_B_0x0 = 0;
        /** @brief pll3_q_ck */
    constexpr std::uint32_t RCC_CCIPR1_OTGFSSEL_B_0x1 = 1;
        /** @brief hse_ker_ck */
    constexpr std::uint32_t RCC_CCIPR1_OTGFSSEL_B_0x2 = 2;
        /** @brief clk48mohci */
    constexpr std::uint32_t RCC_CCIPR1_OTGFSSEL_B_0x3 = 3;

    /** @brief Ethernet reference clock source selection */
    using RCC_CCIPR1_ETH1REFCKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAD ETH_RMII_REF_CLK selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: hse_ker_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: eth_clk_fb selected as kernel peripheral clock (value: 2)
     */
        /** @brief PAD ETH_RMII_REF_CLK selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_ETH1REFCKSEL_B_0x0 = 0;
        /** @brief hse_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_ETH1REFCKSEL_B_0x1 = 1;
        /** @brief eth_clk_fb selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_ETH1REFCKSEL_B_0x2 = 2;

    /** @brief Clock source selection for external Ethernet PHY */
    using RCC_CCIPR1_ETH1PHYCKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hse_ker_ck selected as clock source (default after reset) (value: 0)
     *          - B_0x1: pll3_s_ck selected clock source (value: 1)
     */
        /** @brief hse_ker_ck selected as clock source (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_ETH1PHYCKSEL_B_0x0 = 0;
        /** @brief pll3_s_ck selected clock source */
    constexpr std::uint32_t RCC_CCIPR1_ETH1PHYCKSEL_B_0x1 = 1;

    /** @brief ADF kernel clock source selection */
    using RCC_CCIPR1_ADF1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk1 selected as ADF kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as ADF kernel clock (value: 1)
     */
        /** @brief hclk1 selected as ADF kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as ADF kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x1 = 1;

    /** @brief SAR ADC kernel clock source selection */
    using RCC_CCIPR1_ADCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: per_ck selected as kernel peripheral clock (value: 2)
     */
        /** @brief pll2_p_ck selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_ADCSEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_ADCSEL_B_0x1 = 1;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_ADCSEL_B_0x2 = 2;

    /** @brief PSSI kernel clock source selection */
    using RCC_CCIPR1_PSSISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_r_ck selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: per_ck selected as kernel peripheral clock (value: 1)
     */
        /** @brief pll3_r_ck selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_PSSISEL_B_0x0 = 0;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR1_PSSISEL_B_0x1 = 1;

    /** @brief per_ck clock source selection */
    using RCC_CCIPR1_CKPERSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ker_ck selected as per_ck clock (default after reset) (value: 0)
     *          - B_0x1: csi_ker_ck selected as per_ck clock (value: 1)
     *          - B_0x2: hse_ker_ck selected as per_ck clock (value: 2)
     */
        /** @brief hsi_ker_ck selected as per_ck clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_CKPERSEL_B_0x0 = 0;
        /** @brief csi_ker_ck selected as per_ck clock */
    constexpr std::uint32_t RCC_CCIPR1_CKPERSEL_B_0x1 = 1;
        /** @brief hse_ker_ck selected as per_ck clock */
    constexpr std::uint32_t RCC_CCIPR1_CKPERSEL_B_0x2 = 2;

    /** @brief RCC APB1 peripherals kernel clock selection register */
    using RCC_CCIPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2,3, UART4,5,7,8 (APB1) kernel clock source selection */
    using RCC_CCIPR2_UART234578SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_UART234578SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART234578SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART234578SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART234578SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART234578SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART234578SEL_B_0x5 = 5;

    /** @brief SPI/I2S2 and SPI/I2S3 kernel clock source selection */
    using RCC_CCIPR2_SPI23SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as kernel clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as kernel clock (value: 3)
     *          - B_0x4: per_ck selected as kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_SPI23SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_SPI23SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_SPI23SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_SPI23SEL_B_0x3 = 3;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_SPI23SEL_B_0x4 = 4;

    /** @brief I2C2, I2C3 kernel clock source selection */
    using RCC_CCIPR2_I2C23SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: csi_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_I2C23SEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_I2C23SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_I2C23SEL_B_0x2 = 2;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_I2C23SEL_B_0x3 = 3;

    /** @brief I2C1 or I3C1 kernel clock source selection */
    using RCC_CCIPR2_I2C1_I3C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: csi_ker_ck selected as kernel peripheral clock (value: 3)
     */
        /** @brief pclk1 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_I2C1_I3C1SEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR2_I2C1_I3C1SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR2_I2C1_I3C1SEL_B_0x2 = 2;
        /** @brief csi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR2_I2C1_I3C1SEL_B_0x3 = 3;

    /** @brief LPTIM1 kernel clock source selection */
    using RCC_CCIPR2_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: lse_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: lsi_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: per_ck selected as kernel peripheral clock (value: 5)
     */
        /** @brief pclk1 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x2 = 2;
        /** @brief lse_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x5 = 5;

    /** @brief FDCAN kernel clock source selection */
    using RCC_CCIPR2_FDCANSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hse_ker_ck selected as FDCAN kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as FDCAN kernel clock (value: 1)
     *          - B_0x2: pll2_p_ck selected as FDCAN kernel clock (value: 2)
     */
        /** @brief hse_ker_ck selected as FDCAN kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_FDCANSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as FDCAN kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_FDCANSEL_B_0x1 = 1;
        /** @brief pll2_p_ck selected as FDCAN kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_FDCANSEL_B_0x2 = 2;

    /** @brief SPDIFRX kernel clock source selection */
    using RCC_CCIPR2_SPDIFRXSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as SPDIFRX kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck selected as SPDIFRX kernel clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as SPDIFRX kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as SPDIFRX kernel clock (value: 3)
     */
        /** @brief pll1_q_ck selected as SPDIFRX kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_SPDIFRXSEL_B_0x0 = 0;
        /** @brief pll2_r_ck selected as SPDIFRX kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_SPDIFRXSEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as SPDIFRX kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_SPDIFRXSEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as SPDIFRX kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_SPDIFRXSEL_B_0x3 = 3;

    /** @brief HDMI-CEC kernel clock source selection */
    using RCC_CCIPR2_CECSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lse_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: lsi_ck selected as kernel clock (value: 1)
     *          - B_0x2: csi_ker_ck divided by 122 selected as kernel clock (value: 2)
     */
        /** @brief lse_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_CECSEL_B_0x0 = 0;
        /** @brief lsi_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_CECSEL_B_0x1 = 1;
        /** @brief csi_ker_ck divided by 122 selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_CECSEL_B_0x2 = 2;

    /** @brief RCC APB2 peripherals kernel clock selection register */
    using RCC_CCIPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 kernel clock source selection */
    using RCC_CCIPR3_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief pclk2 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_USART1SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_USART1SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_USART1SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_USART1SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_USART1SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_USART1SEL_B_0x5 = 5;

    /** @brief SPI4 and 5 kernel clock source selection */
    using RCC_CCIPR3_SPI45SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck is selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck is selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck is selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck is selected as kernel clock (value: 4)
     *          - B_0x5: hse_ker_ck is selected as kernel clock (value: 5)
     */
        /** @brief pclk2 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI45SEL_B_0x0 = 0;
        /** @brief pll2_q_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI45SEL_B_0x1 = 1;
        /** @brief pll3_q_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI45SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI45SEL_B_0x3 = 3;
        /** @brief csi_ker_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI45SEL_B_0x4 = 4;
        /** @brief hse_ker_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI45SEL_B_0x5 = 5;

    /** @brief SPI/I2S1 kernel clock source selection */
    using RCC_CCIPR3_SPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as SPI/I2S1 and 7 kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as SPI/I2S1 and 7 kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as SPI/I2S1 and 7 kernel clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as SPI/I2S1 and 7 kernel clock (value: 3)
     *          - B_0x4: per_ck selected as SPI/I2S1,and 7 kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as SPI/I2S1 and 7 kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as SPI/I2S1 and 7 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as SPI/I2S1 and 7 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as SPI/I2S1 and 7 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x3 = 3;
        /** @brief per_ck selected as SPI/I2S1,and 7 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x4 = 4;

    /** @brief SAI1 kernel clock source selection */
    using RCC_CCIPR3_SAI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as SAI1 kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as SAI1 kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as SAI1 kernel clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as SAI1 kernel clock (value: 3)
     *          - B_0x4: per_ck selected as SAI1 kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as SAI1 kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SAI1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as SAI1 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SAI1SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as SAI1 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SAI1SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as SAI1 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SAI1SEL_B_0x3 = 3;
        /** @brief per_ck selected as SAI1 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SAI1SEL_B_0x4 = 4;

    /** @brief SAI2 kernel clock source selection */
    using RCC_CCIPR3_SAI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as SAI2 kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as SAI2 kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as SAI2 kernel clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as SAI2 kernel clock (value: 3)
     *          - B_0x4: per_ck selected as SAI2 kernel clock (value: 4)
     *          - B_0x5: spdifrx_symb_ck selected as SAI2 kernel clock (value: 5)
     */
        /** @brief pll1_q_ck selected as SAI2 kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SAI2SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as SAI2 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SAI2SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as SAI2 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SAI2SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as SAI2 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SAI2SEL_B_0x3 = 3;
        /** @brief per_ck selected as SAI2 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SAI2SEL_B_0x4 = 4;
        /** @brief spdifrx_symb_ck selected as SAI2 kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SAI2SEL_B_0x5 = 5;

    /** @brief RCC APB4,5 peripherals kernel clock selection register */
    using RCC_CCIPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 kernel clock source selection */
    using RCC_CCIPR4_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel peripheral clock (value: 5)
     */
        /** @brief pclk4 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_LPUART1SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPUART1SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPUART1SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPUART1SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPUART1SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPUART1SEL_B_0x5 = 5;

    /** @brief SPI/I2S6 kernel clock source selection */
    using RCC_CCIPR4_SPI6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: hse_ker_ck selected as kernel peripheral clock (value: 5)
     */
        /** @brief pclk4 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_SPI6SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_SPI6SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_SPI6SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_SPI6SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_SPI6SEL_B_0x4 = 4;
        /** @brief hse_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_SPI6SEL_B_0x5 = 5;

    /** @brief LPTIM2 and LPTIM3 kernel clock source selection */
    using RCC_CCIPR4_LPTIM23SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: lse_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: lsi_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: per_ck selected as kernel peripheral clock (value: 5)
     */
        /** @brief pclk4 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM23SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM23SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM23SEL_B_0x2 = 2;
        /** @brief lse_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM23SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM23SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM23SEL_B_0x5 = 5;

    /** @brief LPTIM4, and LPTIM5 kernel clock source selection */
    using RCC_CCIPR4_LPTIM45SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: lse_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: lsi_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: per_ck selected as kernel peripheral clock (value: 5)
     */
        /** @brief pclk4 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM45SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM45SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM45SEL_B_0x2 = 2;
        /** @brief lse_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM45SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM45SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CCIPR4_LPTIM45SEL_B_0x5 = 5;

    /** @brief RCC clock source interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt enable */
    using RCC_CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: LSI ready interrupt enabled (value: 1)
     */
        /** @brief LSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x0 = 0;
        /** @brief LSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x1 = 1;

    /** @brief LSE ready interrupt enable */
    using RCC_CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: LSE ready interrupt enabled (value: 1)
     */
        /** @brief LSE ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x0 = 0;
        /** @brief LSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x1 = 1;

    /** @brief HSI ready interrupt enable */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSI ready interrupt enabled (value: 1)
     */
        /** @brief HSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief HSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE ready interrupt enable */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSE ready interrupt enabled (value: 1)
     */
        /** @brief HSE ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

    /** @brief CSI ready interrupt enable */
    using RCC_CIER_CSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: CSI ready interrupt enabled (value: 1)
     */
        /** @brief CSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_CSIRDYIE_B_0x0 = 0;
        /** @brief CSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_CSIRDYIE_B_0x1 = 1;

    /** @brief HSI48 ready interrupt enable */
    using RCC_CIER_HSI48RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSI48 ready interrupt enabled (value: 1)
     */
        /** @brief HSI48 ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x0 = 0;
        /** @brief HSI48 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x1 = 1;

    /** @brief PLL1 ready interrupt enable */
    using RCC_CIER_PLL1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL1 lock interrupt enabled (value: 1)
     */
        /** @brief PLL1 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x0 = 0;
        /** @brief PLL1 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x1 = 1;

    /** @brief PLL2 ready interrupt enable */
    using RCC_CIER_PLL2RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL2 lock interrupt enabled (value: 1)
     */
        /** @brief PLL2 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL2RDYIE_B_0x0 = 0;
        /** @brief PLL2 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL2RDYIE_B_0x1 = 1;

    /** @brief PLL3 ready interrupt enable */
    using RCC_CIER_PLL3RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL3 lock interrupt enabled (value: 1)
     */
        /** @brief PLL3 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL3RDYIE_B_0x0 = 0;
        /** @brief PLL3 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL3RDYIE_B_0x1 = 1;

    /** @brief LSE clock security system interrupt enable */
    using RCC_CIER_LSECSSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE CSS interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: LSE CSS interrupt enabled (value: 1)
     */
        /** @brief LSE CSS interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x0 = 0;
        /** @brief LSE CSS interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x1 = 1;

    /** @brief RCC clock source interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt flag */
    using RCC_CIFR_LSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSI */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSE */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief HSI ready interrupt flag */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSI */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSE */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief CSI ready interrupt flag */
    using RCC_CIFR_CSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the CSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the CSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the CSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_CSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the CSI */
    constexpr std::uint32_t RCC_CIFR_CSIRDYF_B_0x1 = 1;

    /** @brief HSI48 ready interrupt flag */
    using RCC_CIFR_HSI48RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSI48 oscillator (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSI48 oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSI48 oscillator (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSI48 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x1 = 1;

    /** @brief PLL1 ready interrupt flag */
    using RCC_CIFR_PLL1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by PLL1 lock (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by PLL1 lock (value: 1)
     */
        /** @brief no clock ready interrupt caused by PLL1 lock (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by PLL1 lock */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x1 = 1;

    /** @brief PLL2 ready interrupt flag */
    using RCC_CIFR_PLL2RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by PLL2 lock (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by PLL2 lock (value: 1)
     */
        /** @brief no clock ready interrupt caused by PLL2 lock (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL2RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by PLL2 lock */
    constexpr std::uint32_t RCC_CIFR_PLL2RDYF_B_0x1 = 1;

    /** @brief PLL3 ready interrupt flag */
    using RCC_CIFR_PLL3RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by PLL3 lock (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by PLL3 lock (value: 1)
     */
        /** @brief no clock ready interrupt caused by PLL3 lock (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL3RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by PLL3 lock */
    constexpr std::uint32_t RCC_CIFR_PLL3RDYF_B_0x1 = 1;

    /** @brief LSE clock security system interrupt flag */
    using RCC_CIFR_LSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no failure detected on the external 32 kHz oscillator (default after reset) (value: 0)
     *          - B_0x1: failure detected on the external 32 kHz oscillator (value: 1)
     */
        /** @brief no failure detected on the external 32 kHz oscillator (default after reset) */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x0 = 0;
        /** @brief failure detected on the external 32 kHz oscillator */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x1 = 1;

    /** @brief HSE clock security system interrupt flag */
    using RCC_CIFR_HSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock security interrupt caused by HSE clock failure (default after reset) (value: 0)
     *          - B_0x1: clock security interrupt caused by HSE clock failure (value: 1)
     */
        /** @brief no clock security interrupt caused by HSE clock failure (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x0 = 0;
        /** @brief clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x1 = 1;

    /** @brief RCC clock source interrupt clear register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt clear */
    using RCC_CICR_LSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: LSIRDYF cleared (value: 1)
     */
        /** @brief LSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x0 = 0;
        /** @brief LSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x1 = 1;

    /** @brief LSE ready interrupt clear */
    using RCC_CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSERDYF no effect (default after reset) (value: 0)
     *          - B_0x1: LSERDYF cleared (value: 1)
     */
        /** @brief LSERDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x0 = 0;
        /** @brief LSERDYF cleared */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x1 = 1;

    /** @brief HSI ready interrupt clear */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSIRDYF cleared (value: 1)
     */
        /** @brief HSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x0 = 0;
        /** @brief HSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x1 = 1;

    /** @brief HSE ready interrupt clear */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSERDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSERDYF cleared (value: 1)
     */
        /** @brief HSERDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x0 = 0;
        /** @brief HSERDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x1 = 1;

    /** @brief CSI ready interrupt clear */
    using RCC_CICR_CSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: CSIRDYF cleared (value: 1)
     */
        /** @brief CSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_CSIRDYC_B_0x0 = 0;
        /** @brief CSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_CSIRDYC_B_0x1 = 1;

    /** @brief HSI48 ready interrupt clear */
    using RCC_CICR_HSI48RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48RDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSI48RDYF cleared (value: 1)
     */
        /** @brief HSI48RDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSI48RDYC_B_0x0 = 0;
        /** @brief HSI48RDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSI48RDYC_B_0x1 = 1;

    /** @brief PLL1 ready interrupt clear */
    using RCC_CICR_PLL1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1RDYF no effect (default after reset) (value: 0)
     *          - B_0x1: PLL1RDYF cleared (value: 1)
     */
        /** @brief PLL1RDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL1RDYC_B_0x0 = 0;
        /** @brief PLL1RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL1RDYC_B_0x1 = 1;

    /** @brief PLL2 ready interrupt clear */
    using RCC_CICR_PLL2RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2RDYF no effect (default after reset) (value: 0)
     *          - B_0x1: PLL2RDYF cleared (value: 1)
     */
        /** @brief PLL2RDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL2RDYC_B_0x0 = 0;
        /** @brief PLL2RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL2RDYC_B_0x1 = 1;

    /** @brief PLL3 ready interrupt clear */
    using RCC_CICR_PLL3RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3RDYF no effect (default after reset) (value: 0)
     *          - B_0x1: PLL3RDYF cleared (value: 1)
     */
        /** @brief PLL3RDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL3RDYC_B_0x0 = 0;
        /** @brief PLL3RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL3RDYC_B_0x1 = 1;

    /** @brief LSE clock security system interrupt clear */
    using RCC_CICR_LSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSECSSF no effect (default after reset) (value: 0)
     *          - B_0x1: LSECSSF cleared (value: 1)
     */
        /** @brief LSECSSF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x0 = 0;
        /** @brief LSECSSF cleared */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x1 = 1;

    /** @brief HSE clock security system interrupt clear */
    using RCC_CICR_HSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSECSSF no effect (default after reset) (value: 0)
     *          - B_0x1: HSECSSF cleared (value: 1)
     */
        /** @brief HSECSSF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSECSSC_B_0x0 = 0;
        /** @brief HSECSSF cleared */
    constexpr std::uint32_t RCC_CICR_HSECSSC_B_0x1 = 1;

    /** @brief RCC Backup domain control register */
    using RCC_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enabled */
    using RCC_BDCR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator OFF (default after Backup domain reset) (value: 0)
     *          - B_0x1: LSE oscillator ON (value: 1)
     */
        /** @brief LSE oscillator OFF (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x0 = 0;
        /** @brief LSE oscillator ON */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x1 = 1;

    /** @brief LSE oscillator ready */
    using RCC_BDCR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not ready (default after Backup domain reset) (value: 0)
     *          - B_0x1: LSE oscillator ready (value: 1)
     */
        /** @brief LSE oscillator not ready (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x0 = 0;
        /** @brief LSE oscillator ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x1 = 1;

    /** @brief LSE oscillator bypass */
    using RCC_BDCR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not bypassed (default after Backup domain reset) (value: 0)
     *          - B_0x1: LSE oscillator bypassed (value: 1)
     */
        /** @brief LSE oscillator not bypassed (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x0 = 0;
        /** @brief LSE oscillator bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x1 = 1;

    /** @brief LSE oscillator driving capability */
    using RCC_BDCR_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lowest drive (value: 0)
     *          - B_0x1: medium-low drive (value: 1)
     *          - B_0x2: medium-high drive (default after backup domain if LSEON=0) (value: 2)
     *          - B_0x3: highest drive (value: 3)
     */
        /** @brief lowest drive */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x0 = 0;
        /** @brief medium-low drive */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x1 = 1;
        /** @brief medium-high drive (default after backup domain if LSEON=0) */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x2 = 2;
        /** @brief highest drive */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x3 = 3;

    /** @brief LSE clock security system enable */
    using RCC_BDCR_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSS on 32 kHz oscillator OFF (default after Backup domain reset) (value: 0)
     *          - B_0x1: CSS on 32 kHz oscillator ON (value: 1)
     */
        /** @brief CSS on 32 kHz oscillator OFF (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x0 = 0;
        /** @brief CSS on 32 kHz oscillator ON */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x1 = 1;

    /** @brief LSE clock security system failure detection */
    using RCC_BDCR_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no failure detected on 32 kHz oscillator (default after Backup domain reset) (value: 0)
     *          - B_0x1: failure detected on 32 kHz oscillator (value: 1)
     */
        /** @brief no failure detected on 32 kHz oscillator (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x0 = 0;
        /** @brief failure detected on 32 kHz oscillator */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x1 = 1;

    /** @brief low-speed external clock type in Bypass mode */
    using RCC_BDCR_LSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE in analog mode (default after Backup domain reset) (value: 0)
     *          - B_0x1: LSE in digital mode (do not use if RTC is active). (value: 1)
     */
        /** @brief LSE in analog mode (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSEEXT_B_0x0 = 0;
        /** @brief LSE in digital mode (do not use if RTC is active). */
    constexpr std::uint32_t RCC_BDCR_LSEEXT_B_0x1 = 1;

    /** @brief RTC clock source selection */
    using RCC_BDCR_RTCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock (default after Backup domain reset) (value: 0)
     *          - B_0x1: LSE selected as RTC clock (value: 1)
     *          - B_0x2: LSI selected as RTC clock (value: 2)
     *          - B_0x3: HSE divided by RTCPRE value selected as RTC clock (value: 3)
     */
        /** @brief no clock (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x0 = 0;
        /** @brief LSE selected as RTC clock */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x1 = 1;
        /** @brief LSI selected as RTC clock */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x2 = 2;
        /** @brief HSE divided by RTCPRE value selected as RTC clock */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x3 = 3;

    /** @brief Re-Arm the LSECSS function */
    using RCC_BDCR_LSECSSRA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect (default after Backup domain reset) (value: 0)
     *          - B_0x1: Writing 1 generates a re-arm pulse for the LSECSS function (value: 1)
     */
        /** @brief Writing 0 has no effect (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSECSSRA_B_0x0 = 0;
        /** @brief Writing 1 generates a re-arm pulse for the LSECSS function */
    constexpr std::uint32_t RCC_BDCR_LSECSSRA_B_0x1 = 1;

    /** @brief RTC clock enable */
    using RCC_BDCR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rtc_ck disabled (default after Backup domain reset) (value: 0)
     *          - B_0x1: rtc_ck enabled (value: 1)
     */
        /** @brief rtc_ck disabled (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x0 = 0;
        /** @brief rtc_ck enabled */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x1 = 1;

    /** @brief VSwitch domain software reset */
    using RCC_BDCR_VSWRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset not activated (default after Backup domain reset) (value: 0)
     *          - B_0x1: generates a reset pulse, resetting the entire VSW domain. (value: 1)
     */
        /** @brief reset not activated (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_VSWRST_B_0x0 = 0;
        /** @brief generates a reset pulse, resetting the entire VSW domain. */
    constexpr std::uint32_t RCC_BDCR_VSWRST_B_0x1 = 1;

    /** @brief RCC clock control and status register */
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable */
    using RCC_CSR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI is OFF (default after reset) (value: 0)
     *          - B_0x1: LSI is ON (value: 1)
     */
        /** @brief LSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x0 = 0;
        /** @brief LSI is ON */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x1 = 1;

    /** @brief LSI oscillator ready */
    using RCC_CSR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: LSI clock is ready (value: 1)
     */
        /** @brief LSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x0 = 0;
        /** @brief LSI clock is ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x1 = 1;

    /** @brief RCC AHB5 peripheral reset register */
    using RCC_AHB5RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 block reset */
    using RCC_AHB5RSTR_HPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_HPDMA1RST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_HPDMA1RST_B_0x1 = 1;

    /** @brief DMA2D block reset */
    using RCC_AHB5RSTR_DMA2DRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_DMA2DRST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_DMA2DRST_B_0x1 = 1;

    /** @brief JPEG block reset */
    using RCC_AHB5RSTR_JPEGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_JPEGRST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_JPEGRST_B_0x1 = 1;

    /** @brief FMC and MCE3 blocks reset */
    using RCC_AHB5RSTR_FMCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_FMCRST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_FMCRST_B_0x1 = 1;

    /** @brief XSPI1 and MCE1 blocks reset */
    using RCC_AHB5RSTR_XSPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI1RST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI1RST_B_0x1 = 1;

    /** @brief SDMMC1 and DB_SDMMC1 blocks reset */
    using RCC_AHB5RSTR_SDMMC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_SDMMC1RST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_SDMMC1RST_B_0x1 = 1;

    /** @brief XSPI2 and MCE2 blocks reset */
    using RCC_AHB5RSTR_XSPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI2RST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI2RST_B_0x1 = 1;

    /** @brief XSPIM reset */
    using RCC_AHB5RSTR_XSPIMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPIMRST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPIMRST_B_0x1 = 1;

    /** @brief GFXMMU block reset */
    using RCC_AHB5RSTR_GFXMMURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_GFXMMURST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_GFXMMURST_B_0x1 = 1;

    /** @brief GPU2D block reset */
    using RCC_AHB5RSTR_GPU2DRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset is released (default after reset) (value: 0)
     *          - B_0x1: reset is asserted (value: 1)
     */
        /** @brief reset is released (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_GPU2DRST_B_0x0 = 0;
        /** @brief reset is asserted */
    constexpr std::uint32_t RCC_AHB5RSTR_GPU2DRST_B_0x1 = 1;

    /** @brief RCC AHB1 peripheral reset register */
    using RCC_AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 blocks reset */
    using RCC_AHB1RSTR_GPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset GPDMA1 block (default after reset) (value: 0)
     *          - B_0x1: resets GPDMA1 block (value: 1)
     */
        /** @brief does not reset GPDMA1 block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x0 = 0;
        /** @brief resets GPDMA1 block */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x1 = 1;

    /** @brief ADC1 and 2 blocks reset */
    using RCC_AHB1RSTR_ADC12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset ADC1 and 2 blocks (default after reset) (value: 0)
     *          - B_0x1: resets ADC1 and 2 blocks (value: 1)
     */
        /** @brief does not reset ADC1 and 2 blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_ADC12RST_B_0x0 = 0;
        /** @brief resets ADC1 and 2 blocks */
    constexpr std::uint32_t RCC_AHB1RSTR_ADC12RST_B_0x1 = 1;

    /** @brief ETH1 block reset */
    using RCC_AHB1RSTR_ETH1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset ETH1 block (default after reset) (value: 0)
     *          - B_0x1: resets ETH1 block (value: 1)
     */
        /** @brief does not reset ETH1 block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_ETH1RST_B_0x0 = 0;
        /** @brief resets ETH1 block */
    constexpr std::uint32_t RCC_AHB1RSTR_ETH1RST_B_0x1 = 1;

    /** @brief OTGHS block reset */
    using RCC_AHB1RSTR_OTGHSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset OTGHS block (default after reset) (value: 0)
     *          - B_0x1: resets OTGHS block (value: 1)
     */
        /** @brief does not reset OTGHS block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_OTGHSRST_B_0x0 = 0;
        /** @brief resets OTGHS block */
    constexpr std::uint32_t RCC_AHB1RSTR_OTGHSRST_B_0x1 = 1;

    /** @brief USBPHYC block reset */
    using RCC_AHB1RSTR_USBPHYCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset USBPHYC block (default after reset) (value: 0)
     *          - B_0x1: resets USBPHYC block (value: 1)
     */
        /** @brief does not reset USBPHYC block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_USBPHYCRST_B_0x0 = 0;
        /** @brief resets USBPHYC block */
    constexpr std::uint32_t RCC_AHB1RSTR_USBPHYCRST_B_0x1 = 1;

    /** @brief OTGFS block reset */
    using RCC_AHB1RSTR_OTGFSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset OTGFS block (default after reset) (value: 0)
     *          - B_0x1: resets OTGFS block (value: 1)
     */
        /** @brief does not reset OTGFS block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_OTGFSRST_B_0x0 = 0;
        /** @brief resets OTGFS block */
    constexpr std::uint32_t RCC_AHB1RSTR_OTGFSRST_B_0x1 = 1;

    /** @brief ADF block reset */
    using RCC_AHB1RSTR_ADF1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset ADF block (default after reset) (value: 0)
     *          - B_0x1: resets ADF block (value: 1)
     */
        /** @brief does not reset ADF block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_ADF1RST_B_0x0 = 0;
        /** @brief resets ADF block */
    constexpr std::uint32_t RCC_AHB1RSTR_ADF1RST_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral reset register */
    using RCC_AHB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI block reset */
    using RCC_AHB2RSTR_PSSIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset PSSI block (default after reset) (value: 0)
     *          - B_0x1: resets PSSI block (value: 1)
     */
        /** @brief does not reset PSSI block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_PSSIRST_B_0x0 = 0;
        /** @brief resets PSSI block */
    constexpr std::uint32_t RCC_AHB2RSTR_PSSIRST_B_0x1 = 1;

    /** @brief SDMMC2 and SDMMC2 delay blocks reset */
    using RCC_AHB2RSTR_SDMMC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset SDMMC2 and SDMMC2 delay blocks (default after reset) (value: 0)
     *          - B_0x1: resets SDMMC2 and SDMMC2 delay blocks (value: 1)
     */
        /** @brief does not reset SDMMC2 and SDMMC2 delay blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_SDMMC2RST_B_0x0 = 0;
        /** @brief resets SDMMC2 and SDMMC2 delay blocks */
    constexpr std::uint32_t RCC_AHB2RSTR_SDMMC2RST_B_0x1 = 1;

    /** @brief CORDIC reset */
    using RCC_AHB2RSTR_CORDICRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset CORDIC block (default after reset) (value: 0)
     *          - B_0x1: resets CORDIC block (value: 1)
     */
        /** @brief does not reset CORDIC block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_CORDICRST_B_0x0 = 0;
        /** @brief resets CORDIC block */
    constexpr std::uint32_t RCC_AHB2RSTR_CORDICRST_B_0x1 = 1;

    /** @brief RCC AHB4 peripheral reset register */
    using RCC_AHB4RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA block reset */
    using RCC_AHB4RSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOA block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOA block (value: 1)
     */
        /** @brief does not reset the GPIOA block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOARST_B_0x0 = 0;
        /** @brief resets the GPIOA block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOARST_B_0x1 = 1;

    /** @brief GPIOB block reset */
    using RCC_AHB4RSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOB block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOB block (value: 1)
     */
        /** @brief does not reset the GPIOB block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOBRST_B_0x0 = 0;
        /** @brief resets the GPIOB block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOBRST_B_0x1 = 1;

    /** @brief GPIOC block reset */
    using RCC_AHB4RSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOC block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOC block (value: 1)
     */
        /** @brief does not reset the GPIOC block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOCRST_B_0x0 = 0;
        /** @brief resets the GPIOC block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOCRST_B_0x1 = 1;

    /** @brief GPIOD block reset */
    using RCC_AHB4RSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOD block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOD block (value: 1)
     */
        /** @brief does not reset the GPIOD block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIODRST_B_0x0 = 0;
        /** @brief resets the GPIOD block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIODRST_B_0x1 = 1;

    /** @brief GPIOE block reset */
    using RCC_AHB4RSTR_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOE block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOE block (value: 1)
     */
        /** @brief does not reset the GPIOE block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOERST_B_0x0 = 0;
        /** @brief resets the GPIOE block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOERST_B_0x1 = 1;

    /** @brief GPIOF block reset */
    using RCC_AHB4RSTR_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOF block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOF block (value: 1)
     */
        /** @brief does not reset the GPIOF block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOFRST_B_0x0 = 0;
        /** @brief resets the GPIOF block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOFRST_B_0x1 = 1;

    /** @brief GPIOG block reset */
    using RCC_AHB4RSTR_GPIOGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOG block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOG block (value: 1)
     */
        /** @brief does not reset the GPIOG block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOGRST_B_0x0 = 0;
        /** @brief resets the GPIOG block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOGRST_B_0x1 = 1;

    /** @brief GPIOH block reset */
    using RCC_AHB4RSTR_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOH block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOH block (value: 1)
     */
        /** @brief does not reset the GPIOH block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOHRST_B_0x0 = 0;
        /** @brief resets the GPIOH block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOHRST_B_0x1 = 1;

    /** @brief GPIOM block reset */
    using RCC_AHB4RSTR_GPIOMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOM block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOM block (value: 1)
     */
        /** @brief does not reset the GPIOM block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOMRST_B_0x0 = 0;
        /** @brief resets the GPIOM block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOMRST_B_0x1 = 1;

    /** @brief GPION block reset */
    using RCC_AHB4RSTR_GPIONRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPION block (default after reset) (value: 0)
     *          - B_0x1: resets the GPION block (value: 1)
     */
        /** @brief does not reset the GPION block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIONRST_B_0x0 = 0;
        /** @brief resets the GPION block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIONRST_B_0x1 = 1;

    /** @brief GPIOO block reset */
    using RCC_AHB4RSTR_GPIOORST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOO block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOO block (value: 1)
     */
        /** @brief does not reset the GPIOO block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOORST_B_0x0 = 0;
        /** @brief resets the GPIOO block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOORST_B_0x1 = 1;

    /** @brief GPIOP block reset */
    using RCC_AHB4RSTR_GPIOPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOP block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOP block (value: 1)
     */
        /** @brief does not reset the GPIOP block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOPRST_B_0x0 = 0;
        /** @brief resets the GPIOP block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOPRST_B_0x1 = 1;

    /** @brief CRC block reset */
    using RCC_AHB4RSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the CRC block (default after reset) (value: 0)
     *          - B_0x1: resets the CRC block (value: 1)
     */
        /** @brief does not reset the CRC block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_CRCRST_B_0x0 = 0;
        /** @brief resets the CRC block */
    constexpr std::uint32_t RCC_AHB4RSTR_CRCRST_B_0x1 = 1;

    /** @brief RCC APB5 peripheral reset register */
    using RCC_APB5RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC block reset */
    using RCC_APB5RSTR_LTDCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LTDC block (default after reset) (value: 0)
     *          - B_0x1: resets the LTDC block (value: 1)
     */
        /** @brief does not reset the LTDC block (default after reset) */
    constexpr std::uint32_t RCC_APB5RSTR_LTDCRST_B_0x0 = 0;
        /** @brief resets the LTDC block */
    constexpr std::uint32_t RCC_APB5RSTR_LTDCRST_B_0x1 = 1;

    /** @brief DCMIPP block reset */
    using RCC_APB5RSTR_DCMIPPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DCMIPP block (default after reset) (value: 0)
     *          - B_0x1: resets the DCMIPP block (value: 1)
     */
        /** @brief does not reset the DCMIPP block (default after reset) */
    constexpr std::uint32_t RCC_APB5RSTR_DCMIPPRST_B_0x0 = 0;
        /** @brief resets the DCMIPP block */
    constexpr std::uint32_t RCC_APB5RSTR_DCMIPPRST_B_0x1 = 1;

    /** @brief GFXTIM block reset */
    using RCC_APB5RSTR_GFXTIMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GFXTIM block (default after reset) (value: 0)
     *          - B_0x1: resets the GFXTIM block (value: 1)
     */
        /** @brief does not reset the GFXTIM block (default after reset) */
    constexpr std::uint32_t RCC_APB5RSTR_GFXTIMRST_B_0x0 = 0;
        /** @brief resets the GFXTIM block */
    constexpr std::uint32_t RCC_APB5RSTR_GFXTIMRST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 1 */
    using RCC_APB1RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 block reset */
    using RCC_APB1RSTR1_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM2 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM2 block (value: 1)
     */
        /** @brief does not reset the TIM2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x0 = 0;
        /** @brief resets the TIM2 block */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 block reset */
    using RCC_APB1RSTR1_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM3 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM3 block (value: 1)
     */
        /** @brief does not reset the TIM3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x0 = 0;
        /** @brief resets the TIM3 block */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x1 = 1;

    /** @brief TIM4 block reset */
    using RCC_APB1RSTR1_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM4 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM4 block (value: 1)
     */
        /** @brief does not reset the TIM4 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x0 = 0;
        /** @brief resets the TIM4 block */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x1 = 1;

    /** @brief TIM5 block reset */
    using RCC_APB1RSTR1_TIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM5 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM5 block (value: 1)
     */
        /** @brief does not reset the TIM5 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM5RST_B_0x0 = 0;
        /** @brief resets the TIM5 block */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM5RST_B_0x1 = 1;

    /** @brief TIM6 block reset */
    using RCC_APB1RSTR1_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM6 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM6 block (value: 1)
     */
        /** @brief does not reset the TIM6 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM6RST_B_0x0 = 0;
        /** @brief resets the TIM6 block */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM6RST_B_0x1 = 1;

    /** @brief TIM7 block reset */
    using RCC_APB1RSTR1_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM7 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM7 block (value: 1)
     */
        /** @brief does not reset the TIM7 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM7RST_B_0x0 = 0;
        /** @brief resets the TIM7 block */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM7RST_B_0x1 = 1;

    /** @brief TIM12 block reset */
    using RCC_APB1RSTR1_TIM12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM12 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM12 block (value: 1)
     */
        /** @brief does not reset the TIM12 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM12RST_B_0x0 = 0;
        /** @brief resets the TIM12 block */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM12RST_B_0x1 = 1;

    /** @brief TIM13 block reset */
    using RCC_APB1RSTR1_TIM13RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM13 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM13 block (value: 1)
     */
        /** @brief does not reset the TIM13 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM13RST_B_0x0 = 0;
        /** @brief resets the TIM13 block */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM13RST_B_0x1 = 1;

    /** @brief TIM14 block reset */
    using RCC_APB1RSTR1_TIM14RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM14 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM14 block (value: 1)
     */
        /** @brief does not reset the TIM14 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM14RST_B_0x0 = 0;
        /** @brief resets the TIM14 block */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM14RST_B_0x1 = 1;

    /** @brief LPTIM1 block reset */
    using RCC_APB1RSTR1_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM1 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM1 block (value: 1)
     */
        /** @brief does not reset the LPTIM1 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_LPTIM1RST_B_0x0 = 0;
        /** @brief resets the LPTIM1 block */
    constexpr std::uint32_t RCC_APB1RSTR1_LPTIM1RST_B_0x1 = 1;

    /** @brief SPI2S2 block reset */
    using RCC_APB1RSTR1_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI2S2 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI2S2 block (value: 1)
     */
        /** @brief does not reset the SPI2S2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x0 = 0;
        /** @brief resets the SPI2S2 block */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x1 = 1;

    /** @brief SPI2S3 block reset */
    using RCC_APB1RSTR1_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI2S3 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI2S3 block (value: 1)
     */
        /** @brief does not reset the SPI2S3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI3RST_B_0x0 = 0;
        /** @brief resets the SPI2S3 block */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI3RST_B_0x1 = 1;

    /** @brief SPDIFRX block reset */
    using RCC_APB1RSTR1_SPDIFRXRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPDIFRX block (default after reset) (value: 0)
     *          - B_0x1: resets the SPDIFRX block (value: 1)
     */
        /** @brief does not reset the SPDIFRX block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_SPDIFRXRST_B_0x0 = 0;
        /** @brief resets the SPDIFRX block */
    constexpr std::uint32_t RCC_APB1RSTR1_SPDIFRXRST_B_0x1 = 1;

    /** @brief USART2 block reset */
    using RCC_APB1RSTR1_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART2 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART2 block (value: 1)
     */
        /** @brief does not reset the USART2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x0 = 0;
        /** @brief resets the USART2 block */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x1 = 1;

    /** @brief USART3 block reset */
    using RCC_APB1RSTR1_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART3 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART3 block (value: 1)
     */
        /** @brief does not reset the USART3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x0 = 0;
        /** @brief resets the USART3 block */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x1 = 1;

    /** @brief UART4 block reset */
    using RCC_APB1RSTR1_UART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART4 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART4 block (value: 1)
     */
        /** @brief does not reset the UART4 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_UART4RST_B_0x0 = 0;
        /** @brief resets the UART4 block */
    constexpr std::uint32_t RCC_APB1RSTR1_UART4RST_B_0x1 = 1;

    /** @brief UART5 block reset */
    using RCC_APB1RSTR1_UART5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART5 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART5 block (value: 1)
     */
        /** @brief does not reset the UART5 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_UART5RST_B_0x0 = 0;
        /** @brief resets the UART5 block */
    constexpr std::uint32_t RCC_APB1RSTR1_UART5RST_B_0x1 = 1;

    /** @brief I2C1/I3C1 block reset */
    using RCC_APB1RSTR1_I2C1_I3C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C1/I3C1 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C1/I3C1 block (value: 1)
     */
        /** @brief does not reset the I2C1/I3C1 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1_I3C1RST_B_0x0 = 0;
        /** @brief resets the I2C1/I3C1 block */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1_I3C1RST_B_0x1 = 1;

    /** @brief I2C2 block reset */
    using RCC_APB1RSTR1_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C2 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C2 block (value: 1)
     */
        /** @brief does not reset the I2C2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x0 = 0;
        /** @brief resets the I2C2 block */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x1 = 1;

    /** @brief I2C3 block reset */
    using RCC_APB1RSTR1_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C3 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C3 block (value: 1)
     */
        /** @brief does not reset the I2C3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C3RST_B_0x0 = 0;
        /** @brief resets the I2C3 block */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C3RST_B_0x1 = 1;

    /** @brief HDMI-CEC block reset */
    using RCC_APB1RSTR1_CECRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the HDMI-CEC block (default after reset) (value: 0)
     *          - B_0x1: resets the HDMI-CEC block (value: 1)
     */
        /** @brief does not reset the HDMI-CEC block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_CECRST_B_0x0 = 0;
        /** @brief resets the HDMI-CEC block */
    constexpr std::uint32_t RCC_APB1RSTR1_CECRST_B_0x1 = 1;

    /** @brief UART7 block reset */
    using RCC_APB1RSTR1_UART7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART7 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART7 block (value: 1)
     */
        /** @brief does not reset the UART7 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_UART7RST_B_0x0 = 0;
        /** @brief resets the UART7 block */
    constexpr std::uint32_t RCC_APB1RSTR1_UART7RST_B_0x1 = 1;

    /** @brief UART8 block reset */
    using RCC_APB1RSTR1_UART8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART8 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART8 block (value: 1)
     */
        /** @brief does not reset the UART8 block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR1_UART8RST_B_0x0 = 0;
        /** @brief resets the UART8 block */
    constexpr std::uint32_t RCC_APB1RSTR1_UART8RST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 2 */
    using RCC_APB1RSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock recovery system reset */
    using RCC_APB1RSTR2_CRSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset CRS (default after reset) (value: 0)
     *          - B_0x1: resets CRS (value: 1)
     */
        /** @brief does not reset CRS (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR2_CRSRST_B_0x0 = 0;
        /** @brief resets CRS */
    constexpr std::uint32_t RCC_APB1RSTR2_CRSRST_B_0x1 = 1;

    /** @brief MDIOS block reset */
    using RCC_APB1RSTR2_MDIOSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the MDIOS block (default after reset) (value: 0)
     *          - B_0x1: resets the MDIOS block (value: 1)
     */
        /** @brief does not reset the MDIOS block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR2_MDIOSRST_B_0x0 = 0;
        /** @brief resets the MDIOS block */
    constexpr std::uint32_t RCC_APB1RSTR2_MDIOSRST_B_0x1 = 1;

    /** @brief FDCAN block reset */
    using RCC_APB1RSTR2_FDCANRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the FDCAN block (default after reset) (value: 0)
     *          - B_0x1: resets the FDCAN block (value: 1)
     */
        /** @brief does not reset the FDCAN block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR2_FDCANRST_B_0x0 = 0;
        /** @brief resets the FDCAN block */
    constexpr std::uint32_t RCC_APB1RSTR2_FDCANRST_B_0x1 = 1;

    /** @brief UCPD block reset */
    using RCC_APB1RSTR2_UCPD1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UCPD block (default after reset) (value: 0)
     *          - B_0x1: resets the UCPD block (value: 1)
     */
        /** @brief does not reset the UCPD block (default after reset) */
    constexpr std::uint32_t RCC_APB1RSTR2_UCPD1RST_B_0x0 = 0;
        /** @brief resets the UCPD block */
    constexpr std::uint32_t RCC_APB1RSTR2_UCPD1RST_B_0x1 = 1;

    /** @brief RCC APB2 peripheral reset register */
    using RCC_APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 block reset */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM1 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM1 block (value: 1)
     */
        /** @brief does not reset the TIM1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief resets the TIM1 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief USART1 block reset */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART1 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART1 block (value: 1)
     */
        /** @brief does not reset the USART1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief resets the USART1 block */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief SPI2S1 block reset */
    using RCC_APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI2S1 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI2S1 block (value: 1)
     */
        /** @brief does not reset the SPI2S1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief resets the SPI2S1 block */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief SPI4 block reset */
    using RCC_APB2RSTR_SPI4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI4 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI4 block (value: 1)
     */
        /** @brief does not reset the SPI4 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x0 = 0;
        /** @brief resets the SPI4 block */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x1 = 1;

    /** @brief TIM15 block reset */
    using RCC_APB2RSTR_TIM15RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM15 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM15 block (value: 1)
     */
        /** @brief does not reset the TIM15 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x0 = 0;
        /** @brief resets the TIM15 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x1 = 1;

    /** @brief TIM16 block reset */
    using RCC_APB2RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM16 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM16 block (value: 1)
     */
        /** @brief does not reset the TIM16 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x0 = 0;
        /** @brief resets the TIM16 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x1 = 1;

    /** @brief TIM17 block reset */
    using RCC_APB2RSTR_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM17 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM17 block (value: 1)
     */
        /** @brief does not reset the TIM17 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x0 = 0;
        /** @brief resets the TIM17 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x1 = 1;

    /** @brief TIM9 block reset */
    using RCC_APB2RSTR_TIM9RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM9 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM9 block (value: 1)
     */
        /** @brief does not reset the TIM9 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM9RST_B_0x0 = 0;
        /** @brief resets the TIM9 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM9RST_B_0x1 = 1;

    /** @brief SPI5 block reset */
    using RCC_APB2RSTR_SPI5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI5 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI5 block (value: 1)
     */
        /** @brief does not reset the SPI5 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI5RST_B_0x0 = 0;
        /** @brief resets the SPI5 block */
    constexpr std::uint32_t RCC_APB2RSTR_SPI5RST_B_0x1 = 1;

    /** @brief SAI1 block reset */
    using RCC_APB2RSTR_SAI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SAI1 (default after reset) (value: 0)
     *          - B_0x1: resets the SAI1 (value: 1)
     */
        /** @brief does not reset the SAI1 (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x0 = 0;
        /** @brief resets the SAI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x1 = 1;

    /** @brief SAI2 block reset */
    using RCC_APB2RSTR_SAI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SAI2 (default after reset) (value: 0)
     *          - B_0x1: resets the SAI2 (value: 1)
     */
        /** @brief does not reset the SAI2 (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x0 = 0;
        /** @brief resets the SAI2 */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x1 = 1;

    /** @brief RCC APB4 peripheral reset register */
    using RCC_APB4RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS block reset */
    using RCC_APB4RSTR_SBSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SBS block (default after reset) (value: 0)
     *          - B_0x1: resets the SBS block (value: 1)
     */
        /** @brief does not reset the SBS block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_SBSRST_B_0x0 = 0;
        /** @brief resets the SBS block */
    constexpr std::uint32_t RCC_APB4RSTR_SBSRST_B_0x1 = 1;

    /** @brief LPUART1 block reset */
    using RCC_APB4RSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPUART1 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPUART1 block (value: 1)
     */
        /** @brief does not reset the LPUART1 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_LPUART1RST_B_0x0 = 0;
        /** @brief resets the LPUART1 block */
    constexpr std::uint32_t RCC_APB4RSTR_LPUART1RST_B_0x1 = 1;

    /** @brief SPI/I2S6 block reset */
    using RCC_APB4RSTR_SPI6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI/I2S6 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI/I2S6 block (value: 1)
     */
        /** @brief does not reset the SPI/I2S6 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_SPI6RST_B_0x0 = 0;
        /** @brief resets the SPI/I2S6 block */
    constexpr std::uint32_t RCC_APB4RSTR_SPI6RST_B_0x1 = 1;

    /** @brief LPTIM2 block reset */
    using RCC_APB4RSTR_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM2 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM2 block (value: 1)
     */
        /** @brief does not reset the LPTIM2 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM2RST_B_0x0 = 0;
        /** @brief resets the LPTIM2 block */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM2RST_B_0x1 = 1;

    /** @brief LPTIM3 block reset */
    using RCC_APB4RSTR_LPTIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM3 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM3 block (value: 1)
     */
        /** @brief does not reset the LPTIM3 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM3RST_B_0x0 = 0;
        /** @brief resets the LPTIM3 block */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM3RST_B_0x1 = 1;

    /** @brief LPTIM4 block reset */
    using RCC_APB4RSTR_LPTIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM4 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM4 block (value: 1)
     */
        /** @brief does not reset the LPTIM4 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM4RST_B_0x0 = 0;
        /** @brief resets the LPTIM4 block */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM4RST_B_0x1 = 1;

    /** @brief LPTIM5 block reset */
    using RCC_APB4RSTR_LPTIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM5 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM5 block (value: 1)
     */
        /** @brief does not reset the LPTIM5 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM5RST_B_0x0 = 0;
        /** @brief resets the LPTIM5 block */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM5RST_B_0x1 = 1;

    /** @brief VREF block reset */
    using RCC_APB4RSTR_VREFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the VREF block (default after reset) (value: 0)
     *          - B_0x1: resets the VREF block (value: 1)
     */
        /** @brief does not reset the VREF block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_VREFRST_B_0x0 = 0;
        /** @brief resets the VREF block */
    constexpr std::uint32_t RCC_APB4RSTR_VREFRST_B_0x1 = 1;

    /** @brief DTS block reset */
    using RCC_APB4RSTR_DTSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DTS block (default after reset) (value: 0)
     *          - B_0x1: resets the DTS block (value: 1)
     */
        /** @brief does not reset the DTS block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_DTSRST_B_0x0 = 0;
        /** @brief resets the DTS block */
    constexpr std::uint32_t RCC_APB4RSTR_DTSRST_B_0x1 = 1;

    /** @brief RCC AHB3 peripheral reset register */
    using RCC_AHB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief random number generator block reset */
    using RCC_AHB3RSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset RNG block (default after reset) (value: 0)
     *          - B_0x1: resets RNG block (value: 1)
     */
        /** @brief does not reset RNG block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_RNGRST_B_0x0 = 0;
        /** @brief resets RNG block */
    constexpr std::uint32_t RCC_AHB3RSTR_RNGRST_B_0x1 = 1;

    /** @brief HASH block reset */
    using RCC_AHB3RSTR_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset HASH block (default after reset) (value: 0)
     *          - B_0x1: resets HASH block (value: 1)
     */
        /** @brief does not reset HASH block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_HASHRST_B_0x0 = 0;
        /** @brief resets HASH block */
    constexpr std::uint32_t RCC_AHB3RSTR_HASHRST_B_0x1 = 1;

    /** @brief CRYP block reset */
    using RCC_AHB3RSTR_CRYPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset CRYP block (default after reset) (value: 0)
     *          - B_0x1: resets CRYP block (value: 1)
     */
        /** @brief does not reset CRYP block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_CRYPRST_B_0x0 = 0;
        /** @brief resets CRYP block */
    constexpr std::uint32_t RCC_AHB3RSTR_CRYPRST_B_0x1 = 1;

    /** @brief SAES block reset */
    using RCC_AHB3RSTR_SAESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset SAES block (default after reset) (value: 0)
     *          - B_0x1: resets SAES block (value: 1)
     */
        /** @brief does not reset SAES block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_SAESRST_B_0x0 = 0;
        /** @brief resets SAES block */
    constexpr std::uint32_t RCC_AHB3RSTR_SAESRST_B_0x1 = 1;

    /** @brief PKA block reset */
    using RCC_AHB3RSTR_PKARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset PKA block (default after reset) (value: 0)
     *          - B_0x1: resets PKA block (value: 1)
     */
        /** @brief does not reset PKA block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_PKARST_B_0x0 = 0;
        /** @brief resets PKA block */
    constexpr std::uint32_t RCC_AHB3RSTR_PKARST_B_0x1 = 1;

    /** @brief RCC AXI clocks gating disable register */
    using RCC_CKGDISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect matrix clock gating disable */
    using RCC_CKGDISR_AXICKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXICKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXICKG_B_0x1 = 1;

    /** @brief AXI master AHB clock gating disable */
    using RCC_CKGDISR_AHBMCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_AHBMCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_AHBMCKG_B_0x1 = 1;

    /** @brief AXI master SDMMC1 clock gating disable */
    using RCC_CKGDISR_SDMMC1CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_SDMMC1CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_SDMMC1CKG_B_0x1 = 1;

    /** @brief AXI master HPDMA1 clock gating disable */
    using RCC_CKGDISR_HPDMA1CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_HPDMA1CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_HPDMA1CKG_B_0x1 = 1;

    /** @brief AXI master CPU clock gating disable */
    using RCC_CKGDISR_CPUCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_CPUCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_CPUCKG_B_0x1 = 1;

    /** @brief AXI master 0 GPU2D clock gating disable */
    using RCC_CKGDISR_GPU2DS0CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_GPU2DS0CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_GPU2DS0CKG_B_0x1 = 1;

    /** @brief AXI master 1 GPU2D clock gating disable */
    using RCC_CKGDISR_GPU2DS1CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_GPU2DS1CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_GPU2DS1CKG_B_0x1 = 1;

    /** @brief AXI master cache GPU2D clock gating disable */
    using RCC_CKGDISR_GPU2DCLCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_GPU2DCLCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_GPU2DCLCKG_B_0x1 = 1;

    /** @brief AXI master DCMIPP clock gating disable */
    using RCC_CKGDISR_DCMIPPCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_DCMIPPCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_DCMIPPCKG_B_0x1 = 1;

    /** @brief AXI master DMA2D clock gating disable */
    using RCC_CKGDISR_DMA2DCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_DMA2DCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_DMA2DCKG_B_0x1 = 1;

    /** @brief AXI matrix slave GFXMMU clock gating disable */
    using RCC_CKGDISR_GFXMMUSCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_GFXMMUSCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_GFXMMUSCKG_B_0x1 = 1;

    /** @brief AXI master LTDC clock gating disable */
    using RCC_CKGDISR_LTDCCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_LTDCCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_LTDCCKG_B_0x1 = 1;

    /** @brief AXI master GFXMMU clock gating disable */
    using RCC_CKGDISR_GFXMMUMCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_GFXMMUMCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_GFXMMUMCKG_B_0x1 = 1;

    /** @brief AXI slave AHB clock gating disable */
    using RCC_CKGDISR_AHBSCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_AHBSCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_AHBSCKG_B_0x1 = 1;

    /** @brief AXI slave FMC and MCE3 clock gating disable */
    using RCC_CKGDISR_FMCCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_FMCCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_FMCCKG_B_0x1 = 1;

    /** @brief AXI slave XSPI1 and MCE1 clock gating disable */
    using RCC_CKGDISR_XSPI1CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_XSPI1CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_XSPI1CKG_B_0x1 = 1;

    /** @brief AXI slave XSPI2 and MCE2 clock gating disable */
    using RCC_CKGDISR_XSPI2CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_XSPI2CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_XSPI2CKG_B_0x1 = 1;

    /** @brief AXI matrix slave SRAM4 clock gating disable */
    using RCC_CKGDISR_AXISRAM4CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXISRAM4CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXISRAM4CKG_B_0x1 = 1;

    /** @brief AXI matrix slave SRAM3 clock gating disable */
    using RCC_CKGDISR_AXISRAM3CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXISRAM3CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXISRAM3CKG_B_0x1 = 1;

    /** @brief AXI slave SRAM2 clock gating disable */
    using RCC_CKGDISR_AXISRAM2CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXISRAM2CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXISRAM2CKG_B_0x1 = 1;

    /** @brief AXI slave SRAM1 / error code correction (ECC) clock gating disable */
    using RCC_CKGDISR_AXISRAM1CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXISRAM1CKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_AXISRAM1CKG_B_0x1 = 1;

    /** @brief AXI slave Flash interface (FLIFT) clock gating disable */
    using RCC_CKGDISR_FLASHCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_FLASHCKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_FLASHCKG_B_0x1 = 1;

    /** @brief EXTI clock gating disable */
    using RCC_CKGDISR_EXTICKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     *          - B_0x1: The clock gating is disabled. (value: 1)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_EXTICKG_B_0x0 = 0;
        /** @brief The clock gating is disabled. */
    constexpr std::uint32_t RCC_CKGDISR_EXTICKG_B_0x1 = 1;

    /** @brief JTAG automatic clock gating disabling */
    using RCC_CKGDISR_JTAGCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is enabled. (value: 0)
     */
        /** @brief The clock gating is enabled. */
    constexpr std::uint32_t RCC_CKGDISR_JTAGCKG_B_0x0 = 0;

    /** @brief RCC PLL1 dividers configuration register 2 */
    using RCC_PLL1DIVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 DIVS division factor */
    using RCC_PLL1DIVR2_DIVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_s_ck = vco1_ck (value: 0)
     *          - B_0x1: pll1_s_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1_s_ck = vco1_ck / 3 (value: 2)
     *          - B_0x3: pll1_s_ck = vco1_ck / 4 (value: 3)
     *          - B_0x4: pll1_s_ck = vco1_ck / 5 (value: 4)
     *          - B_0x5: pll1_s_ck = vco1_ck / 6 (value: 5)
     *          - B_0x6: pll1_s_ck = vco1_ck / 7 (value: 6)
     *          - B_0x7: pll1_s_ck = vco1_ck / 8 (value: 7)
     */
        /** @brief pll1_s_ck = vco1_ck */
    constexpr std::uint32_t RCC_PLL1DIVR2_DIVS_B_0x0 = 0;
        /** @brief pll1_s_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR2_DIVS_B_0x1 = 1;
        /** @brief pll1_s_ck = vco1_ck / 3 */
    constexpr std::uint32_t RCC_PLL1DIVR2_DIVS_B_0x2 = 2;
        /** @brief pll1_s_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR2_DIVS_B_0x3 = 3;
        /** @brief pll1_s_ck = vco1_ck / 5 */
    constexpr std::uint32_t RCC_PLL1DIVR2_DIVS_B_0x4 = 4;
        /** @brief pll1_s_ck = vco1_ck / 6 */
    constexpr std::uint32_t RCC_PLL1DIVR2_DIVS_B_0x5 = 5;
        /** @brief pll1_s_ck = vco1_ck / 7 */
    constexpr std::uint32_t RCC_PLL1DIVR2_DIVS_B_0x6 = 6;
        /** @brief pll1_s_ck = vco1_ck / 8 */
    constexpr std::uint32_t RCC_PLL1DIVR2_DIVS_B_0x7 = 7;

    /** @brief RCC PLL2 dividers configuration register 2 */
    using RCC_PLL2DIVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 DIVS division factor */
    using RCC_PLL2DIVR2_DIVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_s_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_s_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_s_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_s_ck = vco2_ck / 4 (value: 3)
     *          - B_0x4: pll2_s_ck = vco2_ck / 5 (value: 4)
     *          - B_0x5: pll2_s_ck = vco2_ck / 6 (value: 5)
     *          - B_0x6: pll2_s_ck = vco2_ck / 7 (value: 6)
     *          - B_0x7: pll2_s_ck = vco2_ck / 8 (value: 7)
     */
        /** @brief pll2_s_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVS_B_0x0 = 0;
        /** @brief pll2_s_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVS_B_0x1 = 1;
        /** @brief pll2_s_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVS_B_0x2 = 2;
        /** @brief pll2_s_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVS_B_0x3 = 3;
        /** @brief pll2_s_ck = vco2_ck / 5 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVS_B_0x4 = 4;
        /** @brief pll2_s_ck = vco2_ck / 6 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVS_B_0x5 = 5;
        /** @brief pll2_s_ck = vco2_ck / 7 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVS_B_0x6 = 6;
        /** @brief pll2_s_ck = vco2_ck / 8 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVS_B_0x7 = 7;

    /** @brief PLL2 DIVT division factor */
    using RCC_PLL2DIVR2_DIVT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_t_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_t_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_t_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_t_ck = vco2_ck / 4 (value: 3)
     *          - B_0x4: pll2_t_ck = vco2_ck / 5 (value: 4)
     *          - B_0x5: pll2_t_ck = vco2_ck / 6 (value: 5)
     *          - B_0x6: pll2_t_ck = vco2_ck / 7 (value: 6)
     *          - B_0x7: pll2_t_ck = vco2_ck / 8 (value: 7)
     */
        /** @brief pll2_t_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVT_B_0x0 = 0;
        /** @brief pll2_t_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVT_B_0x1 = 1;
        /** @brief pll2_t_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVT_B_0x2 = 2;
        /** @brief pll2_t_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVT_B_0x3 = 3;
        /** @brief pll2_t_ck = vco2_ck / 5 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVT_B_0x4 = 4;
        /** @brief pll2_t_ck = vco2_ck / 6 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVT_B_0x5 = 5;
        /** @brief pll2_t_ck = vco2_ck / 7 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVT_B_0x6 = 6;
        /** @brief pll2_t_ck = vco2_ck / 8 */
    constexpr std::uint32_t RCC_PLL2DIVR2_DIVT_B_0x7 = 7;

    /** @brief RCC PLL3 dividers configuration register 2 */
    using RCC_PLL3DIVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 DIVS division factor */
    using RCC_PLL3DIVR2_DIVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_s_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_s_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_s_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_s_ck = vco3_ck / 4 (value: 3)
     *          - B_0x4: pll3_s_ck = vco3_ck / 5 (value: 4)
     *          - B_0x5: pll3_s_ck = vco3_ck / 6 (value: 5)
     *          - B_0x6: pll3_s_ck = vco3_ck / 7 (value: 6)
     *          - B_0x7: pll3_s_ck = vco3_ck / 8 (value: 7)
     */
        /** @brief pll3_s_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR2_DIVS_B_0x0 = 0;
        /** @brief pll3_s_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR2_DIVS_B_0x1 = 1;
        /** @brief pll3_s_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR2_DIVS_B_0x2 = 2;
        /** @brief pll3_s_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR2_DIVS_B_0x3 = 3;
        /** @brief pll3_s_ck = vco3_ck / 5 */
    constexpr std::uint32_t RCC_PLL3DIVR2_DIVS_B_0x4 = 4;
        /** @brief pll3_s_ck = vco3_ck / 6 */
    constexpr std::uint32_t RCC_PLL3DIVR2_DIVS_B_0x5 = 5;
        /** @brief pll3_s_ck = vco3_ck / 7 */
    constexpr std::uint32_t RCC_PLL3DIVR2_DIVS_B_0x6 = 6;
        /** @brief pll3_s_ck = vco3_ck / 8 */
    constexpr std::uint32_t RCC_PLL3DIVR2_DIVS_B_0x7 = 7;

    /** @brief RCC PLL1 Spread Spectrum Clock Generator register */
    using RCC_PLL1SSCGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Modulation Period Adjustment for PLL1 */
    using RCC_PLL1SSCGR_MODPER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dithering TPDF noise control for PLL1 */
    using RCC_PLL1SSCGR_TPDFNDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering noise injection enabled (default after reset) (value: 0)
     *          - B_0x1: Dithering noise injection disabled (value: 1)
     */
        /** @brief Dithering noise injection enabled (default after reset) */
    constexpr std::uint32_t RCC_PLL1SSCGR_TPDFNDIS_B_0x0 = 0;
        /** @brief Dithering noise injection disabled */
    constexpr std::uint32_t RCC_PLL1SSCGR_TPDFNDIS_B_0x1 = 1;

    /** @brief Dithering RPDF noise control for PLL1 */
    using RCC_PLL1SSCGR_RPDFNDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering noise injection enabled (default after reset) (value: 0)
     *          - B_0x1: Dithering noise injection disabled (value: 1)
     */
        /** @brief Dithering noise injection enabled (default after reset) */
    constexpr std::uint32_t RCC_PLL1SSCGR_RPDFNDIS_B_0x0 = 0;
        /** @brief Dithering noise injection disabled */
    constexpr std::uint32_t RCC_PLL1SSCGR_RPDFNDIS_B_0x1 = 1;

    /** @brief Spread spectrum clock generator mode for PLL1 */
    using RCC_PLL1SSCGR_SPREADSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Center-spread modulation selected (default after reset) (value: 0)
     *          - B_0x1: Down-spread modulation selected (value: 1)
     */
        /** @brief Center-spread modulation selected (default after reset) */
    constexpr std::uint32_t RCC_PLL1SSCGR_SPREADSEL_B_0x0 = 0;
        /** @brief Down-spread modulation selected */
    constexpr std::uint32_t RCC_PLL1SSCGR_SPREADSEL_B_0x1 = 1;

    /** @brief Modulation Depth Adjustment for PLL1 */
    using RCC_PLL1SSCGR_INCSTEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL2 Spread Spectrum Clock Generator register */
    using RCC_PLL2SSCGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Modulation Period Adjustment for PLL2 */
    using RCC_PLL2SSCGR_MODPER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dithering TPDF noise control for PLL2 */
    using RCC_PLL2SSCGR_TPDFNDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering noise injection enabled (default after reset) (value: 0)
     *          - B_0x1: Dithering noise injection disabled (value: 1)
     */
        /** @brief Dithering noise injection enabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2SSCGR_TPDFNDIS_B_0x0 = 0;
        /** @brief Dithering noise injection disabled */
    constexpr std::uint32_t RCC_PLL2SSCGR_TPDFNDIS_B_0x1 = 1;

    /** @brief Dithering RPDF noise control for PLL2 */
    using RCC_PLL2SSCGR_RPDFNDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering noise injection enabled (default after reset) (value: 0)
     *          - B_0x1: Dithering noise injection disabled (value: 1)
     */
        /** @brief Dithering noise injection enabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2SSCGR_RPDFNDIS_B_0x0 = 0;
        /** @brief Dithering noise injection disabled */
    constexpr std::uint32_t RCC_PLL2SSCGR_RPDFNDIS_B_0x1 = 1;

    /** @brief Spread spectrum clock generator mode for PLL2 */
    using RCC_PLL2SSCGR_SPREADSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Center-spread modulation selected (default after reset) (value: 0)
     *          - B_0x1: Down-spread modulation selected (value: 1)
     */
        /** @brief Center-spread modulation selected (default after reset) */
    constexpr std::uint32_t RCC_PLL2SSCGR_SPREADSEL_B_0x0 = 0;
        /** @brief Down-spread modulation selected */
    constexpr std::uint32_t RCC_PLL2SSCGR_SPREADSEL_B_0x1 = 1;

    /** @brief Modulation Depth Adjustment for PLL2 */
    using RCC_PLL2SSCGR_INCSTEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL3 Spread Spectrum Clock Generator register */
    using RCC_PLL3SSCGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Modulation Period Adjustment for PLL3 */
    using RCC_PLL3SSCGR_MODPER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dithering TPDF noise control for PLL3 */
    using RCC_PLL3SSCGR_TPDFNDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering noise injection enabled (default after reset) (value: 0)
     *          - B_0x1: Dithering noise injection disabled (value: 1)
     */
        /** @brief Dithering noise injection enabled (default after reset) */
    constexpr std::uint32_t RCC_PLL3SSCGR_TPDFNDIS_B_0x0 = 0;
        /** @brief Dithering noise injection disabled */
    constexpr std::uint32_t RCC_PLL3SSCGR_TPDFNDIS_B_0x1 = 1;

    /** @brief Dithering RPDF noise control for PLL3 */
    using RCC_PLL3SSCGR_RPDFNDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering noise injection enabled (default after reset) (value: 0)
     *          - B_0x1: Dithering noise injection disabled (value: 1)
     */
        /** @brief Dithering noise injection enabled (default after reset) */
    constexpr std::uint32_t RCC_PLL3SSCGR_RPDFNDIS_B_0x0 = 0;
        /** @brief Dithering noise injection disabled */
    constexpr std::uint32_t RCC_PLL3SSCGR_RPDFNDIS_B_0x1 = 1;

    /** @brief Spread spectrum clock generator mode for PLL3 */
    using RCC_PLL3SSCGR_SPREADSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Center-spread modulation selected (default after reset) (value: 0)
     *          - B_0x1: Down-spread modulation selected (value: 1)
     */
        /** @brief Center-spread modulation selected (default after reset) */
    constexpr std::uint32_t RCC_PLL3SSCGR_SPREADSEL_B_0x0 = 0;
        /** @brief Down-spread modulation selected */
    constexpr std::uint32_t RCC_PLL3SSCGR_SPREADSEL_B_0x1 = 1;

    /** @brief Modulation Depth Adjustment for PLL3 */
    using RCC_PLL3SSCGR_INCSTEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock protection register */
    using RCC_CKPROTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI clock protection */
    using RCC_CKPROTR_XSPICKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock protection is disabled (default after reset) (value: 0)
     *          - B_0x1: Clock protection is enabled (value: 1)
     */
        /** @brief Clock protection is disabled (default after reset) */
    constexpr std::uint32_t RCC_CKPROTR_XSPICKP_B_0x0 = 0;
        /** @brief Clock protection is enabled */
    constexpr std::uint32_t RCC_CKPROTR_XSPICKP_B_0x1 = 1;

    /** @brief FMC clock protection */
    using RCC_CKPROTR_FMCCKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock protection is disabled (default after reset) (value: 0)
     *          - B_0x1: Clock protection is enabled (value: 1)
     */
        /** @brief Clock protection is disabled (default after reset) */
    constexpr std::uint32_t RCC_CKPROTR_FMCCKP_B_0x0 = 0;
        /** @brief Clock protection is enabled */
    constexpr std::uint32_t RCC_CKPROTR_FMCCKP_B_0x1 = 1;

    /** @brief XSPI1 kernel clock switch position */
    using RCC_CKPROTR_XSPI1SWP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The switch is in neutral mode and output clock is gated (default after reset) (value: 0)
     *          - B_0x1: The switch is selecting hclk5 (value: 1)
     *          - B_0x2: The switch is selecting pll2_s_ck (value: 2)
     *          - B_0x3: The switch is selecting pll2_t_ck (value: 3)
     *          - B_0x4: The switch is in recovery position (hclk5/4) (value: 4)
     */
        /** @brief The switch is in neutral mode and output clock is gated (default after reset) */
    constexpr std::uint32_t RCC_CKPROTR_XSPI1SWP_B_0x0 = 0;
        /** @brief The switch is selecting hclk5 */
    constexpr std::uint32_t RCC_CKPROTR_XSPI1SWP_B_0x1 = 1;
        /** @brief The switch is selecting pll2_s_ck */
    constexpr std::uint32_t RCC_CKPROTR_XSPI1SWP_B_0x2 = 2;
        /** @brief The switch is selecting pll2_t_ck */
    constexpr std::uint32_t RCC_CKPROTR_XSPI1SWP_B_0x3 = 3;
        /** @brief The switch is in recovery position (hclk5/4) */
    constexpr std::uint32_t RCC_CKPROTR_XSPI1SWP_B_0x4 = 4;

    /** @brief XSPI2 kernel clock switch position */
    using RCC_CKPROTR_XSPI2SWP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The switch is in neutral mode and output clock is gated (default after reset) (value: 0)
     *          - B_0x1: The switch is selecting hclk5 (value: 1)
     *          - B_0x2: The switch is selecting pll2_s_ck (value: 2)
     *          - B_0x3: The switch is selecting pll2_t_ck (value: 3)
     *          - B_0x4: The switch is in recovery position (hclk5/4) (value: 4)
     */
        /** @brief The switch is in neutral mode and output clock is gated (default after reset) */
    constexpr std::uint32_t RCC_CKPROTR_XSPI2SWP_B_0x0 = 0;
        /** @brief The switch is selecting hclk5 */
    constexpr std::uint32_t RCC_CKPROTR_XSPI2SWP_B_0x1 = 1;
        /** @brief The switch is selecting pll2_s_ck */
    constexpr std::uint32_t RCC_CKPROTR_XSPI2SWP_B_0x2 = 2;
        /** @brief The switch is selecting pll2_t_ck */
    constexpr std::uint32_t RCC_CKPROTR_XSPI2SWP_B_0x3 = 3;
        /** @brief The switch is in recovery position (hclk5/4) */
    constexpr std::uint32_t RCC_CKPROTR_XSPI2SWP_B_0x4 = 4;

    /** @brief FMC kernel clock switch position */
    using RCC_CKPROTR_FMCSWP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The switch is in neutral mode and output clock is gated (default after reset) (value: 0)
     *          - B_0x1: The switch is selecting hclk5 (value: 1)
     *          - B_0x2: The switch is selecting pll1_q_ck (value: 2)
     *          - B_0x3: The switch is selecting pll2_r_ck (value: 3)
     *          - B_0x4: The switch is selecting hsi_ker_ck (value: 4)
     *          - B_0x5: The switch is in recovery position (hclk5/4) (value: 5)
     */
        /** @brief The switch is in neutral mode and output clock is gated (default after reset) */
    constexpr std::uint32_t RCC_CKPROTR_FMCSWP_B_0x0 = 0;
        /** @brief The switch is selecting hclk5 */
    constexpr std::uint32_t RCC_CKPROTR_FMCSWP_B_0x1 = 1;
        /** @brief The switch is selecting pll1_q_ck */
    constexpr std::uint32_t RCC_CKPROTR_FMCSWP_B_0x2 = 2;
        /** @brief The switch is selecting pll2_r_ck */
    constexpr std::uint32_t RCC_CKPROTR_FMCSWP_B_0x3 = 3;
        /** @brief The switch is selecting hsi_ker_ck */
    constexpr std::uint32_t RCC_CKPROTR_FMCSWP_B_0x4 = 4;
        /** @brief The switch is in recovery position (hclk5/4) */
    constexpr std::uint32_t RCC_CKPROTR_FMCSWP_B_0x5 = 5;

    /** @brief RCC Reset status register */
    using RCC_RSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief remove reset flag */
    using RCC_RSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset of the reset flags not activated (default after power-on reset) (value: 0)
     *          - B_0x1: resets the value of the reset flags (value: 1)
     */
        /** @brief reset of the reset flags not activated (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x0 = 0;
        /** @brief resets the value of the reset flags */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x1 = 1;

    /** @brief Option byte loading reset flag <sup>(1)</sup> */
    using RCC_RSR_OBLRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from option byte loading occurred (value: 0)
     *          - B_0x1: Reset from option byte loading occurred (value: 1)
     */
        /** @brief No reset from option byte loading occurred */
    constexpr std::uint32_t RCC_RSR_OBLRSTF_B_0x0 = 0;
        /** @brief Reset from option byte loading occurred */
    constexpr std::uint32_t RCC_RSR_OBLRSTF_B_0x1 = 1;

    /** @brief BOR reset flag <sup>(1)</sup> */
    using RCC_RSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no BOR reset occurred (value: 0)
     *          - B_0x1: BOR reset occurred (default after power-on reset) (value: 1)
     */
        /** @brief no BOR reset occurred */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x1 = 1;

    /** @brief pin reset flag (NRST) <sup>(1)</sup> */
    using RCC_RSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset from pin occurred (value: 0)
     *          - B_0x1: reset from pin occurred (default after power-on reset) (value: 1)
     */
        /** @brief no reset from pin occurred */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x0 = 0;
        /** @brief reset from pin occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x1 = 1;

    /** @brief POR/PDR reset flag <sup>(1)</sup> */
    using RCC_RSR_PORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no POR/PDR reset occurred (value: 0)
     *          - B_0x1: POR/PDR reset occurred (default after power-on reset) (value: 1)
     */
        /** @brief no POR/PDR reset occurred */
    constexpr std::uint32_t RCC_RSR_PORRSTF_B_0x0 = 0;
        /** @brief POR/PDR reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_PORRSTF_B_0x1 = 1;

    /** @brief system reset from CPU reset flag <sup>(1)</sup> */
    using RCC_RSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no CPU software reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: a system reset has been generated by the CPU (value: 1)
     */
        /** @brief no CPU software reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x0 = 0;
        /** @brief a system reset has been generated by the CPU */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x1 = 1;

    /** @brief independent watchdog reset flag <sup>(1)</sup> */
    using RCC_RSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no independent watchdog reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: independent watchdog reset occurred (value: 1)
     */
        /** @brief no independent watchdog reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x0 = 0;
        /** @brief independent watchdog reset occurred */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x1 = 1;

    /** @brief window watchdog reset flag <sup>(1)</sup> */
    using RCC_RSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no window watchdog reset occurred from WWDG (default after power-on reset) (value: 0)
     *          - B_0x1: window watchdog reset occurred from WWDG (value: 1)
     */
        /** @brief no window watchdog reset occurred from WWDG (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x0 = 0;
        /** @brief window watchdog reset occurred from WWDG */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x1 = 1;

    /** @brief reset due to illegal Stop or Standby flag */
    using RCC_RSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no illegal reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: illegal Stop or Standby reset occurred (value: 1)
     */
        /** @brief no illegal reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x0 = 0;
        /** @brief illegal Stop or Standby reset occurred */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC AHB5 clock enable register */
    using RCC_AHB5ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 peripheral clock enable */
    using RCC_AHB5ENR_HPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPDMA1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: HPDMA1 peripheral clock enabled (value: 1)
     */
        /** @brief HPDMA1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_HPDMA1EN_B_0x0 = 0;
        /** @brief HPDMA1 peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB5ENR_HPDMA1EN_B_0x1 = 1;

    /** @brief DMA2D peripheral clock enable */
    using RCC_AHB5ENR_DMA2DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DMA2D peripheral clock enabled (value: 1)
     */
        /** @brief DMA2D peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_DMA2DEN_B_0x0 = 0;
        /** @brief DMA2D peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB5ENR_DMA2DEN_B_0x1 = 1;

    /** @brief JPEG peripheral clock enable */
    using RCC_AHB5ENR_JPEGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JPEG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: JPEG peripheral clock enabled (value: 1)
     */
        /** @brief JPEG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_JPEGEN_B_0x0 = 0;
        /** @brief JPEG peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB5ENR_JPEGEN_B_0x1 = 1;

    /** @brief FMC and MCE3 peripheral clocks enable */
    using RCC_AHB5ENR_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC and MCE3 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: FMC and MCE3 peripheral clocks enabled (value: 1)
     */
        /** @brief FMC and MCE3 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_FMCEN_B_0x0 = 0;
        /** @brief FMC and MCE3 peripheral clocks enabled */
    constexpr std::uint32_t RCC_AHB5ENR_FMCEN_B_0x1 = 1;

    /** @brief XSPI1 and MCE1 peripheral clocks enable */
    using RCC_AHB5ENR_XSPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI1 and MCE1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: XSPI1 and MCE1 peripheral clocks enabled (value: 1)
     */
        /** @brief XSPI1 and MCE1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI1EN_B_0x0 = 0;
        /** @brief XSPI1 and MCE1 peripheral clocks enabled */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI1EN_B_0x1 = 1;

    /** @brief SDMMC1 and DB_SDMMC1 peripheral clocks enable */
    using RCC_AHB5ENR_SDMMC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 and DB_SDMMC1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SDMMC1 and DB_SDMMC1 peripheral clocks enabled (value: 1)
     */
        /** @brief SDMMC1 and DB_SDMMC1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_SDMMC1EN_B_0x0 = 0;
        /** @brief SDMMC1 and DB_SDMMC1 peripheral clocks enabled */
    constexpr std::uint32_t RCC_AHB5ENR_SDMMC1EN_B_0x1 = 1;

    /** @brief XSPI2 and MCE2 peripheral clocks enable */
    using RCC_AHB5ENR_XSPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI2 and MCE2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: XSPI2 and MCE2 peripheral clocks enabled (value: 1)
     */
        /** @brief XSPI2 and MCE2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI2EN_B_0x0 = 0;
        /** @brief XSPI2 and MCE2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI2EN_B_0x1 = 1;

    /** @brief XSPIM peripheral clock enable */
    using RCC_AHB5ENR_XSPIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIM peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: XSPIM peripheral clock enabled (value: 1)
     */
        /** @brief XSPIM peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_XSPIMEN_B_0x0 = 0;
        /** @brief XSPIM peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB5ENR_XSPIMEN_B_0x1 = 1;

    /** @brief GFXMMU peripheral clock enable */
    using RCC_AHB5ENR_GFXMMUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GFXMMU peripheral clock enabled (value: 1)
     */
        /** @brief GFXMMU peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_GFXMMUEN_B_0x0 = 0;
        /** @brief GFXMMU peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB5ENR_GFXMMUEN_B_0x1 = 1;

    /** @brief GPU2D peripheral clock enable */
    using RCC_AHB5ENR_GPU2DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPU2D peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPU2D peripheral clock enabled (value: 1)
     */
        /** @brief GPU2D peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_GPU2DEN_B_0x0 = 0;
        /** @brief GPU2D peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB5ENR_GPU2DEN_B_0x1 = 1;

    /** @brief RCC AHB1 clock enable register */
    using RCC_AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable */
    using RCC_AHB1ENR_GPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPDMA1 clock enabled (value: 1)
     */
        /** @brief GPDMA1 clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x0 = 0;
        /** @brief GPDMA1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x1 = 1;

    /** @brief ADC1 and 2 peripheral clocks enable */
    using RCC_AHB1ENR_ADC12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and 2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: ADC1 and 2 peripheral clocks enabled (value: 1)
     */
        /** @brief ADC1 and 2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ADC12EN_B_0x0 = 0;
        /** @brief ADC1 and 2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ADC12EN_B_0x1 = 1;

    /** @brief ETH1 MAC peripheral clock enable */
    using RCC_AHB1ENR_ETH1MACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1 MAC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: ETH1 MAC peripheral clock enabled (value: 1)
     */
        /** @brief ETH1 MAC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ETH1MACEN_B_0x0 = 0;
        /** @brief ETH1 MAC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ETH1MACEN_B_0x1 = 1;

    /** @brief ETH1 transmission clock enable */
    using RCC_AHB1ENR_ETH1TXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1 transmission clock disabled (default after reset) (value: 0)
     *          - B_0x1: ETH1 transmission clock enabled (value: 1)
     */
        /** @brief ETH1 transmission clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ETH1TXEN_B_0x0 = 0;
        /** @brief ETH1 transmission clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ETH1TXEN_B_0x1 = 1;

    /** @brief ETH1 reception clock enable */
    using RCC_AHB1ENR_ETH1RXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1 reception clock disabled (default after reset) (value: 0)
     *          - B_0x1: ETH1 reception clock enabled (value: 1)
     */
        /** @brief ETH1 reception clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ETH1RXEN_B_0x0 = 0;
        /** @brief ETH1 reception clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ETH1RXEN_B_0x1 = 1;

    /** @brief OTGHS clocks enable */
    using RCC_AHB1ENR_OTGHSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGHS clocks disabled (default after reset) (value: 0)
     *          - B_0x1: OTGHS clocks enabled (value: 1)
     */
        /** @brief OTGHS clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_OTGHSEN_B_0x0 = 0;
        /** @brief OTGHS clocks enabled */
    constexpr std::uint32_t RCC_AHB1ENR_OTGHSEN_B_0x1 = 1;

    /** @brief USBPHYC clocks enable */
    using RCC_AHB1ENR_USBPHYCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USBPHYC clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USBPHYC clocks enabled (value: 1)
     */
        /** @brief USBPHYC clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_USBPHYCEN_B_0x0 = 0;
        /** @brief USBPHYC clocks enabled */
    constexpr std::uint32_t RCC_AHB1ENR_USBPHYCEN_B_0x1 = 1;

    /** @brief OTGFS peripheral clocks enable */
    using RCC_AHB1ENR_OTGFSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGFS peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: OTGFS peripheral clocks enabled (value: 1)
     */
        /** @brief OTGFS peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_OTGFSEN_B_0x0 = 0;
        /** @brief OTGFS peripheral clocks enabled */
    constexpr std::uint32_t RCC_AHB1ENR_OTGFSEN_B_0x1 = 1;

    /** @brief ADF clocks enable */
    using RCC_AHB1ENR_ADF1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF clocks disabled (default after reset) (value: 0)
     *          - B_0x1: ADF clocks enabled (value: 1)
     */
        /** @brief ADF clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ADF1EN_B_0x0 = 0;
        /** @brief ADF clocks enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ADF1EN_B_0x1 = 1;

    /** @brief RCC AHB2 clock enable register */
    using RCC_AHB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI peripheral clocks enable */
    using RCC_AHB2ENR_PSSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PSSI peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: PSSI peripheral clocks enabled: (value: 1)
     */
        /** @brief PSSI peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_PSSIEN_B_0x0 = 0;
        /** @brief PSSI peripheral clocks enabled: */
    constexpr std::uint32_t RCC_AHB2ENR_PSSIEN_B_0x1 = 1;

    /** @brief SDMMC2 and SDMMC2 delay clock enable */
    using RCC_AHB2ENR_SDMMC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 and SDMMC2 delay clock disabled (default after reset) (value: 0)
     *          - B_0x1: SDMMC2 and SDMMC2 delay clock enabled (value: 1)
     */
        /** @brief SDMMC2 and SDMMC2 delay clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_SDMMC2EN_B_0x0 = 0;
        /** @brief SDMMC2 and SDMMC2 delay clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_SDMMC2EN_B_0x1 = 1;

    /** @brief CORDIC clock enable */
    using RCC_AHB2ENR_CORDICEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CORDIC clock disabled (default after reset) (value: 0)
     *          - B_0x1: CORDIC clock enabled (value: 1)
     */
        /** @brief CORDIC clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_CORDICEN_B_0x0 = 0;
        /** @brief CORDIC clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_CORDICEN_B_0x1 = 1;

    /** @brief SRAM1 clock enable */
    using RCC_AHB2ENR_SRAM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 clock disabled (default after reset) (value: 0)
     *          - B_0x1: SRAM1 clock enabled (value: 1)
     */
        /** @brief SRAM1 clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM1EN_B_0x0 = 0;
        /** @brief SRAM1 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM1EN_B_0x1 = 1;

    /** @brief SRAM2 clock enable */
    using RCC_AHB2ENR_SRAM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clock disabled (default after reset) (value: 0)
     *          - B_0x1: SRAM2 clock enabled (value: 1)
     */
        /** @brief SRAM2 clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM2EN_B_0x0 = 0;
        /** @brief SRAM2 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM2EN_B_0x1 = 1;

    /** @brief RCC AHB4 clock enable register */
    using RCC_AHB4ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA peripheral clock enable */
    using RCC_AHB4ENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOA peripheral clock enabled (value: 1)
     */
        /** @brief GPIOA peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOAEN_B_0x0 = 0;
        /** @brief GPIOA peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOAEN_B_0x1 = 1;

    /** @brief GPIOB peripheral clock enable */
    using RCC_AHB4ENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOB peripheral clock enabled (value: 1)
     */
        /** @brief GPIOB peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOBEN_B_0x0 = 0;
        /** @brief GPIOB peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOBEN_B_0x1 = 1;

    /** @brief GPIOC peripheral clock enable */
    using RCC_AHB4ENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOC peripheral clock enabled (value: 1)
     */
        /** @brief GPIOC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOCEN_B_0x0 = 0;
        /** @brief GPIOC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOCEN_B_0x1 = 1;

    /** @brief GPIOD peripheral clock enable */
    using RCC_AHB4ENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOD peripheral clock enabled (value: 1)
     */
        /** @brief GPIOD peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIODEN_B_0x0 = 0;
        /** @brief GPIOD peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIODEN_B_0x1 = 1;

    /** @brief GPIOE peripheral clock enable */
    using RCC_AHB4ENR_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOE peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOE peripheral clock enabled (value: 1)
     */
        /** @brief GPIOE peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOEEN_B_0x0 = 0;
        /** @brief GPIOE peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOEEN_B_0x1 = 1;

    /** @brief GPIOF peripheral clock enable */
    using RCC_AHB4ENR_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOF peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOF peripheral clock enabled (value: 1)
     */
        /** @brief GPIOF peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOFEN_B_0x0 = 0;
        /** @brief GPIOF peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOFEN_B_0x1 = 1;

    /** @brief GPIOG peripheral clock enable */
    using RCC_AHB4ENR_GPIOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOG peripheral clock enabled (value: 1)
     */
        /** @brief GPIOG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOGEN_B_0x0 = 0;
        /** @brief GPIOG peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOGEN_B_0x1 = 1;

    /** @brief GPIOH peripheral clock enable */
    using RCC_AHB4ENR_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOH peripheral clock enabled (value: 1)
     */
        /** @brief GPIOH peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOHEN_B_0x0 = 0;
        /** @brief GPIOH peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOHEN_B_0x1 = 1;

    /** @brief GPIOM peripheral clock enable */
    using RCC_AHB4ENR_GPIOMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOM peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOM peripheral clock enabled (value: 1)
     */
        /** @brief GPIOM peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOMEN_B_0x0 = 0;
        /** @brief GPIOM peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOMEN_B_0x1 = 1;

    /** @brief GPION peripheral clock enable */
    using RCC_AHB4ENR_GPIONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPION peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPION peripheral clock enabled (value: 1)
     */
        /** @brief GPION peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIONEN_B_0x0 = 0;
        /** @brief GPION peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIONEN_B_0x1 = 1;

    /** @brief GPIOO peripheral clock enable */
    using RCC_AHB4ENR_GPIOOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOO peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOO peripheral clock enabled (value: 1)
     */
        /** @brief GPIOO peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOOEN_B_0x0 = 0;
        /** @brief GPIOO peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOOEN_B_0x1 = 1;

    /** @brief GPIOP peripheral clock enable */
    using RCC_AHB4ENR_GPIOPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOP peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOP peripheral clock enabled (value: 1)
     */
        /** @brief GPIOP peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOPEN_B_0x0 = 0;
        /** @brief GPIOP peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOPEN_B_0x1 = 1;

    /** @brief CRC clock enable */
    using RCC_AHB4ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRC clock enabled (value: 1)
     */
        /** @brief CRC clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_CRCEN_B_0x0 = 0;
        /** @brief CRC clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_CRCEN_B_0x1 = 1;

    /** @brief Backup RAM clock enable */
    using RCC_AHB4ENR_BKPRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM clock disabled (default after reset) (value: 0)
     *          - B_0x1: Backup RAM clock enabled (value: 1)
     */
        /** @brief Backup RAM clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_BKPRAMEN_B_0x0 = 0;
        /** @brief Backup RAM clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_BKPRAMEN_B_0x1 = 1;

    /** @brief RCC APB5 clock enable register */
    using RCC_APB5ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC peripheral clock enable */
    using RCC_APB5ENR_LTDCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LTDC peripheral clock provided to the LTDC block (value: 1)
     */
        /** @brief LTDC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB5ENR_LTDCEN_B_0x0 = 0;
        /** @brief LTDC peripheral clock provided to the LTDC block */
    constexpr std::uint32_t RCC_APB5ENR_LTDCEN_B_0x1 = 1;

    /** @brief DCMIPP peripheral clock enable */
    using RCC_APB5ENR_DCMIPPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMIPP peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DCMIPP peripheral clock provided (value: 1)
     */
        /** @brief DCMIPP peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB5ENR_DCMIPPEN_B_0x0 = 0;
        /** @brief DCMIPP peripheral clock provided */
    constexpr std::uint32_t RCC_APB5ENR_DCMIPPEN_B_0x1 = 1;

    /** @brief GFXTIM peripheral clock enable */
    using RCC_APB5ENR_GFXTIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXTIM peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GFXTIM peripheral clock provided (value: 1)
     */
        /** @brief GFXTIM peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB5ENR_GFXTIMEN_B_0x0 = 0;
        /** @brief GFXTIM peripheral clock provided */
    constexpr std::uint32_t RCC_APB5ENR_GFXTIMEN_B_0x1 = 1;

    /** @brief RCC APB1 clock enable register 1 */
    using RCC_APB1ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 peripheral clock enable */
    using RCC_APB1ENR1_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM2 peripheral clock enabled (value: 1)
     */
        /** @brief TIM2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 peripheral clock enable */
    using RCC_APB1ENR1_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM3 peripheral clock enabled (value: 1)
     */
        /** @brief TIM3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x1 = 1;

    /** @brief TIM4 peripheral clock enable */
    using RCC_APB1ENR1_TIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 peripheral clock disable (default after reset) (value: 0)
     *          - B_0x1: TIM4 peripheral clock enabled (value: 1)
     */
        /** @brief TIM4 peripheral clock disable (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x0 = 0;
        /** @brief TIM4 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x1 = 1;

    /** @brief TIM5 peripheral clock enable */
    using RCC_APB1ENR1_TIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM5 peripheral clock enabled (value: 1)
     */
        /** @brief TIM5 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_TIM5EN_B_0x0 = 0;
        /** @brief TIM5 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM5EN_B_0x1 = 1;

    /** @brief TIM6 peripheral clock enable */
    using RCC_APB1ENR1_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM6 peripheral clock enabled (value: 1)
     */
        /** @brief TIM6 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_TIM6EN_B_0x0 = 0;
        /** @brief TIM6 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 peripheral clock enable */
    using RCC_APB1ENR1_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM7 peripheral clock enabled (value: 1)
     */
        /** @brief TIM7 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_TIM7EN_B_0x0 = 0;
        /** @brief TIM7 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM7EN_B_0x1 = 1;

    /** @brief TIM12 peripheral clock enable */
    using RCC_APB1ENR1_TIM12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM12 peripheral clock enabled (value: 1)
     */
        /** @brief TIM12 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_TIM12EN_B_0x0 = 0;
        /** @brief TIM12 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM12EN_B_0x1 = 1;

    /** @brief TIM13 peripheral clock enable */
    using RCC_APB1ENR1_TIM13EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM13 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM13 peripheral clock enabled (value: 1)
     */
        /** @brief TIM13 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_TIM13EN_B_0x0 = 0;
        /** @brief TIM13 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM13EN_B_0x1 = 1;

    /** @brief TIM14 peripheral clock enable */
    using RCC_APB1ENR1_TIM14EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM14 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM14 peripheral clock enabled (value: 1)
     */
        /** @brief TIM14 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_TIM14EN_B_0x0 = 0;
        /** @brief TIM14 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM14EN_B_0x1 = 1;

    /** @brief LPTIM1 peripheral clocks enable */
    using RCC_APB1ENR1_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM1 peripheral clocks enabled (value: 1)
     */
        /** @brief LPTIM1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_LPTIM1EN_B_0x0 = 0;
        /** @brief LPTIM1 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_LPTIM1EN_B_0x1 = 1;

    /** @brief WWDG clock enable */
    using RCC_APB1ENR1_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG peripheral clock disable (default after reset) (value: 0)
     *          - B_0x1: WWDG peripheral clock enabled (value: 1)
     */
        /** @brief WWDG peripheral clock disable (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x0 = 0;
        /** @brief WWDG peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x1 = 1;

    /** @brief SPI2 peripheral clocks enable */
    using RCC_APB1ENR1_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI2 peripheral clocks enabled (value: 1)
     */
        /** @brief SPI2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_SPI2EN_B_0x0 = 0;
        /** @brief SPI2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI2EN_B_0x1 = 1;

    /** @brief SPI3 peripheral clocks enable */
    using RCC_APB1ENR1_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI3 peripheral clocks enabled (value: 1)
     */
        /** @brief SPI3 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI3EN_B_0x1 = 1;

    /** @brief SPDIFRX peripheral clocks enable */
    using RCC_APB1ENR1_SPDIFRXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPDIFRX peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPDIFRX peripheral clocks enabled (value: 1)
     */
        /** @brief SPDIFRX peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_SPDIFRXEN_B_0x0 = 0;
        /** @brief SPDIFRX peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPDIFRXEN_B_0x1 = 1;

    /** @brief USART2peripheral clocks enable */
    using RCC_APB1ENR1_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USART2 peripheral clocks enabled (value: 1)
     */
        /** @brief USART2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x0 = 0;
        /** @brief USART2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x1 = 1;

    /** @brief USART3 peripheral clocks enable */
    using RCC_APB1ENR1_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USART3 peripheral clocks enabled (value: 1)
     */
        /** @brief USART3 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_USART3EN_B_0x0 = 0;
        /** @brief USART3 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART3EN_B_0x1 = 1;

    /** @brief UART4 peripheral clocks enable */
    using RCC_APB1ENR1_UART4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: UART4 peripheral clocks enabled (value: 1)
     */
        /** @brief UART4 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_UART4EN_B_0x0 = 0;
        /** @brief UART4 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART4EN_B_0x1 = 1;

    /** @brief UART5 peripheral clocks enable */
    using RCC_APB1ENR1_UART5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: UART5 peripheral clocks enabled (value: 1)
     */
        /** @brief UART5 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_UART5EN_B_0x0 = 0;
        /** @brief UART5 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART5EN_B_0x1 = 1;

    /** @brief I2C1/I3C1 peripheral clocks enable */
    using RCC_APB1ENR1_I2C1_I3C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1/I3C1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: I2C1/I3C1 peripheral clocks enabled (value: 1)
     */
        /** @brief I2C1/I3C1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1_I3C1EN_B_0x0 = 0;
        /** @brief I2C1/I3C1 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1_I3C1EN_B_0x1 = 1;

    /** @brief I2C2 peripheral clocks enable */
    using RCC_APB1ENR1_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: I2C2 peripheral clocks enabled (value: 1)
     */
        /** @brief I2C2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_I2C2EN_B_0x0 = 0;
        /** @brief I2C2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C2EN_B_0x1 = 1;

    /** @brief I2C3 peripheral clocks enable */
    using RCC_APB1ENR1_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: I2C3 peripheral clocks enabled (value: 1)
     */
        /** @brief I2C3 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_I2C3EN_B_0x0 = 0;
        /** @brief I2C3 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C3EN_B_0x1 = 1;

    /** @brief HDMI-CEC peripheral clock enable */
    using RCC_APB1ENR1_CECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDMI-CEC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: HDMI-CEC peripheral clock enabled (value: 1)
     */
        /** @brief HDMI-CEC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_CECEN_B_0x0 = 0;
        /** @brief HDMI-CEC peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_CECEN_B_0x1 = 1;

    /** @brief UART7 peripheral clocks enable */
    using RCC_APB1ENR1_UART7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART7 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: UART7 peripheral clocks enabled (value: 1)
     */
        /** @brief UART7 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_UART7EN_B_0x0 = 0;
        /** @brief UART7 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART7EN_B_0x1 = 1;

    /** @brief UART8 peripheral clocks enable */
    using RCC_APB1ENR1_UART8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART8 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: UART8 peripheral clocks enabled (value: 1)
     */
        /** @brief UART8 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR1_UART8EN_B_0x0 = 0;
        /** @brief UART8 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART8EN_B_0x1 = 1;

    /** @brief RCC APB1 clock enable register 2 */
    using RCC_APB1ENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock recovery system peripheral clock enable */
    using RCC_APB1ENR2_CRSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRS peripheral clock enabled (value: 1)
     */
        /** @brief CRS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR2_CRSEN_B_0x0 = 0;
        /** @brief CRS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_CRSEN_B_0x1 = 1;

    /** @brief MDIOS peripheral clock enable */
    using RCC_APB1ENR2_MDIOSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: MDIOS peripheral clock enabled (value: 1)
     */
        /** @brief MDIOS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR2_MDIOSEN_B_0x0 = 0;
        /** @brief MDIOS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_MDIOSEN_B_0x1 = 1;

    /** @brief FDCAN peripheral clock enable */
    using RCC_APB1ENR2_FDCANEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: FDCAN peripheral clock enabled (value: 1)
     */
        /** @brief FDCAN peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR2_FDCANEN_B_0x0 = 0;
        /** @brief FDCAN peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_FDCANEN_B_0x1 = 1;

    /** @brief UCPD peripheral clock enable */
    using RCC_APB1ENR2_UCPD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: UCPD peripheral clock enabled (value: 1)
     */
        /** @brief UCPD peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1ENR2_UCPD1EN_B_0x0 = 0;
        /** @brief UCPD peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_UCPD1EN_B_0x1 = 1;

    /** @brief RCC APB2 clock enable register */
    using RCC_APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 peripheral clock enable */
    using RCC_APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM1 peripheral clock enabled (value: 1)
     */
        /** @brief TIM1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief USART1 peripheral clocks enable */
    using RCC_APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USART1 peripheral clocks enabled: (value: 1)
     */
        /** @brief USART1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief SPI2S1 Peripheral Clocks Enable */
    using RCC_APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2S1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI2S1 peripheral clocks enabled: (value: 1)
     */
        /** @brief SPI2S1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI2S1 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief SPI4 Peripheral Clocks Enable */
    using RCC_APB2ENR_SPI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI4 peripheral clocks enabled: (value: 1)
     */
        /** @brief SPI4 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x0 = 0;
        /** @brief SPI4 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x1 = 1;

    /** @brief TIM15 peripheral clock enable */
    using RCC_APB2ENR_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM15 peripheral clock enabled (value: 1)
     */
        /** @brief TIM15 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x0 = 0;
        /** @brief TIM15 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x1 = 1;

    /** @brief TIM16 peripheral clock enable */
    using RCC_APB2ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM16 peripheral clock enabled (value: 1)
     */
        /** @brief TIM16 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x0 = 0;
        /** @brief TIM16 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x1 = 1;

    /** @brief TIM17 peripheral clock enable */
    using RCC_APB2ENR_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM17 peripheral clock enabled (value: 1)
     */
        /** @brief TIM17 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x0 = 0;
        /** @brief TIM17 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x1 = 1;

    /** @brief TIM9 peripheral clock enable */
    using RCC_APB2ENR_TIM9EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM9 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM9 peripheral clock enabled (value: 1)
     */
        /** @brief TIM9 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM9EN_B_0x0 = 0;
        /** @brief TIM9 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM9EN_B_0x1 = 1;

    /** @brief SPI5 peripheral clocks enable */
    using RCC_APB2ENR_SPI5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI5 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI5 peripheral clocks enabled: (value: 1)
     */
        /** @brief SPI5 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI5EN_B_0x0 = 0;
        /** @brief SPI5 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_SPI5EN_B_0x1 = 1;

    /** @brief SAI1 peripheral clocks enable */
    using RCC_APB2ENR_SAI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SAI1 peripheral clocks enabled: (value: 1)
     */
        /** @brief SAI1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x0 = 0;
        /** @brief SAI1 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x1 = 1;

    /** @brief SAI2 peripheral clocks enable */
    using RCC_APB2ENR_SAI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SAI2 peripheral clocks enabled: (value: 1)
     */
        /** @brief SAI2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SAI2EN_B_0x0 = 0;
        /** @brief SAI2 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_SAI2EN_B_0x1 = 1;

    /** @brief RCC APB4 clock enable register */
    using RCC_APB4ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS peripheral clock enable */
    using RCC_APB4ENR_SBSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SBS peripheral clock enabled (value: 1)
     */
        /** @brief SBS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_SBSEN_B_0x0 = 0;
        /** @brief SBS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB4ENR_SBSEN_B_0x1 = 1;

    /** @brief LPUART1 peripheral clocks enable */
    using RCC_APB4ENR_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPUART1 peripheral clocks enabled (value: 1)
     */
        /** @brief LPUART1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_LPUART1EN_B_0x0 = 0;
        /** @brief LPUART1 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_LPUART1EN_B_0x1 = 1;

    /** @brief SPI/I2S6 peripheral clocks enable */
    using RCC_APB4ENR_SPI6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI/I2S6 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI/I2S6 peripheral clocks enabled (value: 1)
     */
        /** @brief SPI/I2S6 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_SPI6EN_B_0x0 = 0;
        /** @brief SPI/I2S6 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_SPI6EN_B_0x1 = 1;

    /** @brief LPTIM2 peripheral clocks enable */
    using RCC_APB4ENR_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM2 peripheral clocks enabled (value: 1)
     */
        /** @brief LPTIM2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM2EN_B_0x0 = 0;
        /** @brief LPTIM2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM2EN_B_0x1 = 1;

    /** @brief LPTIM3 peripheral clocks enable */
    using RCC_APB4ENR_LPTIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM3 peripheral clocks enabled (value: 1)
     */
        /** @brief LPTIM3 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM3EN_B_0x0 = 0;
        /** @brief LPTIM3 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM3EN_B_0x1 = 1;

    /** @brief LPTIM4 peripheral clocks enable */
    using RCC_APB4ENR_LPTIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM4 peripheral clocks enabled (value: 1)
     */
        /** @brief LPTIM4 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM4EN_B_0x0 = 0;
        /** @brief LPTIM4 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM4EN_B_0x1 = 1;

    /** @brief LPTIM5 peripheral clocks enable */
    using RCC_APB4ENR_LPTIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM5 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM5 peripheral clocks enabled (value: 1)
     */
        /** @brief LPTIM5 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM5EN_B_0x0 = 0;
        /** @brief LPTIM5 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM5EN_B_0x1 = 1;

    /** @brief VREF peripheral clock enable */
    using RCC_APB4ENR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREF peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: VREF peripheral clock enabled (value: 1)
     */
        /** @brief VREF peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_VREFEN_B_0x0 = 0;
        /** @brief VREF peripheral clock enabled */
    constexpr std::uint32_t RCC_APB4ENR_VREFEN_B_0x1 = 1;

    /** @brief RTC APB clock enable */
    using RCC_APB4ENR_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The register clock interface of the RTC (APB) is disabled (value: 0)
     *          - B_0x1: The register clock interface of the RTC (APB) is enabled (default after reset) (value: 1)
     */
        /** @brief The register clock interface of the RTC (APB) is disabled */
    constexpr std::uint32_t RCC_APB4ENR_RTCAPBEN_B_0x0 = 0;
        /** @brief The register clock interface of the RTC (APB) is enabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_RTCAPBEN_B_0x1 = 1;

    /** @brief Temperature Sensor peripheral clock enable */
    using RCC_APB4ENR_DTSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DTS peripheral clock enabled (value: 1)
     */
        /** @brief DTS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_DTSEN_B_0x0 = 0;
        /** @brief DTS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB4ENR_DTSEN_B_0x1 = 1;

    /** @brief RCC AHB3 clock enable register */
    using RCC_AHB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG peripheral clocks enable */
    using RCC_AHB3ENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: RNG peripheral clocks enabled. (value: 1)
     */
        /** @brief RNG peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_RNGEN_B_0x0 = 0;
        /** @brief RNG peripheral clocks enabled. */
    constexpr std::uint32_t RCC_AHB3ENR_RNGEN_B_0x1 = 1;

    /** @brief HASH peripheral clock enable */
    using RCC_AHB3ENR_HASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: HASH peripheral clock enabled (value: 1)
     */
        /** @brief HASH peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_HASHEN_B_0x0 = 0;
        /** @brief HASH peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_HASHEN_B_0x1 = 1;

    /** @brief CRYP peripheral clock enable */
    using RCC_AHB3ENR_CRYPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRYP peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRYP peripheral clock enabled (value: 1)
     */
        /** @brief CRYP peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_CRYPEN_B_0x0 = 0;
        /** @brief CRYP peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_CRYPEN_B_0x1 = 1;

    /** @brief SAES peripheral clock enable */
    using RCC_AHB3ENR_SAESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The SAES peripheral clocks are disabled (default after reset) (value: 0)
     *          - B_0x1: The SAES peripheral clocks are enabled (value: 1)
     */
        /** @brief The SAES peripheral clocks are disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_SAESEN_B_0x0 = 0;
        /** @brief The SAES peripheral clocks are enabled */
    constexpr std::uint32_t RCC_AHB3ENR_SAESEN_B_0x1 = 1;

    /** @brief PKA peripheral clock enable */
    using RCC_AHB3ENR_PKAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: PKA peripheral clock enabled (value: 1)
     */
        /** @brief PKA peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_PKAEN_B_0x0 = 0;
        /** @brief PKA peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_PKAEN_B_0x1 = 1;

    /** @brief RCC AHB5 low-power clock enable register */
    using RCC_AHB5LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 low-power peripheral clock enable */
    using RCC_AHB5LPENR_HPDMA1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPDMA1 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: HPDMA1 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief HPDMA1 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_HPDMA1LPEN_B_0x0 = 0;
        /** @brief HPDMA1 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_HPDMA1LPEN_B_0x1 = 1;

    /** @brief DMA2D low-power peripheral clock enable */
    using RCC_AHB5LPENR_DMA2DLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: DMA2D peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief DMA2D peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_DMA2DLPEN_B_0x0 = 0;
        /** @brief DMA2D peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_DMA2DLPEN_B_0x1 = 1;

    /** @brief FLASH low-power peripheral clock enable */
    using RCC_AHB5LPENR_FLASHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: FLASH peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief FLASH peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_FLASHLPEN_B_0x0 = 0;
        /** @brief FLASH peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_FLASHLPEN_B_0x1 = 1;

    /** @brief JPEG clock enable in low-power mode */
    using RCC_AHB5LPENR_JPEGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JPEG peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: JPEG peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief JPEG peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_JPEGLPEN_B_0x0 = 0;
        /** @brief JPEG peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_JPEGLPEN_B_0x1 = 1;

    /** @brief FMC and MCE3 peripheral clocks enable in low-power mode */
    using RCC_AHB5LPENR_FMCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC and MCE3 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: FMC and MCE3 peripheral clocks enabled in low-power mode (default after reset): (value: 1)
     */
        /** @brief FMC and MCE3 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_FMCLPEN_B_0x0 = 0;
        /** @brief FMC and MCE3 peripheral clocks enabled in low-power mode (default after reset): */
    constexpr std::uint32_t RCC_AHB5LPENR_FMCLPEN_B_0x1 = 1;

    /** @brief XSPI1 and MCE1 low-power peripheral clock enable */
    using RCC_AHB5LPENR_XSPI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI1 and MCE1 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: XSPI1 and MCE1 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief XSPI1 and MCE1 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI1LPEN_B_0x0 = 0;
        /** @brief XSPI1 and MCE1 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI1LPEN_B_0x1 = 1;

    /** @brief SDMMC1 and SDMMC1 delay low-power peripheral clock enable */
    using RCC_AHB5LPENR_SDMMC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 and SDMMC1 delay peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: SDMMC1 and SDMMC1 delay peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SDMMC1 and SDMMC1 delay peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_SDMMC1LPEN_B_0x0 = 0;
        /** @brief SDMMC1 and SDMMC1 delay peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_SDMMC1LPEN_B_0x1 = 1;

    /** @brief XSPI2 and MCE2 low-power peripheral clock enable */
    using RCC_AHB5LPENR_XSPI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI2 and MCE2 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: XSPI2 and MCE2 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief XSPI2 and MCE2 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI2LPEN_B_0x0 = 0;
        /** @brief XSPI2 and MCE2 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI2LPEN_B_0x1 = 1;

    /** @brief XSPIM low-power peripheral clock enable */
    using RCC_AHB5LPENR_XSPIMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIM interface peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: XSPIM interface peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief XSPIM interface peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPIMLPEN_B_0x0 = 0;
        /** @brief XSPIM interface peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPIMLPEN_B_0x1 = 1;

    /** @brief GFXMMU low-power peripheral clock enable */
    using RCC_AHB5LPENR_GFXMMULPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU interface peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GFXMMU interface peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GFXMMU interface peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_GFXMMULPEN_B_0x0 = 0;
        /** @brief GFXMMU interface peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_GFXMMULPEN_B_0x1 = 1;

    /** @brief GPU2D low-power peripheral clock enable */
    using RCC_AHB5LPENR_GPU2DLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPU2D interface clock peripheral disabled in low-power mode (value: 0)
     *          - B_0x1: GPU2D interface clock peripheral enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPU2D interface clock peripheral disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_GPU2DLPEN_B_0x0 = 0;
        /** @brief GPU2D interface clock peripheral enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_GPU2DLPEN_B_0x1 = 1;

    /** @brief DTCM1 low-power peripheral clock enable */
    using RCC_AHB5LPENR_DTCM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTCM1 interface peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: DTCM1 interface peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief DTCM1 interface peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_DTCM1LPEN_B_0x0 = 0;
        /** @brief DTCM1 interface peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_DTCM1LPEN_B_0x1 = 1;

    /** @brief DTCM2 low-power peripheral clock enable */
    using RCC_AHB5LPENR_DTCM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTCM2 interface peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: DTCM2 interface peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief DTCM2 interface peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_DTCM2LPEN_B_0x0 = 0;
        /** @brief DTCM2 interface peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_DTCM2LPEN_B_0x1 = 1;

    /** @brief ITCM low-power peripheral clock enable */
    using RCC_AHB5LPENR_ITCMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ITCM interface peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: ITCM interface peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief ITCM interface peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_ITCMLPEN_B_0x0 = 0;
        /** @brief ITCM interface peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_ITCMLPEN_B_0x1 = 1;

    /** @brief AXISRAM[4:1] low-power peripheral clock enable */
    using RCC_AHB5LPENR_AXISRAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM[4:1] interface peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: AXISRAM[4:1] interface peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief AXISRAM[4:1] interface peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB5LPENR_AXISRAMLPEN_B_0x0 = 0;
        /** @brief AXISRAM[4:1] interface peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_AXISRAMLPEN_B_0x1 = 1;

    /** @brief RCC AHB1 low-power clock enable register */
    using RCC_AHB1LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable in low-power mode */
    using RCC_AHB1LPENR_GPDMA1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPDMA1 clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPDMA1 clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA1LPEN_B_0x0 = 0;
        /** @brief GPDMA1 clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA1LPEN_B_0x1 = 1;

    /** @brief ADC1 and 2 peripheral clocks enable in low-power mode */
    using RCC_AHB1LPENR_ADC12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and 2 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: ADC1 and 2 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief ADC1 and 2 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ADC12LPEN_B_0x0 = 0;
        /** @brief ADC1 and 2 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ADC12LPEN_B_0x1 = 1;

    /** @brief ETH1 MAC peripheral clock enable in low-power mode */
    using RCC_AHB1LPENR_ETH1MACLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1 MAC peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: ETH1 MAC peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief ETH1 MAC peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ETH1MACLPEN_B_0x0 = 0;
        /** @brief ETH1 MAC peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ETH1MACLPEN_B_0x1 = 1;

    /** @brief ETH1 transmission peripheral clock enable in low-power mode */
    using RCC_AHB1LPENR_ETH1TXLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1 transmission peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: ETH1 transmission peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief ETH1 transmission peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ETH1TXLPEN_B_0x0 = 0;
        /** @brief ETH1 transmission peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ETH1TXLPEN_B_0x1 = 1;

    /** @brief ETH1 reception peripheral clock enable in low-power mode */
    using RCC_AHB1LPENR_ETH1RXLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1 reception peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: ETH1 reception peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief ETH1 reception peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ETH1RXLPEN_B_0x0 = 0;
        /** @brief ETH1 reception peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ETH1RXLPEN_B_0x1 = 1;

    /** @brief USBPHYC common block power-down control */
    using RCC_AHB1LPENR_UCPDCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: In SUSPEND, PHY state machine, bias and USBPHYC PLL remain powered (default after reset). (value: 0)
     *          - B_0x1: In SUSPEND, PHY state machine, bias and USBPHYC PLL are powered down. (value: 1)
     */
        /** @brief In SUSPEND, PHY state machine, bias and USBPHYC PLL remain powered (default after reset). */
    constexpr std::uint32_t RCC_AHB1LPENR_UCPDCTRL_B_0x0 = 0;
        /** @brief In SUSPEND, PHY state machine, bias and USBPHYC PLL are powered down. */
    constexpr std::uint32_t RCC_AHB1LPENR_UCPDCTRL_B_0x1 = 1;

    /** @brief OTGHS peripheral clock enable in low-power mode */
    using RCC_AHB1LPENR_OTGHSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGHS peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: OTGHS peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief OTGHS peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB1LPENR_OTGHSLPEN_B_0x0 = 0;
        /** @brief OTGHS peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_OTGHSLPEN_B_0x1 = 1;

    /** @brief USBPHYC peripheral clock enable in low-power mode */
    using RCC_AHB1LPENR_USBPHYCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USBPHYC peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: USBPHYC peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief USBPHYC peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB1LPENR_USBPHYCLPEN_B_0x0 = 0;
        /** @brief USBPHYC peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_USBPHYCLPEN_B_0x1 = 1;

    /** @brief OTGFS clock enable in low-power mode */
    using RCC_AHB1LPENR_OTGFSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGFS peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: OTGFS peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief OTGFS peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB1LPENR_OTGFSLPEN_B_0x0 = 0;
        /** @brief OTGFS peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_OTGFSLPEN_B_0x1 = 1;

    /** @brief ADF clock enable in low-power mode */
    using RCC_AHB1LPENR_ADF1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: ADF peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief ADF peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ADF1LPEN_B_0x0 = 0;
        /** @brief ADF peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ADF1LPEN_B_0x1 = 1;

    /** @brief RCC AHB2 low-power clock enable register */
    using RCC_AHB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI peripheral clock enable in low-power mode */
    using RCC_AHB2LPENR_PSSILPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PSSI peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: PSSI peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief PSSI peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB2LPENR_PSSILPEN_B_0x0 = 0;
        /** @brief PSSI peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_PSSILPEN_B_0x1 = 1;

    /** @brief SDMMC2 and SDMMC2 delay clock enable in low-power mode */
    using RCC_AHB2LPENR_SDMMC2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 and SDMMC2 delay clock disabled in low-power mode (value: 0)
     *          - B_0x1: SDMMC2 and SDMMC2 delay clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SDMMC2 and SDMMC2 delay clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB2LPENR_SDMMC2LPEN_B_0x0 = 0;
        /** @brief SDMMC2 and SDMMC2 delay clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_SDMMC2LPEN_B_0x1 = 1;

    /** @brief CORDIC clock enable in low-power mode */
    using RCC_AHB2LPENR_CORDICLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CORDIC clock disabled in low-power mode (value: 0)
     *          - B_0x1: CORDIC clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief CORDIC clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB2LPENR_CORDICLPEN_B_0x0 = 0;
        /** @brief CORDIC clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_CORDICLPEN_B_0x1 = 1;

    /** @brief SRAM1 clock enable in low-power mode */
    using RCC_AHB2LPENR_SRAM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 clock disabled in low-power mode (value: 0)
     *          - B_0x1: SRAM1 clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SRAM1 clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM1LPEN_B_0x0 = 0;
        /** @brief SRAM1 clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM1LPEN_B_0x1 = 1;

    /** @brief SRAM2 clock enable in low-power mode */
    using RCC_AHB2LPENR_SRAM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clock disabled in low-power mode (value: 0)
     *          - B_0x1: SRAM2 clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SRAM2 clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM2LPEN_B_0x0 = 0;
        /** @brief SRAM2 clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM2LPEN_B_0x1 = 1;

    /** @brief RCC AHB4 low-power clock enable register */
    using RCC_AHB4LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOA peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOA peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOALPEN_B_0x0 = 0;
        /** @brief GPIOA peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOALPEN_B_0x1 = 1;

    /** @brief GPIOB peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOB peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOB peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOBLPEN_B_0x0 = 0;
        /** @brief GPIOB peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOBLPEN_B_0x1 = 1;

    /** @brief GPIOC peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOC peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOC peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOCLPEN_B_0x0 = 0;
        /** @brief GPIOC peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOCLPEN_B_0x1 = 1;

    /** @brief GPIOD peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIODLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOD peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOD peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIODLPEN_B_0x0 = 0;
        /** @brief GPIOD peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIODLPEN_B_0x1 = 1;

    /** @brief GPIOE peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOELPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOE peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOE peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOE peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOELPEN_B_0x0 = 0;
        /** @brief GPIOE peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOELPEN_B_0x1 = 1;

    /** @brief GPIOF peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOF peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOF peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOF peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOFLPEN_B_0x0 = 0;
        /** @brief GPIOF peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOFLPEN_B_0x1 = 1;

    /** @brief GPIOG peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOG peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOG peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOG peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOGLPEN_B_0x0 = 0;
        /** @brief GPIOG peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOGLPEN_B_0x1 = 1;

    /** @brief GPIOH peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOH peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOH peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOHLPEN_B_0x0 = 0;
        /** @brief GPIOH peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOHLPEN_B_0x1 = 1;

    /** @brief GPIOM peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOM peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOM peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOM peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOMLPEN_B_0x0 = 0;
        /** @brief GPIOM peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOMLPEN_B_0x1 = 1;

    /** @brief GPION peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIONLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPION peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPION peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPION peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIONLPEN_B_0x0 = 0;
        /** @brief GPION peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIONLPEN_B_0x1 = 1;

    /** @brief GPIOO peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOOLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOO peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOO peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOO peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOOLPEN_B_0x0 = 0;
        /** @brief GPIOO peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOOLPEN_B_0x1 = 1;

    /** @brief GPIOP peripheral clock enable in low-power mode */
    using RCC_AHB4LPENR_GPIOPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOP peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GPIOP peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GPIOP peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOPLPEN_B_0x0 = 0;
        /** @brief GPIOP peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOPLPEN_B_0x1 = 1;

    /** @brief CRC clock enable in low-power mode */
    using RCC_AHB4LPENR_CRCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC clock disabled in low-power mode (value: 0)
     *          - B_0x1: CRC clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief CRC clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_CRCLPEN_B_0x0 = 0;
        /** @brief CRC clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_CRCLPEN_B_0x1 = 1;

    /** @brief Backup RAM clock enable in low-power mode */
    using RCC_AHB4LPENR_BKPRAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM clock disabled in low-power mode (value: 0)
     *          - B_0x1: Backup RAM clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief Backup RAM clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB4LPENR_BKPRAMLPEN_B_0x0 = 0;
        /** @brief Backup RAM clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_BKPRAMLPEN_B_0x1 = 1;

    /** @brief RCC AHB3 low-power clock enable register */
    using RCC_AHB3LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG peripheral clock enable in low-power mode */
    using RCC_AHB3LPENR_RNGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: RNG peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief RNG peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB3LPENR_RNGLPEN_B_0x0 = 0;
        /** @brief RNG peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_RNGLPEN_B_0x1 = 1;

    /** @brief HASH peripheral clock enable in low-power mode */
    using RCC_AHB3LPENR_HASHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: HASH peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief HASH peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB3LPENR_HASHLPEN_B_0x0 = 0;
        /** @brief HASH peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_HASHLPEN_B_0x1 = 1;

    /** @brief CRYP peripheral clock enable in low-power mode */
    using RCC_AHB3LPENR_CRYPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRYP peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: CRYP peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief CRYP peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB3LPENR_CRYPLPEN_B_0x0 = 0;
        /** @brief CRYP peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_CRYPLPEN_B_0x1 = 1;

    /** @brief SAES peripheral clock enable in low-power mode */
    using RCC_AHB3LPENR_SAESLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: SAES peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SAES peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB3LPENR_SAESLPEN_B_0x0 = 0;
        /** @brief SAES peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_SAESLPEN_B_0x1 = 1;

    /** @brief PKA peripheral clock enable in low-power mode */
    using RCC_AHB3LPENR_PKALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: PKA peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief PKA peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_AHB3LPENR_PKALPEN_B_0x0 = 0;
        /** @brief PKA peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_PKALPEN_B_0x1 = 1;

    /** @brief RCC APB1 low-power clock enable register 1 */
    using RCC_APB1LPENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 peripheral clock enable in low-power mode */
    using RCC_APB1LPENR1_TIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM2 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM2 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM2LPEN_B_0x0 = 0;
        /** @brief TIM2 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM2LPEN_B_0x1 = 1;

    /** @brief TIM3 peripheral clock enable in low-power mode */
    using RCC_APB1LPENR1_TIM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM3 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM3 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM3LPEN_B_0x0 = 0;
        /** @brief TIM3 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM3LPEN_B_0x1 = 1;

    /** @brief TIM4 peripheral clock enable in low-power mode */
    using RCC_APB1LPENR1_TIM4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM4 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM4 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM4LPEN_B_0x0 = 0;
        /** @brief TIM4 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM4LPEN_B_0x1 = 1;

    /** @brief TIM5 peripheral clock enable in low-power mode */
    using RCC_APB1LPENR1_TIM5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM5 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM5 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM5LPEN_B_0x0 = 0;
        /** @brief TIM5 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM5LPEN_B_0x1 = 1;

    /** @brief TIM6 peripheral clock enable in low-power mode */
    using RCC_APB1LPENR1_TIM6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM6 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM6 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM6LPEN_B_0x0 = 0;
        /** @brief TIM6 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM6LPEN_B_0x1 = 1;

    /** @brief TIM7 peripheral clock enable in low-power mode */
    using RCC_APB1LPENR1_TIM7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM7 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM7 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM7LPEN_B_0x0 = 0;
        /** @brief TIM7 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM7LPEN_B_0x1 = 1;

    /** @brief TIM12 peripheral clock enable in low-power mode */
    using RCC_APB1LPENR1_TIM12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM12 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM12 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM12LPEN_B_0x0 = 0;
        /** @brief TIM12 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM12LPEN_B_0x1 = 1;

    /** @brief TIM13 peripheral clock enable in low-power mode */
    using RCC_APB1LPENR1_TIM13LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM13 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM13 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM13 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM13LPEN_B_0x0 = 0;
        /** @brief TIM13 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM13LPEN_B_0x1 = 1;

    /** @brief TIM14 peripheral clock enable in low-power mode */
    using RCC_APB1LPENR1_TIM14LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM14 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM14 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM14 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM14LPEN_B_0x0 = 0;
        /** @brief TIM14 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_TIM14LPEN_B_0x1 = 1;

    /** @brief LPTIM1 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_LPTIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: LPTIM1 peripheral clocks enabled in low-power mode (default after reset). (value: 1)
     */
        /** @brief LPTIM1 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_LPTIM1LPEN_B_0x0 = 0;
        /** @brief LPTIM1 peripheral clocks enabled in low-power mode (default after reset). */
    constexpr std::uint32_t RCC_APB1LPENR1_LPTIM1LPEN_B_0x1 = 1;

    /** @brief WWDG clock enable in low-power mode */
    using RCC_APB1LPENR1_WWDGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG clock disable in low-power mode (value: 0)
     *          - B_0x1: WWDG clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief WWDG clock disable in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_WWDGLPEN_B_0x0 = 0;
        /** @brief WWDG clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_WWDGLPEN_B_0x1 = 1;

    /** @brief SPI2 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_SPI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: SPI2 peripheral clocks enabled in low-power mode (default after reset). (value: 1)
     */
        /** @brief SPI2 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_SPI2LPEN_B_0x0 = 0;
        /** @brief SPI2 peripheral clocks enabled in low-power mode (default after reset). */
    constexpr std::uint32_t RCC_APB1LPENR1_SPI2LPEN_B_0x1 = 1;

    /** @brief SPI3 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_SPI3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: SPI3 peripheral clocks enabled in low-power mode (default after reset). (value: 1)
     */
        /** @brief SPI3 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_SPI3LPEN_B_0x0 = 0;
        /** @brief SPI3 peripheral clocks enabled in low-power mode (default after reset). */
    constexpr std::uint32_t RCC_APB1LPENR1_SPI3LPEN_B_0x1 = 1;

    /** @brief SPDIFRX peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_SPDIFRXLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPDIFRX peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: SPDIFRX peripheral clocks enabled in low-power mode (default after reset). (value: 1)
     */
        /** @brief SPDIFRX peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_SPDIFRXLPEN_B_0x0 = 0;
        /** @brief SPDIFRX peripheral clocks enabled in low-power mode (default after reset). */
    constexpr std::uint32_t RCC_APB1LPENR1_SPDIFRXLPEN_B_0x1 = 1;

    /** @brief USART2 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_USART2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: USART2 peripheral clocks enabled in low-power mode (default after reset). (value: 1)
     */
        /** @brief USART2 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_USART2LPEN_B_0x0 = 0;
        /** @brief USART2 peripheral clocks enabled in low-power mode (default after reset). */
    constexpr std::uint32_t RCC_APB1LPENR1_USART2LPEN_B_0x1 = 1;

    /** @brief USART3 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_USART3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: USART3 peripheral clocks enabled in low-power mode (default after reset): (value: 1)
     */
        /** @brief USART3 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_USART3LPEN_B_0x0 = 0;
        /** @brief USART3 peripheral clocks enabled in low-power mode (default after reset): */
    constexpr std::uint32_t RCC_APB1LPENR1_USART3LPEN_B_0x1 = 1;

    /** @brief UART4 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_UART4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: UART4 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief UART4 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_UART4LPEN_B_0x0 = 0;
        /** @brief UART4 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_UART4LPEN_B_0x1 = 1;

    /** @brief UART5 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_UART5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: UART5 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief UART5 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_UART5LPEN_B_0x0 = 0;
        /** @brief UART5 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_UART5LPEN_B_0x1 = 1;

    /** @brief I2C1/I3C1 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_I2C1_I3C1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1/I3C1 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: I2C1/I3C1 peripheral clocks enabled in low-power mode (default after reset): (value: 1)
     */
        /** @brief I2C1/I3C1 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_I2C1_I3C1LPEN_B_0x0 = 0;
        /** @brief I2C1/I3C1 peripheral clocks enabled in low-power mode (default after reset): */
    constexpr std::uint32_t RCC_APB1LPENR1_I2C1_I3C1LPEN_B_0x1 = 1;

    /** @brief I2C2 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_I2C2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: I2C2 peripheral clocks enabled in low-power mode (default after reset):. (value: 1)
     */
        /** @brief I2C2 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_I2C2LPEN_B_0x0 = 0;
        /** @brief I2C2 peripheral clocks enabled in low-power mode (default after reset):. */
    constexpr std::uint32_t RCC_APB1LPENR1_I2C2LPEN_B_0x1 = 1;

    /** @brief I2C3 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_I2C3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: I2C3 peripheral clocks enabled in low-power mode (default after reset): (value: 1)
     */
        /** @brief I2C3 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_I2C3LPEN_B_0x0 = 0;
        /** @brief I2C3 peripheral clocks enabled in low-power mode (default after reset): */
    constexpr std::uint32_t RCC_APB1LPENR1_I2C3LPEN_B_0x1 = 1;

    /** @brief HDMI-CEC peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_CECLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDMI-CEC peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: HDMI-CEC peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief HDMI-CEC peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_CECLPEN_B_0x0 = 0;
        /** @brief HDMI-CEC peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_CECLPEN_B_0x1 = 1;

    /** @brief UART7 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_UART7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART7 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: UART7 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief UART7 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_UART7LPEN_B_0x0 = 0;
        /** @brief UART7 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_UART7LPEN_B_0x1 = 1;

    /** @brief UART8 peripheral clocks enable in low-power mode */
    using RCC_APB1LPENR1_UART8LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART8 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: UART8 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief UART8 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR1_UART8LPEN_B_0x0 = 0;
        /** @brief UART8 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR1_UART8LPEN_B_0x1 = 1;

    /** @brief RCC APB1 low-power clock enable register 2 */
    using RCC_APB1LPENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock recovery system peripheral clock enable in low-power mode */
    using RCC_APB1LPENR2_CRSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: CRS peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief CRS peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR2_CRSLPEN_B_0x0 = 0;
        /** @brief CRS peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR2_CRSLPEN_B_0x1 = 1;

    /** @brief MDIOS peripheral clock enable in low-power mode */
    using RCC_APB1LPENR2_MDIOSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: MDIOS peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief MDIOS peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR2_MDIOSLPEN_B_0x0 = 0;
        /** @brief MDIOS peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR2_MDIOSLPEN_B_0x1 = 1;

    /** @brief FDCAN peripheral clock enable in low-power mode */
    using RCC_APB1LPENR2_FDCANLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: FDCAN peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief FDCAN peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR2_FDCANLPEN_B_0x0 = 0;
        /** @brief FDCAN peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR2_FDCANLPEN_B_0x1 = 1;

    /** @brief UCPD peripheral clock enable in low-power mode */
    using RCC_APB1LPENR2_UCPD1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: UCPD peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief UCPD peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB1LPENR2_UCPD1LPEN_B_0x0 = 0;
        /** @brief UCPD peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LPENR2_UCPD1LPEN_B_0x1 = 1;

    /** @brief RCC APB2 low-power clock enable register */
    using RCC_APB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 peripheral clock enable in low-power mode */
    using RCC_APB2LPENR_TIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM1 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM1 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x0 = 0;
        /** @brief TIM1 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x1 = 1;

    /** @brief USART1 peripheral clock enable in low-power mode */
    using RCC_APB2LPENR_USART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: USART1 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief USART1 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x0 = 0;
        /** @brief USART1 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x1 = 1;

    /** @brief SPI2S1 peripheral clock enable in low-power mode */
    using RCC_APB2LPENR_SPI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2S1 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: SPI2S1 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SPI2S1 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x0 = 0;
        /** @brief SPI2S1 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x1 = 1;

    /** @brief SPI4 peripheral clock enable in low-power mode */
    using RCC_APB2LPENR_SPI4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: SPI4 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SPI4 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI4LPEN_B_0x0 = 0;
        /** @brief SPI4 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI4LPEN_B_0x1 = 1;

    /** @brief TIM15 peripheral clock enable in low-power mode */
    using RCC_APB2LPENR_TIM15LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM15 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM15 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM15LPEN_B_0x0 = 0;
        /** @brief TIM15 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM15LPEN_B_0x1 = 1;

    /** @brief TIM16 peripheral clock enable in low-power mode */
    using RCC_APB2LPENR_TIM16LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM16 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM16 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM16LPEN_B_0x0 = 0;
        /** @brief TIM16 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM16LPEN_B_0x1 = 1;

    /** @brief TIM17 peripheral clock enable in low-power mode */
    using RCC_APB2LPENR_TIM17LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM17 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM17 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM17LPEN_B_0x0 = 0;
        /** @brief TIM17 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM17LPEN_B_0x1 = 1;

    /** @brief TIM9 peripheral clock enable in low-power mode */
    using RCC_APB2LPENR_TIM9LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM9 peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: TIM9 peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief TIM9 peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM9LPEN_B_0x0 = 0;
        /** @brief TIM9 peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM9LPEN_B_0x1 = 1;

    /** @brief SPI5 peripheral clocks enable in low-power mode */
    using RCC_APB2LPENR_SPI5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI5 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: SPI5 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SPI5 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI5LPEN_B_0x0 = 0;
        /** @brief SPI5 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI5LPEN_B_0x1 = 1;

    /** @brief SAI1 peripheral clocks enable in low-power mode */
    using RCC_APB2LPENR_SAI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: SAI1 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SAI1 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_SAI1LPEN_B_0x0 = 0;
        /** @brief SAI1 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SAI1LPEN_B_0x1 = 1;

    /** @brief SAI2 peripheral clocks enable in low-power mode */
    using RCC_APB2LPENR_SAI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: SAI2 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SAI2 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB2LPENR_SAI2LPEN_B_0x0 = 0;
        /** @brief SAI2 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SAI2LPEN_B_0x1 = 1;

    /** @brief RCC APB4 low-power clock enable register */
    using RCC_APB4LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS peripheral clock enable in low-power mode */
    using RCC_APB4LPENR_SBSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBS peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: SBS peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SBS peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_SBSLPEN_B_0x0 = 0;
        /** @brief SBS peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_SBSLPEN_B_0x1 = 1;

    /** @brief LPUART1 peripheral clocks enable in low-power mode */
    using RCC_APB4LPENR_LPUART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: LPUART1 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief LPUART1 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_LPUART1LPEN_B_0x0 = 0;
        /** @brief LPUART1 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_LPUART1LPEN_B_0x1 = 1;

    /** @brief SPI/I2S6 peripheral clocks enable in low-power mode */
    using RCC_APB4LPENR_SPI6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI/I2S6 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: SPI/I2S6 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief SPI/I2S6 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_SPI6LPEN_B_0x0 = 0;
        /** @brief SPI/I2S6 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_SPI6LPEN_B_0x1 = 1;

    /** @brief LPTIM2 peripheral clocks enable in low-power mode */
    using RCC_APB4LPENR_LPTIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: LPTIM2 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief LPTIM2 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM2LPEN_B_0x0 = 0;
        /** @brief LPTIM2 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM2LPEN_B_0x1 = 1;

    /** @brief LPTIM3 peripheral clocks enable in low-power mode */
    using RCC_APB4LPENR_LPTIM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: LPTIM3 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief LPTIM3 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM3LPEN_B_0x0 = 0;
        /** @brief LPTIM3 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM3LPEN_B_0x1 = 1;

    /** @brief LPTIM4 peripheral clocks enable in low-power mode */
    using RCC_APB4LPENR_LPTIM4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: LPTIM4 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief LPTIM4 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM4LPEN_B_0x0 = 0;
        /** @brief LPTIM4 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM4LPEN_B_0x1 = 1;

    /** @brief LPTIM5 peripheral clocks enable in low-power mode */
    using RCC_APB4LPENR_LPTIM5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM5 peripheral clocks disabled in low-power mode (value: 0)
     *          - B_0x1: LPTIM5 peripheral clocks enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief LPTIM5 peripheral clocks disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM5LPEN_B_0x0 = 0;
        /** @brief LPTIM5 peripheral clocks enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM5LPEN_B_0x1 = 1;

    /** @brief VREF peripheral clock enable in low-power mode */
    using RCC_APB4LPENR_VREFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREF peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: VREF peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief VREF peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_VREFLPEN_B_0x0 = 0;
        /** @brief VREF peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_VREFLPEN_B_0x1 = 1;

    /** @brief RTC APB clock enable in low-power mode */
    using RCC_APB4LPENR_RTCAPBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The register clock interface of the RTC (APB) is disabled in low-power mode (value: 0)
     *          - B_0x1: The register clock interface of the RTC (APB) is enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief The register clock interface of the RTC (APB) is disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_RTCAPBLPEN_B_0x0 = 0;
        /** @brief The register clock interface of the RTC (APB) is enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_RTCAPBLPEN_B_0x1 = 1;

    /** @brief temperature sensor peripheral clock enable in low-power mode */
    using RCC_APB4LPENR_DTSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: DTS peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief DTS peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB4LPENR_DTSLPEN_B_0x0 = 0;
        /** @brief DTS peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_DTSLPEN_B_0x1 = 1;

    /** @brief RCC APB5 low-power clock enable register */
    using RCC_APB5LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC peripheral clock enable in low-power mode */
    using RCC_APB5LPENR_LTDCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: LTDC peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief LTDC peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB5LPENR_LTDCLPEN_B_0x0 = 0;
        /** @brief LTDC peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB5LPENR_LTDCLPEN_B_0x1 = 1;

    /** @brief DCMIPP peripheral clock enable in low-power mode */
    using RCC_APB5LPENR_DCMIPPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMIPP peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: DCMIPP peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief DCMIPP peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB5LPENR_DCMIPPLPEN_B_0x0 = 0;
        /** @brief DCMIPP peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB5LPENR_DCMIPPLPEN_B_0x1 = 1;

    /** @brief GFXTIM peripheral clock enable in low-power mode */
    using RCC_APB5LPENR_GFXTIMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXTIM peripheral clock disabled in low-power mode (value: 0)
     *          - B_0x1: GFXTIM peripheral clock enabled in low-power mode (default after reset) (value: 1)
     */
        /** @brief GFXTIM peripheral clock disabled in low-power mode */
    constexpr std::uint32_t RCC_APB5LPENR_GFXTIMLPEN_B_0x0 = 0;
        /** @brief GFXTIM peripheral clock enabled in low-power mode (default after reset) */
    constexpr std::uint32_t RCC_APB5LPENR_GFXTIMLPEN_B_0x1 = 1;

}

#endif
