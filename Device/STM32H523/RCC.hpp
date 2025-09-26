/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H523_RCC_HPP
#define EMBEDDED_PP_STM32H523_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RCC address block description */
namespace STM32H523::RCC {

    /** @brief RCC clock control register */
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

    /** @brief HSI clock ready flag */
    using RCC_CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: HSI clock is ready (value: 1)
     */
        /** @brief HSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x0 = 0;
        /** @brief HSI clock is ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x1 = 1;

    /** @brief HSI clock enable in Stop mode */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect on HSI (default after reset) (value: 0)
     *          - B_0x1: HSI is forced to ON even in Stop mode (value: 1)
     */
        /** @brief no effect on HSI (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI is forced to ON even in Stop mode */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x1 = 1;

    /** @brief HSI clock divider */
    using RCC_CR_HSIDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: division by 1, hsi_ck, hsi_ker_ck = 64 MHz (value: 0)
     *          - B_0x1: division by 2, hsi_ck, hsi_ker_ck = 32 MHz (default after reset) (value: 1)
     *          - B_0x2: division by 4, hsi_ck, hsi_ker_ck = 16 MHz (value: 2)
     *          - B_0x3: division by 8, hsi_ck, hsi_ker_ck = 8 MHz (value: 3)
     */
        /** @brief division by 1, hsi_ck, hsi_ker_ck = 64 MHz */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x0 = 0;
        /** @brief division by 2, hsi_ck, hsi_ker_ck = 32 MHz (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x1 = 1;
        /** @brief division by 4, hsi_ck, hsi_ker_ck = 16 MHz */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x2 = 2;
        /** @brief division by 8, hsi_ck, hsi_ker_ck = 8 MHz */
    constexpr std::uint32_t RCC_CR_HSIDIV_B_0x3 = 3;

    /** @brief HSI divider flag */
    using RCC_CR_HSIDIVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: new division ratio not yet propagated to hsi_ck , hsi_ker_ck (default after reset) (value: 0)
     *          - B_0x1: hsi_ck , hsi_ker_ck clock frequency reflects the new HSIDIV value (default register value when the clock setting is completed). (value: 1)
     */
        /** @brief new division ratio not yet propagated to hsi_ck , hsi_ker_ck (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIDIVF_B_0x0 = 0;
        /** @brief hsi_ck , hsi_ker_ck clock frequency reflects the new HSIDIV value (default register value when the clock setting is completed). */
    constexpr std::uint32_t RCC_CR_HSIDIVF_B_0x1 = 1;

    /** @brief CSI clock enable */
    using RCC_CR_CSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI is OFF (default after reset) (value: 0)
     *          - B_0x1: CSI is ON (value: 1)
     */
        /** @brief CSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_CSION_B_0x0 = 0;
        /** @brief CSI is ON */
    constexpr std::uint32_t RCC_CR_CSION_B_0x1 = 1;

    /** @brief CSI clock ready flag */
    using RCC_CR_CSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: CSI clock is ready (value: 1)
     */
        /** @brief CSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_CSIRDY_B_0x0 = 0;
        /** @brief CSI clock is ready */
    constexpr std::uint32_t RCC_CR_CSIRDY_B_0x1 = 1;

    /** @brief CSI clock enable in Stop mode */
    using RCC_CR_CSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief HSE clock security system enable */
    using RCC_CR_HSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSS on HSE OFF (clock detector OFF) (default after reset) (value: 0)
     *          - B_0x1: CSS on HSE ON (clock detector ON if the HSE oscillator is stable, OFF if not). (value: 1)
     */
        /** @brief CSS on HSE OFF (clock detector OFF) (default after reset) */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x0 = 0;
        /** @brief CSS on HSE ON (clock detector ON if the HSE oscillator is stable, OFF if not). */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x1 = 1;

    /** @brief external high speed clock type in Bypass mode */
    using RCC_CR_HSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE in analog mode (default after reset) (value: 0)
     *          - B_0x1: HSE in digital mode (value: 1)
     */
        /** @brief HSE in analog mode (default after reset) */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x0 = 0;
        /** @brief HSE in digital mode */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x1 = 1;

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
     *          - B_0x0: PLL2 unlocked (value: 0)
     *          - B_0x1: PLL2 locked (value: 1)
     */
        /** @brief PLL2 unlocked */
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
    using RCC_HSICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock calibration */
    using RCC_HSICFGR_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock trimming */
    using RCC_HSICFGR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock recovery RC register */
    using RCC_CRRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal RC 48 MHz clock calibration */
    using RCC_CRRCR_HSI48CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC CSI calibration register */
    using RCC_CSICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI clock calibration */
    using RCC_CSICFGR_CSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI clock trimming */
    using RCC_CSICFGR_CSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock configuration register1 */
    using RCC_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock and trace clock switch */
    using RCC_CFGR1_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as system clock (hsi_ck) (default after reset) (value: 0)
     *          - B_0x1: CSI selected as system clock (csi_ck) (value: 1)
     *          - B_0x2: HSE selected as system clock (hse_ck) (value: 2)
     *          - B_0x3: PLL1 selected as system clock (pll1_p_ck for sys_ck) (value: 3)
     */
        /** @brief HSI selected as system clock (hsi_ck) (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x0 = 0;
        /** @brief CSI selected as system clock (csi_ck) */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x1 = 1;
        /** @brief HSE selected as system clock (hse_ck) */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x2 = 2;
        /** @brief PLL1 selected as system clock (pll1_p_ck for sys_ck) */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x3 = 3;

    /** @brief system clock switch status */
    using RCC_CFGR1_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: CSI used as system clock (csi_ck) (value: 1)
     *          - B_0x2: HSE used as system clock (hse_ck) (value: 2)
     *          - B_0x3: PLL1 used as system clock (pll1_p_ck) (value: 3)
     */
        /** @brief CSI used as system clock (csi_ck) */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x1 = 1;
        /** @brief HSE used as system clock (hse_ck) */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x2 = 2;
        /** @brief PLL1 used as system clock (pll1_p_ck) */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x3 = 3;

    /** @brief system clock selection after a wakeup from system Stop */
    using RCC_CFGR1_STOPWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: CSI selected as wakeup clock from system Stop (value: 1)
     */
        /** @brief CSI selected as wakeup clock from system Stop */
    constexpr std::uint32_t RCC_CFGR1_STOPWUCK_B_0x1 = 1;

    /** @brief kernel clock selection after a wakeup from system Stop */
    using RCC_CFGR1_STOPKERWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as wakeup clock from system Stop (default after reset) (value: 0)
     *          - B_0x1: CSI selected as wakeup clock from system Stop (value: 1)
     */
        /** @brief HSI selected as wakeup clock from system Stop (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_STOPKERWUCK_B_0x0 = 0;
        /** @brief CSI selected as wakeup clock from system Stop */
    constexpr std::uint32_t RCC_CFGR1_STOPKERWUCK_B_0x1 = 1;

    /** @brief HSE division factor for RTC clock */
    using RCC_CFGR1_RTCPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t RCC_CFGR1_RTCPRE_B_0x0 = 0;
        /** @brief no clock */
    constexpr std::uint32_t RCC_CFGR1_RTCPRE_B_0x1 = 1;
        /** @brief HSE/2 */
    constexpr std::uint32_t RCC_CFGR1_RTCPRE_B_0x2 = 2;
        /** @brief HSE/3 */
    constexpr std::uint32_t RCC_CFGR1_RTCPRE_B_0x3 = 3;
        /** @brief HSE/4 */
    constexpr std::uint32_t RCC_CFGR1_RTCPRE_B_0x4 = 4;
        /** @brief HSE/62 */
    constexpr std::uint32_t RCC_CFGR1_RTCPRE_B_0x3E = 62;
        /** @brief HSE/63 */
    constexpr std::uint32_t RCC_CFGR1_RTCPRE_B_0x3F = 63;

    /** @brief timers clocks prescaler selection */
    using RCC_CFGR1_TIMPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The timers kernel clock is equal to rcc_hclk1 if PPRE1 or PPRE2 corresponds to a division by 1 or 2, else it is equal to 2 x Fless thansub>rcc_pclk1less than/sub> or 2 x Fless thansub>rcc_pclk2less than/sub> (default after reset) (value: 0)
     *          - B_0x1: The timers kernel clock is equal to 2 x Fless thansub>rcc_pclk1less than/sub> or 2 x Fless thansub>rcc_pclk2less than/sub> if PPRE1 or PPRE2 corresponds to a division by 1, 2 or 4, else it is equal to 4 x Fless thansub>rcc_pclk1less than/sub> or 4 x Fless thansub>rcc_pclk2less than/sub> (value: 1)
     */
        /** @brief The timers kernel clock is equal to rcc_hclk1 if PPRE1 or PPRE2 corresponds to a division by 1 or 2, else it is equal to 2 x Fless thansub>rcc_pclk1less than/sub> or 2 x Fless thansub>rcc_pclk2less than/sub> (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_TIMPRE_B_0x0 = 0;
        /** @brief The timers kernel clock is equal to 2 x Fless thansub>rcc_pclk1less than/sub> or 2 x Fless thansub>rcc_pclk2less than/sub> if PPRE1 or PPRE2 corresponds to a division by 1, 2 or 4, else it is equal to 4 x Fless thansub>rcc_pclk1less than/sub> or 4 x Fless thansub>rcc_pclk2less than/sub> */
    constexpr std::uint32_t RCC_CFGR1_TIMPRE_B_0x1 = 1;

    /** @brief MCO1 prescaler */
    using RCC_CFGR1_MCO1PRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (default after reset) (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x4: division by 4 (value: 4)
     *          - B_0xF: division by 15 (value: 15)
     */
        /** @brief prescaler disabled (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_MCO1PRE_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_CFGR1_MCO1PRE_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_CFGR1_MCO1PRE_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_CFGR1_MCO1PRE_B_0x3 = 3;
        /** @brief division by 4 */
    constexpr std::uint32_t RCC_CFGR1_MCO1PRE_B_0x4 = 4;
        /** @brief division by 15 */
    constexpr std::uint32_t RCC_CFGR1_MCO1PRE_B_0xF = 15;

    /** @brief Microcontroller clock output 1 */
    using RCC_CFGR1_MCO1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI clock selected (hsi_ck) (default after reset) (value: 0)
     *          - B_0x1: LSE oscillator clock selected (lse_ck) (value: 1)
     *          - B_0x2: HSE clock selected (hse_ck) (value: 2)
     *          - B_0x3: PLL1 clock selected (pll1_q_ck) (value: 3)
     *          - B_0x4: HSI48 clock selected (hsi48_ck) (value: 4)
     */
        /** @brief HSI clock selected (hsi_ck) (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_MCO1SEL_B_0x0 = 0;
        /** @brief LSE oscillator clock selected (lse_ck) */
    constexpr std::uint32_t RCC_CFGR1_MCO1SEL_B_0x1 = 1;
        /** @brief HSE clock selected (hse_ck) */
    constexpr std::uint32_t RCC_CFGR1_MCO1SEL_B_0x2 = 2;
        /** @brief PLL1 clock selected (pll1_q_ck) */
    constexpr std::uint32_t RCC_CFGR1_MCO1SEL_B_0x3 = 3;
        /** @brief HSI48 clock selected (hsi48_ck) */
    constexpr std::uint32_t RCC_CFGR1_MCO1SEL_B_0x4 = 4;

    /** @brief MCO2 prescaler */
    using RCC_CFGR1_MCO2PRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (default after reset) (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x4: division by 4 (value: 4)
     *          - B_0xF: division by 15 (value: 15)
     */
        /** @brief prescaler disabled (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x3 = 3;
        /** @brief division by 4 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x4 = 4;
        /** @brief division by 15 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0xF = 15;

    /** @brief microcontroller clock output 2 */
    using RCC_CFGR1_MCO2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: system clock selected (sys_ck) (default after reset) (value: 0)
     *          - B_0x1: PLL2 oscillator clock selected (pll2_p_ck) (value: 1)
     *          - B_0x2: HSE clock selected (hse_ck) (value: 2)
     *          - B_0x3: PLL1 clock selected (pll1_p_ck) (value: 3)
     *          - B_0x4: CSI clock selected (csi_ck) (value: 4)
     *          - B_0x5: LSI clock selected (lsi_ck) (value: 5)
     */
        /** @brief system clock selected (sys_ck) (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x0 = 0;
        /** @brief PLL2 oscillator clock selected (pll2_p_ck) */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x1 = 1;
        /** @brief HSE clock selected (hse_ck) */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x2 = 2;
        /** @brief PLL1 clock selected (pll1_p_ck) */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x3 = 3;
        /** @brief CSI clock selected (csi_ck) */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x4 = 4;
        /** @brief LSI clock selected (lsi_ck) */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x5 = 5;

    /** @brief RCC CPU domain clock configuration register 2 */
    using RCC_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB prescaler */
    using RCC_CFGR2_HPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x8: rcc_hclk = sys_ck / 2 (value: 8)
     *          - B_0x9: rcc_hclk = sys_ck / 4 (value: 9)
     *          - B_0xA: rcc_hclk = sys_ck / 8 (value: 10)
     *          - B_0xB: rcc_hclk = sys_ck / 16 (value: 11)
     *          - B_0xC: rcc_hclk = sys_ck / 64 (value: 12)
     *          - B_0xD: rcc_hclk = sys_ck / 128 (value: 13)
     *          - B_0xE: rcc_hclk = sys_ck / 256 (value: 14)
     *          - B_0xF: rcc_hclk = sys_ck / 512 (value: 15)
     */
        /** @brief rcc_hclk = sys_ck / 2 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x8 = 8;
        /** @brief rcc_hclk = sys_ck / 4 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x9 = 9;
        /** @brief rcc_hclk = sys_ck / 8 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xA = 10;
        /** @brief rcc_hclk = sys_ck / 16 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xB = 11;
        /** @brief rcc_hclk = sys_ck / 64 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xC = 12;
        /** @brief rcc_hclk = sys_ck / 128 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xD = 13;
        /** @brief rcc_hclk = sys_ck / 256 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xE = 14;
        /** @brief rcc_hclk = sys_ck / 512 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xF = 15;

    /** @brief APB low-speed prescaler (APB1) */
    using RCC_CFGR2_PPRE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk1 = rcc_hclk1 / 2 (value: 4)
     *          - B_0x5: rcc_pclk1 = rcc_hclk1 / 4 (value: 5)
     *          - B_0x6: rcc_pclk1 = rcc_hclk1 / 8 (value: 6)
     *          - B_0x7: rcc_pclk1 = rcc_hclk1 / 16 (value: 7)
     */
        /** @brief rcc_pclk1 = rcc_hclk1 / 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x4 = 4;
        /** @brief rcc_pclk1 = rcc_hclk1 / 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x5 = 5;
        /** @brief rcc_pclk1 = rcc_hclk1 / 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x6 = 6;
        /** @brief rcc_pclk1 = rcc_hclk1 / 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x7 = 7;

    /** @brief APB high-speed prescaler (APB2) */
    using RCC_CFGR2_PPRE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk2 = rcc_hclk1 / 2 (value: 4)
     *          - B_0x5: rcc_pclk2 = rcc_hclk1 / 4 (value: 5)
     *          - B_0x6: rcc_pclk2 = rcc_hclk1 / 8 (value: 6)
     *          - B_0x7: rcc_pclk2 = rcc_hclk1 / 16 (value: 7)
     */
        /** @brief rcc_pclk2 = rcc_hclk1 / 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x4 = 4;
        /** @brief rcc_pclk2 = rcc_hclk1 / 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x5 = 5;
        /** @brief rcc_pclk2 = rcc_hclk1 / 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x6 = 6;
        /** @brief rcc_pclk2 = rcc_hclk1 / 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x7 = 7;

    /** @brief APB low-speed prescaler (APB3) */
    using RCC_CFGR2_PPRE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk3 = rcc_hclk1 / 2 (value: 4)
     *          - B_0x5: rcc_pclk3 = rcc_hclk1 / 4 (value: 5)
     *          - B_0x6: rcc_pclk3 = rcc_hclk1 / 8 (value: 6)
     *          - B_0x7: rcc_pclk3 = rcc_hclk1 / 16 (value: 7)
     */
        /** @brief rcc_pclk3 = rcc_hclk1 / 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE3_B_0x4 = 4;
        /** @brief rcc_pclk3 = rcc_hclk1 / 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE3_B_0x5 = 5;
        /** @brief rcc_pclk3 = rcc_hclk1 / 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE3_B_0x6 = 6;
        /** @brief rcc_pclk3 = rcc_hclk1 / 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE3_B_0x7 = 7;

    /** @brief AHB1 clock disable */
    using RCC_CFGR2_AHB1DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB1 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: AHB1 clock disabled (value: 1)
     */
        /** @brief AHB1 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_AHB1DIS_B_0x0 = 0;
        /** @brief AHB1 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_AHB1DIS_B_0x1 = 1;

    /** @brief AHB2 clock disable */
    using RCC_CFGR2_AHB2DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: AHB2 clock disabled (value: 1)
     */
        /** @brief AHB2 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_AHB2DIS_B_0x0 = 0;
        /** @brief AHB2 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_AHB2DIS_B_0x1 = 1;

    /** @brief AHB4 clock disable */
    using RCC_CFGR2_AHB4DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB4 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: AHB4 clock disabled (value: 1)
     */
        /** @brief AHB4 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_AHB4DIS_B_0x0 = 0;
        /** @brief AHB4 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_AHB4DIS_B_0x1 = 1;

    /** @brief APB1 clock disable value */
    using RCC_CFGR2_APB1DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: APB1 clock disabled (value: 1)
     */
        /** @brief APB1 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_APB1DIS_B_0x0 = 0;
        /** @brief APB1 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_APB1DIS_B_0x1 = 1;

    /** @brief APB2 clock disable value */
    using RCC_CFGR2_APB2DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: APB2 clock disabled (value: 1)
     */
        /** @brief APB2 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_APB2DIS_B_0x0 = 0;
        /** @brief APB2 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_APB2DIS_B_0x1 = 1;

    /** @brief APB3 clock disable value. */
    using RCC_CFGR2_APB3DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: APB3 clock disabled (value: 1)
     */
        /** @brief APB3 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_APB3DIS_B_0x0 = 0;
        /** @brief APB3 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_APB3DIS_B_0x1 = 1;

    /** @brief RCC PLL clock source selection register */
    using RCC_PLL1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1M and PLLs clock source selection */
    using RCC_PLL1CFGR_PLL1SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock send to PLL1M divider and PLLs (default after reset). (value: 0)
     *          - B_0x1: HSI selected as PLL clock (hsi_ck) (value: 1)
     *          - B_0x2: CSI selected as PLL clock (csi_ck) (value: 2)
     *          - B_0x3: HSE selected as PLL clock (hse_ck) (value: 3)
     */
        /** @brief no clock send to PLL1M divider and PLLs (default after reset). */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x0 = 0;
        /** @brief HSI selected as PLL clock (hsi_ck) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x1 = 1;
        /** @brief CSI selected as PLL clock (csi_ck) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x2 = 2;
        /** @brief HSE selected as PLL clock (hse_ck) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x3 = 3;

    /** @brief PLL1 input frequency range */
    using RCC_PLL1CFGR_PLL1RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 input (ref1_ck) clock range frequency between 1 and 2 MHz (default after reset) (value: 0)
     *          - B_0x1: PLL1 input (ref1_ck) clock range frequency between 2 and 4 MHz (value: 1)
     *          - B_0x2: PLL1 input (ref1_ck) clock range frequency between 4 and 8 MHz (value: 2)
     *          - B_0x3: PLL1 input (ref1_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL1 input (ref1_ck) clock range frequency between 1 and 2 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RGE_B_0x0 = 0;
        /** @brief PLL1 input (ref1_ck) clock range frequency between 2 and 4 MHz */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RGE_B_0x1 = 1;
        /** @brief PLL1 input (ref1_ck) clock range frequency between 4 and 8 MHz */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RGE_B_0x2 = 2;
        /** @brief PLL1 input (ref1_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RGE_B_0x3 = 3;

    /** @brief PLL1 fractional latch enable */
    using RCC_PLL1CFGR_PLL1FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 VCO selection */
    using RCC_PLL1CFGR_PLL1VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wide VCO range: 192 to 836 MHz (default after reset) (value: 0)
     *          - B_0x1: medium VCO range: 150 to 420 MHz (value: 1)
     */
        /** @brief wide VCO range: 192 to 836 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1VCOSEL_B_0x0 = 0;
        /** @brief medium VCO range: 150 to 420 MHz */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1VCOSEL_B_0x1 = 1;

    /** @brief prescaler for PLL1 */
    using RCC_PLL1CFGR_PLL1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (default after reset) (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x20: division by 32 (value: 32)
     *          - B_0x3F: division by 63 (value: 63)
     */
        /** @brief prescaler disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x3 = 3;
        /** @brief division by 32 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x20 = 32;
        /** @brief division by 63 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x3F = 63;

    /** @brief PLL1 DIVP divider output enable */
    using RCC_PLL1CFGR_PLL1PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll1_p_ck output enabled (value: 1)
     */
        /** @brief pll1_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x0 = 0;
        /** @brief pll1_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x1 = 1;

    /** @brief PLL1 DIVQ divider output enable */
    using RCC_PLL1CFGR_PLL1QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck output enabled (value: 1)
     */
        /** @brief pll1_q_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x0 = 0;
        /** @brief pll1_q_ck output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x1 = 1;

    /** @brief PLL1 DIVR divider output enable */
    using RCC_PLL1CFGR_PLL1REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_r_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll1_r_ck output enabled (value: 1)
     */
        /** @brief pll1_r_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1REN_B_0x0 = 0;
        /** @brief pll1_r_ck output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1REN_B_0x1 = 1;

    /** @brief RCC PLL clock source selection register */
    using RCC_PLL2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2M and PLLs clock source selection */
    using RCC_PLL2CFGR_PLL2SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock send to PLL2M divider and PLLs (default after reset) (value: 0)
     *          - B_0x1: HSI selected as PLL clock (hsi_ck) (value: 1)
     *          - B_0x2: CSI selected as PLL clock (csi_ck) (value: 2)
     *          - B_0x3: HSE selected as PLL clock (hse_ck) (value: 3)
     */
        /** @brief no clock send to PLL2M divider and PLLs (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x0 = 0;
        /** @brief HSI selected as PLL clock (hsi_ck) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x1 = 1;
        /** @brief CSI selected as PLL clock (csi_ck) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x2 = 2;
        /** @brief HSE selected as PLL clock (hse_ck) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x3 = 3;

    /** @brief PLL2 input frequency range */
    using RCC_PLL2CFGR_PLL2RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 input (ref2_ck) clock range frequency between 1 and 2 MHz (default after reset) 01: PLL2 input (ref2_ck) clock range frequency between 2 and 4 MHz (value: 0)
     *          - B_0x2: PLL2 input (ref2_ck) clock range frequency between 4 and 8 MHz (value: 2)
     *          - B_0x3: PLL2 input (ref2_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL2 input (ref2_ck) clock range frequency between 1 and 2 MHz (default after reset) 01: PLL2 input (ref2_ck) clock range frequency between 2 and 4 MHz */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2RGE_B_0x0 = 0;
        /** @brief PLL2 input (ref2_ck) clock range frequency between 4 and 8 MHz */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2RGE_B_0x2 = 2;
        /** @brief PLL2 input (ref2_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2RGE_B_0x3 = 3;

    /** @brief PLL2 fractional latch enable */
    using RCC_PLL2CFGR_PLL2FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck output enabled (value: 1)
     */
        /** @brief pll2_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2FRACEN_B_0x0 = 0;
        /** @brief pll2_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2FRACEN_B_0x1 = 1;

    /** @brief PLL2 VCO selection */
    using RCC_PLL2CFGR_PLL2VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wide VCO range 192 to 836 MHz (default after reset) (value: 0)
     *          - B_0x1: medium VCO range 150 to 420 MHz (value: 1)
     */
        /** @brief wide VCO range 192 to 836 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2VCOSEL_B_0x0 = 0;
        /** @brief medium VCO range 150 to 420 MHz */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2VCOSEL_B_0x1 = 1;

    /** @brief prescaler for PLL2 */
    using RCC_PLL2CFGR_PLL2M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (default after reset) (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x20: division by 32 (value: 32)
     *          - B_0x3F: division by 63 (value: 63)
     */
        /** @brief prescaler disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0x3 = 3;
        /** @brief division by 32 */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0x20 = 32;
        /** @brief division by 63 */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0x3F = 63;

    /** @brief PLL2 DIVP divider output enable */
    using RCC_PLL2CFGR_PLL2PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck output enabled (value: 1)
     */
        /** @brief pll2_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2PEN_B_0x0 = 0;
        /** @brief pll2_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2PEN_B_0x1 = 1;

    /** @brief PLL2 DIVQ divider output enable */
    using RCC_PLL2CFGR_PLL2QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_q_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck output enabled (value: 1)
     */
        /** @brief pll2_q_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2QEN_B_0x0 = 0;
        /** @brief pll2_q_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2QEN_B_0x1 = 1;

    /** @brief PLL2 DIVR divider output enable */
    using RCC_PLL2CFGR_PLL2REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_r_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck output enabled (value: 1)
     */
        /** @brief pll2_r_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2REN_B_0x0 = 0;
        /** @brief pll2_r_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2REN_B_0x1 = 1;

    /** @brief RCC PLL clock source selection register */
    using RCC_PLL3CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3M and PLLs clock source selection */
    using RCC_PLL3CFGR_PLL3SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock send to PLL3M divider and PLLs (default after reset) (value: 0)
     *          - B_0x1: HSI selected as PLL clock (hsi_ck) (value: 1)
     *          - B_0x2: CSI selected as PLL clock (csi_ck) (value: 2)
     *          - B_0x3: HSE selected as PLL clock (hse_ck) (value: 3)
     */
        /** @brief no clock send to PLL3M divider and PLLs (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3SRC_B_0x0 = 0;
        /** @brief HSI selected as PLL clock (hsi_ck) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3SRC_B_0x1 = 1;
        /** @brief CSI selected as PLL clock (csi_ck) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3SRC_B_0x2 = 2;
        /** @brief HSE selected as PLL clock (hse_ck) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3SRC_B_0x3 = 3;

    /** @brief PLL3 input frequency range */
    using RCC_PLL3CFGR_PLL3RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 input (ref3_ck) clock range frequency between 1 and 2 MHz (default after reset) (value: 0)
     *          - B_0x1: PLL3 input (ref3_ck) clock range frequency between 2 and 4 MHz (value: 1)
     *          - B_0x2: PLL3 input (ref3_ck) clock range frequency between 4 and 8 MHz (value: 2)
     *          - B_0x3: PLL3 input (ref3_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL3 input (ref3_ck) clock range frequency between 1 and 2 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3RGE_B_0x0 = 0;
        /** @brief PLL3 input (ref3_ck) clock range frequency between 2 and 4 MHz */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3RGE_B_0x1 = 1;
        /** @brief PLL3 input (ref3_ck) clock range frequency between 4 and 8 MHz */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3RGE_B_0x2 = 2;
        /** @brief PLL3 input (ref3_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3RGE_B_0x3 = 3;

    /** @brief PLL3 fractional latch enable */
    using RCC_PLL3CFGR_PLL3FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 VCO selection */
    using RCC_PLL3CFGR_PLL3VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wide VCO range 192 to 836 MHz (default after reset) (value: 0)
     *          - B_0x1: medium VCO range 150 to 420 MHz (value: 1)
     */
        /** @brief wide VCO range 192 to 836 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3VCOSEL_B_0x0 = 0;
        /** @brief medium VCO range 150 to 420 MHz */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3VCOSEL_B_0x1 = 1;

    /** @brief prescaler for PLL3 */
    using RCC_PLL3CFGR_PLL3M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (default after reset) (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x20: division by 32 (value: 32)
     *          - B_0x3F: division by 63 (value: 63)
     */
        /** @brief prescaler disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0x0 = 0;
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0x1 = 1;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0x2 = 2;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0x3 = 3;
        /** @brief division by 32 */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0x20 = 32;
        /** @brief division by 63 */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0x3F = 63;

    /** @brief PLL3 DIVP divider output enable */
    using RCC_PLL3CFGR_PLL3PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll3_p_ck output enabled (value: 1)
     */
        /** @brief pll3_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3PEN_B_0x0 = 0;
        /** @brief pll3_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3PEN_B_0x1 = 1;

    /** @brief PLL3 DIVQ divider output enable */
    using RCC_PLL3CFGR_PLL3QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_q_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll3_q_ck output enabled (value: 1)
     */
        /** @brief pll3_q_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3QEN_B_0x0 = 0;
        /** @brief pll3_q_ck output enabled */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3QEN_B_0x1 = 1;

    /** @brief PLL3 DIVR divider output enable */
    using RCC_PLL3CFGR_PLL3REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_r_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck output enabled (value: 1)
     */
        /** @brief pll3_r_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3REN_B_0x0 = 0;
        /** @brief pll3_r_ck output enabled */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3REN_B_0x1 = 1;

    /** @brief RCC PLL1 dividers register */
    using RCC_PLL1DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL1VCO */
    using RCC_PLL1DIVR_PLL1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x003: PLL1N = 4 (value: 3)
     *          - B_0x004: PLL1N = 5 (value: 4)
     *          - B_0x005: PLL1N = 6 (value: 5)
     *          - B_0x080: PLL1N = 129 (default after reset) (value: 128)
     *          - B_0x1FF: PLL1N = 512 (value: 511)
     */
        /** @brief PLL1N = 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x003 = 3;
        /** @brief PLL1N = 5 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x004 = 4;
        /** @brief PLL1N = 6 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x005 = 5;
        /** @brief PLL1N = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x080 = 128;
        /** @brief PLL1N = 512 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x1FF = 511;

    /** @brief PLL1 DIVP division factor */
    using RCC_PLL1DIVR_PLL1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not allowed (value: 0)
     *          - B_0x1: pll1_p_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: Not allowed (value: 2)
     *          - B_0x3: pll1_p_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_p_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief Not allowed */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x0 = 0;
        /** @brief pll1_p_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x1 = 1;
        /** @brief Not allowed */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x2 = 2;
        /** @brief pll1_p_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x3 = 3;
        /** @brief pll1_p_ck = vco1_ck / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x7F = 127;

    /** @brief PLL1 DIVQ division factor */
    using RCC_PLL1DIVR_PLL1Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck = vco1_ck (value: 0)
     *          - B_0x1: pll1_q_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1_q_ck = vco1_ck / 3 (value: 2)
     *          - B_0x3: pll1_q_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_q_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief pll1_q_ck = vco1_ck */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x0 = 0;
        /** @brief pll1_q_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x1 = 1;
        /** @brief pll1_q_ck = vco1_ck / 3 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x2 = 2;
        /** @brief pll1_q_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x3 = 3;
        /** @brief pll1_q_ck = vco1_ck / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x7F = 127;

    /** @brief PLL1 DIVR division factor */
    using RCC_PLL1DIVR_PLL1R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_r_ck = vco1_ck / 1 (value: 0)
     *          - B_0x1: pll1_r_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1_r_ck = vco1_ck / 3 (value: 2)
     *          - B_0x3: pll1_r_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_r_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief pll1_r_ck = vco1_ck / 1 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x0 = 0;
        /** @brief pll1_r_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x1 = 1;
        /** @brief pll1_r_ck = vco1_ck / 3 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x2 = 2;
        /** @brief pll1_r_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x3 = 3;
        /** @brief pll1_r_ck = vco1_ck / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1R_B_0x7F = 127;

    /** @brief RCC PLL1 fractional divider register */
    using RCC_PLL1FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fractional part of the multiplication factor for PLL1 VCO */
    using RCC_PLL1FRACR_PLL1FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL1 dividers register */
    using RCC_PLL2DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL2VCO */
    using RCC_PLL2DIVR_PLL2N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x003: PLL2N = 4 (value: 3)
     *          - B_0x004: PLL2N = 5 (value: 4)
     *          - B_0x005: PLL2N = 6 (value: 5)
     *          - B_0x080: PLL2N = 129 (default after reset) (value: 128)
     *          - B_0x1FF: PLL2N = 512 (value: 511)
     */
        /** @brief PLL2N = 4 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x003 = 3;
        /** @brief PLL2N = 5 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x004 = 4;
        /** @brief PLL2N = 6 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x005 = 5;
        /** @brief PLL2N = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x080 = 128;
        /** @brief PLL2N = 512 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x1FF = 511;

    /** @brief PLL2 DIVP division factor */
    using RCC_PLL2DIVR_PLL2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_p_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_p_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_p_ck = vco2_ck / 4 (value: 3)
     *          - B_0x7F: pll2_p_ck = vco2_ck / 128 (value: 127)
     */
        /** @brief pll2_p_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2P_B_0x0 = 0;
        /** @brief pll2_p_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2P_B_0x1 = 1;
        /** @brief pll2_p_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2P_B_0x2 = 2;
        /** @brief pll2_p_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2P_B_0x3 = 3;
        /** @brief pll2_p_ck = vco2_ck / 128 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2P_B_0x7F = 127;

    /** @brief PLL2 DIVQ division factor */
    using RCC_PLL2DIVR_PLL2Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_q_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_q_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_q_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_q_ck = vco2_ck / 4 (value: 3)
     *          - B_0x7F: pll2_q_ck = vco2_ck / 128 (value: 127)
     */
        /** @brief pll2_q_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2Q_B_0x0 = 0;
        /** @brief pll2_q_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2Q_B_0x1 = 1;
        /** @brief pll2_q_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2Q_B_0x2 = 2;
        /** @brief pll2_q_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2Q_B_0x3 = 3;
        /** @brief pll2_q_ck = vco2_ck / 128 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2Q_B_0x7F = 127;

    /** @brief PLL2 DIVR division factor */
    using RCC_PLL2DIVR_PLL2R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_r_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_r_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_r_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_r_ck = vco2_ck / 4 (value: 3)
     *          - B_0x7F: pll2_r_ck = vco2_ck / 128 (value: 127)
     */
        /** @brief pll2_r_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2R_B_0x0 = 0;
        /** @brief pll2_r_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2R_B_0x1 = 1;
        /** @brief pll2_r_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2R_B_0x2 = 2;
        /** @brief pll2_r_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2R_B_0x3 = 3;
        /** @brief pll2_r_ck = vco2_ck / 128 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2R_B_0x7F = 127;

    /** @brief RCC PLL2 fractional divider register */
    using RCC_PLL2FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fractional part of the multiplication factor for PLL2 VCO */
    using RCC_PLL2FRACR_PLL2FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL3 dividers register */
    using RCC_PLL3DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL3VCO */
    using RCC_PLL3DIVR_PLL3N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x003: PLL3N = 4 (value: 3)
     *          - B_0x004: PLL3N = 5 (value: 4)
     *          - B_0x005: PLL3N = 6 (value: 5)
     *          - B_0x080: PLL3N = 129 (default after reset) (value: 128)
     *          - B_0x1FF: PLL3N = 512 (value: 511)
     */
        /** @brief PLL3N = 4 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3N_B_0x003 = 3;
        /** @brief PLL3N = 5 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3N_B_0x004 = 4;
        /** @brief PLL3N = 6 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3N_B_0x005 = 5;
        /** @brief PLL3N = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3N_B_0x080 = 128;
        /** @brief PLL3N = 512 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3N_B_0x1FF = 511;

    /** @brief PLL3 DIVP division factor */
    using RCC_PLL3DIVR_PLL3P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_p_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_p_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_p_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_p_ck = vco3_ck / 4 (value: 3)
     *          - B_0x7F: pll3_p_ck = vco3_ck / 128 (value: 127)
     */
        /** @brief pll3_p_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3P_B_0x0 = 0;
        /** @brief pll3_p_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3P_B_0x1 = 1;
        /** @brief pll3_p_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3P_B_0x2 = 2;
        /** @brief pll3_p_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3P_B_0x3 = 3;
        /** @brief pll3_p_ck = vco3_ck / 128 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3P_B_0x7F = 127;

    /** @brief PLL3 DIVQ division factor */
    using RCC_PLL3DIVR_PLL3Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_q_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_q_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_q_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_q_ck = vco3_ck / 4 (value: 3)
     *          - B_0x7F: pll3_q_ck = vco3_ck / 128 (value: 127)
     */
        /** @brief pll3_q_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3Q_B_0x0 = 0;
        /** @brief pll3_q_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3Q_B_0x1 = 1;
        /** @brief pll3_q_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3Q_B_0x2 = 2;
        /** @brief pll3_q_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3Q_B_0x3 = 3;
        /** @brief pll3_q_ck = vco3_ck / 128 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3Q_B_0x7F = 127;

    /** @brief PLL3 DIVR division factor */
    using RCC_PLL3DIVR_PLL3R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_r_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_r_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_r_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_r_ck = vco3_ck / 4 (value: 3)
     *          - B_0x7F: pll3_r_ck = vco3_ck / 128 (value: 127)
     */
        /** @brief pll3_r_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3R_B_0x0 = 0;
        /** @brief pll3_r_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3R_B_0x1 = 1;
        /** @brief pll3_r_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3R_B_0x2 = 2;
        /** @brief pll3_r_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3R_B_0x3 = 3;
        /** @brief pll3_r_ck = vco3_ck / 128 */
    constexpr std::uint32_t RCC_PLL3DIVR_PLL3R_B_0x7F = 127;

    /** @brief RCC PLL3 fractional divider register */
    using RCC_PLL3FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fractional part of the multiplication factor for PLL3 VCO */
    using RCC_PLL3FRACR_PLL3FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock source interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief CSI ready interrupt enable */
    using RCC_CIER_CSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: CSI ready interrupt enabled (value: 1)
     */
        /** @brief CSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_CSIRDYIE_B_0x0 = 0;
        /** @brief CSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_CSIRDYIE_B_0x1 = 1;

    /** @brief HSI ready interrupt enable */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSI ready interrupt enabled (value: 1)
     */
        /** @brief HSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief HSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE ready interrupt enable */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSE ready interrupt enabled (value: 1)
     */
        /** @brief HSE ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

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

    /** @brief RCC clock source interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief CSI ready interrupt flag */
    using RCC_CIFR_CSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the CSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the CSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the CSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_CSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the CSI */
    constexpr std::uint32_t RCC_CIFR_CSIRDYF_B_0x1 = 1;

    /** @brief HSI ready interrupt flag */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSI */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSE */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

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
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    using RCC_CICR_CSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: CSIRDYF cleared (value: 1)
     */
        /** @brief CSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_CSIRDYC_B_0x0 = 0;
        /** @brief CSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_CSIRDYC_B_0x1 = 1;

    /** @brief HSI ready interrupt clear */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSIRDYF cleared (value: 1)
     */
        /** @brief HSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x0 = 0;
        /** @brief HSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x1 = 1;

    /** @brief HSE ready interrupt clear */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSERDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSERDYF cleared (value: 1)
     */
        /** @brief HSERDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x0 = 0;
        /** @brief HSERDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x1 = 1;

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

    /** @brief RCC AHB1 reset register */
    using RCC_AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 block reset */
    using RCC_AHB1RSTR_GPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset GPDMA1 block (default after reset) (value: 0)
     *          - B_0x1: resets GPDMA1 block (value: 1)
     */
        /** @brief does not reset GPDMA1 block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x0 = 0;
        /** @brief resets GPDMA1 block */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x1 = 1;

    /** @brief GPDMA2 block reset */
    using RCC_AHB1RSTR_GPDMA2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset GPDMA2 block (default after reset) (value: 0)
     *          - B_0x1: resets GPDMA2 block (value: 1)
     */
        /** @brief does not reset GPDMA2 block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA2RST_B_0x0 = 0;
        /** @brief resets GPDMA2 block */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA2RST_B_0x1 = 1;

    /** @brief CRC block reset Set and reset by software. */
    using RCC_AHB1RSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset CRC block (default after reset) (value: 0)
     *          - B_0x1: resets CRC block (value: 1)
     */
        /** @brief does not reset CRC block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x0 = 0;
        /** @brief resets CRC block */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x1 = 1;

    /** @brief CORDIC block reset */
    using RCC_AHB1RSTR_CORDICRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset CORDIC block (default after reset) (value: 0)
     *          - B_0x1: resets CORDIC block (value: 1)
     */
        /** @brief does not reset CORDIC block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_CORDICRST_B_0x0 = 0;
        /** @brief resets CORDIC block */
    constexpr std::uint32_t RCC_AHB1RSTR_CORDICRST_B_0x1 = 1;

    /** @brief FMAC block reset */
    using RCC_AHB1RSTR_FMACRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset FMAC block (default after reset) (value: 0)
     *          - B_0x1: resets FMAC block (value: 1)
     */
        /** @brief does not reset FMAC block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_FMACRST_B_0x0 = 0;
        /** @brief resets FMAC block */
    constexpr std::uint32_t RCC_AHB1RSTR_FMACRST_B_0x1 = 1;

    /** @brief RAMCFG block reset */
    using RCC_AHB1RSTR_RAMCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset RAMCFG block (default after reset) (value: 0)
     *          - B_0x1: resets RAMCFG block (value: 1)
     */
        /** @brief does not reset RAMCFG block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_RAMCFGRST_B_0x0 = 0;
        /** @brief resets RAMCFG block */
    constexpr std::uint32_t RCC_AHB1RSTR_RAMCFGRST_B_0x1 = 1;

    /** @brief ETHRST block reset */
    using RCC_AHB1RSTR_ETHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset ETHRST block (default after reset) (value: 0)
     *          - B_0x1: resets the ETHRST block (value: 1)
     */
        /** @brief does not reset ETHRST block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_ETHRST_B_0x0 = 0;
        /** @brief resets the ETHRST block */
    constexpr std::uint32_t RCC_AHB1RSTR_ETHRST_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral reset register */
    using RCC_AHB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA block reset */
    using RCC_AHB2RSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOA block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOA block (value: 1)
     */
        /** @brief does not reset the GPIOA block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x0 = 0;
        /** @brief resets the GPIOA block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x1 = 1;

    /** @brief GPIOB block reset */
    using RCC_AHB2RSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOB block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOB block (value: 1)
     */
        /** @brief does not reset the GPIOB block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x0 = 0;
        /** @brief resets the GPIOB block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x1 = 1;

    /** @brief GPIOC block reset */
    using RCC_AHB2RSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOC block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOC block (value: 1)
     */
        /** @brief does not reset the GPIOC block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x0 = 0;
        /** @brief resets the GPIOC block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x1 = 1;

    /** @brief GPIOD block reset */
    using RCC_AHB2RSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOD block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOD block (value: 1)
     */
        /** @brief does not reset the GPIOD block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIODRST_B_0x0 = 0;
        /** @brief resets the GPIOD block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIODRST_B_0x1 = 1;

    /** @brief GPIOE block reset */
    using RCC_AHB2RSTR_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOE block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOE block (value: 1)
     */
        /** @brief does not reset the GPIOE block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOERST_B_0x0 = 0;
        /** @brief resets the GPIOE block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOERST_B_0x1 = 1;

    /** @brief GPIOF block reset */
    using RCC_AHB2RSTR_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOF block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOF block (value: 1)
     */
        /** @brief does not reset the GPIOF block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOFRST_B_0x0 = 0;
        /** @brief resets the GPIOF block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOFRST_B_0x1 = 1;

    /** @brief GPIOG block reset */
    using RCC_AHB2RSTR_GPIOGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOG block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOG block (value: 1)
     */
        /** @brief does not reset the GPIOG block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOGRST_B_0x0 = 0;
        /** @brief resets the GPIOG block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOGRST_B_0x1 = 1;

    /** @brief GPIOH block reset */
    using RCC_AHB2RSTR_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOH block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOH block (value: 1)
     */
        /** @brief does not reset the GPIOH block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOHRST_B_0x0 = 0;
        /** @brief resets the GPIOH block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOHRST_B_0x1 = 1;

    /** @brief GPIOI block reset */
    using RCC_AHB2RSTR_GPIOIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOI block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOI block (value: 1)
     */
        /** @brief does not reset the GPIOI block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOIRST_B_0x0 = 0;
        /** @brief resets the GPIOI block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOIRST_B_0x1 = 1;

    /** @brief ADC1 and 2 blocks reset */
    using RCC_AHB2RSTR_ADCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset ADC1 and 2 blocks (default after reset) (value: 0)
     *          - B_0x1: resets ADC1 and 2 blocks (value: 1)
     */
        /** @brief does not reset ADC1 and 2 blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_ADCRST_B_0x0 = 0;
        /** @brief resets ADC1 and 2 blocks */
    constexpr std::uint32_t RCC_AHB2RSTR_ADCRST_B_0x1 = 1;

    /** @brief DAC block reset */
    using RCC_AHB2RSTR_DAC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset DAC block (default after reset) (value: 0)
     *          - B_0x1: resets DAC block (value: 1)
     */
        /** @brief does not reset DAC block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC1RST_B_0x0 = 0;
        /** @brief resets DAC block */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC1RST_B_0x1 = 1;

    /** @brief digital camera interface block reset (DCMI or PSSI depending which interface is active) */
    using RCC_AHB2RSTR_DCMI_PSSIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DCMI/PSSI block (default after reset) (value: 0)
     *          - B_0x1: resets the DCMI/PSSI block (value: 1)
     */
        /** @brief does not reset the DCMI/PSSI block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_DCMI_PSSIRST_B_0x0 = 0;
        /** @brief resets the DCMI/PSSI block */
    constexpr std::uint32_t RCC_AHB2RSTR_DCMI_PSSIRST_B_0x1 = 1;

    /** @brief AES block reset */
    using RCC_AHB2RSTR_AESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset AES block (default after reset) (value: 0)
     *          - B_0x1: resets AES block (value: 1)
     */
        /** @brief does not reset AES block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_AESRST_B_0x0 = 0;
        /** @brief resets AES block */
    constexpr std::uint32_t RCC_AHB2RSTR_AESRST_B_0x1 = 1;

    /** @brief HASH block reset */
    using RCC_AHB2RSTR_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset HASH block (default after reset) (value: 0)
     *          - B_0x1: resets HASH block (value: 1)
     */
        /** @brief does not reset HASH block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x0 = 0;
        /** @brief resets HASH block */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x1 = 1;

    /** @brief RNG block reset */
    using RCC_AHB2RSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset RNG block (default after reset) (value: 0)
     *          - B_0x1: resets RNG block (value: 1)
     */
        /** @brief does not reset RNG block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x0 = 0;
        /** @brief resets RNG block */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x1 = 1;

    /** @brief PKA block reset */
    using RCC_AHB2RSTR_PKARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset PKA block (default after reset) (value: 0)
     *          - B_0x1: resets PKA block (value: 1)
     */
        /** @brief does not reset PKA block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_PKARST_B_0x0 = 0;
        /** @brief resets PKA block */
    constexpr std::uint32_t RCC_AHB2RSTR_PKARST_B_0x1 = 1;

    /** @brief SAES block reset */
    using RCC_AHB2RSTR_SAESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset SAES block (default after reset) (value: 0)
     *          - B_0x1: resets SAES block (value: 1)
     */
        /** @brief does not reset SAES block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_SAESRST_B_0x0 = 0;
        /** @brief resets SAES block */
    constexpr std::uint32_t RCC_AHB2RSTR_SAESRST_B_0x1 = 1;

    /** @brief RCC AHB4 peripheral reset register */
    using RCC_AHB4RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC1 block reset */
    using RCC_AHB4RSTR_OTFDEC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset OTFDEC1 block (default after reset) (value: 0)
     *          - B_0x1: resets OTFDEC1 block (value: 1)
     */
        /** @brief does not reset OTFDEC1 block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_OTFDEC1RST_B_0x0 = 0;
        /** @brief resets OTFDEC1 block */
    constexpr std::uint32_t RCC_AHB4RSTR_OTFDEC1RST_B_0x1 = 1;

    /** @brief SDMMC1 and SDMMC1 delay blocks reset */
    using RCC_AHB4RSTR_SDMMC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset SDMMC1 and SDMMC1 delay blocks (default after reset) (value: 0)
     *          - B_0x1: resets SDMMC1 and SDMMC1 delay blocks (value: 1)
     */
        /** @brief does not reset SDMMC1 and SDMMC1 delay blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_SDMMC1RST_B_0x0 = 0;
        /** @brief resets SDMMC1 and SDMMC1 delay blocks */
    constexpr std::uint32_t RCC_AHB4RSTR_SDMMC1RST_B_0x1 = 1;

    /** @brief FMC block reset */
    using RCC_AHB4RSTR_FMCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset FMC block (default after reset) (value: 0)
     *          - B_0x1: resets FMC block (value: 1)
     */
        /** @brief does not reset FMC block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_FMCRST_B_0x0 = 0;
        /** @brief resets FMC block */
    constexpr std::uint32_t RCC_AHB4RSTR_FMCRST_B_0x1 = 1;

    /** @brief OCTOSPI1 block reset */
    using RCC_AHB4RSTR_OCTOSPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset OCTOSPI1 block (default after reset) (value: 0)
     *          - B_0x1: resets OCTOSPI1 block (value: 1)
     */
        /** @brief does not reset OCTOSPI1 block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_OCTOSPI1RST_B_0x0 = 0;
        /** @brief resets OCTOSPI1 block */
    constexpr std::uint32_t RCC_AHB4RSTR_OCTOSPI1RST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral low reset register */
    using RCC_APB1LRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 block reset */
    using RCC_APB1LRSTR_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM2 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM2 block (value: 1)
     */
        /** @brief does not reset the TIM2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM2RST_B_0x0 = 0;
        /** @brief resets the TIM2 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 block reset */
    using RCC_APB1LRSTR_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM3 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM3 block (value: 1)
     */
        /** @brief does not reset the TIM3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM3RST_B_0x0 = 0;
        /** @brief resets the TIM3 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM3RST_B_0x1 = 1;

    /** @brief TIM4 block reset */
    using RCC_APB1LRSTR_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM4 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM4 block (value: 1)
     */
        /** @brief does not reset the TIM4 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM4RST_B_0x0 = 0;
        /** @brief resets the TIM4 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM4RST_B_0x1 = 1;

    /** @brief TIM5 block reset */
    using RCC_APB1LRSTR_TIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM5 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM5 block (value: 1)
     */
        /** @brief does not reset the TIM5 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM5RST_B_0x0 = 0;
        /** @brief resets the TIM5 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM5RST_B_0x1 = 1;

    /** @brief TIM6 block reset */
    using RCC_APB1LRSTR_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM6 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM6 block (value: 1)
     */
        /** @brief does not reset the TIM6 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM6RST_B_0x0 = 0;
        /** @brief resets the TIM6 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM6RST_B_0x1 = 1;

    /** @brief TIM7 block reset */
    using RCC_APB1LRSTR_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM7 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM7 block (value: 1)
     */
        /** @brief does not reset the TIM7 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM7RST_B_0x0 = 0;
        /** @brief resets the TIM7 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM7RST_B_0x1 = 1;

    /** @brief TIM12 block reset */
    using RCC_APB1LRSTR_TIM12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM12 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM12 block (value: 1)
     */
        /** @brief does not reset the TIM12 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM12RST_B_0x0 = 0;
        /** @brief resets the TIM12 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM12RST_B_0x1 = 1;

    /** @brief SPI2 block reset */
    using RCC_APB1LRSTR_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI2 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI2 block (value: 1)
     */
        /** @brief does not reset the SPI2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI2RST_B_0x0 = 0;
        /** @brief resets the SPI2 block */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI2RST_B_0x1 = 1;

    /** @brief SPI3 block reset */
    using RCC_APB1LRSTR_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI3 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI3 block (value: 1)
     */
        /** @brief does not reset the SPI3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI3RST_B_0x0 = 0;
        /** @brief resets the SPI3 block */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI3RST_B_0x1 = 1;

    /** @brief USART2 block reset */
    using RCC_APB1LRSTR_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART2 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART2 block (value: 1)
     */
        /** @brief does not reset the USART2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_USART2RST_B_0x0 = 0;
        /** @brief resets the USART2 block */
    constexpr std::uint32_t RCC_APB1LRSTR_USART2RST_B_0x1 = 1;

    /** @brief USART3 block reset */
    using RCC_APB1LRSTR_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART3 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART3 block (value: 1)
     */
        /** @brief does not reset the USART3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_USART3RST_B_0x0 = 0;
        /** @brief resets the USART3 block */
    constexpr std::uint32_t RCC_APB1LRSTR_USART3RST_B_0x1 = 1;

    /** @brief UART4 block reset */
    using RCC_APB1LRSTR_UART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART4 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART4 block (value: 1)
     */
        /** @brief does not reset the UART4 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART4RST_B_0x0 = 0;
        /** @brief resets the UART4 block */
    constexpr std::uint32_t RCC_APB1LRSTR_UART4RST_B_0x1 = 1;

    /** @brief UART5 block reset */
    using RCC_APB1LRSTR_UART5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART5 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART5 block (value: 1)
     */
        /** @brief does not reset the UART5 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART5RST_B_0x0 = 0;
        /** @brief resets the UART5 block */
    constexpr std::uint32_t RCC_APB1LRSTR_UART5RST_B_0x1 = 1;

    /** @brief I2C1 block reset */
    using RCC_APB1LRSTR_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C1 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C1 block (value: 1)
     */
        /** @brief does not reset the I2C1 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C1RST_B_0x0 = 0;
        /** @brief resets the I2C1 block */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C1RST_B_0x1 = 1;

    /** @brief I2C2 block reset */
    using RCC_APB1LRSTR_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C2 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C2 block (value: 1)
     */
        /** @brief does not reset the I2C2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C2RST_B_0x0 = 0;
        /** @brief resets the I2C2 block */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C2RST_B_0x1 = 1;

    /** @brief I3C1 block reset */
    using RCC_APB1LRSTR_I3C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I3C1 block (default after reset) (value: 0)
     *          - B_0x1: resets the I3C1 block (value: 1)
     */
        /** @brief does not reset the I3C1 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I3C1RST_B_0x0 = 0;
        /** @brief resets the I3C1 block */
    constexpr std::uint32_t RCC_APB1LRSTR_I3C1RST_B_0x1 = 1;

    /** @brief CRS block reset */
    using RCC_APB1LRSTR_CRSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the CRS block (default after reset) (value: 0)
     *          - B_0x1: resets the CRS block (value: 1)
     */
        /** @brief does not reset the CRS block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_CRSRST_B_0x0 = 0;
        /** @brief resets the CRS block */
    constexpr std::uint32_t RCC_APB1LRSTR_CRSRST_B_0x1 = 1;

    /** @brief USART6 block reset */
    using RCC_APB1LRSTR_USART6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART6 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART6 block (value: 1)
     */
        /** @brief does not reset the USART6 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_USART6RST_B_0x0 = 0;
        /** @brief resets the USART6 block */
    constexpr std::uint32_t RCC_APB1LRSTR_USART6RST_B_0x1 = 1;

    /** @brief USART10 block reset */
    using RCC_APB1LRSTR_USART10RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART10 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART10 block (value: 1)
     */
        /** @brief does not reset the USART10 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_USART10RST_B_0x0 = 0;
        /** @brief resets the USART10 block */
    constexpr std::uint32_t RCC_APB1LRSTR_USART10RST_B_0x1 = 1;

    /** @brief USART11 block reset */
    using RCC_APB1LRSTR_USART11RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART11 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART11 block (value: 1)
     */
        /** @brief does not reset the USART11 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_USART11RST_B_0x0 = 0;
        /** @brief resets the USART11 block */
    constexpr std::uint32_t RCC_APB1LRSTR_USART11RST_B_0x1 = 1;

    /** @brief HDMI-CEC block reset */
    using RCC_APB1LRSTR_CECRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the HDMI-CEC block (default after reset) (value: 0)
     *          - B_0x1: resets the HDMI-CEC block (value: 1)
     */
        /** @brief does not reset the HDMI-CEC block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_CECRST_B_0x0 = 0;
        /** @brief resets the HDMI-CEC block */
    constexpr std::uint32_t RCC_APB1LRSTR_CECRST_B_0x1 = 1;

    /** @brief UART7 block reset */
    using RCC_APB1LRSTR_UART7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART7 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART7 block (value: 1)
     */
        /** @brief does not reset the UART7 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART7RST_B_0x0 = 0;
        /** @brief resets the UART7 block */
    constexpr std::uint32_t RCC_APB1LRSTR_UART7RST_B_0x1 = 1;

    /** @brief UART8 block reset */
    using RCC_APB1LRSTR_UART8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART8 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART8 block (value: 1)
     */
        /** @brief does not reset the UART8 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART8RST_B_0x0 = 0;
        /** @brief resets the UART8 block */
    constexpr std::uint32_t RCC_APB1LRSTR_UART8RST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral high reset register */
    using RCC_APB1HRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART9 block reset */
    using RCC_APB1HRSTR_UART9RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset UART9 block (default after reset) (value: 0)
     *          - B_0x1: resets UART9 block (value: 1)
     */
        /** @brief does not reset UART9 block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_UART9RST_B_0x0 = 0;
        /** @brief resets UART9 block */
    constexpr std::uint32_t RCC_APB1HRSTR_UART9RST_B_0x1 = 1;

    /** @brief UART12 block reset */
    using RCC_APB1HRSTR_UART12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART12 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART12 block (value: 1)
     */
        /** @brief does not reset the UART12 block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_UART12RST_B_0x0 = 0;
        /** @brief resets the UART12 block */
    constexpr std::uint32_t RCC_APB1HRSTR_UART12RST_B_0x1 = 1;

    /** @brief DTS block reset */
    using RCC_APB1HRSTR_DTSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DTS block (default after reset) (value: 0)
     *          - B_0x1: resets the DTS block (value: 1)
     */
        /** @brief does not reset the DTS block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_DTSRST_B_0x0 = 0;
        /** @brief resets the DTS block */
    constexpr std::uint32_t RCC_APB1HRSTR_DTSRST_B_0x1 = 1;

    /** @brief LPTIM2 block reset */
    using RCC_APB1HRSTR_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM2 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM2 block (value: 1)
     */
        /** @brief does not reset the LPTIM2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_LPTIM2RST_B_0x0 = 0;
        /** @brief resets the LPTIM2 block */
    constexpr std::uint32_t RCC_APB1HRSTR_LPTIM2RST_B_0x1 = 1;

    /** @brief FDCAN1 and FDCAN2 blocks reset */
    using RCC_APB1HRSTR_FDCANRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the FDCAN1 and FDCAN2 blocks (default after reset) (value: 0)
     *          - B_0x1: resets the FDCAN1 and FDCAN2 blocks (value: 1)
     */
        /** @brief does not reset the FDCAN1 and FDCAN2 blocks (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_FDCANRST_B_0x0 = 0;
        /** @brief resets the FDCAN1 and FDCAN2 blocks */
    constexpr std::uint32_t RCC_APB1HRSTR_FDCANRST_B_0x1 = 1;

    /** @brief UCPD1 block reset */
    using RCC_APB1HRSTR_UCPD1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UCPD block (default after reset) (value: 0)
     *          - B_0x1: resets the UCPD block (value: 1)
     */
        /** @brief does not reset the UCPD block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_UCPD1RST_B_0x0 = 0;
        /** @brief resets the UCPD block */
    constexpr std::uint32_t RCC_APB1HRSTR_UCPD1RST_B_0x1 = 1;

    /** @brief RCC APB2 peripheral reset register */
    using RCC_APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 block reset */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM1 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM1 block (value: 1)
     */
        /** @brief does not reset the TIM1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief resets the TIM1 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief SPI1 block reset */
    using RCC_APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI1 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI1 block (value: 1)
     */
        /** @brief does not reset the SPI1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief resets the SPI1 block */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief TIM8 block reset */
    using RCC_APB2RSTR_TIM8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM8 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM8 block (value: 1)
     */
        /** @brief does not reset the TIM8 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x0 = 0;
        /** @brief resets the TIM8 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x1 = 1;

    /** @brief USART1 block reset */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART1 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART1 block (value: 1)
     */
        /** @brief does not reset the USART1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief resets the USART1 block */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

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

    /** @brief SPI4 block reset */
    using RCC_APB2RSTR_SPI4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI4 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI4 block (value: 1)
     */
        /** @brief does not reset the SPI4 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x0 = 0;
        /** @brief resets the SPI4 block */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x1 = 1;

    /** @brief SPI6 block reset */
    using RCC_APB2RSTR_SPI6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI6 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI6 block (value: 1)
     */
        /** @brief does not reset the SPI6 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI6RST_B_0x0 = 0;
        /** @brief resets the SPI6 block */
    constexpr std::uint32_t RCC_APB2RSTR_SPI6RST_B_0x1 = 1;

    /** @brief SAI1 block reset */
    using RCC_APB2RSTR_SAI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SAI1 (default after reset) (value: 0)
     *          - B_0x1: resets the SAI1 (value: 1)
     */
        /** @brief does not reset the SAI1 (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x0 = 0;
        /** @brief resets the SAI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x1 = 1;

    /** @brief SAI2 block reset */
    using RCC_APB2RSTR_SAI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SAI2 block (default after reset) (value: 0)
     *          - B_0x1: resets the SAI2 block (value: 1)
     */
        /** @brief does not reset the SAI2 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x0 = 0;
        /** @brief resets the SAI2 block */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x1 = 1;

    /** @brief USB block reset */
    using RCC_APB2RSTR_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USB block (default after reset) (value: 0)
     *          - B_0x1: resets the USB block (value: 1)
     */
        /** @brief does not reset the USB block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USBRST_B_0x0 = 0;
        /** @brief resets the USB block */
    constexpr std::uint32_t RCC_APB2RSTR_USBRST_B_0x1 = 1;

    /** @brief RCC APB3 peripheral reset register */
    using RCC_APB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 block reset */
    using RCC_APB3RSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPUART1 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPUART1 block (value: 1)
     */
        /** @brief does not reset the LPUART1 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_LPUART1RST_B_0x0 = 0;
        /** @brief resets the LPUART1 block */
    constexpr std::uint32_t RCC_APB3RSTR_LPUART1RST_B_0x1 = 1;

    /** @brief I2C3 block reset */
    using RCC_APB3RSTR_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C3 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C3 block (value: 1)
     */
        /** @brief does not reset the I2C3 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_I2C3RST_B_0x0 = 0;
        /** @brief resets the I2C3 block */
    constexpr std::uint32_t RCC_APB3RSTR_I2C3RST_B_0x1 = 1;

    /** @brief I3C2 block reset */
    using RCC_APB3RSTR_I3C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I3C2 block (default after reset) (value: 0)
     *          - B_0x1: resets the I3C2 block (value: 1)
     */
        /** @brief does not reset the I3C2 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_I3C2RST_B_0x0 = 0;
        /** @brief resets the I3C2 block */
    constexpr std::uint32_t RCC_APB3RSTR_I3C2RST_B_0x1 = 1;

    /** @brief LPTIM1 block reset */
    using RCC_APB3RSTR_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM1 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM1 block (value: 1)
     */
        /** @brief does not reset the LPTIM1 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM1RST_B_0x0 = 0;
        /** @brief resets the LPTIM1 block */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM1RST_B_0x1 = 1;

    /** @brief LPTIM3 block reset */
    using RCC_APB3RSTR_LPTIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM3 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM3 block (value: 1)
     */
        /** @brief does not reset the LPTIM3 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM3RST_B_0x0 = 0;
        /** @brief resets the LPTIM3 block */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM3RST_B_0x1 = 1;

    /** @brief LPTIM4 block reset */
    using RCC_APB3RSTR_LPTIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM4 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM4 block (value: 1)
     */
        /** @brief does not reset the LPTIM4 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM4RST_B_0x0 = 0;
        /** @brief resets the LPTIM4 block */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM4RST_B_0x1 = 1;

    /** @brief LPTIM5 block reset */
    using RCC_APB3RSTR_LPTIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM5 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM5 block (value: 1)
     */
        /** @brief does not reset the LPTIM5 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM5RST_B_0x0 = 0;
        /** @brief resets the LPTIM5 block */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM5RST_B_0x1 = 1;

    /** @brief LPTIM6 block reset */
    using RCC_APB3RSTR_LPTIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM6 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM6 block (value: 1)
     */
        /** @brief does not reset the LPTIM6 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM6RST_B_0x0 = 0;
        /** @brief resets the LPTIM6 block */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM6RST_B_0x1 = 1;

    /** @brief VREFBUF block reset */
    using RCC_APB3RSTR_VREFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the VREFBUF block (default after reset) (value: 0)
     *          - B_0x1: resets the VREFBUF block (value: 1)
     */
        /** @brief does not reset the VREFBUF block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_VREFRST_B_0x0 = 0;
        /** @brief resets the VREFBUF block */
    constexpr std::uint32_t RCC_APB3RSTR_VREFRST_B_0x1 = 1;

    /** @brief RCC AHB1 peripherals clock register */
    using RCC_AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable */
    using RCC_AHB1ENR_GPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPDMA1 peripheral clock enabled (value: 1)
     */
        /** @brief GPDMA1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x0 = 0;
        /** @brief GPDMA1 peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x1 = 1;

    /** @brief GPDMA2 clock enable */
    using RCC_AHB1ENR_GPDMA2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPDMA2 peripheral clock enabled (value: 1)
     */
        /** @brief GPDMA2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA2EN_B_0x0 = 0;
        /** @brief GPDMA2 peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA2EN_B_0x1 = 1;

    /** @brief Flash interface clock enable */
    using RCC_AHB1ENR_FLITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH interface clock disabled (value: 0)
     *          - B_0x1: FLASH interface clock enabled (default after reset) (value: 1)
     */
        /** @brief FLASH interface clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_FLITFEN_B_0x0 = 0;
        /** @brief FLASH interface clock enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_FLITFEN_B_0x1 = 1;

    /** @brief CRC clock enable */
    using RCC_AHB1ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRC peripheral clock enabled (value: 1)
     */
        /** @brief CRC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x0 = 0;
        /** @brief CRC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x1 = 1;

    /** @brief CORDIC clock enable */
    using RCC_AHB1ENR_CORDICEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CORDIC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CORDIC peripheral clock enabled (value: 1)
     */
        /** @brief CORDIC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_CORDICEN_B_0x0 = 0;
        /** @brief CORDIC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_CORDICEN_B_0x1 = 1;

    /** @brief FMAC clock enable */
    using RCC_AHB1ENR_FMACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMAC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: FMAC peripheral clock enabled (value: 1)
     */
        /** @brief FMAC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_FMACEN_B_0x0 = 0;
        /** @brief FMAC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_FMACEN_B_0x1 = 1;

    /** @brief RAMCFG clock enable */
    using RCC_AHB1ENR_RAMCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: RAMCFG peripheral clock enabled (value: 1)
     */
        /** @brief RAMCFG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x0 = 0;
        /** @brief RAMCFG peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x1 = 1;

    /** @brief ETH clock enable */
    using RCC_AHB1ENR_ETHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: ETH peripheral clock enabled (value: 1)
     */
        /** @brief ETH peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ETHEN_B_0x0 = 0;
        /** @brief ETH peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ETHEN_B_0x1 = 1;

    /** @brief ETHTX clock enable */
    using RCC_AHB1ENR_ETHTXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETHTX clock disabled (default after reset) (value: 0)
     *          - B_0x1: ETHTX clock enabled (value: 1)
     */
        /** @brief ETHTX clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ETHTXEN_B_0x0 = 0;
        /** @brief ETHTX clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ETHTXEN_B_0x1 = 1;

    /** @brief ETHRX clock enable */
    using RCC_AHB1ENR_ETHRXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETHRX clock disabled (default after reset) (value: 0)
     *          - B_0x1: ETHRX clock enabled (value: 1)
     */
        /** @brief ETHRX clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ETHRXEN_B_0x0 = 0;
        /** @brief ETHRX clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ETHRXEN_B_0x1 = 1;

    /** @brief TZSC1 clock enable */
    using RCC_AHB1ENR_TZSC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TZSC1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TZSC1 peripheral clock enabled (value: 1)
     */
        /** @brief TZSC1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_TZSC1EN_B_0x0 = 0;
        /** @brief TZSC1 peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_TZSC1EN_B_0x1 = 1;

    /** @brief BKPRAM clock enable */
    using RCC_AHB1ENR_BKPRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPRAM peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: BKPRAM peripheral clock enabled (value: 1)
     */
        /** @brief BKPRAM peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_BKPRAMEN_B_0x0 = 0;
        /** @brief BKPRAM peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_BKPRAMEN_B_0x1 = 1;

    /** @brief DCACHE clock enable */
    using RCC_AHB1ENR_DCACHEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DCACHE peripheral clock enabled (value: 1)
     */
        /** @brief DCACHE peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_DCACHEEN_B_0x0 = 0;
        /** @brief DCACHE peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_DCACHEEN_B_0x1 = 1;

    /** @brief SRAM1 clock enable */
    using RCC_AHB1ENR_SRAM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 clock disabled (value: 0)
     *          - B_0x1: SRAM1 clock enabled (default after reset) (value: 1)
     */
        /** @brief SRAM1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_SRAM1EN_B_0x0 = 0;
        /** @brief SRAM1 clock enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_SRAM1EN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock register */
    using RCC_AHB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA clock enable */
    using RCC_AHB2ENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOA peripheral clock enabled (value: 1)
     */
        /** @brief GPIOA peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x0 = 0;
        /** @brief GPIOA peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x1 = 1;

    /** @brief GPIOB clock enable */
    using RCC_AHB2ENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOB peripheral clock enabled (value: 1)
     */
        /** @brief GPIOB peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x0 = 0;
        /** @brief GPIOB peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x1 = 1;

    /** @brief GPIOC clock enable */
    using RCC_AHB2ENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOC peripheral clock enabled (value: 1)
     */
        /** @brief GPIOC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x0 = 0;
        /** @brief GPIOC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x1 = 1;

    /** @brief GPIOD clock enable */
    using RCC_AHB2ENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOD peripheral clock enabled (value: 1)
     */
        /** @brief GPIOD peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIODEN_B_0x0 = 0;
        /** @brief GPIOD peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIODEN_B_0x1 = 1;

    /** @brief GPIOE clock enable */
    using RCC_AHB2ENR_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOE peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOE peripheral clock enabled (value: 1)
     */
        /** @brief GPIOE peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOEEN_B_0x0 = 0;
        /** @brief GPIOE peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOEEN_B_0x1 = 1;

    /** @brief GPIOF clock enable */
    using RCC_AHB2ENR_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOF peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOF peripheral clock enabled (value: 1)
     */
        /** @brief GPIOF peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOFEN_B_0x0 = 0;
        /** @brief GPIOF peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOFEN_B_0x1 = 1;

    /** @brief GPIOG clock enable */
    using RCC_AHB2ENR_GPIOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOG peripheral clock enabled (value: 1)
     */
        /** @brief GPIOG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOGEN_B_0x0 = 0;
        /** @brief GPIOG peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOGEN_B_0x1 = 1;

    /** @brief GPIOH clock enable */
    using RCC_AHB2ENR_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOH peripheral clock enabled (value: 1)
     */
        /** @brief GPIOH peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOHEN_B_0x0 = 0;
        /** @brief GPIOH peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOHEN_B_0x1 = 1;

    /** @brief GPIOI clock enable */
    using RCC_AHB2ENR_GPIOIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOI peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOI peripheral clock enabled (value: 1)
     */
        /** @brief GPIOI peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOIEN_B_0x0 = 0;
        /** @brief GPIOI peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOIEN_B_0x1 = 1;

    /** @brief ADC1 and 2 peripherals clock enable */
    using RCC_AHB2ENR_ADCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and 2 peripherals clock disabled (default after reset) (value: 0)
     *          - B_0x1: ADC1 and 2 peripherals clock enabled (value: 1)
     */
        /** @brief ADC1 and 2 peripherals clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_ADCEN_B_0x0 = 0;
        /** @brief ADC1 and 2 peripherals clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_ADCEN_B_0x1 = 1;

    /** @brief DAC clock enable */
    using RCC_AHB2ENR_DAC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DAC peripheral clock enabled (value: 1)
     */
        /** @brief DAC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_DAC1EN_B_0x0 = 0;
        /** @brief DAC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC1EN_B_0x1 = 1;

    /** @brief digital camera interface clock enable (DCMI or PSSI depending which interface is active) */
    using RCC_AHB2ENR_DCMI_PSSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI/PSSI peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DCMI/PSSI peripheral clock enabled (value: 1)
     */
        /** @brief DCMI/PSSI peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_DCMI_PSSIEN_B_0x0 = 0;
        /** @brief DCMI/PSSI peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_DCMI_PSSIEN_B_0x1 = 1;

    /** @brief AES clock enable */
    using RCC_AHB2ENR_AESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: AES peripheral clock enabled (value: 1)
     */
        /** @brief AES peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_AESEN_B_0x0 = 0;
        /** @brief AES peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_AESEN_B_0x1 = 1;

    /** @brief HASH clock enable */
    using RCC_AHB2ENR_HASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: HASH peripheral clock enabled (value: 1)
     */
        /** @brief HASH peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x0 = 0;
        /** @brief HASH peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x1 = 1;

    /** @brief RNG clock enable */
    using RCC_AHB2ENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: RNG peripheral clock enabled (value: 1)
     */
        /** @brief RNG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x0 = 0;
        /** @brief RNG peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x1 = 1;

    /** @brief PKA clock enable */
    using RCC_AHB2ENR_PKAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: PKA peripheral clock enabled (value: 1)
     */
        /** @brief PKA peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_PKAEN_B_0x0 = 0;
        /** @brief PKA peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_PKAEN_B_0x1 = 1;

    /** @brief SAES clock enable */
    using RCC_AHB2ENR_SAESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SAES peripheral clock enabled (value: 1)
     */
        /** @brief SAES peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_SAESEN_B_0x0 = 0;
        /** @brief SAES peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_SAESEN_B_0x1 = 1;

    /** @brief SRAM2 clock enable */
    using RCC_AHB2ENR_SRAM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clock disabled (value: 0)
     *          - B_0x1: SRAM2 clock enabled (default after reset) (value: 1)
     */
        /** @brief SRAM2 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM2EN_B_0x0 = 0;
        /** @brief SRAM2 clock enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM2EN_B_0x1 = 1;

    /** @brief SRAM3 clock enable */
    using RCC_AHB2ENR_SRAM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 clock disabled (value: 0)
     *          - B_0x1: SRAM3 clock enabled (default after reset) (value: 1)
     */
        /** @brief SRAM3 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM3EN_B_0x0 = 0;
        /** @brief SRAM3 clock enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM3EN_B_0x1 = 1;

    /** @brief RCC AHB4 peripheral clock register */
    using RCC_AHB4ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC1 clock enable */
    using RCC_AHB4ENR_OTFDEC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: OTFDEC1 peripheral clock enabled (value: 1)
     */
        /** @brief OTFDEC1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_OTFDEC1EN_B_0x0 = 0;
        /** @brief OTFDEC1 peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_OTFDEC1EN_B_0x1 = 1;

    /** @brief SDMMC1 and SDMMC1 delay peripheral clock enable reset */
    using RCC_AHB4ENR_SDMMC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 and SDMMC1 delay peripherals clock disabled (default after reset) (value: 0)
     *          - B_0x1: SDMMC1 and SDMMC1 delay peripherals clock enabled (value: 1)
     */
        /** @brief SDMMC1 and SDMMC1 delay peripherals clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_SDMMC1EN_B_0x0 = 0;
        /** @brief SDMMC1 and SDMMC1 delay peripherals clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_SDMMC1EN_B_0x1 = 1;

    /** @brief FMC clock enable */
    using RCC_AHB4ENR_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: FMC peripheral clock enabled (value: 1)
     */
        /** @brief FMC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_FMCEN_B_0x0 = 0;
        /** @brief FMC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_FMCEN_B_0x1 = 1;

    /** @brief OCTOSPI1 clock enable */
    using RCC_AHB4ENR_OCTOSPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: OCTOSPI1 peripheral clock enabled (value: 1)
     */
        /** @brief OCTOSPI1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_OCTOSPI1EN_B_0x0 = 0;
        /** @brief OCTOSPI1 peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_OCTOSPI1EN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock register */
    using RCC_APB1LENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 clock enable */
    using RCC_APB1LENR_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM2 peripheral clock enabled (value: 1)
     */
        /** @brief TIM2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 clock enable */
    using RCC_APB1LENR_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM3 peripheral clock enabled (value: 1)
     */
        /** @brief TIM3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM3EN_B_0x1 = 1;

    /** @brief TIM4 clock enable */
    using RCC_APB1LENR_TIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM4 peripheral clock enabled (value: 1)
     */
        /** @brief TIM4 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM4EN_B_0x0 = 0;
        /** @brief TIM4 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM4EN_B_0x1 = 1;

    /** @brief TIM5 clock enable */
    using RCC_APB1LENR_TIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM5 peripheral clock enabled (value: 1)
     */
        /** @brief TIM5 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM5EN_B_0x0 = 0;
        /** @brief TIM5 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM5EN_B_0x1 = 1;

    /** @brief TIM6 clock enable */
    using RCC_APB1LENR_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM6 peripheral clock enabled (value: 1)
     */
        /** @brief TIM6 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM6EN_B_0x0 = 0;
        /** @brief TIM6 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 clock enable */
    using RCC_APB1LENR_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM7 peripheral clock enabled (value: 1)
     */
        /** @brief TIM7 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM7EN_B_0x0 = 0;
        /** @brief TIM7 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM7EN_B_0x1 = 1;

    /** @brief TIM12 clock enable */
    using RCC_APB1LENR_TIM12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM12 peripheral clock enabled (value: 1)
     */
        /** @brief TIM12 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM12EN_B_0x0 = 0;
        /** @brief TIM12 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM12EN_B_0x1 = 1;

    /** @brief WWDG clock enable */
    using RCC_APB1LENR_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: WWDG peripheral clock enabled (value: 1)
     */
        /** @brief WWDG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_WWDGEN_B_0x0 = 0;
        /** @brief WWDG peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_WWDGEN_B_0x1 = 1;

    /** @brief SPI2 clock enable */
    using RCC_APB1LENR_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SPI2 peripheral clock enabled (value: 1)
     */
        /** @brief SPI2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPI2EN_B_0x0 = 0;
        /** @brief SPI2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPI2EN_B_0x1 = 1;

    /** @brief SPI3 clock enable */
    using RCC_APB1LENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SPI3 peripheral clock enabled (value: 1)
     */
        /** @brief SPI3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPI3EN_B_0x1 = 1;

    /** @brief USART2 clock enable */
    using RCC_APB1LENR_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USART2 peripheral clock enabled (value: 1)
     */
        /** @brief USART2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART2EN_B_0x0 = 0;
        /** @brief USART2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART2EN_B_0x1 = 1;

    /** @brief USART3 clock enable */
    using RCC_APB1LENR_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USART3 peripheral clock enabled (value: 1)
     */
        /** @brief USART3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART3EN_B_0x0 = 0;
        /** @brief USART3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART3EN_B_0x1 = 1;

    /** @brief UART4 clock enable */
    using RCC_APB1LENR_UART4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: UART4 peripheral clock enabled (value: 1)
     */
        /** @brief UART4 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART4EN_B_0x0 = 0;
        /** @brief UART4 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART4EN_B_0x1 = 1;

    /** @brief UART5 clock enable */
    using RCC_APB1LENR_UART5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: UART5 peripheral clock enabled (value: 1)
     */
        /** @brief UART5 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART5EN_B_0x0 = 0;
        /** @brief UART5 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART5EN_B_0x1 = 1;

    /** @brief I2C1 clock enable */
    using RCC_APB1LENR_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: I2C1 peripheral clock enabled (value: 1)
     */
        /** @brief I2C1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C1EN_B_0x0 = 0;
        /** @brief I2C1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 clock enable */
    using RCC_APB1LENR_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: I2C2 peripheral clock enabled (value: 1)
     */
        /** @brief I2C2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C2EN_B_0x0 = 0;
        /** @brief I2C2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C2EN_B_0x1 = 1;

    /** @brief I3C1 clock enable */
    using RCC_APB1LENR_I3C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: I3C1 peripheral clock enabled (value: 1)
     */
        /** @brief I3C1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I3C1EN_B_0x0 = 0;
        /** @brief I3C1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_I3C1EN_B_0x1 = 1;

    /** @brief CRS clock enable */
    using RCC_APB1LENR_CRSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRS peripheral clock enabled (value: 1)
     */
        /** @brief CRS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_CRSEN_B_0x0 = 0;
        /** @brief CRS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_CRSEN_B_0x1 = 1;

    /** @brief USART6 clock enable */
    using RCC_APB1LENR_USART6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USART6 peripheral clock enabled (value: 1)
     */
        /** @brief USART6 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART6EN_B_0x0 = 0;
        /** @brief USART6 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART6EN_B_0x1 = 1;

    /** @brief USART10 clock enable */
    using RCC_APB1LENR_USART10EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART10 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USART10 peripheral clock enabled (value: 1)
     */
        /** @brief USART10 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART10EN_B_0x0 = 0;
        /** @brief USART10 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART10EN_B_0x1 = 1;

    /** @brief USART11 clock enable */
    using RCC_APB1LENR_USART11EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART11 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USART11 peripheral clock enabled (value: 1)
     */
        /** @brief USART11 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART11EN_B_0x0 = 0;
        /** @brief USART11 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART11EN_B_0x1 = 1;

    /** @brief HDMI-CEC clock enable */
    using RCC_APB1LENR_CECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDMI-CEC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: HDMI-CEC peripheral clock enabled (value: 1)
     */
        /** @brief HDMI-CEC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_CECEN_B_0x0 = 0;
        /** @brief HDMI-CEC peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_CECEN_B_0x1 = 1;

    /** @brief UART7 clock enable */
    using RCC_APB1LENR_UART7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART7 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: UART7 peripheral clock enabled (value: 1)
     */
        /** @brief UART7 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART7EN_B_0x0 = 0;
        /** @brief UART7 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART7EN_B_0x1 = 1;

    /** @brief UART8 clock enable */
    using RCC_APB1LENR_UART8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART8 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: UART8 peripheral clock enabled (value: 1)
     */
        /** @brief UART8 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART8EN_B_0x0 = 0;
        /** @brief UART8 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART8EN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock register */
    using RCC_APB1HENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART9 clock enable */
    using RCC_APB1HENR_UART9EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART9 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: resets UART9 peripheral clock enabled (value: 1)
     */
        /** @brief UART9 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_UART9EN_B_0x0 = 0;
        /** @brief resets UART9 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_UART9EN_B_0x1 = 1;

    /** @brief UART12 clock enable */
    using RCC_APB1HENR_UART12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART12 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: UART12 peripheral clock enabled (value: 1)
     */
        /** @brief UART12 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_UART12EN_B_0x0 = 0;
        /** @brief UART12 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_UART12EN_B_0x1 = 1;

    /** @brief DTS clock enable */
    using RCC_APB1HENR_DTSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DTS peripheral clock enabled (value: 1)
     */
        /** @brief DTS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_DTSEN_B_0x0 = 0;
        /** @brief DTS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_DTSEN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable */
    using RCC_APB1HENR_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM2 peripheral clock enabled (value: 1)
     */
        /** @brief LPTIM2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_LPTIM2EN_B_0x0 = 0;
        /** @brief LPTIM2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_LPTIM2EN_B_0x1 = 1;

    /** @brief FDCAN1 and FDCAN2 peripheral clock enable */
    using RCC_APB1HENR_FDCANEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 and FDCAN2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: FDCAN1 and FDCAN2 peripheral clock enabled (value: 1)
     */
        /** @brief FDCAN1 and FDCAN2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_FDCANEN_B_0x0 = 0;
        /** @brief FDCAN1 and FDCAN2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_FDCANEN_B_0x1 = 1;

    /** @brief UCPD1 clock enable */
    using RCC_APB1HENR_UCPD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: UCPD peripheral clock enabled (value: 1)
     */
        /** @brief UCPD peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_UCPD1EN_B_0x0 = 0;
        /** @brief UCPD peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_UCPD1EN_B_0x1 = 1;

    /** @brief RCC APB2 peripheral clock register */
    using RCC_APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 clock enable */
    using RCC_APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM1 peripheral clock enabled (value: 1)
     */
        /** @brief TIM1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief SPI1 clock enable */
    using RCC_APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SPI1 peripheral clock enabled (value: 1)
     */
        /** @brief SPI1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief TIM8 clock enable */
    using RCC_APB2ENR_TIM8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM8 peripheral clock enabled (value: 1)
     */
        /** @brief TIM8 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x0 = 0;
        /** @brief TIM8 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x1 = 1;

    /** @brief USART1 clock enable */
    using RCC_APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USART1 peripheral clock enabled (value: 1)
     */
        /** @brief USART1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief TIM15 clock enable */
    using RCC_APB2ENR_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM15 peripheral clock enabled (value: 1)
     */
        /** @brief TIM15 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x0 = 0;
        /** @brief TIM15 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x1 = 1;

    /** @brief SPI4 clock enable */
    using RCC_APB2ENR_SPI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SPI4 peripheral clock enabled (value: 1)
     */
        /** @brief SPI4 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x0 = 0;
        /** @brief SPI4 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x1 = 1;

    /** @brief SPI6 clock enable */
    using RCC_APB2ENR_SPI6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI6 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SPI6 peripheral clock enabled (value: 1)
     */
        /** @brief SPI6 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI6EN_B_0x0 = 0;
        /** @brief SPI6 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI6EN_B_0x1 = 1;

    /** @brief SAI1 clock enable */
    using RCC_APB2ENR_SAI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SAI1 peripheral clock enabled (value: 1)
     */
        /** @brief SAI1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x0 = 0;
        /** @brief SAI1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x1 = 1;

    /** @brief SAI2 clock enable */
    using RCC_APB2ENR_SAI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 clock disabled (value: 0)
     *          - B_0x1: SAI2 clock enabled (value: 1)
     */
        /** @brief SAI2 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI2EN_B_0x0 = 0;
        /** @brief SAI2 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI2EN_B_0x1 = 1;

    /** @brief USB clock enable */
    using RCC_APB2ENR_USBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USB peripheral clock enabled (value: 1)
     */
        /** @brief USB peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USBEN_B_0x0 = 0;
        /** @brief USB peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_USBEN_B_0x1 = 1;

    /** @brief RCC APB3 peripheral clock register */
    using RCC_APB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS clock enable */
    using RCC_APB3ENR_SBSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SBS peripheral clock enabled (value: 1)
     */
        /** @brief SBS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_SBSEN_B_0x0 = 0;
        /** @brief SBS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_SBSEN_B_0x1 = 1;

    /** @brief LPUART1 clock enable */
    using RCC_APB3ENR_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPUART1 peripheral clock enabled (value: 1)
     */
        /** @brief LPUART1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_LPUART1EN_B_0x0 = 0;
        /** @brief LPUART1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPUART1EN_B_0x1 = 1;

    /** @brief I2C3 clock enable */
    using RCC_APB3ENR_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: I2C3 peripheral clock enabled (value: 1)
     */
        /** @brief I2C3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_I2C3EN_B_0x0 = 0;
        /** @brief I2C3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_I2C3EN_B_0x1 = 1;

    /** @brief I3C2 clock enable */
    using RCC_APB3ENR_I3C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: I3C2 peripheral clock enabled (value: 1)
     */
        /** @brief I3C2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_I3C2EN_B_0x0 = 0;
        /** @brief I3C2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_I3C2EN_B_0x1 = 1;

    /** @brief LPTIM1 clock enable */
    using RCC_APB3ENR_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM1 peripheral clock enabled (value: 1)
     */
        /** @brief LPTIM1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM1EN_B_0x0 = 0;
        /** @brief LPTIM1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM1EN_B_0x1 = 1;

    /** @brief LPTIM3 clock enable */
    using RCC_APB3ENR_LPTIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM3 peripheral clock enabled (value: 1)
     */
        /** @brief LPTIM3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM3EN_B_0x0 = 0;
        /** @brief LPTIM3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM3EN_B_0x1 = 1;

    /** @brief LPTIM4 clock enable */
    using RCC_APB3ENR_LPTIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM4 peripheral clock enabled (value: 1)
     */
        /** @brief LPTIM4 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM4EN_B_0x0 = 0;
        /** @brief LPTIM4 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM4EN_B_0x1 = 1;

    /** @brief LPTIM5 clock enable */
    using RCC_APB3ENR_LPTIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM5 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM5 peripheral clock enabled (value: 1)
     */
        /** @brief LPTIM5 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM5EN_B_0x0 = 0;
        /** @brief LPTIM5 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM5EN_B_0x1 = 1;

    /** @brief LPTIM6 clock enable */
    using RCC_APB3ENR_LPTIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM6 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM6 peripheral clock enabled (value: 1)
     */
        /** @brief LPTIM6 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM6EN_B_0x0 = 0;
        /** @brief LPTIM6 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM6EN_B_0x1 = 1;

    /** @brief VREFBUF clock enable */
    using RCC_APB3ENR_VREFBUFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: VREFBUF peripheral clock enabled (value: 1)
     */
        /** @brief VREFBUF peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_VREFBUFEN_B_0x0 = 0;
        /** @brief VREFBUF peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_VREFBUFEN_B_0x1 = 1;

    /** @brief RTC APB interface clock enable */
    using RCC_APB3ENR_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC APB interface clock disabled (default after reset) (value: 0)
     *          - B_0x1: RTC APB interface clock enabled (value: 1)
     */
        /** @brief RTC APB interface clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_RTCAPBEN_B_0x0 = 0;
        /** @brief RTC APB interface clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_RTCAPBEN_B_0x1 = 1;

    /** @brief RCC AHB1 sleep clock register */
    using RCC_AHB1LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable during Sleep mode */
    using RCC_AHB1LPENR_GPDMA1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPDMA1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPDMA1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA1LPEN_B_0x0 = 0;
        /** @brief GPDMA1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA1LPEN_B_0x1 = 1;

    /** @brief GPDMA2 clock enable during Sleep mode */
    using RCC_AHB1LPENR_GPDMA2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPDMA2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPDMA2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA2LPEN_B_0x0 = 0;
        /** @brief GPDMA2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA2LPEN_B_0x1 = 1;

    /** @brief Flash interface (FLITF) clock enable during Sleep mode */
    using RCC_AHB1LPENR_FLITFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLITF peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: FLITF peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief FLITF peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_FLITFLPEN_B_0x0 = 0;
        /** @brief FLITF peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_FLITFLPEN_B_0x1 = 1;

    /** @brief CRC clock enable during Sleep mode */
    using RCC_AHB1LPENR_CRCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: CRC peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief CRC peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_CRCLPEN_B_0x0 = 0;
        /** @brief CRC peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_CRCLPEN_B_0x1 = 1;

    /** @brief CORDIC clock enable during Sleep mode */
    using RCC_AHB1LPENR_CORDICLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CORDIC peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: CORDIC peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief CORDIC peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_CORDICLPEN_B_0x0 = 0;
        /** @brief CORDIC peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_CORDICLPEN_B_0x1 = 1;

    /** @brief FMAC clock enable during Sleep mode */
    using RCC_AHB1LPENR_FMACLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMAC peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: FMAC peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief FMAC peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_FMACLPEN_B_0x0 = 0;
        /** @brief FMAC peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_FMACLPEN_B_0x1 = 1;

    /** @brief RAMCFG clock enable during Sleep mode */
    using RCC_AHB1LPENR_RAMCFGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: RAMCFG peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief RAMCFG peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_RAMCFGLPEN_B_0x0 = 0;
        /** @brief RAMCFG peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_RAMCFGLPEN_B_0x1 = 1;

    /** @brief ETH clock enable during Sleep mode */
    using RCC_AHB1LPENR_ETHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: ETH peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief ETH peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ETHLPEN_B_0x0 = 0;
        /** @brief ETH peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ETHLPEN_B_0x1 = 1;

    /** @brief ETHTX clock enable during Sleep mode */
    using RCC_AHB1LPENR_ETHTXLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETHTX clock disabled during Sleep mode (value: 0)
     *          - B_0x1: ETHTX clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief ETHTX clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ETHTXLPEN_B_0x0 = 0;
        /** @brief ETHTX clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ETHTXLPEN_B_0x1 = 1;

    /** @brief ETHRX clock enable during Sleep mode */
    using RCC_AHB1LPENR_ETHRXLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETHRX clock disabled during Sleep mode (value: 0)
     *          - B_0x1: ETHRX clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief ETHRX clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ETHRXLPEN_B_0x0 = 0;
        /** @brief ETHRX clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ETHRXLPEN_B_0x1 = 1;

    /** @brief TZSC1 clock enable during Sleep mode */
    using RCC_AHB1LPENR_TZSC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TZSC1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TZSC1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TZSC1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_TZSC1LPEN_B_0x0 = 0;
        /** @brief TZSC1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_TZSC1LPEN_B_0x1 = 1;

    /** @brief BKPRAM clock enable during Sleep mode */
    using RCC_AHB1LPENR_BKPRAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPRAM peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: BKPRAM peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief BKPRAM peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_BKPRAMLPEN_B_0x0 = 0;
        /** @brief BKPRAM peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_BKPRAMLPEN_B_0x1 = 1;

    /** @brief ICACHE clock enable during Sleep mode */
    using RCC_AHB1LPENR_ICACHELPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: ICACHE peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief ICACHE peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ICACHELPEN_B_0x0 = 0;
        /** @brief ICACHE peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ICACHELPEN_B_0x1 = 1;

    /** @brief DCACHE clock enable during Sleep mode */
    using RCC_AHB1LPENR_DCACHELPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: DCACHE peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief DCACHE peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_DCACHELPEN_B_0x0 = 0;
        /** @brief DCACHE peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_DCACHELPEN_B_0x1 = 1;

    /** @brief SRAM1 clock enable during Sleep mode */
    using RCC_AHB1LPENR_SRAM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SRAM1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SRAM1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_SRAM1LPEN_B_0x0 = 0;
        /** @brief SRAM1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_SRAM1LPEN_B_0x1 = 1;

    /** @brief RCC AHB2 sleep clock register */
    using RCC_AHB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA clock enable during Sleep mode */
    using RCC_AHB2LPENR_GPIOALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPIOA peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOA peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOALPEN_B_0x0 = 0;
        /** @brief GPIOA peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOALPEN_B_0x1 = 1;

    /** @brief GPIOB clock enable during Sleep mode */
    using RCC_AHB2LPENR_GPIOBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPIOB peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOB peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOBLPEN_B_0x0 = 0;
        /** @brief GPIOB peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOBLPEN_B_0x1 = 1;

    /** @brief GPIOC clock enable during Sleep mode */
    using RCC_AHB2LPENR_GPIOCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPIOC peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOC peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOCLPEN_B_0x0 = 0;
        /** @brief GPIOC peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOCLPEN_B_0x1 = 1;

    /** @brief GPIOD clock enable during Sleep mode */
    using RCC_AHB2LPENR_GPIODLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPIOD peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOD peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIODLPEN_B_0x0 = 0;
        /** @brief GPIOD peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIODLPEN_B_0x1 = 1;

    /** @brief GPIOE clock enable during Sleep mode */
    using RCC_AHB2LPENR_GPIOELPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOE peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPIOE peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOE peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOELPEN_B_0x0 = 0;
        /** @brief GPIOE peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOELPEN_B_0x1 = 1;

    /** @brief GPIOF clock enable during Sleep mode */
    using RCC_AHB2LPENR_GPIOFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOF peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPIOF peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOF peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOFLPEN_B_0x0 = 0;
        /** @brief GPIOF peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOFLPEN_B_0x1 = 1;

    /** @brief GPIOG clock enable during Sleep mode */
    using RCC_AHB2LPENR_GPIOGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOG peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPIOG peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOG peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOGLPEN_B_0x0 = 0;
        /** @brief GPIOG peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOGLPEN_B_0x1 = 1;

    /** @brief GPIOH clock enable during Sleep mode */
    using RCC_AHB2LPENR_GPIOHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPIOH peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOH peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOHLPEN_B_0x0 = 0;
        /** @brief GPIOH peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOHLPEN_B_0x1 = 1;

    /** @brief GPIOI clock enable during Sleep mode */
    using RCC_AHB2LPENR_GPIOILPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOI peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: GPIOI peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOI peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOILPEN_B_0x0 = 0;
        /** @brief GPIOI peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOILPEN_B_0x1 = 1;

    /** @brief ADC1 and 2 peripherals clock enable during Sleep mode */
    using RCC_AHB2LPENR_ADCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and 2 peripherals clock disabled during Sleep mode (value: 0)
     *          - B_0x1: ADC1 and 2 peripherals clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief ADC1 and 2 peripherals clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_ADCLPEN_B_0x0 = 0;
        /** @brief ADC1 and 2 peripherals clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_ADCLPEN_B_0x1 = 1;

    /** @brief DAC clock enable during Sleep mode */
    using RCC_AHB2LPENR_DAC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: DAC peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief DAC peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_DAC1LPEN_B_0x0 = 0;
        /** @brief DAC peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_DAC1LPEN_B_0x1 = 1;

    /** @brief digital camera interface clock enable during Sleep mode (DCMI or PSSI depending which interface is active) */
    using RCC_AHB2LPENR_DCMI_PSSILPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI/PSSI peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: DCMI/PSSI peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief DCMI/PSSI peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_DCMI_PSSILPEN_B_0x0 = 0;
        /** @brief DCMI/PSSI peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_DCMI_PSSILPEN_B_0x1 = 1;

    /** @brief AES clock enable during Sleep mode */
    using RCC_AHB2LPENR_AESLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: AES peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief AES peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_AESLPEN_B_0x0 = 0;
        /** @brief AES peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_AESLPEN_B_0x1 = 1;

    /** @brief HASH clock enable during Sleep mode */
    using RCC_AHB2LPENR_HASHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: HASH peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief HASH peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_HASHLPEN_B_0x0 = 0;
        /** @brief HASH peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_HASHLPEN_B_0x1 = 1;

    /** @brief RNG clock enable during Sleep mode */
    using RCC_AHB2LPENR_RNGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: RNG peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief RNG peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_RNGLPEN_B_0x0 = 0;
        /** @brief RNG peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_RNGLPEN_B_0x1 = 1;

    /** @brief PKA clock enable during Sleep mode */
    using RCC_AHB2LPENR_PKALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: PKA peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief PKA peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_PKALPEN_B_0x0 = 0;
        /** @brief PKA peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_PKALPEN_B_0x1 = 1;

    /** @brief SAES clock enable during Sleep mode */
    using RCC_AHB2LPENR_SAESLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SAES peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SAES peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_SAESLPEN_B_0x0 = 0;
        /** @brief SAES peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_SAESLPEN_B_0x1 = 1;

    /** @brief SRAM2 clock enable during Sleep mode */
    using RCC_AHB2LPENR_SRAM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SRAM2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SRAM2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM2LPEN_B_0x0 = 0;
        /** @brief SRAM2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM2LPEN_B_0x1 = 1;

    /** @brief SRAM3 clock enable during Sleep mode */
    using RCC_AHB2LPENR_SRAM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SRAM3 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SRAM3 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM3LPEN_B_0x0 = 0;
        /** @brief SRAM3 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM3LPEN_B_0x1 = 1;

    /** @brief RCC AHB4 sleep clock register */
    using RCC_AHB4LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTFDEC1 clock enable during Sleep mode */
    using RCC_AHB4LPENR_OTFDEC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: OTFDEC1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief OTFDEC1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_OTFDEC1LPEN_B_0x0 = 0;
        /** @brief OTFDEC1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_OTFDEC1LPEN_B_0x1 = 1;

    /** @brief SDMMC1 and SDMMC1 delay peripheral clock enable during Sleep mode */
    using RCC_AHB4LPENR_SDMMC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 and SDMMC1 delay peripherals clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SDMMC1 and SDMMC1 delay peripherals clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SDMMC1 and SDMMC1 delay peripherals clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_SDMMC1LPEN_B_0x0 = 0;
        /** @brief SDMMC1 and SDMMC1 delay peripherals clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_SDMMC1LPEN_B_0x1 = 1;

    /** @brief FMC clock enable during Sleep mode */
    using RCC_AHB4LPENR_FMCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: FMC peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief FMC peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_FMCLPEN_B_0x0 = 0;
        /** @brief FMC peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_FMCLPEN_B_0x1 = 1;

    /** @brief OCTOSPI1 clock enable during Sleep mode */
    using RCC_AHB4LPENR_OCTOSPI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: OCTOSPI1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief OCTOSPI1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_OCTOSPI1LPEN_B_0x0 = 0;
        /** @brief OCTOSPI1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_OCTOSPI1LPEN_B_0x1 = 1;

    /** @brief RCC APB1 sleep clock register */
    using RCC_APB1LLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 clock enable during Sleep mode */
    using RCC_APB1LLPENR_TIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM2LPEN_B_0x0 = 0;
        /** @brief TIM2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM2LPEN_B_0x1 = 1;

    /** @brief TIM3 clock enable during Sleep mode */
    using RCC_APB1LLPENR_TIM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM3 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM3 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM3LPEN_B_0x0 = 0;
        /** @brief TIM3 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM3LPEN_B_0x1 = 1;

    /** @brief TIM4 clock enable during Sleep mode */
    using RCC_APB1LLPENR_TIM4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM4 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM4 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM4LPEN_B_0x0 = 0;
        /** @brief TIM4 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM4LPEN_B_0x1 = 1;

    /** @brief TIM5 clock enable during Sleep mode */
    using RCC_APB1LLPENR_TIM5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM5 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM5 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM5LPEN_B_0x0 = 0;
        /** @brief TIM5 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM5LPEN_B_0x1 = 1;

    /** @brief TIM6 clock enable during Sleep mode */
    using RCC_APB1LLPENR_TIM6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM6 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM6 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM6LPEN_B_0x0 = 0;
        /** @brief TIM6 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM6LPEN_B_0x1 = 1;

    /** @brief TIM7 clock enable during Sleep mode */
    using RCC_APB1LLPENR_TIM7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM7 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM7 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM7LPEN_B_0x0 = 0;
        /** @brief TIM7 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM7LPEN_B_0x1 = 1;

    /** @brief TIM12 clock enable during Sleep mode */
    using RCC_APB1LLPENR_TIM12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM12 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM12 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM12LPEN_B_0x0 = 0;
        /** @brief TIM12 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM12LPEN_B_0x1 = 1;

    /** @brief WWDG clock enable during Sleep mode */
    using RCC_APB1LLPENR_WWDGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: WWDG peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief WWDG peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_WWDGLPEN_B_0x0 = 0;
        /** @brief WWDG peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_WWDGLPEN_B_0x1 = 1;

    /** @brief SPI2 clock enable during Sleep mode */
    using RCC_APB1LLPENR_SPI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SPI2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SPI2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI2LPEN_B_0x0 = 0;
        /** @brief SPI2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI2LPEN_B_0x1 = 1;

    /** @brief SPI3 clock enable during Sleep mode */
    using RCC_APB1LLPENR_SPI3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SPI3 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SPI3 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI3LPEN_B_0x0 = 0;
        /** @brief SPI3 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI3LPEN_B_0x1 = 1;

    /** @brief USART2 clock enable during Sleep mode */
    using RCC_APB1LLPENR_USART2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: USART2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief USART2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART2LPEN_B_0x0 = 0;
        /** @brief USART2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART2LPEN_B_0x1 = 1;

    /** @brief USART3 clock enable during Sleep mode */
    using RCC_APB1LLPENR_USART3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: USART3 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief USART3 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART3LPEN_B_0x0 = 0;
        /** @brief USART3 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART3LPEN_B_0x1 = 1;

    /** @brief UART4 clock enable during Sleep mode */
    using RCC_APB1LLPENR_UART4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: UART4 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief UART4 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART4LPEN_B_0x0 = 0;
        /** @brief UART4 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART4LPEN_B_0x1 = 1;

    /** @brief UART5 clock enable during Sleep mode */
    using RCC_APB1LLPENR_UART5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: UART5 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief UART5 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART5LPEN_B_0x0 = 0;
        /** @brief UART5 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART5LPEN_B_0x1 = 1;

    /** @brief I2C1 clock enable during Sleep mode */
    using RCC_APB1LLPENR_I2C1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: I2C1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief I2C1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C1LPEN_B_0x0 = 0;
        /** @brief I2C1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C1LPEN_B_0x1 = 1;

    /** @brief I2C2 clock enable during Sleep mode */
    using RCC_APB1LLPENR_I2C2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: I2C2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief I2C2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C2LPEN_B_0x0 = 0;
        /** @brief I2C2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C2LPEN_B_0x1 = 1;

    /** @brief I3C1 clock enable during Sleep mode */
    using RCC_APB1LLPENR_I3C1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: I3C1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief I3C1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I3C1LPEN_B_0x0 = 0;
        /** @brief I3C1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I3C1LPEN_B_0x1 = 1;

    /** @brief CRS clock enable during Sleep mode */
    using RCC_APB1LLPENR_CRSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: CRS peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief CRS peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_CRSLPEN_B_0x0 = 0;
        /** @brief CRS peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_CRSLPEN_B_0x1 = 1;

    /** @brief USART6 clock enable during Sleep mode */
    using RCC_APB1LLPENR_USART6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: USART6 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief USART6 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART6LPEN_B_0x0 = 0;
        /** @brief USART6 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART6LPEN_B_0x1 = 1;

    /** @brief USART10 clock enable during Sleep mode */
    using RCC_APB1LLPENR_USART10LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART10 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: USART10 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief USART10 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART10LPEN_B_0x0 = 0;
        /** @brief USART10 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART10LPEN_B_0x1 = 1;

    /** @brief USART11 clock enable during Sleep mode */
    using RCC_APB1LLPENR_USART11LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART11 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: USART11 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief USART11 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART11LPEN_B_0x0 = 0;
        /** @brief USART11 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART11LPEN_B_0x1 = 1;

    /** @brief HDMI-CEC clock enable during Sleep mode */
    using RCC_APB1LLPENR_CECLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDMI-CEC peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: HDMI-CEC peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief HDMI-CEC peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_CECLPEN_B_0x0 = 0;
        /** @brief HDMI-CEC peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_CECLPEN_B_0x1 = 1;

    /** @brief UART7 clock enable during Sleep mode */
    using RCC_APB1LLPENR_UART7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART7 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: UART7 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief UART7 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART7LPEN_B_0x0 = 0;
        /** @brief UART7 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART7LPEN_B_0x1 = 1;

    /** @brief UART8 clock enable during Sleep mode */
    using RCC_APB1LLPENR_UART8LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART8 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: UART8 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief UART8 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART8LPEN_B_0x0 = 0;
        /** @brief UART8 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART8LPEN_B_0x1 = 1;

    /** @brief RCC APB1 sleep clock register */
    using RCC_APB1HLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART9 clock enable during Sleep mode */
    using RCC_APB1HLPENR_UART9LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART9 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: resets UART9 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief UART9 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_UART9LPEN_B_0x0 = 0;
        /** @brief resets UART9 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_UART9LPEN_B_0x1 = 1;

    /** @brief UART12 clock enable during Sleep mode */
    using RCC_APB1HLPENR_UART12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART12 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: UART12 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief UART12 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_UART12LPEN_B_0x0 = 0;
        /** @brief UART12 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_UART12LPEN_B_0x1 = 1;

    /** @brief DTS clock enable during Sleep mode */
    using RCC_APB1HLPENR_DTSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: DTS peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief DTS peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_DTSLPEN_B_0x0 = 0;
        /** @brief DTS peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_DTSLPEN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable during Sleep mode */
    using RCC_APB1HLPENR_LPTIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPTIM2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_LPTIM2LPEN_B_0x0 = 0;
        /** @brief LPTIM2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_LPTIM2LPEN_B_0x1 = 1;

    /** @brief FDCAN1 and FDCAN2 peripheral clock enable during Sleep mode */
    using RCC_APB1HLPENR_FDCANLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 and FDCAN2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: FDCAN1 and FDCAN2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief FDCAN1 and FDCAN2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_FDCANLPEN_B_0x0 = 0;
        /** @brief FDCAN1 and FDCAN2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_FDCANLPEN_B_0x1 = 1;

    /** @brief UCPD1 clock enable during Sleep mode */
    using RCC_APB1HLPENR_UCPD1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: UCPD peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief UCPD peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_UCPD1LPEN_B_0x0 = 0;
        /** @brief UCPD peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_UCPD1LPEN_B_0x1 = 1;

    /** @brief RCC APB2 sleep clock register */
    using RCC_APB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 clock enable during Sleep mode */
    using RCC_APB2LPENR_TIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x0 = 0;
        /** @brief TIM1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x1 = 1;

    /** @brief SPI1 clock enable during Sleep mode */
    using RCC_APB2LPENR_SPI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SPI1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SPI1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x0 = 0;
        /** @brief SPI1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x1 = 1;

    /** @brief TIM8 clock enable during Sleep mode */
    using RCC_APB2LPENR_TIM8LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM8 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM8 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM8LPEN_B_0x0 = 0;
        /** @brief TIM8 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM8LPEN_B_0x1 = 1;

    /** @brief USART1 clock enable during Sleep mode */
    using RCC_APB2LPENR_USART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: USART1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief USART1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x0 = 0;
        /** @brief USART1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x1 = 1;

    /** @brief TIM15 clock enable during Sleep mode */
    using RCC_APB2LPENR_TIM15LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM15 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM15 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM15LPEN_B_0x0 = 0;
        /** @brief TIM15 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM15LPEN_B_0x1 = 1;

    /** @brief SPI4 clock enable during Sleep mode */
    using RCC_APB2LPENR_SPI4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SPI4 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SPI4 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI4LPEN_B_0x0 = 0;
        /** @brief SPI4 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI4LPEN_B_0x1 = 1;

    /** @brief SPI6 clock enable during Sleep mode */
    using RCC_APB2LPENR_SPI6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI6 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SPI6 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SPI6 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI6LPEN_B_0x0 = 0;
        /** @brief SPI6 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI6LPEN_B_0x1 = 1;

    /** @brief SAI1 clock enable during Sleep mode */
    using RCC_APB2LPENR_SAI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SAI1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SAI1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SAI1LPEN_B_0x0 = 0;
        /** @brief SAI1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SAI1LPEN_B_0x1 = 1;

    /** @brief SAI2 clock enable during Sleep mode */
    using RCC_APB2LPENR_SAI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SAI2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SAI2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SAI2LPEN_B_0x0 = 0;
        /** @brief SAI2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SAI2LPEN_B_0x1 = 1;

    /** @brief USB clock enable during Sleep mode */
    using RCC_APB2LPENR_USBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: USB peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief USB peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USBLPEN_B_0x0 = 0;
        /** @brief USB peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USBLPEN_B_0x1 = 1;

    /** @brief RCC APB3 sleep clock register */
    using RCC_APB3LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS clock enable during Sleep mode */
    using RCC_APB3LPENR_SBSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBS peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: SBS peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief SBS peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_SBSLPEN_B_0x0 = 0;
        /** @brief SBS peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_SBSLPEN_B_0x1 = 1;

    /** @brief LPUART1 clock enable during Sleep mode */
    using RCC_APB3LPENR_LPUART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPUART1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief LPUART1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_LPUART1LPEN_B_0x0 = 0;
        /** @brief LPUART1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_LPUART1LPEN_B_0x1 = 1;

    /** @brief I2C3 clock enable during Sleep mode */
    using RCC_APB3LPENR_I2C3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: I2C3 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief I2C3 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_I2C3LPEN_B_0x0 = 0;
        /** @brief I2C3 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_I2C3LPEN_B_0x1 = 1;

    /** @brief I3C2 clock enable during Sleep mode */
    using RCC_APB3LPENR_I3C2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: I3C2 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief I3C2 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_I3C2LPEN_B_0x0 = 0;
        /** @brief I3C2 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_I3C2LPEN_B_0x1 = 1;

    /** @brief LPTIM1 clock enable during Sleep mode */
    using RCC_APB3LPENR_LPTIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPTIM1 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM1 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM1LPEN_B_0x0 = 0;
        /** @brief LPTIM1 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM1LPEN_B_0x1 = 1;

    /** @brief LPTIM3 clock enable during Sleep mode */
    using RCC_APB3LPENR_LPTIM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPTIM3 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM3 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM3LPEN_B_0x0 = 0;
        /** @brief LPTIM3 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM3LPEN_B_0x1 = 1;

    /** @brief LPTIM4 clock enable during Sleep mode */
    using RCC_APB3LPENR_LPTIM4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPTIM4 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM4 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM4LPEN_B_0x0 = 0;
        /** @brief LPTIM4 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM4LPEN_B_0x1 = 1;

    /** @brief LPTIM5 clock enable during Sleep mode */
    using RCC_APB3LPENR_LPTIM5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM5 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPTIM5 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM5 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM5LPEN_B_0x0 = 0;
        /** @brief LPTIM5 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM5LPEN_B_0x1 = 1;

    /** @brief LPTIM6 clock enable during Sleep mode */
    using RCC_APB3LPENR_LPTIM6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM6 peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPTIM6 peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM6 peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM6LPEN_B_0x0 = 0;
        /** @brief LPTIM6 peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM6LPEN_B_0x1 = 1;

    /** @brief VREFBUF clock enable during Sleep mode */
    using RCC_APB3LPENR_VREFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF peripheral clock disabled during Sleep mode (value: 0)
     *          - B_0x1: VREFBUF peripheral clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief VREFBUF peripheral clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_VREFLPEN_B_0x0 = 0;
        /** @brief VREFBUF peripheral clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_VREFLPEN_B_0x1 = 1;

    /** @brief RTC APB interface clock enable during Sleep mode */
    using RCC_APB3LPENR_RTCAPBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC APB interface clock disabled during Sleep mode (value: 0)
     *          - B_0x1: RTC APB interface clock enabled during Sleep mode (default after reset) (value: 1)
     */
        /** @brief RTC APB interface clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_RTCAPBLPEN_B_0x0 = 0;
        /** @brief RTC APB interface clock enabled during Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_RTCAPBLPEN_B_0x1 = 1;

    /** @brief RCC kernel clock configuration register */
    using RCC_CCIPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 kernel clock source selection */
    using RCC_CCIPR1_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk2 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk2 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x5 = 5;

    /** @brief USART2 kernel clock source selection */
    using RCC_CCIPR1_USART2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x5 = 5;

    /** @brief USART3 kernel clock source selection */
    using RCC_CCIPR1_USART3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x5 = 5;

    /** @brief UART4 kernel clock source selection */
    using RCC_CCIPR1_UART4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x5 = 5;

    /** @brief UART5 kernel clock source selection */
    using RCC_CCIPR1_UART5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x5 = 5;

    /** @brief USART6 kernel clock source selection */
    using RCC_CCIPR1_USART6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USART6SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART6SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART6SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART6SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART6SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART6SEL_B_0x5 = 5;

    /** @brief UART7 kernel clock source selection */
    using RCC_CCIPR1_UART7SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_UART7SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART7SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART7SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART7SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART7SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART7SEL_B_0x5 = 5;

    /** @brief UART8 kernel clock source selection */
    using RCC_CCIPR1_UART8SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_UART8SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART8SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART8SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART8SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART8SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART8SEL_B_0x5 = 5;

    /** @brief UART9 kernel clock source selection */
    using RCC_CCIPR1_UART9SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_UART9SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART9SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART9SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART9SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART9SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_UART9SEL_B_0x5 = 5;

    /** @brief USART10 kernel clock source selection */
    using RCC_CCIPR1_USART10SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USART10SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART10SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART10SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART10SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART10SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART10SEL_B_0x5 = 5;

    /** @brief TIM12, TIM15 and LPTIM2 input capture source selection */
    using RCC_CCIPR1_TIMICSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No internal clock available for timers input capture (default after reset) (value: 0)
     *          - B_0x1: hsi_ker_ck/1024, hsi_ker_ck/8 and csi_ker_ck/128 selected for timers input capture (value: 1)
     */
        /** @brief No internal clock available for timers input capture (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x0 = 0;
        /** @brief hsi_ker_ck/1024, hsi_ker_ck/8 and csi_ker_ck/128 selected for timers input capture */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x1 = 1;

    /** @brief RCC kernel clock configuration register */
    using RCC_CCIPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART11 kernel clock source selection */
    using RCC_CCIPR2_USART11SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_USART11SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_USART11SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_USART11SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_USART11SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_USART11SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_USART11SEL_B_0x5 = 5;

    /** @brief UART12 kernel clock source selection */
    using RCC_CCIPR2_UART12SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_UART12SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART12SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART12SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART12SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART12SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_UART12SEL_B_0x5 = 5;

    /** @brief LPTIM1 kernel clock source selection */
    using RCC_CCIPR2_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel clock (value: 2)
     *          - B_0x3: lse_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: lsi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: per_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk3 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x2 = 2;
        /** @brief lse_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x3 = 3;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x5 = 5;

    /** @brief LPTIM2 kernel clock source selection */
    using RCC_CCIPR2_LPTIM2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel clock (value: 2)
     *          - B_0x3: lse_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: lsi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: per_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x2 = 2;
        /** @brief lse_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x3 = 3;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x5 = 5;

    /** @brief LPTIM3 kernel clock source selection */
    using RCC_CCIPR2_LPTIM3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel clock (value: 2)
     *          - B_0x3: lse_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: lsi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: per_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk3 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM3SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM3SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM3SEL_B_0x2 = 2;
        /** @brief lse_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM3SEL_B_0x3 = 3;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM3SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM3SEL_B_0x5 = 5;

    /** @brief LPTIM4 kernel clock source selection */
    using RCC_CCIPR2_LPTIM4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel clock (value: 2)
     *          - B_0x3: lse_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: lsi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: per_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk3 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM4SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM4SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM4SEL_B_0x2 = 2;
        /** @brief lse_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM4SEL_B_0x3 = 3;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM4SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM4SEL_B_0x5 = 5;

    /** @brief LPTIM5 kernel clock source selection */
    using RCC_CCIPR2_LPTIM5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel clock (value: 2)
     *          - B_0x3: lse_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: lsi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: per_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk3 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM5SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM5SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM5SEL_B_0x2 = 2;
        /** @brief lse_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM5SEL_B_0x3 = 3;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM5SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM5SEL_B_0x5 = 5;

    /** @brief LPTIM6 kernel clock source selection */
    using RCC_CCIPR2_LPTIM6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel clock (value: 2)
     *          - B_0x3: lse_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: lsi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: per_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk3 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM6SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM6SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM6SEL_B_0x2 = 2;
        /** @brief lse_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM6SEL_B_0x3 = 3;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM6SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM6SEL_B_0x5 = 5;

    /** @brief RCC kernel clock configuration register */
    using RCC_CCIPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 kernel clock source selection */
    using RCC_CCIPR3_SPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as kernel clock (value: 2)
     *          - B_0x3: AUDIOCLK selected as kernel clock (value: 3)
     *          - B_0x4: per_ck selected as kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x2 = 2;
        /** @brief AUDIOCLK selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x3 = 3;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x4 = 4;

    /** @brief SPI2 kernel clock source selection */
    using RCC_CCIPR3_SPI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as kernel clock (value: 2)
     *          - B_0x3: AUDIOCLK selected as kernel clock (value: 3)
     *          - B_0x4: per_ck selected as kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI2SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI2SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI2SEL_B_0x2 = 2;
        /** @brief AUDIOCLK selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI2SEL_B_0x3 = 3;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI2SEL_B_0x4 = 4;

    /** @brief SPI3 kernel clock source selection */
    using RCC_CCIPR3_SPI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as kernel clock (value: 2)
     *          - B_0x3: AUDIOCLK selected as kernel clock (value: 3)
     *          - B_0x4: per_ck selected as kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x2 = 2;
        /** @brief AUDIOCLK selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x3 = 3;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x4 = 4;

    /** @brief SPI4 kernel clock source selection */
    using RCC_CCIPR3_SPI4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk2 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: hse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk2 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI4SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI4SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI4SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI4SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI4SEL_B_0x4 = 4;
        /** @brief hse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI4SEL_B_0x5 = 5;

    /** @brief SPI6 kernel clock source selection */
    using RCC_CCIPR3_SPI6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk2 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: hse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk2 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI6SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI6SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI6SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI6SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI6SEL_B_0x4 = 4;
        /** @brief hse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI6SEL_B_0x5 = 5;

    /** @brief LPUART1 kernel clock source selection */
    using RCC_CCIPR3_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 s elected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk3 s elected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x5 = 5;

    /** @brief RCC kernel clock configuration register */
    using RCC_CCIPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI1 kernel clock source selection */
    using RCC_CCIPR4_OCTOSPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_hclk4 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll2_r_ck selected as kernel clock (value: 2)
     *          - B_0x3: per_ck selected as kernel clock (value: 3)
     */
        /** @brief rcc_hclk4 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_OCTOSPI1SEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_OCTOSPI1SEL_B_0x1 = 1;
        /** @brief pll2_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_OCTOSPI1SEL_B_0x2 = 2;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_OCTOSPI1SEL_B_0x3 = 3;

    /** @brief SYSTICK clock source selection */
    using RCC_CCIPR4_SYSTICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_hclk/8 selected as clock source (default after reset) (value: 0)
     *          - B_0x1: lsi_ker_ck[1] selected as clock source (value: 1)
     *          - B_0x2: lse_ck[1] selected as clock source (value: 2)
     */
        /** @brief rcc_hclk/8 selected as clock source (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_SYSTICKSEL_B_0x0 = 0;
        /** @brief lsi_ker_ck[1] selected as clock source */
    constexpr std::uint32_t RCC_CCIPR4_SYSTICKSEL_B_0x1 = 1;
        /** @brief lse_ck[1] selected as clock source */
    constexpr std::uint32_t RCC_CCIPR4_SYSTICKSEL_B_0x2 = 2;

    /** @brief USB kernel clock source selection */
    using RCC_CCIPR4_USBSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock is selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi48_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief no clock is selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_USBSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_USBSEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_USBSEL_B_0x2 = 2;
        /** @brief hsi48_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_USBSEL_B_0x3 = 3;

    /** @brief SDMMC1 kernel clock source selection */
    using RCC_CCIPR4_SDMMC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck selected as kernel clock (value: 1)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_SDMMC1SEL_B_0x0 = 0;
        /** @brief pll2_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_SDMMC1SEL_B_0x1 = 1;

    /** @brief I2C1 kernel clock source selection */
    using RCC_CCIPR4_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: csi_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x2 = 2;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x3 = 3;

    /** @brief I2C2 kernel clock source selection */
    using RCC_CCIPR4_I2C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: csi_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x2 = 2;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x3 = 3;

    /** @brief I2C3 kernel clock source selection */
    using RCC_CCIPR4_I2C3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: csi_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief rcc_pclk3 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x2 = 2;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x3 = 3;

    /** @brief I3C1 kernel clock source selection */
    using RCC_CCIPR4_I3C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: no clock selected (value: 3)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x2 = 2;
        /** @brief no clock selected */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x3 = 3;

    /** @brief I3C2 kernel clock source selection */
    using RCC_CCIPR4_I3C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: no clock selected (value: 3)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x2 = 2;
        /** @brief no clock selected */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x3 = 3;

    /** @brief RCC kernel clock configuration register */
    using RCC_CCIPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC and DAC kernel clock source selection */
    using RCC_CCIPR5_ADCDACSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_hclk selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: sys_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll2_r_ck selected as kernel clock (value: 2)
     *          - B_0x3: hse_ck selected as kernel clock (value: 3)
     *          - B_0x4: hsi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: csi_ker_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_hclk selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_ADCDACSEL_B_0x0 = 0;
        /** @brief sys_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_ADCDACSEL_B_0x1 = 1;
        /** @brief pll2_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_ADCDACSEL_B_0x2 = 2;
        /** @brief hse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_ADCDACSEL_B_0x3 = 3;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_ADCDACSEL_B_0x4 = 4;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_ADCDACSEL_B_0x5 = 5;

    /** @brief DAC sample and hold clock */
    using RCC_CCIPR5_DACSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: dac_hold_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: dac_hold_ck selected as kernel clock (value: 1)
     */
        /** @brief dac_hold_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_DACSEL_B_0x0 = 0;
        /** @brief dac_hold_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_DACSEL_B_0x1 = 1;

    /** @brief RNG kernel clock source selection */
    using RCC_CCIPR5_RNGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi48_ker_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: lse_ck selected as kernel clock (value: 2)
     *          - B_0x3: lsi_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief hsi48_ker_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_RNGSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_RNGSEL_B_0x1 = 1;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_RNGSEL_B_0x2 = 2;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_RNGSEL_B_0x3 = 3;

    /** @brief HSMI-CEC kernel clock source selection */
    using RCC_CCIPR5_CECSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lse_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: lsi_ker_ck selected as kernel clock (value: 1)
     *          - B_0x2: csi_ker_ck/122 selected as kernel clock (value: 2)
     */
        /** @brief lse_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_CECSEL_B_0x0 = 0;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_CECSEL_B_0x1 = 1;
        /** @brief csi_ker_ck/122 selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_CECSEL_B_0x2 = 2;

    /** @brief FDCAN1 and FDCAN2 kernel clock source selection */
    using RCC_CCIPR5_FDCANSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hse_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll2_q_ck selected as kernel clock (value: 2)
     */
        /** @brief hse_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_FDCANSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_FDCANSEL_B_0x1 = 1;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_FDCANSEL_B_0x2 = 2;

    /** @brief SAI1 kernel clock source selection */
    using RCC_CCIPR5_SAI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as kernel clock (value: 2)
     *          - B_0x3: AUDIOCLK selected as kernel clock (value: 3)
     *          - B_0x4: per_ck selected as kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_SAI1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_SAI1SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_SAI1SEL_B_0x2 = 2;
        /** @brief AUDIOCLK selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_SAI1SEL_B_0x3 = 3;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_SAI1SEL_B_0x4 = 4;

    /** @brief SAI2 kernel clock source selection */
    using RCC_CCIPR5_SAI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as kernel clock (value: 2)
     *          - B_0x3: AUDIOCLK selected as kernel clock (value: 3)
     *          - B_0x4: per_ck selected as kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_SAI2SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_SAI2SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_SAI2SEL_B_0x2 = 2;
        /** @brief AUDIOCLK selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_SAI2SEL_B_0x3 = 3;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_SAI2SEL_B_0x4 = 4;

    /** @brief per_ck clock source selection */
    using RCC_CCIPR5_CKPERSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ker_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: csi_ker_ck selected as kernel clock (value: 1)
     *          - B_0x2: hse_ck selected as kernel clock (value: 2)
     */
        /** @brief hsi_ker_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_CKPERSEL_B_0x0 = 0;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_CKPERSEL_B_0x1 = 1;
        /** @brief hse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_CKPERSEL_B_0x2 = 2;

    /** @brief RCC Backup domain control register */
    using RCC_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
     *          - B_0x0: lowest drive (default after Backup domain reset) (value: 0)
     *          - B_0x1: medium-low drive (value: 1)
     *          - B_0x2: medium-high drive (value: 2)
     *          - B_0x3: highest drive (value: 3)
     */
        /** @brief lowest drive (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x0 = 0;
        /** @brief medium-low drive */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x1 = 1;
        /** @brief medium-high drive */
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

    /** @brief low-speed external clock type in bypass mode */
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
     *          - B_0x1: resets the entire VSW domain (value: 1)
     */
        /** @brief reset not activated (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_VSWRST_B_0x0 = 0;
        /** @brief resets the entire VSW domain */
    constexpr std::uint32_t RCC_BDCR_VSWRST_B_0x1 = 1;

    /** @brief Low-speed clock output (LSCO) enable */
    using RCC_BDCR_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSCO output disabled (value: 0)
     *          - B_0x1: LSCO output enabled (value: 1)
     */
        /** @brief LSCO output disabled */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x0 = 0;
        /** @brief LSCO output enabled */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x1 = 1;

    /** @brief Low-speed clock output selection */
    using RCC_BDCR_LSCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI clock selected (value: 0)
     *          - B_0x1: LSE clock selected (value: 1)
     */
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x0 = 0;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x1 = 1;

    /** @brief LSI oscillator enable */
    using RCC_BDCR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI oscillator off (value: 0)
     *          - B_0x1: LSI oscillator on (value: 1)
     */
        /** @brief LSI oscillator off */
    constexpr std::uint32_t RCC_BDCR_LSION_B_0x0 = 0;
        /** @brief LSI oscillator on */
    constexpr std::uint32_t RCC_BDCR_LSION_B_0x1 = 1;

    /** @brief LSI oscillator ready */
    using RCC_BDCR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI oscillator not ready (value: 0)
     *          - B_0x1: LSI oscillator ready (value: 1)
     */
        /** @brief LSI oscillator not ready */
    constexpr std::uint32_t RCC_BDCR_LSIRDY_B_0x0 = 0;
        /** @brief LSI oscillator ready */
    constexpr std::uint32_t RCC_BDCR_LSIRDY_B_0x1 = 1;

    /** @brief RCC reset status register */
    using RCC_RSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief remove reset flag */
    using RCC_RSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset of the reset flags not activated (default after power-on reset) (value: 0)
     *          - B_0x1: resets the value of the reset flags (value: 1)
     */
        /** @brief reset of the reset flags not activated (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x0 = 0;
        /** @brief resets the value of the reset flags */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x1 = 1;

    /** @brief pin reset flag (NRST) */
    using RCC_RSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset from pin occurred (value: 0)
     *          - B_0x1: reset from pin occurred (default after power-on reset) (value: 1)
     */
        /** @brief no reset from pin occurred */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x0 = 0;
        /** @brief reset from pin occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x1 = 1;

    /** @brief BOR reset flag */
    using RCC_RSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no BOR reset occurred (value: 0)
     *          - B_0x1: BOR reset occurred (default after power-on reset) (value: 1)
     */
        /** @brief no BOR reset occurred */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x1 = 1;

    /** @brief system reset from CPU reset flag */
    using RCC_RSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no CPU software reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: a system reset has been generated by the CPU (value: 1)
     */
        /** @brief no CPU software reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x0 = 0;
        /** @brief a system reset has been generated by the CPU */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x1 = 1;

    /** @brief independent watchdog reset flag */
    using RCC_RSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no independent watchdog reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: independent watchdog reset occurred (value: 1)
     */
        /** @brief no independent watchdog reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x0 = 0;
        /** @brief independent watchdog reset occurred */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x1 = 1;

    /** @brief window watchdog reset flag */
    using RCC_RSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no window watchdog reset occurred from WWDG (default after power-on reset) (value: 0)
     *          - B_0x1: window watchdog reset occurred from WWDG (value: 1)
     */
        /** @brief no window watchdog reset occurred from WWDG (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x0 = 0;
        /** @brief window watchdog reset occurred from WWDG */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Low-power reset flag */
    using RCC_RSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal low-power mode reset occurred (value: 0)
     *          - B_0x1: Illegal low-power mode reset occurred (value: 1)
     */
        /** @brief No illegal low-power mode reset occurred */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x0 = 0;
        /** @brief Illegal low-power mode reset occurred */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC secure configuration register */
    using RCC_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock configuration and status bits security */
    using RCC_SECCFGR_HSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x1 = 1;

    /** @brief HSE clock configuration bits, status bits and HSE_CSS security */
    using RCC_SECCFGR_HSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x1 = 1;

    /** @brief CSI clock configuration and status bits security */
    using RCC_SECCFGR_CSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_CSISEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_CSISEC_B_0x1 = 1;

    /** @brief LSI clock configuration and status bits security */
    using RCC_SECCFGR_LSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x1 = 1;

    /** @brief LSE clock configuration and status bits security */
    using RCC_SECCFGR_LSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_LSESEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_LSESEC_B_0x1 = 1;

    /** @brief SYSCLK clock selection, STOPWUCK bit, clock output on MCO configuration security */
    using RCC_SECCFGR_SYSCLKSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_SYSCLKSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_SYSCLKSEC_B_0x1 = 1;

    /** @brief AHBx/APBx prescaler configuration bits security */
    using RCC_SECCFGR_PRESCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_PRESCSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_PRESCSEC_B_0x1 = 1;

    /** @brief PLL1 clock configuration and status bits security */
    using RCC_SECCFGR_PLL1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL1SEC_B_0x1 = 1;

    /** @brief PLL2 clock configuration and status bits security */
    using RCC_SECCFGR_PLL2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL2SEC_B_0x1 = 1;

    /** @brief PLL3 clock configuration and status bits security */
    using RCC_SECCFGR_PLL3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL3SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL3SEC_B_0x1 = 1;

    /** @brief HSI48 clock configuration and status bits security */
    using RCC_SECCFGR_HSI48SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_HSI48SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_HSI48SEC_B_0x1 = 1;

    /** @brief Remove reset flag security */
    using RCC_SECCFGR_RMVFSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_RMVFSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_RMVFSEC_B_0x1 = 1;

    /** @brief per_ck selection security */
    using RCC_SECCFGR_CKPERSELSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_CKPERSELSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_CKPERSELSEC_B_0x1 = 1;

    /** @brief RCC privilege configuration register */
    using RCC_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC secure functions privilege configuration */
    using RCC_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to RCC secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to RCC secure functions can be done by privileged access only (value: 1)
     */
        /** @brief Read and write to RCC secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t RCC_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to RCC secure functions can be done by privileged access only */
    constexpr std::uint32_t RCC_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief RCC non-secure functions privilege configuration */
    using RCC_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to RCC non-secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to RCC non-secure functions can be done by privileged access only (value: 1)
     */
        /** @brief Read and write to RCC non-secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to RCC non-secure functions can be done by privileged access only */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x1 = 1;

}

#endif
