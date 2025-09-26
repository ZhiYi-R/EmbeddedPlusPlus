/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7B3_RCC_HPP
#define EMBEDDED_PP_STM32H7B3_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Reset and clock control */
namespace STM32H7B3::RCC {

    /** @brief RCC_CR register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock enable Set and cleared by software. Set by hardware to force the HSI to ON when the product leaves Stop mode, if STOPWUCK = 0 or STOPKERWUCK = 0. Set by hardware to force the HSI to ON when the product leaves Standby mode or in case of a failure of the HSE which is used as the system clock source. This bit cannot be cleared if the HSI is used directly (via SW mux) as system clock, or if the HSI is selected as reference clock for PLL1 with PLL1 enabled (PLL1ON bit set to 1). */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI is OFF (value: 0)
     *          - B_0x1: HSI is ON (default after reset) (value: 1)
     */
        /** @brief HSI is OFF */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI is ON (default after reset) */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI clock enable in Stop mode Set and reset by software to force the HSI to ON, even in Stop mode, in order to be quickly available as kernel clock for peripherals. This bit has no effect on the value of HSION. */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect on HSI (default after reset) (value: 0)
     *          - B_0x1: HSI is forced to ON even in Stop mode (value: 1)
     */
        /** @brief no effect on HSI (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI is forced to ON even in Stop mode */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x1 = 1;

    /** @brief HSI clock ready flag Set by hardware to indicate that the HSI oscillator is stable. */
    using RCC_CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: HSI clock is ready (value: 1)
     */
        /** @brief HSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x0 = 0;
        /** @brief HSI clock is ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x1 = 1;

    /** @brief HSI clock divider Set and reset by software. These bits allow selecting a division ratio in order to configure the wanted HSI clock frequency. The HSIDIV cannot be changed if the HSI is selected as reference clock for at least one enabled PLL (PLLxON bit set to 1). In that case, the new HSIDIV value is ignored. */
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

    /** @brief HSI divider flag Set and reset by hardware. As a write operation to HSIDIV has not an immediate effect on the frequency, this flag indicates the current status of the HSI divider. HSIDIVF goes immediately to 0 when HSIDIV value is changed, and is set back to 1 when the output frequency matches the value programmed into HSIDIV. clock setting is completed) */
    using RCC_CR_HSIDIVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: new division ratio not yet propagated to hsi(_ker)_ck (default after reset) (value: 0)
     *          - B_0x1: hsi(_ker)_ck clock frequency reflects the new HSIDIV value (default register value when the (value: 1)
     */
        /** @brief new division ratio not yet propagated to hsi(_ker)_ck (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIDIVF_B_0x0 = 0;
        /** @brief hsi(_ker)_ck clock frequency reflects the new HSIDIV value (default register value when the */
    constexpr std::uint32_t RCC_CR_HSIDIVF_B_0x1 = 1;

    /** @brief CSI clock enable Set and reset by software to enable/disable CSI clock for system and/or peripheral. Set by hardware to force the CSI to ON when the system leaves Stop mode, if STOPWUCK = 1 or STOPKERWUCK = 1. This bit cannot be cleared if the CSI is used directly (via SW mux) as system clock, or if the CSI is selected as reference clock for PLL1 with PLL1 enabled (PLL1ON bit set to 1). */
    using RCC_CR_CSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI is OFF (default after reset) (value: 0)
     *          - B_0x1: CSI is ON (value: 1)
     */
        /** @brief CSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_CSION_B_0x0 = 0;
        /** @brief CSI is ON */
    constexpr std::uint32_t RCC_CR_CSION_B_0x1 = 1;

    /** @brief CSI clock ready flag Set by hardware to indicate that the CSI oscillator is stable. This bit is activated only if the RC is enabled by CSION (it is not activated if the CSI is enabled by CSIKERON or by a peripheral request). */
    using RCC_CR_CSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: CSI clock is ready (value: 1)
     */
        /** @brief CSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_CSIRDY_B_0x0 = 0;
        /** @brief CSI clock is ready */
    constexpr std::uint32_t RCC_CR_CSIRDY_B_0x1 = 1;

    /** @brief CSI clock enable in Stop mode Set and reset by software to force the CSI to ON, even in Stop mode, in order to be quickly available as kernel clock for some peripherals. This bit has no effect on the value of CSION. */
    using RCC_CR_CSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect on CSI (default after reset) (value: 0)
     *          - B_0x1: CSI is forced to ON even in Stop mode (value: 1)
     */
        /** @brief no effect on CSI (default after reset) */
    constexpr std::uint32_t RCC_CR_CSIKERON_B_0x0 = 0;
        /** @brief CSI is forced to ON even in Stop mode */
    constexpr std::uint32_t RCC_CR_CSIKERON_B_0x1 = 1;

    /** @brief HSI48 clock enable Set by software and cleared by software or by the hardware when the system enters to Stop or Standby mode. */
    using RCC_CR_HSI48ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 is OFF (default after reset) (value: 0)
     *          - B_0x1: HSI48 is ON (value: 1)
     */
        /** @brief HSI48 is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x0 = 0;
        /** @brief HSI48 is ON */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x1 = 1;

    /** @brief HSI48 clock ready flag Set by hardware to indicate that the HSI48 oscillator is stable. */
    using RCC_CR_HSI48RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 clock is not ready (default after reset) (value: 0)
     *          - B_0x1: HSI48 clock is ready (value: 1)
     */
        /** @brief HSI48 clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_HSI48RDY_B_0x0 = 0;
        /** @brief HSI48 clock is ready */
    constexpr std::uint32_t RCC_CR_HSI48RDY_B_0x1 = 1;

    /** @brief CPU related clocks ready flag Set by hardware to indicate that the CPU related clocks (CPU, APB3, AXI bus matrix and related memories) are available. */
    using RCC_CR_CPUCKRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CPU related clocks are not available (default after reset) (value: 0)
     *          - B_0x1: CPU related clocks are available (value: 1)
     */
        /** @brief CPU related clocks are not available (default after reset) */
    constexpr std::uint32_t RCC_CR_CPUCKRDY_B_0x0 = 0;
        /** @brief CPU related clocks are available */
    constexpr std::uint32_t RCC_CR_CPUCKRDY_B_0x1 = 1;

    /** @brief CPU domain clocks ready flag Set by hardware to indicate that the following CPU domain clocks are available: APB1, APB2, AHB bus matrix. */
    using RCC_CR_CDCKRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CPU domain clocks are not available (default after reset) (value: 0)
     *          - B_0x1: CPU domain clocks are available (value: 1)
     */
        /** @brief CPU domain clocks are not available (default after reset) */
    constexpr std::uint32_t RCC_CR_CDCKRDY_B_0x0 = 0;
        /** @brief CPU domain clocks are available */
    constexpr std::uint32_t RCC_CR_CDCKRDY_B_0x1 = 1;

    /** @brief HSE clock enable Set and cleared by software. Cleared by hardware to stop the HSE when entering Stop or Standby mode. This bit cannot be cleared if the HSE is used directly (via SW mux) as system clock, or if the HSE is selected as reference clock for PLL1 with PLL1 enabled (PLL1ON bit set to 1). */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE is OFF (default after reset) (value: 0)
     *          - B_0x1: HSE is ON (value: 1)
     */
        /** @brief HSE is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief HSE is ON */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x1 = 1;

    /** @brief HSE clock ready flag Set by hardware to indicate that the HSE oscillator is stable. */
    using RCC_CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE clock is not ready (default after reset) (value: 0)
     *          - B_0x1: HSE clock is ready (value: 1)
     */
        /** @brief HSE clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x0 = 0;
        /** @brief HSE clock is ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x1 = 1;

    /** @brief HSE clock bypass Set and cleared by software to bypass the oscillator with an external clock. The external clock must be enabled with the HSEON bit to be used by the device. The HSEBYP bit can be written only if the HSE oscillator is disabled. */
    using RCC_CR_HSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator not bypassed (default after reset) (value: 0)
     *          - B_0x1: HSE oscillator bypassed with an external clock (value: 1)
     */
        /** @brief HSE oscillator not bypassed (default after reset) */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x0 = 0;
        /** @brief HSE oscillator bypassed with an external clock */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x1 = 1;

    /** @brief HSE clock security system enable Set by software to enable clock security system on HSE. This bit is set only (disabled by a system reset or when the system enters in Standby mode). When HSECSSON is set, the clock detector is enabled by hardware when the HSE is ready and disabled by hardware if an oscillator failure is detected. */
    using RCC_CR_HSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSS on HSE OFF (clock detector OFF) (default after reset) (value: 0)
     *          - B_0x1: CSS on HSE ON (clock detector ON if the HSE oscillator is stable, OFF if not). (value: 1)
     */
        /** @brief CSS on HSE OFF (clock detector OFF) (default after reset) */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x0 = 0;
        /** @brief CSS on HSE ON (clock detector ON if the HSE oscillator is stable, OFF if not). */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x1 = 1;

    /** @brief external high speed clock type in Bypass mode Set and reset by software to select the external clock type (analog or digital). The external clock must be enabled with the HSEON bit to be used by the device. The HSEEXT bit can be written only if the HSE oscillator is disabled. */
    using RCC_CR_HSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE in analog mode (default after reset) (value: 0)
     *          - B_0x1: HSE in digital mode (value: 1)
     */
        /** @brief HSE in analog mode (default after reset) */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x0 = 0;
        /** @brief HSE in digital mode */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x1 = 1;

    /** @brief PLL1 enable Set and cleared by software to enable PLL1. Cleared by hardware when entering Stop or Standby mode. Note that the hardware prevents writing this bit to 0, if the PLL1 output is used as the system clock. */
    using RCC_CR_PLL1ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 OFF (default after reset) (value: 0)
     *          - B_0x1: PLL1 ON (value: 1)
     */
        /** @brief PLL1 OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x0 = 0;
        /** @brief PLL1 ON */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x1 = 1;

    /** @brief PLL1 clock ready flag Set by hardware to indicate that the PLL1 is locked. */
    using RCC_CR_PLL1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 unlocked (default after reset) (value: 0)
     *          - B_0x1: PLL1 locked (value: 1)
     */
        /** @brief PLL1 unlocked (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL1RDY_B_0x0 = 0;
        /** @brief PLL1 locked */
    constexpr std::uint32_t RCC_CR_PLL1RDY_B_0x1 = 1;

    /** @brief PLL2 enable Set and cleared by software to enable PLL2. Cleared by hardware when entering Stop or Standby mode. */
    using RCC_CR_PLL2ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 OFF (default after reset) (value: 0)
     *          - B_0x1: PLL2 ON (value: 1)
     */
        /** @brief PLL2 OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL2ON_B_0x0 = 0;
        /** @brief PLL2 ON */
    constexpr std::uint32_t RCC_CR_PLL2ON_B_0x1 = 1;

    /** @brief PLL2 clock ready flag Set by hardware to indicate that the PLL2 is locked. */
    using RCC_CR_PLL2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 unlocked (default after reset) (value: 0)
     *          - B_0x1: PLL2 locked (value: 1)
     */
        /** @brief PLL2 unlocked (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL2RDY_B_0x0 = 0;
        /** @brief PLL2 locked */
    constexpr std::uint32_t RCC_CR_PLL2RDY_B_0x1 = 1;

    /** @brief PLL3 enable Set and cleared by software to enable PLL3. Cleared by hardware when entering Stop or Standby mode. */
    using RCC_CR_PLL3ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 OFF (default after reset) (value: 0)
     *          - B_0x1: PLL3 ON (value: 1)
     */
        /** @brief PLL3 OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL3ON_B_0x0 = 0;
        /** @brief PLL3 ON */
    constexpr std::uint32_t RCC_CR_PLL3ON_B_0x1 = 1;

    /** @brief PLL3 clock ready flag Set by hardware to indicate that the PLL3 is locked. */
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
    /** @brief HSI clock calibration Set by hardware by option byte loading during system reset nreset. Adjusted by software through trimming bits HSITRIM. This field represents the sum of engineering option byte calibration value and HSITRIM bits value. */
    using RCC_HSICFGR_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock trimming Set by software to adjust calibration. HSITRIM field is added to the engineering option bytes loaded during reset phase (FLASH_HSI_opt) in order to form the calibration trimming value. HSICAL=HSITRIM+FLASH_HSI_opt. Note: The reset value of the field is 0x40. */
    using RCC_HSICFGR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock recovery RC register */
    using RCC_CRRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal RC 48 MHz clock calibration Set by hardware by option byte loading during system reset nreset. Read-only. */
    using RCC_CRRCR_HSI48CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC CSI calibration register */
    using RCC_CSICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI clock calibration Set by hardware by option byte loading during system reset nreset. Adjusted by software through trimming bits CSITRIM. This field represents the sum of engineering option byte calibration value and CSITRIM bits value. */
    using RCC_CSICFGR_CSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI clock trimming Set by software to adjust calibration. CSITRIM field is added to the engineering option bytes loaded during reset phase (FLASH_CSI_opt) in order to form the calibration trimming value. CSICAL=CSITRIM+FLASH_CSI_opt. Note: The reset value of the field is 0x20. */
    using RCC_CSICFGR_CSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC_CFGR register */
    using RCC_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock and trace clock switch Set and reset by software to select system clock and trace clock sources (sys_ck and traceclk). Set by hardware in order to: force the selection of the HSI or CSI (depending on STOPWUCK selection) when leaving a system Stop mode force the selection of the HSI in case of failure of the HSE when used directly or indirectly as system clock others: reserved */
    using RCC_CFGR_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as system clock (hsi_ck) (default after reset) (value: 0)
     *          - B_0x1: CSI selected as system clock (csi_ck) (value: 1)
     *          - B_0x2: HSE selected as system clock (hse_ck) (value: 2)
     *          - B_0x3: PLL1 selected as system clock (pll1_p_ck for sys_ck, pll1_r_ck for traceclk) (value: 3)
     */
        /** @brief HSI selected as system clock (hsi_ck) (default after reset) */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x0 = 0;
        /** @brief CSI selected as system clock (csi_ck) */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x1 = 1;
        /** @brief HSE selected as system clock (hse_ck) */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x2 = 2;
        /** @brief PLL1 selected as system clock (pll1_p_ck for sys_ck, pll1_r_ck for traceclk) */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x3 = 3;

    /** @brief system clock switch status Set and reset by hardware to indicate which clock source is used as system clock. others: reserved */
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

    /** @brief system clock selection after a wake up from system Stop Set and reset by software to select the system wakeup clock from system Stop. The selected clock is also used as emergency clock for the clock security system (CSS) on HSE. See for details. STOPWUCK must not be modified when CSS is enabled (by HSECSSON bit) and the system clock is HSE (SWS=10) or a switch on HSE is requested (SW=10). */
    using RCC_CFGR_STOPWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as wake up clock from system Stop (default after reset) (value: 0)
     *          - B_0x1: CSI selected as wake up clock from system Stop (value: 1)
     */
        /** @brief HSI selected as wake up clock from system Stop (default after reset) */
    constexpr std::uint32_t RCC_CFGR_STOPWUCK_B_0x0 = 0;
        /** @brief CSI selected as wake up clock from system Stop */
    constexpr std::uint32_t RCC_CFGR_STOPWUCK_B_0x1 = 1;

    /** @brief kernel clock selection after a wake up from system Stop Set and reset by software to select the kernel wakeup clock from system Stop. See for details. */
    using RCC_CFGR_STOPKERWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as wake up clock from system Stop (default after reset) (value: 0)
     *          - B_0x1: CSI selected as wake up clock from system Stop (value: 1)
     */
        /** @brief HSI selected as wake up clock from system Stop (default after reset) */
    constexpr std::uint32_t RCC_CFGR_STOPKERWUCK_B_0x0 = 0;
        /** @brief CSI selected as wake up clock from system Stop */
    constexpr std::uint32_t RCC_CFGR_STOPKERWUCK_B_0x1 = 1;

    /** @brief HSE division factor for RTC clock Set and cleared by software to divide the HSE to generate a clock for RTC. Caution: The software must set these bits correctly to ensure that the clock supplied to the RTC is lower than 1MHz. These bits must be configured if needed before selecting the RTC clock source. ... */
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

    /** @brief timers clocks prescaler selection This bit is set and reset by software to control the clock frequency of all the timers connected to APB1 and APB2 domains. Refer to for more details. */
    using RCC_CFGR_TIMPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The timers kernel clock is equal to rcc_hclk1 if CDPPRE1 or CDPPRE2 corresponds to a division by 1 or 2, else it is equal to 2 x Frcc_pclk1 or 2 x Frcc_pclk2 (default after reset) (value: 0)
     *          - B_0x1: The timers kernel clock is equal to 2 x Frcc_pclk1 or 2 x Frcc_pclk2 if CDPPRE1 or CDPPRE2 corresponds to a division by 1, 2or 4, else it is equal to 4 x Frcc_pclk1 or 4 x Frcc_pclk2. (value: 1)
     */
        /** @brief The timers kernel clock is equal to rcc_hclk1 if CDPPRE1 or CDPPRE2 corresponds to a division by 1 or 2, else it is equal to 2 x Frcc_pclk1 or 2 x Frcc_pclk2 (default after reset) */
    constexpr std::uint32_t RCC_CFGR_TIMPRE_B_0x0 = 0;
        /** @brief The timers kernel clock is equal to 2 x Frcc_pclk1 or 2 x Frcc_pclk2 if CDPPRE1 or CDPPRE2 corresponds to a division by 1, 2or 4, else it is equal to 4 x Frcc_pclk1 or 4 x Frcc_pclk2. */
    constexpr std::uint32_t RCC_CFGR_TIMPRE_B_0x1 = 1;

    /** @brief MCO1 prescaler Set and cleared by software to configure the prescaler of the MCO1. Modification of this prescaler may generate glitches on MCO1. It is highly recommended to change this prescaler only after reset, before enabling the external oscillators and the PLLs. ... */
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

    /** @brief Microcontroller clock output 1 Set and cleared by software. Clock source selection may generate glitches on MCO1. It is highly recommended to configure these bits only after reset, before enabling the external oscillators and the PLLs. others: reserved */
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

    /** @brief MCO2 prescaler Set and cleared by software to configure the prescaler of the MCO2. Modification of this prescaler may generate glitches on MCO2. It is highly recommended to change this prescaler only after reset, before enabling the external oscillators and the PLLs. ... */
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

    /** @brief microcontroller clock output 2 Set and cleared by software. Clock source selection may generate glitches on MCO2. It is highly recommended to configure these bits only after reset, before enabling the external oscillators and the PLLs. others: reserved */
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

    /** @brief RCC_CDCFGR1 register */
    using RCC_CDCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU domain AHB prescaler Set and reset by software to control the division factor of rcc_hclk3 and rcc_aclk. Changing this division ratio has an impact on the frequency of all bus matrix clocks. 0xxx: rcc_hclk3 = sys_cdcpre_ck (default after reset) Note: The clocks are divided by the new prescaler factor from1 to 16 periods of the slowest APB clock among rcc_pclk[4:1] after HPRE update. Note: Note also that rcc_hclk3 = rcc_aclk. */
    using RCC_CDCFGR1_HPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x8: rcc_hclk3 = sys_cdcpre_ck / 2 (value: 8)
     *          - B_0x9: rcc_hclk3 = sys_cdcpre_ck / 4 (value: 9)
     *          - B_0xA: rcc_hclk3 = sys_cdcpre_ck / 8 (value: 10)
     *          - B_0xB: rcc_hclk3 = sys_cdcpre_ck / 16 (value: 11)
     *          - B_0xC: rcc_hclk3 = sys_cdcpre_ck / 64 (value: 12)
     *          - B_0xD: rcc_hclk3 = sys_cdcpre_ck / 128 (value: 13)
     *          - B_0xE: rcc_hclk3 = sys_cdcpre_ck / 256 (value: 14)
     *          - B_0xF: rcc_hclk3 = sys_cdcpre_ck / 512 (value: 15)
     */
        /** @brief rcc_hclk3 = sys_cdcpre_ck / 2 */
    constexpr std::uint32_t RCC_CDCFGR1_HPRE_B_0x8 = 8;
        /** @brief rcc_hclk3 = sys_cdcpre_ck / 4 */
    constexpr std::uint32_t RCC_CDCFGR1_HPRE_B_0x9 = 9;
        /** @brief rcc_hclk3 = sys_cdcpre_ck / 8 */
    constexpr std::uint32_t RCC_CDCFGR1_HPRE_B_0xA = 10;
        /** @brief rcc_hclk3 = sys_cdcpre_ck / 16 */
    constexpr std::uint32_t RCC_CDCFGR1_HPRE_B_0xB = 11;
        /** @brief rcc_hclk3 = sys_cdcpre_ck / 64 */
    constexpr std::uint32_t RCC_CDCFGR1_HPRE_B_0xC = 12;
        /** @brief rcc_hclk3 = sys_cdcpre_ck / 128 */
    constexpr std::uint32_t RCC_CDCFGR1_HPRE_B_0xD = 13;
        /** @brief rcc_hclk3 = sys_cdcpre_ck / 256 */
    constexpr std::uint32_t RCC_CDCFGR1_HPRE_B_0xE = 14;
        /** @brief rcc_hclk3 = sys_cdcpre_ck / 512 */
    constexpr std::uint32_t RCC_CDCFGR1_HPRE_B_0xF = 15;

    /** @brief CPU domain APB3 prescaler Set and reset by software to control the division factor of rcc_pclk3. The clock is divided by the new prescaler factor from 1 to 16 cycles of rcc_hclk3 after CDPPRE write. 0xx: rcc_pclk3 = rcc_hclk3 (default after reset) */
    using RCC_CDCFGR1_CDPPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk3 = rcc_hclk3 / 2 (value: 4)
     *          - B_0x5: rcc_pclk3 = rcc_hclk3 / 4 (value: 5)
     *          - B_0x6: rcc_pclk3 = rcc_hclk3 / 8 (value: 6)
     *          - B_0x7: rcc_pclk3 = rcc_hclk3 / 16 (value: 7)
     */
        /** @brief rcc_pclk3 = rcc_hclk3 / 2 */
    constexpr std::uint32_t RCC_CDCFGR1_CDPPRE_B_0x4 = 4;
        /** @brief rcc_pclk3 = rcc_hclk3 / 4 */
    constexpr std::uint32_t RCC_CDCFGR1_CDPPRE_B_0x5 = 5;
        /** @brief rcc_pclk3 = rcc_hclk3 / 8 */
    constexpr std::uint32_t RCC_CDCFGR1_CDPPRE_B_0x6 = 6;
        /** @brief rcc_pclk3 = rcc_hclk3 / 16 */
    constexpr std::uint32_t RCC_CDCFGR1_CDPPRE_B_0x7 = 7;

    /** @brief CPU domain core prescaler Set and reset by software to control the CPU domain CPU clock division factor. Changing this division ratio has an impact on the frequency of the CPU clock and all bus matrix clocks. After changing this prescaler value, it takes up to 16 periods of the slowest APB clock before the new division ratio is taken into account. The application can check if the new division factor is taken into account by reading back this register. 0xxx: sys_ck not divided (default after reset) */
    using RCC_CDCFGR1_CDCPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t RCC_CDCFGR1_CDCPRE_B_0x8 = 8;
        /** @brief sys_ck divided by 4 */
    constexpr std::uint32_t RCC_CDCFGR1_CDCPRE_B_0x9 = 9;
        /** @brief sys_ck divided by 8 */
    constexpr std::uint32_t RCC_CDCFGR1_CDCPRE_B_0xA = 10;
        /** @brief sys_ck divided by 16 */
    constexpr std::uint32_t RCC_CDCFGR1_CDCPRE_B_0xB = 11;
        /** @brief sys_ck divided by 64 */
    constexpr std::uint32_t RCC_CDCFGR1_CDCPRE_B_0xC = 12;
        /** @brief sys_ck divided by 128 */
    constexpr std::uint32_t RCC_CDCFGR1_CDCPRE_B_0xD = 13;
        /** @brief sys_ck divided by 256 */
    constexpr std::uint32_t RCC_CDCFGR1_CDCPRE_B_0xE = 14;
        /** @brief sys_ck divided by 512 */
    constexpr std::uint32_t RCC_CDCFGR1_CDCPRE_B_0xF = 15;

    /** @brief RCC_CDCFGR2 register */
    using RCC_CDCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU domain APB1 prescaler Set and reset by software to control the CPU domain APB1 clock division factor. The clock is divided by the new prescaler factor from 1 to 16 cycles of rcc_hclk1 after CDPPRE1 write. 0xx: rcc_pclk1 = rcc_hclk1 (default after reset) */
    using RCC_CDCFGR2_CDPPRE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk1 = rcc_hclk1 / 2 (value: 4)
     *          - B_0x5: rcc_pclk1 = rcc_hclk1 / 4 (value: 5)
     *          - B_0x6: rcc_pclk1 = rcc_hclk1 / 8 (value: 6)
     *          - B_0x7: rcc_pclk1 = rcc_hclk1 / 16 (value: 7)
     */
        /** @brief rcc_pclk1 = rcc_hclk1 / 2 */
    constexpr std::uint32_t RCC_CDCFGR2_CDPPRE1_B_0x4 = 4;
        /** @brief rcc_pclk1 = rcc_hclk1 / 4 */
    constexpr std::uint32_t RCC_CDCFGR2_CDPPRE1_B_0x5 = 5;
        /** @brief rcc_pclk1 = rcc_hclk1 / 8 */
    constexpr std::uint32_t RCC_CDCFGR2_CDPPRE1_B_0x6 = 6;
        /** @brief rcc_pclk1 = rcc_hclk1 / 16 */
    constexpr std::uint32_t RCC_CDCFGR2_CDPPRE1_B_0x7 = 7;

    /** @brief CPU domain APB2 prescaler Set and reset by software to control the CPU domain APB2 clock division factor. The clock is divided by the new prescaler factor from 1 to 16 cycles of rcc_hclk1 after CDPPRE2 write. 0xx: rcc_pclk2 = rcc_hclk1 (default after reset) */
    using RCC_CDCFGR2_CDPPRE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk2 = rcc_hclk1 / 2 (value: 4)
     *          - B_0x5: rcc_pclk2 = rcc_hclk1 / 4 (value: 5)
     *          - B_0x6: rcc_pclk2 = rcc_hclk1 / 8 (value: 6)
     *          - B_0x7: rcc_pclk2 = rcc_hclk1 / 16 (value: 7)
     */
        /** @brief rcc_pclk2 = rcc_hclk1 / 2 */
    constexpr std::uint32_t RCC_CDCFGR2_CDPPRE2_B_0x4 = 4;
        /** @brief rcc_pclk2 = rcc_hclk1 / 4 */
    constexpr std::uint32_t RCC_CDCFGR2_CDPPRE2_B_0x5 = 5;
        /** @brief rcc_pclk2 = rcc_hclk1 / 8 */
    constexpr std::uint32_t RCC_CDCFGR2_CDPPRE2_B_0x6 = 6;
        /** @brief rcc_pclk2 = rcc_hclk1 / 16 */
    constexpr std::uint32_t RCC_CDCFGR2_CDPPRE2_B_0x7 = 7;

    /** @brief RCC_SRDCFGR register */
    using RCC_SRDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SmartRun domain APB4 prescaler Set and reset by software to control the SmartRun domain APB4 clock division factor. The clock is divided by the new prescaler factor from 1 to 16 cycles of rcc_hclk4 after SRDPPRE write. 0xx: rcc_pclk4 = rcc_hclk4 (default after reset) */
    using RCC_SRDCFGR_SRDPPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: rcc_pclk4 = rcc_hclk4 / 2 (value: 4)
     *          - B_0x5: rcc_pclk4 = rcc_hclk4 / 4 (value: 5)
     *          - B_0x6: rcc_pclk4 = rcc_hclk4 / 8 (value: 6)
     *          - B_0x7: rcc_pclk4 = rcc_hclk4 / 16 (value: 7)
     */
        /** @brief rcc_pclk4 = rcc_hclk4 / 2 */
    constexpr std::uint32_t RCC_SRDCFGR_SRDPPRE_B_0x4 = 4;
        /** @brief rcc_pclk4 = rcc_hclk4 / 4 */
    constexpr std::uint32_t RCC_SRDCFGR_SRDPPRE_B_0x5 = 5;
        /** @brief rcc_pclk4 = rcc_hclk4 / 8 */
    constexpr std::uint32_t RCC_SRDCFGR_SRDPPRE_B_0x6 = 6;
        /** @brief rcc_pclk4 = rcc_hclk4 / 16 */
    constexpr std::uint32_t RCC_SRDCFGR_SRDPPRE_B_0x7 = 7;

    /** @brief RCC_PLLCKSELR register */
    using RCC_PLLCKSELR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIVMx and PLLs clock source selection Set and reset by software to select the PLL clock source. These bits can be written only when all PLLs are disabled. In order to save power, when no PLL is used, the value of PLLSRC must be set to '11'. */
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

    /** @brief prescaler for PLL1 Set and cleared by software to configure the prescaler of the PLL1. The hardware does not allow any modification of this prescaler when PLL1 is enabled (PLL1ON=1). In order to save power when PLL1 is not used, the value of DIVM1 must be set to 0. ... ... */
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

    /** @brief prescaler for PLL2 Set and cleared by software to configure the prescaler of the PLL2. The hardware does not allow any modification of this prescaler when PLL2 is enabled (PLL2ON=1). In order to save power when PLL2 is not used, the value of DIVM2 must be set to 0. ... ... */
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

    /** @brief prescaler for PLL3 Set and cleared by software to configure the prescaler of the PLL3. The hardware does not allow any modification of this prescaler when PLL3 is enabled (PLL3ON=1). In order to save power when PLL3 is not used, the value of DIVM3 must be set to 0. ... ... */
    using RCC_PLLCKSELR_DIVM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: prescaler disabled (default after reset) (value: 0)
     *          - B_0x1: division by 1 (bypass) (value: 1)
     *          - B_0x2: division by 2 (value: 2)
     *          - B_0x3: division by 3 (value: 3)
     *          - B_0x20: division by 32 (default after reset) (value: 32)
     *          - B_0x3F: division by 63 (value: 63)
     */
        /** @brief prescaler disabled (default after reset) */
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

    /** @brief RCC_PLLCFGR register */
    using RCC_PLLCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 fractional latch enable Set and reset by software to latch the content of FRACN1 into the sigma-delta modulator. In order to latch the FRACN1 value into the sigma-delta modulator, PLL1FRACEN must be set to 0, then set to 1. The transition 0 to 1 transfers the content of FRACN1 into the modulator. Refer to for additional information. */
    using RCC_PLLCFGR_PLL1FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 VCO selection Set and reset by software to select the proper VCO frequency range used for PLL1. These bits must be written before enabling the PLL1. */
    using RCC_PLLCFGR_PLL1VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wide VCO range from 128 to 560 MHz (default after reset) (value: 0)
     *          - B_0x1: medium VCO range from 150 to 420 MHz (value: 1)
     */
        /** @brief wide VCO range from 128 to 560 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1VCOSEL_B_0x0 = 0;
        /** @brief medium VCO range from 150 to 420 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL1VCOSEL_B_0x1 = 1;

    /** @brief PLL1 input frequency range Set and reset by software to select the proper reference frequency range used for PLL1. This bit must be written before enabling the PLL1. */
    using RCC_PLLCFGR_PLL1RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief PLL2 fractional latch enable Set and reset by software to latch the content of FRACN2 into the sigma-delta modulator. In order to latch the FRACN2 value into the sigma-delta modulator, PLL2FRACEN must be set to 0, then set to 1. The transition 0 to 1 transfers the content of FRACN2 into the modulator. Refer to for additional information. */
    using RCC_PLLCFGR_PLL2FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 VCO selection Set and reset by software to select the proper VCO frequency range used for PLL2. This bit must be written before enabling the PLL2. */
    using RCC_PLLCFGR_PLL2VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wide VCO range 128 to 560 MHz (default after reset) (value: 0)
     *          - B_0x1: medium VCO range 150 to 420 MHz (value: 1)
     */
        /** @brief wide VCO range 128 to 560 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2VCOSEL_B_0x0 = 0;
        /** @brief medium VCO range 150 to 420 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2VCOSEL_B_0x1 = 1;

    /** @brief PLL2 input frequency range Set and reset by software to select the proper reference frequency range used for PLL2. These bits must be written before enabling the PLL2. */
    using RCC_PLLCFGR_PLL2RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 input (ref2_ck) clock range frequency between 1 and 2 MHz (default after reset) (value: 0)
     *          - B_0x1: PLL2 input (ref2_ck) clock range frequency between 2 and 4 MHz (value: 1)
     *          - B_0x2: PLL2 input (ref2_ck) clock range frequency between 4 and 8 MHz (value: 2)
     *          - B_0x3: PLL2 input (ref2_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL2 input (ref2_ck) clock range frequency between 1 and 2 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2RGE_B_0x0 = 0;
        /** @brief PLL2 input (ref2_ck) clock range frequency between 2 and 4 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2RGE_B_0x1 = 1;
        /** @brief PLL2 input (ref2_ck) clock range frequency between 4 and 8 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2RGE_B_0x2 = 2;
        /** @brief PLL2 input (ref2_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL2RGE_B_0x3 = 3;

    /** @brief PLL3 fractional latch enable Set and reset by software to latch the content of FRACN3 into the sigma-delta modulator. In order to latch the FRACN3 value into the sigma-delta modulator, PLL3FRACEN must be set to 0, then set to 1. The transition 0 to 1 transfers the content of FRACN3 into the modulator. Refer to for additional information. */
    using RCC_PLLCFGR_PLL3FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 VCO selection Set and reset by software to select the proper VCO frequency range used for PLL3. This bit must be written before enabling the PLL3. */
    using RCC_PLLCFGR_PLL3VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wide VCO range 128 to 560 MHz (default after reset) (value: 0)
     *          - B_0x1: medium VCO range 150 to 420 MHz (value: 1)
     */
        /** @brief wide VCO range 128 to 560 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3VCOSEL_B_0x0 = 0;
        /** @brief medium VCO range 150 to 420 MHz */
    constexpr std::uint32_t RCC_PLLCFGR_PLL3VCOSEL_B_0x1 = 1;

    /** @brief PLL3 input frequency range Set and reset by software to select the proper reference frequency range used for PLL3. These bits must be written before enabling the PLL3. */
    using RCC_PLLCFGR_PLL3RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief PLL1 DIVP divider output enable Set and reset by software to enable the pll1_p_ck output of the PLL1. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). In order to save power, when the pll1_p_ck output of the PLL1 is not used, the pll1_p_ck must be disabled. */
    using RCC_PLLCFGR_DIVP1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_p_ck output disabled (value: 0)
     *          - B_0x1: pll1_p_ck output enabled (default after reset) (value: 1)
     */
        /** @brief pll1_p_ck output disabled */
    constexpr std::uint32_t RCC_PLLCFGR_DIVP1EN_B_0x0 = 0;
        /** @brief pll1_p_ck output enabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_DIVP1EN_B_0x1 = 1;

    /** @brief PLL1 DIVQ divider output enable Set and reset by software to enable the pll1_q_ck output of the PLL1. In order to save power, when the pll1_q_ck output of the PLL1 is not used, the pll1_q_ck must be disabled. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). */
    using RCC_PLLCFGR_DIVQ1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck output disabled (value: 0)
     *          - B_0x1: pll1_q_ck output enabled (default after reset) (value: 1)
     */
        /** @brief pll1_q_ck output disabled */
    constexpr std::uint32_t RCC_PLLCFGR_DIVQ1EN_B_0x0 = 0;
        /** @brief pll1_q_ck output enabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_DIVQ1EN_B_0x1 = 1;

    /** @brief PLL1 DIVR divider output enable Set and reset by software to enable the pll1_r_ck output of the PLL1. To save power, DIVR3EN and DIVR3 bits must be set to 0 when the pll3_r_ck is not used. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). */
    using RCC_PLLCFGR_DIVR1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_r_ck output disabled (value: 0)
     *          - B_0x1: pll1_r_ck output enabled (default after reset) (value: 1)
     */
        /** @brief pll1_r_ck output disabled */
    constexpr std::uint32_t RCC_PLLCFGR_DIVR1EN_B_0x0 = 0;
        /** @brief pll1_r_ck output enabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_DIVR1EN_B_0x1 = 1;

    /** @brief PLL2 DIVP divider output enable Set and reset by software to enable the pll2_p_ck output of the PLL2. This bit can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0). To save power, DIVR3EN and DIVR3 bits must be set to 0 when the pll3_r_ck is not used. */
    using RCC_PLLCFGR_DIVP2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck output disabled (value: 0)
     *          - B_0x1: pll2_p_ck output enabled (default after reset) (value: 1)
     */
        /** @brief pll2_p_ck output disabled */
    constexpr std::uint32_t RCC_PLLCFGR_DIVP2EN_B_0x0 = 0;
        /** @brief pll2_p_ck output enabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_DIVP2EN_B_0x1 = 1;

    /** @brief PLL2 DIVQ divider output enable Set and reset by software to enable the pll2_q_ck output of the PLL2. To save power, DIVR3EN and DIVR3 bits must be set to 0 when the pll3_r_ck is not used. This bit can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0). */
    using RCC_PLLCFGR_DIVQ2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_q_ck output disabled (value: 0)
     *          - B_0x1: pll2_q_ck output enabled (default after reset) (value: 1)
     */
        /** @brief pll2_q_ck output disabled */
    constexpr std::uint32_t RCC_PLLCFGR_DIVQ2EN_B_0x0 = 0;
        /** @brief pll2_q_ck output enabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_DIVQ2EN_B_0x1 = 1;

    /** @brief PLL2 DIVR divider output enable Set and reset by software to enable the pll2_r_ck output of the PLL2. To save power, DIVR3EN and DIVR3 bits must be set to 0 when the pll3_r_ck is not used. This bit can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0). */
    using RCC_PLLCFGR_DIVR2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_r_ck output disabled (value: 0)
     *          - B_0x1: pll2_r_ck output enabled (default after reset) (value: 1)
     */
        /** @brief pll2_r_ck output disabled */
    constexpr std::uint32_t RCC_PLLCFGR_DIVR2EN_B_0x0 = 0;
        /** @brief pll2_r_ck output enabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_DIVR2EN_B_0x1 = 1;

    /** @brief PLL3 DIVP divider output enable Set and reset by software to enable the pll3_p_ck output of the PLL3. This bit can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0). To save power, DIVR3EN and DIVR3 bits must be set to 0 when the pll3_r_ck is not used. */
    using RCC_PLLCFGR_DIVP3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_p_ck output disabled (value: 0)
     *          - B_0x1: pll3_p_ck output enabled (default after reset) (value: 1)
     */
        /** @brief pll3_p_ck output disabled */
    constexpr std::uint32_t RCC_PLLCFGR_DIVP3EN_B_0x0 = 0;
        /** @brief pll3_p_ck output enabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_DIVP3EN_B_0x1 = 1;

    /** @brief PLL3 DIVQ divider output enable Set and reset by software to enable the pll3_q_ck output of the PLL3. To save power, DIVR3EN and DIVR3 bits must be set to 0 when the pll3_r_ck is not used. This bit can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0). */
    using RCC_PLLCFGR_DIVQ3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_q_ck output disabled (value: 0)
     *          - B_0x1: pll3_q_ck output enabled (default after reset) (value: 1)
     */
        /** @brief pll3_q_ck output disabled */
    constexpr std::uint32_t RCC_PLLCFGR_DIVQ3EN_B_0x0 = 0;
        /** @brief pll3_q_ck output enabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_DIVQ3EN_B_0x1 = 1;

    /** @brief PLL3 DIVR divider output enable Set and reset by software to enable the pll3_r_ck output of the PLL3. To save power, DIVR3EN and DIVR3 bits must be set to 0 when the pll3_r_ck is not used. This bit can be written only when the PLL3 is disabled (PLL3ON = 0 and PLL3RDY = 0). */
    using RCC_PLLCFGR_DIVR3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_r_ck output disabled (value: 0)
     *          - B_0x1: pll3_r_ck output enabled (default after reset) (value: 1)
     */
        /** @brief pll3_r_ck output disabled */
    constexpr std::uint32_t RCC_PLLCFGR_DIVR3EN_B_0x0 = 0;
        /** @brief pll3_r_ck output enabled (default after reset) */
    constexpr std::uint32_t RCC_PLLCFGR_DIVR3EN_B_0x1 = 1;

    /** @brief RCC_PLL1DIVR register */
    using RCC_PLL1DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief multiplication factor for PLL1 VCO Set and reset by software to control the multiplication factor of the VCO. These bits can be written only when the PLL is disabled (PLL1ON = PLL1RDY = 0). ..........: not used ... ... Others: wrong configurations The software must set correctly these bits to insure that the VCO output frequency is between its valid frequency range, that is: 128 to 560MHz if PLL1VCOSEL = 0 150 to 420MHz if PLL1VCOSEL = 1 VCO output frequency = Fref1_ck x DIVN1, when fractional value 0 has been loaded into FRACN1, with: DIVN1 between 8 and 420 The input frequency Fref1_ck must be between 1 and 16MHz. */
    using RCC_PLL1DIVR_DIVN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x6: wrong configuration (value: 6)
     *          - B_0x7: DIVN1 = 8 (value: 7)
     *          - B_0x80: DIVN1 = 129 (default after reset) (value: 128)
     *          - B_0x1A3: DIVN1 = 420 (value: 419)
     */
        /** @brief wrong configuration */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVN1_B_0x6 = 6;
        /** @brief DIVN1 = 8 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVN1_B_0x7 = 7;
        /** @brief DIVN1 = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVN1_B_0x80 = 128;
        /** @brief DIVN1 = 420 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVN1_B_0x1A3 = 419;

    /** @brief PLL1 DIVP division factor Set and reset by software to control the frequency of the pll1_p_ck clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). Note that odd division factors are not allowed. ... */
    using RCC_PLL1DIVR_DIVP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: not allowed (value: 0)
     *          - B_0x1: pll1_p_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: not allowed (value: 2)
     *          - B_0x3: pll1_p_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_p_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief not allowed */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVP1_B_0x0 = 0;
        /** @brief pll1_p_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVP1_B_0x1 = 1;
        /** @brief not allowed */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVP1_B_0x2 = 2;
        /** @brief pll1_p_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVP1_B_0x3 = 3;
        /** @brief pll1_p_ck = vco1_ck / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVP1_B_0x7F = 127;

    /** @brief PLL1 DIVQ division factor Set and reset by software to control the frequency of the pll1_q_ck clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ... */
    using RCC_PLL1DIVR_DIVQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck = vco1_ck (value: 0)
     *          - B_0x1: pll1_q_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1_q_ck = vco1_ck / 3 (value: 2)
     *          - B_0x3: pll1_q_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_q_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief pll1_q_ck = vco1_ck */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVQ1_B_0x0 = 0;
        /** @brief pll1_q_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVQ1_B_0x1 = 1;
        /** @brief pll1_q_ck = vco1_ck / 3 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVQ1_B_0x2 = 2;
        /** @brief pll1_q_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVQ1_B_0x3 = 3;
        /** @brief pll1_q_ck = vco1_ck / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVQ1_B_0x7F = 127;

    /** @brief PLL1 DIVR division factor Set and reset by software to control the frequency of the pll1_r_ck clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ... */
    using RCC_PLL1DIVR_DIVR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_r_ck = vco1_ck (value: 0)
     *          - B_0x1: pll1_r_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1_r_ck = vco1_ck / 3 (value: 2)
     *          - B_0x3: pll1_r_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_r_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief pll1_r_ck = vco1_ck */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVR1_B_0x0 = 0;
        /** @brief pll1_r_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVR1_B_0x1 = 1;
        /** @brief pll1_r_ck = vco1_ck / 3 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVR1_B_0x2 = 2;
        /** @brief pll1_r_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVR1_B_0x3 = 3;
        /** @brief pll1_r_ck = vco1_ck / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_DIVR1_B_0x7F = 127;

    /** @brief RCC_PLL1FRACR register */
    using RCC_PLL1FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fractional part of the multiplication factor for PLL1 VCO Set and reset by software to control the fractional part of the multiplication factor of the VCO. These bits can be written at any time, allowing dynamic fine-tuning of the PLL1 VCO. The software must set correctly these bits to insure that the VCO output frequency is between its valid frequency range, that is: 128 to 560MHz if PLL1VCOSEL = 0 150 to 420MHz if PLL1VCOSEL = 1 VCO output frequency = Fref1_ck x (DIVN1 + (FRACN1 / 213)), with DIVN1 between 8 and 420 FRACN1 can be between 0 and 213- 1 The input frequency Fref1_ck must be between 1 and 16 MHz. To change the FRACN value on-the-fly even if the PLL is enabled, the application must proceed as follows: Set the bit PLL1FRACEN to 0. Write the new fractional value into FRACN1. Set the bit PLL1FRACEN to 1. */
    using RCC_PLL1FRACR_FRACN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC_PLL2DIVR register */
    using RCC_PLL2DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief multiplication factor for PLL2 VCO Set and reset by software to control the multiplication factor of the VCO. These bits can be written only when the PLL is disabled (PLL2ON = PLL2RDY = 0). ..........: not used ... ... Others: wrong configurations The software must set correctly these bits to insure that the VCO output frequency is between its valid frequency range, that is: 128 to 560MHz if PLL2VCOSEL = 0 150 to 420MHz if PLL2VCOSEL = 1 VCO output frequency = Fref2_ck x DIVN2, when fractional value 0 has been loaded into FRACN2, with DIVN2 between 8 and 420 The input frequency Fref2_ck must be between 1 and 16MHz. */
    using RCC_PLL2DIVR_DIVN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x6: wrong configuration (value: 6)
     *          - B_0x7: DIVN2 = 8 (value: 7)
     *          - B_0x80: DIVN2 = 129 (default after reset) (value: 128)
     *          - B_0x1A3: DIVN2 = 420 (value: 419)
     */
        /** @brief wrong configuration */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVN2_B_0x6 = 6;
        /** @brief DIVN2 = 8 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVN2_B_0x7 = 7;
        /** @brief DIVN2 = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVN2_B_0x80 = 128;
        /** @brief DIVN2 = 420 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVN2_B_0x1A3 = 419;

    /** @brief PLL2 DIVP division factor Set and reset by software to control the frequency of the pll2_p_ck clock. These bits can be written only when the PLL2 is disabled (PLL2ON = PLL2RDY = 0). ... */
    using RCC_PLL2DIVR_DIVP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_p_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_p_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_p_ck = vco2_ck / 4 (value: 3)
     *          - B_0x7F: pll2_p_ck = vco2_ck / 128 (value: 127)
     */
        /** @brief pll2_p_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVP2_B_0x0 = 0;
        /** @brief pll2_p_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVP2_B_0x1 = 1;
        /** @brief pll2_p_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVP2_B_0x2 = 2;
        /** @brief pll2_p_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVP2_B_0x3 = 3;
        /** @brief pll2_p_ck = vco2_ck / 128 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVP2_B_0x7F = 127;

    /** @brief PLL2 DIVQ division factor Set and reset by software to control the frequency of the pll2_q_ck clock. These bits can be written only when the PLL2 is disabled (PLL2ON = PLL2RDY = 0). ... */
    using RCC_PLL2DIVR_DIVQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_q_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_q_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_q_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_q_ck = vco2_ck / 4 (value: 3)
     *          - B_0x7F: pll2_q_ck = vco2_ck / 128 (value: 127)
     */
        /** @brief pll2_q_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVQ2_B_0x0 = 0;
        /** @brief pll2_q_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVQ2_B_0x1 = 1;
        /** @brief pll2_q_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVQ2_B_0x2 = 2;
        /** @brief pll2_q_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVQ2_B_0x3 = 3;
        /** @brief pll2_q_ck = vco2_ck / 128 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVQ2_B_0x7F = 127;

    /** @brief PLL2 DIVR division factor Set and reset by software to control the frequency of the pll2_r_ck clock. These bits can be written only when the PLL2 is disabled (PLL2ON = PLL2RDY = 0). ... */
    using RCC_PLL2DIVR_DIVR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_r_ck = vco2_ck (value: 0)
     *          - B_0x1: pll2_r_ck = vco2_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll2_r_ck = vco2_ck / 3 (value: 2)
     *          - B_0x3: pll2_r_ck = vco2_ck / 4 (value: 3)
     *          - B_0x7F: pll2_r_ck = vco2_ck / 128 (value: 127)
     */
        /** @brief pll2_r_ck = vco2_ck */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVR2_B_0x0 = 0;
        /** @brief pll2_r_ck = vco2_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVR2_B_0x1 = 1;
        /** @brief pll2_r_ck = vco2_ck / 3 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVR2_B_0x2 = 2;
        /** @brief pll2_r_ck = vco2_ck / 4 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVR2_B_0x3 = 3;
        /** @brief pll2_r_ck = vco2_ck / 128 */
    constexpr std::uint32_t RCC_PLL2DIVR_DIVR2_B_0x7F = 127;

    /** @brief RCC_PLL2FRACR register */
    using RCC_PLL2FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fractional part of the multiplication factor for PLL2 VCO Set and reset by software to control the fractional part of the multiplication factor of the VCO. These bits can be written at any time, allowing dynamic fine-tuning of the PLL2 VCO. The software must set correctly these bits to insure that the VCO output frequency is between its valid frequency range, that is: 128 to 560MHz if PLL2VCOSEL = 0 150 to 420MHz if PLL2VCOSEL = 1 VCO output frequency = Fref2_ck x (DIVN2 + (FRACN2 / 213)), with DIVN2 between 8 and 420 FRACN2 can be between 0 and 213 - 1 The input frequency Fref2_ck must be between 1 and 16 MHz. In order to change the FRACN value on-the-fly even if the PLL is enabled, the application must proceed as follows: Set the bit PLL2FRACEN to 0. Write the new fractional value into FRACN2. Set the bit PLL2FRACEN to 1. */
    using RCC_PLL2FRACR_FRACN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC_PLL3DIVR register */
    using RCC_PLL3DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL3 VCO Set and reset by software to control the multiplication factor of the VCO. These bits can be written only when the PLL is disabled (PLL3ON = PLL3RDY = 0). ...........: not used ... ... Others: wrong configurations The software must set correctly these bits to insure that the VCO output frequency is between its valid frequency range, that is: 128 to 560MHz if PLL3VCOSEL = 0 150 to 420MHz if PLL3VCOSEL = 1 VCO output frequency = Fref3_ck x DIVN3, when fractional value 0 has been loaded into FRACN3, with: DIVN3 between 8 and 420 The input frequency Fref3_ck must be between 1 and 16MHz */
    using RCC_PLL3DIVR_DIVN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x6: wrong configuration (value: 6)
     *          - B_0x7: DIVN3 = 8 (value: 7)
     *          - B_0x80: DIVN3 = 129 (default after reset) (value: 128)
     *          - B_0x1A3: DIVN3 = 420 (value: 419)
     */
        /** @brief wrong configuration */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVN3_B_0x6 = 6;
        /** @brief DIVN3 = 8 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVN3_B_0x7 = 7;
        /** @brief DIVN3 = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVN3_B_0x80 = 128;
        /** @brief DIVN3 = 420 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVN3_B_0x1A3 = 419;

    /** @brief PLL3 DIVP division factor Set and reset by software to control the frequency of the pll3_p_ck clock. These bits can be written only when the PLL3 is disabled (PLL3ON = PLL3RDY = 0). ... */
    using RCC_PLL3DIVR_DIVP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_p_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_p_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_p_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_p_ck = vco3_ck / 4 (value: 3)
     *          - B_0x7F: pll3_p_ck = vco3_ck / 128 (value: 127)
     */
        /** @brief pll3_p_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVP3_B_0x0 = 0;
        /** @brief pll3_p_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVP3_B_0x1 = 1;
        /** @brief pll3_p_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVP3_B_0x2 = 2;
        /** @brief pll3_p_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVP3_B_0x3 = 3;
        /** @brief pll3_p_ck = vco3_ck / 128 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVP3_B_0x7F = 127;

    /** @brief PLL3 DIVQ division factor Set and reset by software to control the frequency of the pll3_q_ck clock. These bits can be written only when the PLL3 is disabled (PLL3ON = PLL3RDY = 0). ... */
    using RCC_PLL3DIVR_DIVQ3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_q_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_q_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_q_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_q_ck = vco3_ck / 4 (value: 3)
     *          - B_0x7F: pll3_q_ck = vco3_ck / 128 (value: 127)
     */
        /** @brief pll3_q_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVQ3_B_0x0 = 0;
        /** @brief pll3_q_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVQ3_B_0x1 = 1;
        /** @brief pll3_q_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVQ3_B_0x2 = 2;
        /** @brief pll3_q_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVQ3_B_0x3 = 3;
        /** @brief pll3_q_ck = vco3_ck / 128 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVQ3_B_0x7F = 127;

    /** @brief PLL3 DIVR division factor Set and reset by software to control the frequency of the pll3_r_ck clock. These bits can be written only when the PLL3 is disabled (PLL3ON = PLL3RDY = 0). ... */
    using RCC_PLL3DIVR_DIVR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_r_ck = vco3_ck (value: 0)
     *          - B_0x1: pll3_r_ck = vco3_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll3_r_ck = vco3_ck / 3 (value: 2)
     *          - B_0x3: pll3_r_ck = vco3_ck / 4 (value: 3)
     *          - B_0x7F: pll3_r_ck = vco3_ck / 128 (value: 127)
     */
        /** @brief pll3_r_ck = vco3_ck */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVR3_B_0x0 = 0;
        /** @brief pll3_r_ck = vco3_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVR3_B_0x1 = 1;
        /** @brief pll3_r_ck = vco3_ck / 3 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVR3_B_0x2 = 2;
        /** @brief pll3_r_ck = vco3_ck / 4 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVR3_B_0x3 = 3;
        /** @brief pll3_r_ck = vco3_ck / 128 */
    constexpr std::uint32_t RCC_PLL3DIVR_DIVR3_B_0x7F = 127;

    /** @brief RCC_PLL3FRACR register */
    using RCC_PLL3FRACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief fractional part of the multiplication factor for PLL3 VCO Set and reset by software to control the fractional part of the multiplication factor of the VCO. These bits can be written at any time, allowing dynamic fine-tuning of the PLL3 VCO. The software must set correctly these bits to insure that the VCO output frequency is between its valid frequency range, that is: 128 to 560MHz if PLL3VCOSEL = 0 150 to 420MHz if PLL3VCOSEL = 1 VCO output frequency = Fref3_ck x (DIVN3 + (FRACN3 / 213)), with DIVN3 between 8 and 420 FRACN3 can be between 0 and 213 - 1 The input frequency Fref3_ck must be between 1 and 16 MHz. In order to change the FRACN value on-the-fly even if the PLL is enabled, the application must proceed as follows: Set the bit PLL1FRACEN to 0. Write the new fractional value into FRACN1. Set the bit PLL1FRACEN to 1. */
    using RCC_PLL3FRACR_FRACN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC CPU domain kernel clock configuration register */
    using RCC_CDCCIPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC kernel clock source selection */
    using RCC_CDCCIPR_FMCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_hclk3 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll2_r_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: per_ck selected as kernel peripheral clock (value: 3)
     */
        /** @brief rcc_hclk3 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIPR_FMCSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIPR_FMCSEL_B_0x1 = 1;
        /** @brief pll2_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIPR_FMCSEL_B_0x2 = 2;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIPR_FMCSEL_B_0x3 = 3;

    /** @brief OCTOSPI kernel clock source selection */
    using RCC_CDCCIPR_OCTOSPISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_hclk3 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll2_r_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: per_ck selected as kernel peripheral clock (value: 3)
     */
        /** @brief rcc_hclk3 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIPR_OCTOSPISEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIPR_OCTOSPISEL_B_0x1 = 1;
        /** @brief pll2_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIPR_OCTOSPISEL_B_0x2 = 2;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIPR_OCTOSPISEL_B_0x3 = 3;

    /** @brief SDMMC kernel clock source selection */
    using RCC_CDCCIPR_SDMMCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck selected as kernel peripheral clock (value: 1)
     */
        /** @brief pll1_q_ck selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIPR_SDMMCSEL_B_0x0 = 0;
        /** @brief pll2_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIPR_SDMMCSEL_B_0x1 = 1;

    /** @brief per_ck clock source selection */
    using RCC_CDCCIPR_CKPERSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ker_ck selected as per_ck clock (default after reset) (value: 0)
     *          - B_0x1: csi_ker_ck selected as per_ck clock (value: 1)
     *          - B_0x2: hse_ck selected as per_ck clock (value: 2)
     *          - B_0x3: reserved, the per_ck clock is disabled (value: 3)
     */
        /** @brief hsi_ker_ck selected as per_ck clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIPR_CKPERSEL_B_0x0 = 0;
        /** @brief csi_ker_ck selected as per_ck clock */
    constexpr std::uint32_t RCC_CDCCIPR_CKPERSEL_B_0x1 = 1;
        /** @brief hse_ck selected as per_ck clock */
    constexpr std::uint32_t RCC_CDCCIPR_CKPERSEL_B_0x2 = 2;
        /** @brief reserved, the per_ck clock is disabled */
    constexpr std::uint32_t RCC_CDCCIPR_CKPERSEL_B_0x3 = 3;

    /** @brief RCC CPU domain kernel clock configuration register */
    using RCC_CDCCIP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1 and DFSDM1 kernel Aclk clock source selection Set and reset by software. If the selected clock is the external clock and this clock is stopped, it isnot be possible to switch to another clock. Refer to for additional information. Note: DFSDM1 clock source selection is done by DFSDM1SEL. others: reserved, the kernel clock is disabled Note: I2S_CKIN is an external clock taken from a pin. */
    using RCC_CDCCIP1R_SAI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as SAI1 and DFSDM1 Aclk kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as SAI1 and DFSDM1 Aclk kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as SAI1 and DFSDM1 Aclk kernel clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as SAI1 and DFSDM1 Aclk kernel clock (value: 3)
     *          - B_0x4: per_ck selected as SAI1 and DFSDM1 Aclk kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as SAI1 and DFSDM1 Aclk kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as SAI1 and DFSDM1 Aclk kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI1SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as SAI1 and DFSDM1 Aclk kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI1SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as SAI1 and DFSDM1 Aclk kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI1SEL_B_0x3 = 3;
        /** @brief per_ck selected as SAI1 and DFSDM1 Aclk kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI1SEL_B_0x4 = 4;

    /** @brief SAI2 kernel clock source A selection Set and reset by software. If the selected clock is the external clock and this clock is stopped, it is not be possible to switch to another clock. Refer to for additional information. others: reserved, the kernel clock is disabled Note: I2S_CKIN is an external clock taken from a pin. spdifrx_symb_ck is the symbol clock generated by the SPDIFRX (see ). */
    using RCC_CDCCIP1R_SAI2ASEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as SAI2 kernel clock A (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as SAI2 kernel clock A (value: 1)
     *          - B_0x2: pll3_p_ck selected as SAI2 kernel clock A (value: 2)
     *          - B_0x3: I2S_CKIN selected as SAI2 kernel clock A (value: 3)
     *          - B_0x4: per_ck selected as SAI2 kernel clock A (value: 4)
     *          - B_0x5: spdifrx_symb_ck selected as SAI2 kernel clock A (value: 5)
     */
        /** @brief pll1_q_ck selected as SAI2 kernel clock A (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2ASEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as SAI2 kernel clock A */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2ASEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as SAI2 kernel clock A */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2ASEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as SAI2 kernel clock A */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2ASEL_B_0x3 = 3;
        /** @brief per_ck selected as SAI2 kernel clock A */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2ASEL_B_0x4 = 4;
        /** @brief spdifrx_symb_ck selected as SAI2 kernel clock A */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2ASEL_B_0x5 = 5;

    /** @brief SAI2 kernel clock B source selection Set and reset by software. If the selected clock is the external clock and this clock is stopped, it is not be possible to switch to another clock. Refer to for additional information. others: reserved, the kernel clock is disabled Note: I2S_CKIN is an external clock taken from a pin. spdifrx_symb_ck is the symbol clock generated by the spdifrx (see ). */
    using RCC_CDCCIP1R_SAI2BSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as SAI2 kernel clock B (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as SAI2 kernel clock B (value: 1)
     *          - B_0x2: pll3_p_ck selected as SAI2 kernel clock B (value: 2)
     *          - B_0x3: I2S_CKIN selected as SAI2 kernel clock B (value: 3)
     *          - B_0x4: per_ck selected as SAI2 kernel clock B (value: 4)
     *          - B_0x5: spdifrx_symb_ck selected as SAI2 kernel clock B (value: 5)
     */
        /** @brief pll1_q_ck selected as SAI2 kernel clock B (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2BSEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as SAI2 kernel clock B */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2BSEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as SAI2 kernel clock B */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2BSEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as SAI2 kernel clock B */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2BSEL_B_0x3 = 3;
        /** @brief per_ck selected as SAI2 kernel clock B */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2BSEL_B_0x4 = 4;
        /** @brief spdifrx_symb_ck selected as SAI2 kernel clock B */
    constexpr std::uint32_t RCC_CDCCIP1R_SAI2BSEL_B_0x5 = 5;

    /** @brief SPI/I2S1,2 and 3 kernel clock source selection Set and reset by software. If the selected clock is the external clock and this clock is stopped, it is not be possible to switch to another clock. Refer to for additional information. others: reserved, the kernel clock is disabled Note: I2S_CKIN is an external clock taken from a pin. */
    using RCC_CDCCIP1R_SPI123SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as SPI/I2S1,2 and 3 kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as SPI/I2S1,2 and 3 kernel clock (value: 1)
     *          - B_0x2: pll3_p_ck selected as SPI/I2S1,2 and 3 kernel clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as SPI/I2S1,2 and 3 kernel clock (value: 3)
     *          - B_0x4: per_ck selected as SPI/I2S1,2 and 3 kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as SPI/I2S1,2 and 3 kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI123SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as SPI/I2S1,2 and 3 kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI123SEL_B_0x1 = 1;
        /** @brief pll3_p_ck selected as SPI/I2S1,2 and 3 kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI123SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as SPI/I2S1,2 and 3 kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI123SEL_B_0x3 = 3;
        /** @brief per_ck selected as SPI/I2S1,2 and 3 kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI123SEL_B_0x4 = 4;

    /** @brief SPI4 and 5 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CDCCIP1R_SPI45SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk2 clock selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck is selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck is selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck is selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck is selected as kernel clock (value: 4)
     *          - B_0x5: hse_ck is selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk2 clock selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI45SEL_B_0x0 = 0;
        /** @brief pll2_q_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI45SEL_B_0x1 = 1;
        /** @brief pll3_q_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI45SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI45SEL_B_0x3 = 3;
        /** @brief csi_ker_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI45SEL_B_0x4 = 4;
        /** @brief hse_ck is selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPI45SEL_B_0x5 = 5;

    /** @brief SPDIFRX kernel clock source selection */
    using RCC_CDCCIP1R_SPDIFRXSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as SPDIFRX kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck selected as SPDIFRX kernel clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as SPDIFRX kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as SPDIFRX kernel clock (value: 3)
     */
        /** @brief pll1_q_ck selected as SPDIFRX kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP1R_SPDIFRXSEL_B_0x0 = 0;
        /** @brief pll2_r_ck selected as SPDIFRX kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPDIFRXSEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as SPDIFRX kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPDIFRXSEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as SPDIFRX kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SPDIFRXSEL_B_0x3 = 3;

    /** @brief DFSDM1 kernel clock Clk source selection Set and reset by software. Note: the DFSDM1 Aclk clock source selection is done by SAI1SEL (see ). */
    using RCC_CDCCIP1R_DFSDM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk2 selected as DFSDM1 Clk kernel clock (default after reset) (value: 0)
     *          - B_0x1: sys_ck selected as DFSDM1 Clk kernel clock (value: 1)
     */
        /** @brief rcc_pclk2 selected as DFSDM1 Clk kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP1R_DFSDM1SEL_B_0x0 = 0;
        /** @brief sys_ck selected as DFSDM1 Clk kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_DFSDM1SEL_B_0x1 = 1;

    /** @brief FDCAN kernel clock source selection Set and reset by software. */
    using RCC_CDCCIP1R_FDCANSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hse_ck clock selected as FDCAN kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as FDCAN kernel clock (value: 1)
     *          - B_0x2: pll2_q_ck selected as FDCAN kernel clock (value: 2)
     *          - B_0x3: reserved, the kernel clock is disabled (value: 3)
     */
        /** @brief hse_ck clock selected as FDCAN kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP1R_FDCANSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as FDCAN kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_FDCANSEL_B_0x1 = 1;
        /** @brief pll2_q_ck selected as FDCAN kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_FDCANSEL_B_0x2 = 2;
        /** @brief reserved, the kernel clock is disabled */
    constexpr std::uint32_t RCC_CDCCIP1R_FDCANSEL_B_0x3 = 3;

    /** @brief SWPMI kernel clock source selection Set and reset by software. */
    using RCC_CDCCIP1R_SWPMISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as SWPMI kernel clock (default after reset) (value: 0)
     *          - B_0x1: hsi_ker_ck selected as SWPMI kernel clock (value: 1)
     */
        /** @brief rcc_pclk1 selected as SWPMI kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP1R_SWPMISEL_B_0x0 = 0;
        /** @brief hsi_ker_ck selected as SWPMI kernel clock */
    constexpr std::uint32_t RCC_CDCCIP1R_SWPMISEL_B_0x1 = 1;

    /** @brief RCC CPU domain kernel clock configuration register */
    using RCC_CDCCIP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2/3, UART4,5, 7 and 8 (APB1) kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CDCCIP2R_USART234578SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP2R_USART234578SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART234578SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART234578SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART234578SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART234578SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART234578SEL_B_0x5 = 5;

    /** @brief USART1, 6, 9 and 10 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CDCCIP2R_USART16910SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk2 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk2 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP2R_USART16910SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART16910SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART16910SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART16910SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART16910SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USART16910SEL_B_0x5 = 5;

    /** @brief RNG kernel clock source selection Set and reset by software. */
    using RCC_CDCCIP2R_RNGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi48_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: lse_ck selected as kernel clock (value: 2)
     *          - B_0x3: lsi_ck selected as kernel clock (value: 3)
     */
        /** @brief hsi48_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP2R_RNGSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_RNGSEL_B_0x1 = 1;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_RNGSEL_B_0x2 = 2;
        /** @brief lsi_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_RNGSEL_B_0x3 = 3;

    /** @brief I2C1,2,3 kernel clock source selection Set and reset by software. */
    using RCC_CDCCIP2R_I2C123SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: csi_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP2R_I2C123SEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_I2C123SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_I2C123SEL_B_0x2 = 2;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_I2C123SEL_B_0x3 = 3;

    /** @brief USBOTG 1 and 2 kernel clock source selection Set and reset by software. */
    using RCC_CDCCIP2R_USBSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable the kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi48_ck selected as kernel clock (value: 3)
     */
        /** @brief Disable the kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP2R_USBSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USBSEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USBSEL_B_0x2 = 2;
        /** @brief hsi48_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_USBSEL_B_0x3 = 3;

    /** @brief HDMI-CEC kernel clock source selection Set and reset by software. */
    using RCC_CDCCIP2R_CECSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lse_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: lsi_ck selected as kernel clock (value: 1)
     *          - B_0x2: csi_ker_ck divided by 122 selected as kernel clock (value: 2)
     *          - B_0x3: reserved, the kernel clock is disabled (value: 3)
     */
        /** @brief lse_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP2R_CECSEL_B_0x0 = 0;
        /** @brief lsi_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_CECSEL_B_0x1 = 1;
        /** @brief csi_ker_ck divided by 122 selected as kernel clock */
    constexpr std::uint32_t RCC_CDCCIP2R_CECSEL_B_0x2 = 2;
        /** @brief reserved, the kernel clock is disabled */
    constexpr std::uint32_t RCC_CDCCIP2R_CECSEL_B_0x3 = 3;

    /** @brief LPTIM1 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CDCCIP2R_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: lse_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: lsi_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: per_ck selected as kernel peripheral clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_CDCCIP2R_LPTIM1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIP2R_LPTIM1SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIP2R_LPTIM1SEL_B_0x2 = 2;
        /** @brief lse_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIP2R_LPTIM1SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIP2R_LPTIM1SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_CDCCIP2R_LPTIM1SEL_B_0x5 = 5;

    /** @brief RCC SmartRun domain kernel clock configuration register */
    using RCC_SRDCCIPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_SRDCCIPR_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk4 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel peripheral clock (value: 5)
     */
        /** @brief rcc_pclk4 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_SRDCCIPR_LPUART1SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPUART1SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPUART1SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPUART1SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPUART1SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPUART1SEL_B_0x5 = 5;

    /** @brief I2C4 kernel clock source selection Set and reset by software. */
    using RCC_SRDCCIPR_I2C4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk4 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: csi_ker_ck selected as kernel peripheral clock (value: 3)
     */
        /** @brief rcc_pclk4 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_SRDCCIPR_I2C4SEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_I2C4SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_I2C4SEL_B_0x2 = 2;
        /** @brief csi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_I2C4SEL_B_0x3 = 3;

    /** @brief LPTIM2 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_SRDCCIPR_LPTIM2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk4 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: lse_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: lsi_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: per_ck selected as kernel peripheral clock (value: 5)
     */
        /** @brief rcc_pclk4 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM2SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM2SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM2SEL_B_0x2 = 2;
        /** @brief lse_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM2SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM2SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM2SEL_B_0x5 = 5;

    /** @brief LPTIM3 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_SRDCCIPR_LPTIM3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk4 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_r_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: lse_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: lsi_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: per_ck selected as kernel peripheral clock (value: 5)
     */
        /** @brief rcc_pclk4 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM3SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM3SEL_B_0x1 = 1;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM3SEL_B_0x2 = 2;
        /** @brief lse_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM3SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM3SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_LPTIM3SEL_B_0x5 = 5;

    /** @brief SAR ADC kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_SRDCCIPR_ADCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll3_r_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: per_ck selected as kernel peripheral clock (value: 2)
     */
        /** @brief pll2_p_ck selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_SRDCCIPR_ADCSEL_B_0x0 = 0;
        /** @brief pll3_r_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_ADCSEL_B_0x1 = 1;
        /** @brief per_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_ADCSEL_B_0x2 = 2;

    /** @brief DFSDM2 kernel Clk clock source selection Set and reset by software. Note: The DFSDM2 Aclk clock source selection is done by SPI6SEL (see and ). */
    using RCC_SRDCCIPR_DFSDM2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk4 selected as DFSDM2 Clk kernel clock (default after reset) (value: 0)
     *          - B_0x1: sys_ck selected as DFSDM2 Clk kernel clock (value: 1)
     */
        /** @brief rcc_pclk4 selected as DFSDM2 Clk kernel clock (default after reset) */
    constexpr std::uint32_t RCC_SRDCCIPR_DFSDM2SEL_B_0x0 = 0;
        /** @brief sys_ck selected as DFSDM2 Clk kernel clock */
    constexpr std::uint32_t RCC_SRDCCIPR_DFSDM2SEL_B_0x1 = 1;

    /** @brief SPI6 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_SRDCCIPR_SPI6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk4 selected as kernel peripheral clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel peripheral clock (value: 1)
     *          - B_0x2: pll3_q_ck selected as kernel peripheral clock (value: 2)
     *          - B_0x3: hsi_ker_ck selected as kernel peripheral clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel peripheral clock (value: 4)
     *          - B_0x5: hse_ck selected as kernel peripheral clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as kernel peripheral clock (value: 6)
     */
        /** @brief rcc_pclk4 selected as kernel peripheral clock (default after reset) */
    constexpr std::uint32_t RCC_SRDCCIPR_SPI6SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_SPI6SEL_B_0x1 = 1;
        /** @brief pll3_q_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_SPI6SEL_B_0x2 = 2;
        /** @brief hsi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_SPI6SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_SPI6SEL_B_0x4 = 4;
        /** @brief hse_ck selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_SPI6SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as kernel peripheral clock */
    constexpr std::uint32_t RCC_SRDCCIPR_SPI6SEL_B_0x6 = 6;

    /** @brief RCC_CIER register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt enable Set and reset by software to enable/disable interrupt caused by the LSI oscillator stabilization. */
    using RCC_CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: LSI ready interrupt enabled (value: 1)
     */
        /** @brief LSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x0 = 0;
        /** @brief LSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x1 = 1;

    /** @brief LSE ready interrupt enable Set and reset by software to enable/disable interrupt caused by the LSE oscillator stabilization. */
    using RCC_CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: LSE ready interrupt enabled (value: 1)
     */
        /** @brief LSE ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x0 = 0;
        /** @brief LSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x1 = 1;

    /** @brief HSI ready interrupt enable Set and reset by software to enable/disable interrupt caused by the HSI oscillator stabilization. */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSI ready interrupt enabled (value: 1)
     */
        /** @brief HSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief HSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE ready interrupt enable Set and reset by software to enable/disable interrupt caused by the HSE oscillator stabilization. */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSE ready interrupt enabled (value: 1)
     */
        /** @brief HSE ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

    /** @brief CSI ready interrupt enable Set and reset by software to enable/disable interrupt caused by the CSI oscillator stabilization. */
    using RCC_CIER_CSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: CSI ready interrupt enabled (value: 1)
     */
        /** @brief CSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_CSIRDYIE_B_0x0 = 0;
        /** @brief CSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_CSIRDYIE_B_0x1 = 1;

    /** @brief HSI48 ready interrupt enable Set and reset by software to enable/disable interrupt caused by the HSI48 oscillator stabilization. */
    using RCC_CIER_HSI48RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSI48 ready interrupt enabled (value: 1)
     */
        /** @brief HSI48 ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x0 = 0;
        /** @brief HSI48 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x1 = 1;

    /** @brief PLL1 ready interrupt enable Set and reset by software to enable/disable interrupt caused by PLL1 lock. */
    using RCC_CIER_PLL1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL1 lock interrupt enabled (value: 1)
     */
        /** @brief PLL1 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x0 = 0;
        /** @brief PLL1 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x1 = 1;

    /** @brief PLL2 ready interrupt enable Set and reset by software to enable/disable interrupt caused by PLL2 lock. */
    using RCC_CIER_PLL2RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL2 lock interrupt enabled (value: 1)
     */
        /** @brief PLL2 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL2RDYIE_B_0x0 = 0;
        /** @brief PLL2 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL2RDYIE_B_0x1 = 1;

    /** @brief PLL3 ready interrupt enable Set and reset by software to enable/disable interrupt caused by PLL3 lock. */
    using RCC_CIER_PLL3RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL3 lock interrupt enabled (value: 1)
     */
        /** @brief PLL3 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL3RDYIE_B_0x0 = 0;
        /** @brief PLL3 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL3RDYIE_B_0x1 = 1;

    /** @brief LSE clock security system interrupt enable Set and reset by software to enable/disable interrupt caused by the clock security system (CSS) on external 32 kHz oscillator. */
    using RCC_CIER_LSECSSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE CSS interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: LSE CSS interrupt enabled (value: 1)
     */
        /** @brief LSE CSS interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x0 = 0;
        /** @brief LSE CSS interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x1 = 1;

    /** @brief RCC_CIFR register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt flag Reset by software by writing LSIRDYC bit. Set by hardware when the LSI clock becomes stable and LSIRDYIE is set. */
    using RCC_CIFR_LSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSI */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag Reset by software by writing LSERDYC bit. Set by hardware when the LSE clock becomes stable and LSERDYIE is set. */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSE */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief HSI ready interrupt flag Reset by software by writing HSIRDYC bit. Set by hardware when the HSI clock becomes stable and HSIRDYIE is set. */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSI */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag Reset by software by writing HSERDYC bit. Set by hardware when the HSE clock becomes stable and HSERDYIE is set. */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSE */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief CSI ready interrupt flag Reset by software by writing CSIRDYC bit. Set by hardware when the CSI clock becomes stable and CSIRDYIE is set. */
    using RCC_CIFR_CSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the CSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the CSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the CSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_CSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the CSI */
    constexpr std::uint32_t RCC_CIFR_CSIRDYF_B_0x1 = 1;

    /** @brief HSI48 ready interrupt flag Reset by software by writing HSI48RDYC bit. Set by hardware when the HSI48 clock becomes stable and HSI48RDYIE is set. */
    using RCC_CIFR_HSI48RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSI48 oscillator (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSI48 oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSI48 oscillator (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSI48 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x1 = 1;

    /** @brief PLL1 ready interrupt flag Reset by software by writing PLL1RDYC bit. Set by hardware when the PLL1 locks and PLL1RDYIE is set. */
    using RCC_CIFR_PLL1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by PLL1 lock (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by PLL1 lock (value: 1)
     */
        /** @brief no clock ready interrupt caused by PLL1 lock (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by PLL1 lock */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x1 = 1;

    /** @brief PLL2 ready interrupt flag Reset by software by writing PLL2RDYC bit. Set by hardware when the PLL2 locks and PLL2RDYIE is set. */
    using RCC_CIFR_PLL2RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by PLL2 lock (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by PLL2 lock (value: 1)
     */
        /** @brief no clock ready interrupt caused by PLL2 lock (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL2RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by PLL2 lock */
    constexpr std::uint32_t RCC_CIFR_PLL2RDYF_B_0x1 = 1;

    /** @brief PLL3 ready interrupt flag Reset by software by writing PLL3RDYC bit. Set by hardware when the PLL3 locks and PLL3RDYIE is set. */
    using RCC_CIFR_PLL3RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by PLL3 lock (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by PLL3 lock (value: 1)
     */
        /** @brief no clock ready interrupt caused by PLL3 lock (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL3RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by PLL3 lock */
    constexpr std::uint32_t RCC_CIFR_PLL3RDYF_B_0x1 = 1;

    /** @brief LSE clock security system interrupt flag Reset by software by writing LSECSSC bit. Set by hardware when a failure is detected on the external 32 kHz oscillator and LSECSSIE is set. */
    using RCC_CIFR_LSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no failure detected on the external 32 kHz oscillator (default after reset) (value: 0)
     *          - B_0x1: failure detected on the external 32 kHz oscillator (value: 1)
     */
        /** @brief no failure detected on the external 32 kHz oscillator (default after reset) */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x0 = 0;
        /** @brief failure detected on the external 32 kHz oscillator */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x1 = 1;

    /** @brief HSE clock security system interrupt flag Reset by software by writing HSECSSC bit. Set by hardware in case of HSE clock failure. */
    using RCC_CIFR_HSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock security interrupt caused by HSE clock failure (default after reset) (value: 0)
     *          - B_0x1: clock security interrupt caused by HSE clock failure (value: 1)
     */
        /** @brief no clock security interrupt caused by HSE clock failure (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x0 = 0;
        /** @brief clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x1 = 1;

    /** @brief RCC_CICR register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt clear Set by software to clear LSIRDYF. Reset by hardware when clear done. */
    using RCC_CICR_LSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: LSIRDYF cleared (value: 1)
     */
        /** @brief LSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x0 = 0;
        /** @brief LSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x1 = 1;

    /** @brief LSE ready interrupt clear Set by software to clear LSERDYF. Reset by hardware when clear done. */
    using RCC_CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSERDYF no effect (default after reset) (value: 0)
     *          - B_0x1: LSERDYF cleared (value: 1)
     */
        /** @brief LSERDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x0 = 0;
        /** @brief LSERDYF cleared */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x1 = 1;

    /** @brief HSI ready interrupt clear Set by software to clear HSIRDYF. Reset by hardware when clear done. */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSIRDYF cleared (value: 1)
     */
        /** @brief HSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x0 = 0;
        /** @brief HSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x1 = 1;

    /** @brief HSE ready interrupt clear Set by software to clear HSERDYF. Reset by hardware when clear done. */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSERDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSERDYF cleared (value: 1)
     */
        /** @brief HSERDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x0 = 0;
        /** @brief HSERDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x1 = 1;

    /** @brief CSI ready interrupt clear Set by software to clear CSIRDYF. Reset by hardware when clear done. */
    using RCC_CICR_CSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: CSIRDYF cleared (value: 1)
     */
        /** @brief CSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_CSIRDYC_B_0x0 = 0;
        /** @brief CSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_CSIRDYC_B_0x1 = 1;

    /** @brief HSI48 ready interrupt clear Set by software to clear HSI48RDYF. Reset by hardware when clear done. */
    using RCC_CICR_HSI48RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48RDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSI48RDYF cleared (value: 1)
     */
        /** @brief HSI48RDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSI48RDYC_B_0x0 = 0;
        /** @brief HSI48RDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSI48RDYC_B_0x1 = 1;

    /** @brief PLL1 ready interrupt clear Set by software to clear PLL1RDYF. Reset by hardware when clear done. */
    using RCC_CICR_PLL1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1RDYF no effect (default after reset) (value: 0)
     *          - B_0x1: PLL1RDYF cleared (value: 1)
     */
        /** @brief PLL1RDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL1RDYC_B_0x0 = 0;
        /** @brief PLL1RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL1RDYC_B_0x1 = 1;

    /** @brief PLL2 ready interrupt clear Set by software to clear PLL2RDYF. Reset by hardware when clear done. */
    using RCC_CICR_PLL2RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2RDYF no effect (default after reset) (value: 0)
     *          - B_0x1: PLL2RDYF cleared (value: 1)
     */
        /** @brief PLL2RDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL2RDYC_B_0x0 = 0;
        /** @brief PLL2RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL2RDYC_B_0x1 = 1;

    /** @brief PLL3 ready interrupt clear Set by software to clear PLL3RDYF. Reset by hardware when clear done. */
    using RCC_CICR_PLL3RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3RDYF no effect (default after reset) (value: 0)
     *          - B_0x1: PLL3RDYF cleared (value: 1)
     */
        /** @brief PLL3RDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL3RDYC_B_0x0 = 0;
        /** @brief PLL3RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL3RDYC_B_0x1 = 1;

    /** @brief LSE clock security system interrupt clear Set by software to clear LSECSSF. Reset by hardware when clear done. */
    using RCC_CICR_LSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSECSSF no effect (default after reset) (value: 0)
     *          - B_0x1: LSECSSF cleared (value: 1)
     */
        /** @brief LSECSSF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x0 = 0;
        /** @brief LSECSSF cleared */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x1 = 1;

    /** @brief HSE clock security system interrupt clear Set by software to clear HSECSSF. Reset by hardware when clear done. */
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
    /** @brief LSE oscillator enabled Set and reset by software. */
    using RCC_BDCR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator OFF (default after Backup domain reset) (value: 0)
     *          - B_0x1: LSE oscillator ON (value: 1)
     */
        /** @brief LSE oscillator OFF (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x0 = 0;
        /** @brief LSE oscillator ON */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x1 = 1;

    /** @brief LSE oscillator ready Set and reset by hardware to indicate when the LSE is stable. This bit needs 6 cycles of lse_ck clock to fall down after LSEON has been set to 0. */
    using RCC_BDCR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not ready (default after Backup domain reset) (value: 0)
     *          - B_0x1: LSE oscillator ready (value: 1)
     */
        /** @brief LSE oscillator not ready (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x0 = 0;
        /** @brief LSE oscillator ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x1 = 1;

    /** @brief LSE oscillator bypass Set and reset by software to bypass oscillator in debug mode. This bit must not be written when the LSE is enabled (by LSEON) or ready (LSERDY = 1) */
    using RCC_BDCR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not bypassed (default after Backup domain reset) (value: 0)
     *          - B_0x1: LSE oscillator bypassed (value: 1)
     */
        /** @brief LSE oscillator not bypassed (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x0 = 0;
        /** @brief LSE oscillator bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x1 = 1;

    /** @brief LSE oscillator driving capability Set by software to select the driving capability of the LSE oscillator. */
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

    /** @brief LSE clock security system enable Set by software to enable the clock security system on 32 kHz oscillator. LSECSSON must be enabled after LSE is enabled (LSEON enabled) and ready (LSERDY set by hardware) and after RTCSEL is selected. Once enabled, this bit cannot be disabled, except after a LSE failure detection (LSECSSD = 1). In that case the software must disable LSECSSON. */
    using RCC_BDCR_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSS on 32 kHz oscillator OFF (default after Backup domain reset) (value: 0)
     *          - B_0x1: CSS on 32 kHz oscillator ON (value: 1)
     */
        /** @brief CSS on 32 kHz oscillator OFF (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x0 = 0;
        /** @brief CSS on 32 kHz oscillator ON */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x1 = 1;

    /** @brief LSE clock security system failure detection Set by hardware to indicate when a failure has been detected by the clock security system on the external 32 kHz oscillator. */
    using RCC_BDCR_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no failure detected on 32 kHz oscillator (default after Backup domain reset) (value: 0)
     *          - B_0x1: failure detected on 32 kHz oscillator (value: 1)
     */
        /** @brief no failure detected on 32 kHz oscillator (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x0 = 0;
        /** @brief failure detected on 32 kHz oscillator */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x1 = 1;

    /** @brief low-speed external clock type in Bypass mode Set and reset by software to select the external clock type (analog or digital). The external clock must be enabled with the LSEON bit, to be used by the device. The LSEEXT bit can be written only if the LSE oscillator is disabled. */
    using RCC_BDCR_LSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE in analog mode (default after Backup domain reset) (value: 0)
     *          - B_0x1: LSE in digital mode (do not use if RTC is active). (value: 1)
     */
        /** @brief LSE in analog mode (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_LSEEXT_B_0x0 = 0;
        /** @brief LSE in digital mode (do not use if RTC is active). */
    constexpr std::uint32_t RCC_BDCR_LSEEXT_B_0x1 = 1;

    /** @brief RTC clock source selection Set by software to select the clock source for the RTC. These bits can be written only one time (except in case of failure detection on LSE). These bits must be written before LSECSSON is enabled. The VSWRST bit can be used to reset them, then it can be written one time again. If HSE is selected as RTC clock, this clock is lost when the system is in Stop mode or in case of a pin reset (NRST). */
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

    /** @brief RTC clock enable Set and reset by software. */
    using RCC_BDCR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rtc_ck disabled (default after Backup domain reset) (value: 0)
     *          - B_0x1: rtc_ck enabled (value: 1)
     */
        /** @brief rtc_ck disabled (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x0 = 0;
        /** @brief rtc_ck enabled */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x1 = 1;

    /** @brief VSwitch domain software reset Set and reset by software. */
    using RCC_BDCR_VSWRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset not activated (default after Backup domain reset) (value: 0)
     *          - B_0x1: resets the entire VSW domain (value: 1)
     */
        /** @brief reset not activated (default after Backup domain reset) */
    constexpr std::uint32_t RCC_BDCR_VSWRST_B_0x0 = 0;
        /** @brief resets the entire VSW domain */
    constexpr std::uint32_t RCC_BDCR_VSWRST_B_0x1 = 1;

    /** @brief RCC clock control and status register */
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable Set and reset by software. */
    using RCC_CSR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI is OFF (default after reset) (value: 0)
     *          - B_0x1: LSI is ON (value: 1)
     */
        /** @brief LSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x0 = 0;
        /** @brief LSI is ON */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x1 = 1;

    /** @brief LSI oscillator ready Set and reset by hardware to indicate when the low-speed internal RC oscillator is stable. This bit needs 3 cycles of lsi_ck clock to fall down after LSION has been set to 0. This bit can be set even when LSION is not enabled if there is a request for LSI clock by the clock security system on LSE or by the low-speed watchdog or by the RTC. */
    using RCC_CSR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: LSI clock is ready (value: 1)
     */
        /** @brief LSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x0 = 0;
        /** @brief LSI clock is ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x1 = 1;

    /** @brief RCC_AHB3RSTR register */
    using RCC_AHB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDMA block reset Set and reset by software. */
    using RCC_AHB3RSTR_MDMARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset MDMA block (default after reset) (value: 0)
     *          - B_0x1: resets MDMA block (value: 1)
     */
        /** @brief does not reset MDMA block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_MDMARST_B_0x0 = 0;
        /** @brief resets MDMA block */
    constexpr std::uint32_t RCC_AHB3RSTR_MDMARST_B_0x1 = 1;

    /** @brief DMA2D block reset Set and reset by software. */
    using RCC_AHB3RSTR_DMA2DRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset DMA2D block (default after reset) (value: 0)
     *          - B_0x1: resets DMA2D block (value: 1)
     */
        /** @brief does not reset DMA2D block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_DMA2DRST_B_0x0 = 0;
        /** @brief resets DMA2D block */
    constexpr std::uint32_t RCC_AHB3RSTR_DMA2DRST_B_0x1 = 1;

    /** @brief JPGDEC block reset Set and reset by software. */
    using RCC_AHB3RSTR_JPGDECRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset JPGDEC block (default after reset) (value: 0)
     *          - B_0x1: resets JPGDEC block (value: 1)
     */
        /** @brief does not reset JPGDEC block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_JPGDECRST_B_0x0 = 0;
        /** @brief resets JPGDEC block */
    constexpr std::uint32_t RCC_AHB3RSTR_JPGDECRST_B_0x1 = 1;

    /** @brief FMC block reset Set and reset by software. */
    using RCC_AHB3RSTR_FMCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset FMC block (default after reset) (value: 0)
     *          - B_0x1: resets FMC block (value: 1)
     */
        /** @brief does not reset FMC block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_FMCRST_B_0x0 = 0;
        /** @brief resets FMC block */
    constexpr std::uint32_t RCC_AHB3RSTR_FMCRST_B_0x1 = 1;

    /** @brief OCTOSPI1 and OCTOSPI1 delay blocks reset Set and reset by software. */
    using RCC_AHB3RSTR_OCTOSPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset OCTOSPI1 and OCTOSPI1 delay blocks (default after reset) (value: 0)
     *          - B_0x1: resets OCTOSPI1 and OCTOSPI1 delay blocks (value: 1)
     */
        /** @brief does not reset OCTOSPI1 and OCTOSPI1 delay blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_OCTOSPI1RST_B_0x0 = 0;
        /** @brief resets OCTOSPI1 and OCTOSPI1 delay blocks */
    constexpr std::uint32_t RCC_AHB3RSTR_OCTOSPI1RST_B_0x1 = 1;

    /** @brief SDMMC1 and SDMMC1 delay blocks reset Set and reset by software. */
    using RCC_AHB3RSTR_SDMMC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset SDMMC1 and SDMMC1 delay blocks (default after reset) (value: 0)
     *          - B_0x1: resets SDMMC1 and SDMMC1 delay blocks (value: 1)
     */
        /** @brief does not reset SDMMC1 and SDMMC1 delay blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_SDMMC1RST_B_0x0 = 0;
        /** @brief resets SDMMC1 and SDMMC1 delay blocks */
    constexpr std::uint32_t RCC_AHB3RSTR_SDMMC1RST_B_0x1 = 1;

    /** @brief OCTOSPI2 and OCTOSPI2 delay block reset Set and reset by software */
    using RCC_AHB3RSTR_OCTOSPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the OCTOSPI2 and OCTOSPI2 delay block (default after reset) (value: 0)
     *          - B_0x1: resets the OCTOSPI2 and OCTOSPI2 delay block (value: 1)
     */
        /** @brief does not reset the OCTOSPI2 and OCTOSPI2 delay block (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_OCTOSPI2RST_B_0x0 = 0;
        /** @brief resets the OCTOSPI2 and OCTOSPI2 delay block */
    constexpr std::uint32_t RCC_AHB3RSTR_OCTOSPI2RST_B_0x1 = 1;

    /** @brief OCTOSPIM reset Set and reset by software */
    using RCC_AHB3RSTR_OCTOSPIMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the OCTOSPIM (default after reset) (value: 0)
     *          - B_0x1: resets the OCTOSPIM (value: 1)
     */
        /** @brief does not reset the OCTOSPIM (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_OCTOSPIMRST_B_0x0 = 0;
        /** @brief resets the OCTOSPIM */
    constexpr std::uint32_t RCC_AHB3RSTR_OCTOSPIMRST_B_0x1 = 1;

    /** @brief OTFD1 reset Set and reset by software Take care that resetting the OTFD means loosing the decryption key loaded during secure boot. */
    using RCC_AHB3RSTR_OTFD1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the OTFD1 (default after reset) (value: 0)
     *          - B_0x1: resets the OTFD1 (value: 1)
     */
        /** @brief does not reset the OTFD1 (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_OTFD1RST_B_0x0 = 0;
        /** @brief resets the OTFD1 */
    constexpr std::uint32_t RCC_AHB3RSTR_OTFD1RST_B_0x1 = 1;

    /** @brief OTFD2 reset Set and reset by software Take care that resetting the OTFD means loosing the decryption key loaded during secure boot. */
    using RCC_AHB3RSTR_OTFD2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the OTFD2 (default after reset) (value: 0)
     *          - B_0x1: resets the OTFD2 (value: 1)
     */
        /** @brief does not reset the OTFD2 (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_OTFD2RST_B_0x0 = 0;
        /** @brief resets the OTFD2 */
    constexpr std::uint32_t RCC_AHB3RSTR_OTFD2RST_B_0x1 = 1;

    /** @brief GFXMMU reset Set and reset by software */
    using RCC_AHB3RSTR_GFXMMURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GFXMMU (default after reset) (value: 0)
     *          - B_0x1: resets the GFXMMU (value: 1)
     */
        /** @brief does not reset the GFXMMU (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_GFXMMURST_B_0x0 = 0;
        /** @brief resets the GFXMMU */
    constexpr std::uint32_t RCC_AHB3RSTR_GFXMMURST_B_0x1 = 1;

    /** @brief RCC_AHB1RSTR register */
    using RCC_AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 and DMAMUX1 blocks reset Set and reset by software. */
    using RCC_AHB1RSTR_DMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset DMA1 and DMAMUX1 blocks (default after reset) (value: 0)
     *          - B_0x1: resets DMA1 and DMAMUX1 blocks (value: 1)
     */
        /** @brief does not reset DMA1 and DMAMUX1 blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA1RST_B_0x0 = 0;
        /** @brief resets DMA1 and DMAMUX1 blocks */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA1RST_B_0x1 = 1;

    /** @brief DMA2 and DMAMUX2 blocks reset Set and reset by software. */
    using RCC_AHB1RSTR_DMA2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset DMA2 and DMAMUX2 blocks (default after reset) (value: 0)
     *          - B_0x1: resets DMA2 and DMAMUX2 blocks (value: 1)
     */
        /** @brief does not reset DMA2 and DMAMUX2 blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA2RST_B_0x0 = 0;
        /** @brief resets DMA2 and DMAMUX2 blocks */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA2RST_B_0x1 = 1;

    /** @brief ADC1 and 2 blocks reset Set and reset by software. */
    using RCC_AHB1RSTR_ADC12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset ADC1 and 2 blocks (default after reset) (value: 0)
     *          - B_0x1: resets ADC1 and 2 blocks (value: 1)
     */
        /** @brief does not reset ADC1 and 2 blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_ADC12RST_B_0x0 = 0;
        /** @brief resets ADC1 and 2 blocks */
    constexpr std::uint32_t RCC_AHB1RSTR_ADC12RST_B_0x1 = 1;

    /** @brief CRC block reset Set and reset by software. */
    using RCC_AHB1RSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset CRC block (default after reset) (value: 0)
     *          - B_0x1: resets CRC block (value: 1)
     */
        /** @brief does not reset CRC block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x0 = 0;
        /** @brief resets CRC block */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x1 = 1;

    /** @brief USB1OTG block reset Set and reset by software. */
    using RCC_AHB1RSTR_USB1OTGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset USB1OTG block (default after reset) (value: 0)
     *          - B_0x1: resets USB1OTG block (value: 1)
     */
        /** @brief does not reset USB1OTG block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_USB1OTGRST_B_0x0 = 0;
        /** @brief resets USB1OTG block */
    constexpr std::uint32_t RCC_AHB1RSTR_USB1OTGRST_B_0x1 = 1;

    /** @brief RCC_AHB2RSTR register */
    using RCC_AHB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief digital camera interface block reset (DCMI or PSSI depending which IP is active) Set and reset by software. */
    using RCC_AHB2RSTR_DCMI_PSSIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DCMI/PSSI block (default after reset) (value: 0)
     *          - B_0x1: resets the DCMI/PSSI block (value: 1)
     */
        /** @brief does not reset the DCMI/PSSI block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_DCMI_PSSIRST_B_0x0 = 0;
        /** @brief resets the DCMI/PSSI block */
    constexpr std::uint32_t RCC_AHB2RSTR_DCMI_PSSIRST_B_0x1 = 1;

    /** @brief HSEM block reset Set and reset by software. */
    using RCC_AHB2RSTR_HSEMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset HSEM block (default after reset) (value: 0)
     *          - B_0x1: resets HSEM block (value: 1)
     */
        /** @brief does not reset HSEM block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_HSEMRST_B_0x0 = 0;
        /** @brief resets HSEM block */
    constexpr std::uint32_t RCC_AHB2RSTR_HSEMRST_B_0x1 = 1;

    /** @brief cryptography block reset Set and reset by software. */
    using RCC_AHB2RSTR_CRYPTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset cryptography block (default after reset) (value: 0)
     *          - B_0x1: resets cryptography block (value: 1)
     */
        /** @brief does not reset cryptography block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_CRYPTRST_B_0x0 = 0;
        /** @brief resets cryptography block */
    constexpr std::uint32_t RCC_AHB2RSTR_CRYPTRST_B_0x1 = 1;

    /** @brief hash block reset Set and reset by software. */
    using RCC_AHB2RSTR_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset hash block (default after reset) (value: 0)
     *          - B_0x1: resets hash block (value: 1)
     */
        /** @brief does not reset hash block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x0 = 0;
        /** @brief resets hash block */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x1 = 1;

    /** @brief random number generator block reset Set and reset by software. */
    using RCC_AHB2RSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset RNG block (default after reset) (value: 0)
     *          - B_0x1: resets RNG block (value: 1)
     */
        /** @brief does not reset RNG block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x0 = 0;
        /** @brief resets RNG block */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x1 = 1;

    /** @brief SDMMC2 and SDMMC2 delay blocks reset Set and reset by software. */
    using RCC_AHB2RSTR_SDMMC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset SDMMC2 and SDMMC2 delay blocks (default after reset) (value: 0)
     *          - B_0x1: resets SDMMC2 and SDMMC2 delay blocks (value: 1)
     */
        /** @brief does not reset SDMMC2 and SDMMC2 delay blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_SDMMC2RST_B_0x0 = 0;
        /** @brief resets SDMMC2 and SDMMC2 delay blocks */
    constexpr std::uint32_t RCC_AHB2RSTR_SDMMC2RST_B_0x1 = 1;

    /** @brief BDMA1 reset (DFSDM dedicated DMA) Set and reset by software. */
    using RCC_AHB2RSTR_BDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset DMA block (default after reset) (value: 0)
     *          - B_0x1: resets DMA block (value: 1)
     */
        /** @brief does not reset DMA block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_BDMA1RST_B_0x0 = 0;
        /** @brief resets DMA block */
    constexpr std::uint32_t RCC_AHB2RSTR_BDMA1RST_B_0x1 = 1;

    /** @brief RCC_AHB4RSTR register */
    using RCC_AHB4RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOA block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOA block (value: 1)
     */
        /** @brief does not reset the GPIOA block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOARST_B_0x0 = 0;
        /** @brief resets the GPIOA block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOARST_B_0x1 = 1;

    /** @brief GPIOB block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOB block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOB block (value: 1)
     */
        /** @brief does not reset the GPIOB block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOBRST_B_0x0 = 0;
        /** @brief resets the GPIOB block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOBRST_B_0x1 = 1;

    /** @brief GPIOC block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOC block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOC block (value: 1)
     */
        /** @brief does not reset the GPIOC block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOCRST_B_0x0 = 0;
        /** @brief resets the GPIOC block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOCRST_B_0x1 = 1;

    /** @brief GPIOD block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOD block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOD block (value: 1)
     */
        /** @brief does not reset the GPIOD block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIODRST_B_0x0 = 0;
        /** @brief resets the GPIOD block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIODRST_B_0x1 = 1;

    /** @brief GPIOE block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOE block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOE block (value: 1)
     */
        /** @brief does not reset the GPIOE block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOERST_B_0x0 = 0;
        /** @brief resets the GPIOE block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOERST_B_0x1 = 1;

    /** @brief GPIOF block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOF block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOF block (value: 1)
     */
        /** @brief does not reset the GPIOF block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOFRST_B_0x0 = 0;
        /** @brief resets the GPIOF block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOFRST_B_0x1 = 1;

    /** @brief GPIOG block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOG block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOG block (value: 1)
     */
        /** @brief does not reset the GPIOG block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOGRST_B_0x0 = 0;
        /** @brief resets the GPIOG block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOGRST_B_0x1 = 1;

    /** @brief GPIOH block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOH block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOH block (value: 1)
     */
        /** @brief does not reset the GPIOH block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOHRST_B_0x0 = 0;
        /** @brief resets the GPIOH block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOHRST_B_0x1 = 1;

    /** @brief GPIOI block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOI block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOI block (value: 1)
     */
        /** @brief does not reset the GPIOI block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOIRST_B_0x0 = 0;
        /** @brief resets the GPIOI block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOIRST_B_0x1 = 1;

    /** @brief GPIOJ block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOJRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOJ block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOJ block (value: 1)
     */
        /** @brief does not reset the GPIOJ block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOJRST_B_0x0 = 0;
        /** @brief resets the GPIOJ block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOJRST_B_0x1 = 1;

    /** @brief GPIOK block reset Set and reset by software. */
    using RCC_AHB4RSTR_GPIOKRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOK block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOK block (value: 1)
     */
        /** @brief does not reset the GPIOK block (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOKRST_B_0x0 = 0;
        /** @brief resets the GPIOK block */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOKRST_B_0x1 = 1;

    /** @brief SmartRun domain DMA and DMAMUX blocks reset Set and reset by software. */
    using RCC_AHB4RSTR_BDMA2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DMA and DMAMUX blocks (default after reset) (value: 0)
     *          - B_0x1: resets the DMA and DMAMUX blocks (value: 1)
     */
        /** @brief does not reset the DMA and DMAMUX blocks (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_BDMA2RST_B_0x0 = 0;
        /** @brief resets the DMA and DMAMUX blocks */
    constexpr std::uint32_t RCC_AHB4RSTR_BDMA2RST_B_0x1 = 1;

    /** @brief RCC_APB3RSTR register */
    using RCC_APB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC block reset Set and reset by software. */
    using RCC_APB3RSTR_LTDCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LTDC block (default after reset) (value: 0)
     *          - B_0x1: resets the LTDC block (value: 1)
     */
        /** @brief does not reset the LTDC block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_LTDCRST_B_0x0 = 0;
        /** @brief resets the LTDC block */
    constexpr std::uint32_t RCC_APB3RSTR_LTDCRST_B_0x1 = 1;

    /** @brief RCC_APB1LRSTR register */
    using RCC_APB1LRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 block reset Set and reset by software. */
    using RCC_APB1LRSTR_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM2 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM2 block (value: 1)
     */
        /** @brief does not reset the TIM2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM2RST_B_0x0 = 0;
        /** @brief resets the TIM2 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 block reset Set and reset by software. */
    using RCC_APB1LRSTR_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM3 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM3 block (value: 1)
     */
        /** @brief does not reset the TIM3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM3RST_B_0x0 = 0;
        /** @brief resets the TIM3 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM3RST_B_0x1 = 1;

    /** @brief TIM4 block reset Set and reset by software. */
    using RCC_APB1LRSTR_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM4 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM4 block (value: 1)
     */
        /** @brief does not reset the TIM4 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM4RST_B_0x0 = 0;
        /** @brief resets the TIM4 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM4RST_B_0x1 = 1;

    /** @brief TIM5 block reset Set and reset by software. */
    using RCC_APB1LRSTR_TIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM5 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM5 block (value: 1)
     */
        /** @brief does not reset the TIM5 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM5RST_B_0x0 = 0;
        /** @brief resets the TIM5 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM5RST_B_0x1 = 1;

    /** @brief TIM6 block reset Set and reset by software. */
    using RCC_APB1LRSTR_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM6 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM6 block (value: 1)
     */
        /** @brief does not reset the TIM6 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM6RST_B_0x0 = 0;
        /** @brief resets the TIM6 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM6RST_B_0x1 = 1;

    /** @brief TIM7 block reset Set and reset by software. */
    using RCC_APB1LRSTR_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM7 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM7 block (value: 1)
     */
        /** @brief does not reset the TIM7 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM7RST_B_0x0 = 0;
        /** @brief resets the TIM7 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM7RST_B_0x1 = 1;

    /** @brief TIM12 block reset Set and reset by software. */
    using RCC_APB1LRSTR_TIM12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM12 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM12 block (value: 1)
     */
        /** @brief does not reset the TIM12 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM12RST_B_0x0 = 0;
        /** @brief resets the TIM12 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM12RST_B_0x1 = 1;

    /** @brief TIM13 block reset Set and reset by software. */
    using RCC_APB1LRSTR_TIM13RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM13 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM13 block (value: 1)
     */
        /** @brief does not reset the TIM13 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM13RST_B_0x0 = 0;
        /** @brief resets the TIM13 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM13RST_B_0x1 = 1;

    /** @brief TIM14 block reset Set and reset by software. */
    using RCC_APB1LRSTR_TIM14RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM14 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM14 block (value: 1)
     */
        /** @brief does not reset the TIM14 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM14RST_B_0x0 = 0;
        /** @brief resets the TIM14 block */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM14RST_B_0x1 = 1;

    /** @brief LPTIM1 block reset Set and reset by software. */
    using RCC_APB1LRSTR_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM1 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM1 block (value: 1)
     */
        /** @brief does not reset the LPTIM1 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_LPTIM1RST_B_0x0 = 0;
        /** @brief resets the LPTIM1 block */
    constexpr std::uint32_t RCC_APB1LRSTR_LPTIM1RST_B_0x1 = 1;

    /** @brief SPI2 block reset Set and reset by software. */
    using RCC_APB1LRSTR_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI2 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI2 block (value: 1)
     */
        /** @brief does not reset the SPI2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI2RST_B_0x0 = 0;
        /** @brief resets the SPI2 block */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI2RST_B_0x1 = 1;

    /** @brief SPI3 block reset Set and reset by software. */
    using RCC_APB1LRSTR_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI3 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI3 block (value: 1)
     */
        /** @brief does not reset the SPI3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI3RST_B_0x0 = 0;
        /** @brief resets the SPI3 block */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI3RST_B_0x1 = 1;

    /** @brief SPDIFRX block reset Set and reset by software. */
    using RCC_APB1LRSTR_SPDIFRXRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPDIFRX block (default after reset) (value: 0)
     *          - B_0x1: resets the SPDIFRX block (value: 1)
     */
        /** @brief does not reset the SPDIFRX block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_SPDIFRXRST_B_0x0 = 0;
        /** @brief resets the SPDIFRX block */
    constexpr std::uint32_t RCC_APB1LRSTR_SPDIFRXRST_B_0x1 = 1;

    /** @brief USART2 block reset Set and reset by software. */
    using RCC_APB1LRSTR_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART2 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART2 block (value: 1)
     */
        /** @brief does not reset the USART2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_USART2RST_B_0x0 = 0;
        /** @brief resets the USART2 block */
    constexpr std::uint32_t RCC_APB1LRSTR_USART2RST_B_0x1 = 1;

    /** @brief USART3 block reset Set and reset by software. */
    using RCC_APB1LRSTR_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART3 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART3 block (value: 1)
     */
        /** @brief does not reset the USART3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_USART3RST_B_0x0 = 0;
        /** @brief resets the USART3 block */
    constexpr std::uint32_t RCC_APB1LRSTR_USART3RST_B_0x1 = 1;

    /** @brief UART4 block reset Set and reset by software. */
    using RCC_APB1LRSTR_UART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART4 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART4 block (value: 1)
     */
        /** @brief does not reset the UART4 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART4RST_B_0x0 = 0;
        /** @brief resets the UART4 block */
    constexpr std::uint32_t RCC_APB1LRSTR_UART4RST_B_0x1 = 1;

    /** @brief UART5 block reset Set and reset by software. */
    using RCC_APB1LRSTR_UART5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART5 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART5 block (value: 1)
     */
        /** @brief does not reset the UART5 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART5RST_B_0x0 = 0;
        /** @brief resets the UART5 block */
    constexpr std::uint32_t RCC_APB1LRSTR_UART5RST_B_0x1 = 1;

    /** @brief I2C1 block reset Set and reset by software. */
    using RCC_APB1LRSTR_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C1 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C1 block (value: 1)
     */
        /** @brief does not reset the I2C1 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C1RST_B_0x0 = 0;
        /** @brief resets the I2C1 block */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C1RST_B_0x1 = 1;

    /** @brief I2C2 block reset Set and reset by software. */
    using RCC_APB1LRSTR_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C2 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C2 block (value: 1)
     */
        /** @brief does not reset the I2C2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C2RST_B_0x0 = 0;
        /** @brief resets the I2C2 block */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C2RST_B_0x1 = 1;

    /** @brief I2C3 block reset Set and reset by software. */
    using RCC_APB1LRSTR_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C3 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C3 block (value: 1)
     */
        /** @brief does not reset the I2C3 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C3RST_B_0x0 = 0;
        /** @brief resets the I2C3 block */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C3RST_B_0x1 = 1;

    /** @brief HDMI-CEC block reset Set and reset by software. */
    using RCC_APB1LRSTR_CECRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the HDMI-CEC block (default after reset) (value: 0)
     *          - B_0x1: resets the HDMI-CEC block (value: 1)
     */
        /** @brief does not reset the HDMI-CEC block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_CECRST_B_0x0 = 0;
        /** @brief resets the HDMI-CEC block */
    constexpr std::uint32_t RCC_APB1LRSTR_CECRST_B_0x1 = 1;

    /** @brief DAC1 (containing two converters) reset Set and reset by software. */
    using RCC_APB1LRSTR_DAC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DAC1 (default after reset) (value: 0)
     *          - B_0x1: resets the DAC1 (value: 1)
     */
        /** @brief does not reset the DAC1 (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_DAC1RST_B_0x0 = 0;
        /** @brief resets the DAC1 */
    constexpr std::uint32_t RCC_APB1LRSTR_DAC1RST_B_0x1 = 1;

    /** @brief UART7 block reset Set and reset by software. */
    using RCC_APB1LRSTR_UART7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART7 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART7 block (value: 1)
     */
        /** @brief does not reset the UART7 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART7RST_B_0x0 = 0;
        /** @brief resets the UART7 block */
    constexpr std::uint32_t RCC_APB1LRSTR_UART7RST_B_0x1 = 1;

    /** @brief UART8 block reset Set and reset by software. */
    using RCC_APB1LRSTR_UART8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART8 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART8 block (value: 1)
     */
        /** @brief does not reset the UART8 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART8RST_B_0x0 = 0;
        /** @brief resets the UART8 block */
    constexpr std::uint32_t RCC_APB1LRSTR_UART8RST_B_0x1 = 1;

    /** @brief RCC_APB1HRSTR register */
    using RCC_APB1HRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock recovery system reset Set and reset by software. */
    using RCC_APB1HRSTR_CRSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset CRS (default after reset) (value: 0)
     *          - B_0x1: resets CRS (value: 1)
     */
        /** @brief does not reset CRS (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_CRSRST_B_0x0 = 0;
        /** @brief resets CRS */
    constexpr std::uint32_t RCC_APB1HRSTR_CRSRST_B_0x1 = 1;

    /** @brief SWPMI block reset Set and reset by software. */
    using RCC_APB1HRSTR_SWPMIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SWPMI block (default after reset) (value: 0)
     *          - B_0x1: resets the SWPMI block (value: 1)
     */
        /** @brief does not reset the SWPMI block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_SWPMIRST_B_0x0 = 0;
        /** @brief resets the SWPMI block */
    constexpr std::uint32_t RCC_APB1HRSTR_SWPMIRST_B_0x1 = 1;

    /** @brief OPAMP block reset Set and reset by software. */
    using RCC_APB1HRSTR_OPAMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the OPAMP block (default after reset) (value: 0)
     *          - B_0x1: resets the OPAMP block (value: 1)
     */
        /** @brief does not reset the OPAMP block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_OPAMPRST_B_0x0 = 0;
        /** @brief resets the OPAMP block */
    constexpr std::uint32_t RCC_APB1HRSTR_OPAMPRST_B_0x1 = 1;

    /** @brief MDIOS block reset Set and reset by software. */
    using RCC_APB1HRSTR_MDIOSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the MDIOS block (default after reset) (value: 0)
     *          - B_0x1: resets the MDIOS block (value: 1)
     */
        /** @brief does not reset the MDIOS block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_MDIOSRST_B_0x0 = 0;
        /** @brief resets the MDIOS block */
    constexpr std::uint32_t RCC_APB1HRSTR_MDIOSRST_B_0x1 = 1;

    /** @brief FDCAN block reset Set and reset by software. */
    using RCC_APB1HRSTR_FDCANRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the FDCAN block (default after reset) (value: 0)
     *          - B_0x1: resets the FDCAN block (value: 1)
     */
        /** @brief does not reset the FDCAN block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_FDCANRST_B_0x0 = 0;
        /** @brief resets the FDCAN block */
    constexpr std::uint32_t RCC_APB1HRSTR_FDCANRST_B_0x1 = 1;

    /** @brief RCC_APB2RSTR register */
    using RCC_APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 block reset Set and reset by software. */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM1 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM1 block (value: 1)
     */
        /** @brief does not reset the TIM1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief resets the TIM1 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief TIM8 block reset Set and reset by software. */
    using RCC_APB2RSTR_TIM8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM8 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM8 block (value: 1)
     */
        /** @brief does not reset the TIM8 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x0 = 0;
        /** @brief resets the TIM8 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x1 = 1;

    /** @brief USART1 block reset Set and reset by software. */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART1 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART1 block (value: 1)
     */
        /** @brief does not reset the USART1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief resets the USART1 block */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief USART6 block reset Set and reset by software. */
    using RCC_APB2RSTR_USART6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART6 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART6 block (value: 1)
     */
        /** @brief does not reset the USART6 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USART6RST_B_0x0 = 0;
        /** @brief resets the USART6 block */
    constexpr std::uint32_t RCC_APB2RSTR_USART6RST_B_0x1 = 1;

    /** @brief UART9 block reset Set and reset by software. */
    using RCC_APB2RSTR_UART9RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the UART9 block (default after reset) (value: 0)
     *          - B_0x1: resets the UART9 block (value: 1)
     */
        /** @brief does not reset the UART9 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_UART9RST_B_0x0 = 0;
        /** @brief resets the UART9 block */
    constexpr std::uint32_t RCC_APB2RSTR_UART9RST_B_0x1 = 1;

    /** @brief USART10 block reset Set and reset by software. */
    using RCC_APB2RSTR_USART10RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART10 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART10 block (value: 1)
     */
        /** @brief does not reset the USART10 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USART10RST_B_0x0 = 0;
        /** @brief resets the USART10 block */
    constexpr std::uint32_t RCC_APB2RSTR_USART10RST_B_0x1 = 1;

    /** @brief SPI1 block reset Set and reset by software. */
    using RCC_APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI1 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI1 block (value: 1)
     */
        /** @brief does not reset the SPI1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief resets the SPI1 block */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief SPI4 block reset Set and reset by software. */
    using RCC_APB2RSTR_SPI4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI4 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI4 block (value: 1)
     */
        /** @brief does not reset the SPI4 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x0 = 0;
        /** @brief resets the SPI4 block */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x1 = 1;

    /** @brief TIM15 block reset Set and reset by software. */
    using RCC_APB2RSTR_TIM15RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM15 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM15 block (value: 1)
     */
        /** @brief does not reset the TIM15 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x0 = 0;
        /** @brief resets the TIM15 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x1 = 1;

    /** @brief TIM16 block reset Set and reset by software. */
    using RCC_APB2RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM16 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM16 block (value: 1)
     */
        /** @brief does not reset the TIM16 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x0 = 0;
        /** @brief resets the TIM16 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x1 = 1;

    /** @brief TIM17 block reset Set and reset by software. */
    using RCC_APB2RSTR_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM17 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM17 block (value: 1)
     */
        /** @brief does not reset the TIM17 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x0 = 0;
        /** @brief resets the TIM17 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x1 = 1;

    /** @brief SPI5 block reset Set and reset by software. */
    using RCC_APB2RSTR_SPI5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI5 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI5 block (value: 1)
     */
        /** @brief does not reset the SPI5 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI5RST_B_0x0 = 0;
        /** @brief resets the SPI5 block */
    constexpr std::uint32_t RCC_APB2RSTR_SPI5RST_B_0x1 = 1;

    /** @brief SAI1 block reset Set and reset by software. */
    using RCC_APB2RSTR_SAI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SAI1 (default after reset) (value: 0)
     *          - B_0x1: resets the SAI1 (value: 1)
     */
        /** @brief does not reset the SAI1 (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x0 = 0;
        /** @brief resets the SAI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x1 = 1;

    /** @brief SAI2 block reset Set and reset by software. */
    using RCC_APB2RSTR_SAI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SAI2 block (default after reset) (value: 0)
     *          - B_0x1: resets the SAI2 block (value: 1)
     */
        /** @brief does not reset the SAI2 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x0 = 0;
        /** @brief resets the SAI2 block */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x1 = 1;

    /** @brief DFSDM1 block reset Set and reset by software. */
    using RCC_APB2RSTR_DFSDM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset DFSDM1 block (default after reset) (value: 0)
     *          - B_0x1: resets DFSDM1 block (value: 1)
     */
        /** @brief does not reset DFSDM1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_DFSDM1RST_B_0x0 = 0;
        /** @brief resets DFSDM1 block */
    constexpr std::uint32_t RCC_APB2RSTR_DFSDM1RST_B_0x1 = 1;

    /** @brief RCC_APB4RSTR register */
    using RCC_APB4RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG block reset Set and reset by software. */
    using RCC_APB4RSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SYSCFG block (default after reset) (value: 0)
     *          - B_0x1: resets the SYSCFG block (value: 1)
     */
        /** @brief does not reset the SYSCFG block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_SYSCFGRST_B_0x0 = 0;
        /** @brief resets the SYSCFG block */
    constexpr std::uint32_t RCC_APB4RSTR_SYSCFGRST_B_0x1 = 1;

    /** @brief LPUART1 block reset Set and reset by software. */
    using RCC_APB4RSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPUART1 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPUART1 block (value: 1)
     */
        /** @brief does not reset the LPUART1 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_LPUART1RST_B_0x0 = 0;
        /** @brief resets the LPUART1 block */
    constexpr std::uint32_t RCC_APB4RSTR_LPUART1RST_B_0x1 = 1;

    /** @brief SPI6 block reset Set and reset by software. */
    using RCC_APB4RSTR_SPI6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SPI6 block (default after reset) (value: 0)
     *          - B_0x1: resets the SPI6 block (value: 1)
     */
        /** @brief does not reset the SPI6 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_SPI6RST_B_0x0 = 0;
        /** @brief resets the SPI6 block */
    constexpr std::uint32_t RCC_APB4RSTR_SPI6RST_B_0x1 = 1;

    /** @brief I2C4 block reset Set and reset by software. */
    using RCC_APB4RSTR_I2C4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I2C4 block (default after reset) (value: 0)
     *          - B_0x1: resets the I2C4 block (value: 1)
     */
        /** @brief does not reset the I2C4 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_I2C4RST_B_0x0 = 0;
        /** @brief resets the I2C4 block */
    constexpr std::uint32_t RCC_APB4RSTR_I2C4RST_B_0x1 = 1;

    /** @brief LPTIM2 block reset Set and reset by software. */
    using RCC_APB4RSTR_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM2 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM2 block (value: 1)
     */
        /** @brief does not reset the LPTIM2 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM2RST_B_0x0 = 0;
        /** @brief resets the LPTIM2 block */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM2RST_B_0x1 = 1;

    /** @brief LPTIM3 block reset Set and reset by software. */
    using RCC_APB4RSTR_LPTIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM3 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM3 block (value: 1)
     */
        /** @brief does not reset the LPTIM3 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM3RST_B_0x0 = 0;
        /** @brief resets the LPTIM3 block */
    constexpr std::uint32_t RCC_APB4RSTR_LPTIM3RST_B_0x1 = 1;

    /** @brief DAC2 (containing one converter) reset Set and reset by software. */
    using RCC_APB4RSTR_DAC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DAC2 (default after reset) (value: 0)
     *          - B_0x1: resets the DAC2 (value: 1)
     */
        /** @brief does not reset the DAC2 (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_DAC2RST_B_0x0 = 0;
        /** @brief resets the DAC2 */
    constexpr std::uint32_t RCC_APB4RSTR_DAC2RST_B_0x1 = 1;

    /** @brief COMP1 and 2 blocks reset Set and reset by software. */
    using RCC_APB4RSTR_COMP12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the COMP1 and 2 blocks (default after reset) (value: 0)
     *          - B_0x1: resets the COMP1 and 2 blocks (value: 1)
     */
        /** @brief does not reset the COMP1 and 2 blocks (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_COMP12RST_B_0x0 = 0;
        /** @brief resets the COMP1 and 2 blocks */
    constexpr std::uint32_t RCC_APB4RSTR_COMP12RST_B_0x1 = 1;

    /** @brief VREF block reset Set and reset by software. */
    using RCC_APB4RSTR_VREFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the VREF block (default after reset) (value: 0)
     *          - B_0x1: resets the VREF block (value: 1)
     */
        /** @brief does not reset the VREF block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_VREFRST_B_0x0 = 0;
        /** @brief resets the VREF block */
    constexpr std::uint32_t RCC_APB4RSTR_VREFRST_B_0x1 = 1;

    /** @brief Digital temperature sensor block reset Set and reset by software. */
    using RCC_APB4RSTR_DTSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DTS block (default after reset) (value: 0)
     *          - B_0x1: resets the DTS block (value: 1)
     */
        /** @brief does not reset the DTS block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_DTSRST_B_0x0 = 0;
        /** @brief resets the DTS block */
    constexpr std::uint32_t RCC_APB4RSTR_DTSRST_B_0x1 = 1;

    /** @brief DFSDM2 block reset Set and reset by software. */
    using RCC_APB4RSTR_DFSDM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DFSDM2 block (default after reset) (value: 0)
     *          - B_0x1: resets the DFSDM2 block (value: 1)
     */
        /** @brief does not reset the DFSDM2 block (default after reset) */
    constexpr std::uint32_t RCC_APB4RSTR_DFSDM2RST_B_0x0 = 0;
        /** @brief resets the DFSDM2 block */
    constexpr std::uint32_t RCC_APB4RSTR_DFSDM2RST_B_0x1 = 1;

    /** @brief RCC SmartRun domain Autonomous mode register */
    using RCC_SRDAMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SmartRun domain DMA and DMAMUX Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_BDMA2AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BDMA2 and DMAMUX2 peripheral clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: BDMA2 and DMAMUX2 peripheral clocks enabled when the SmartRun domain is in Run. (value: 1)
     */
        /** @brief BDMA2 and DMAMUX2 peripheral clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_BDMA2AMEN_B_0x0 = 0;
        /** @brief BDMA2 and DMAMUX2 peripheral clocks enabled when the SmartRun domain is in Run. */
    constexpr std::uint32_t RCC_SRDAMR_BDMA2AMEN_B_0x1 = 1;

    /** @brief GPIO Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_GPIOAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIO peripheral clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: GPIO peripheral clocks enabled when the SmartRun domain is in Run. (value: 1)
     */
        /** @brief GPIO peripheral clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_GPIOAMEN_B_0x0 = 0;
        /** @brief GPIO peripheral clocks enabled when the SmartRun domain is in Run. */
    constexpr std::uint32_t RCC_SRDAMR_GPIOAMEN_B_0x1 = 1;

    /** @brief LPUART1 Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_LPUART1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 peripheral clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: LPUART1 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. (value: 1)
     */
        /** @brief LPUART1 peripheral clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_LPUART1AMEN_B_0x0 = 0;
        /** @brief LPUART1 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. */
    constexpr std::uint32_t RCC_SRDAMR_LPUART1AMEN_B_0x1 = 1;

    /** @brief SPI6 Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_SPI6AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI6 peripheral clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: SPI6 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. (value: 1)
     */
        /** @brief SPI6 peripheral clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_SPI6AMEN_B_0x0 = 0;
        /** @brief SPI6 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. */
    constexpr std::uint32_t RCC_SRDAMR_SPI6AMEN_B_0x1 = 1;

    /** @brief I2C4 Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_I2C4AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 peripheral clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: I2C4 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. (value: 1)
     */
        /** @brief I2C4 peripheral clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_I2C4AMEN_B_0x0 = 0;
        /** @brief I2C4 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. */
    constexpr std::uint32_t RCC_SRDAMR_I2C4AMEN_B_0x1 = 1;

    /** @brief LPTIM2 Autonomous mode enable Set and reset by software. Refer to for additional information */
    using RCC_SRDAMR_LPTIM2AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 peripheral clocks are disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: LPTIM2 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. (value: 1)
     */
        /** @brief LPTIM2 peripheral clocks are disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM2AMEN_B_0x0 = 0;
        /** @brief LPTIM2 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM2AMEN_B_0x1 = 1;

    /** @brief LPTIM3 Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_LPTIM3AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 peripheral clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: LPTIM3 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. (value: 1)
     */
        /** @brief LPTIM3 peripheral clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM3AMEN_B_0x0 = 0;
        /** @brief LPTIM3 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock is enabled when the SmartRun domain is in Stop mode. */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM3AMEN_B_0x1 = 1;

    /** @brief DAC2 (containing one converter) Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_DAC2AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC2 peripheral clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: DAC2 peripheral clocks enabled when the SmartRun domain is in Run. (value: 1)
     */
        /** @brief DAC2 peripheral clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_DAC2AMEN_B_0x0 = 0;
        /** @brief DAC2 peripheral clocks enabled when the SmartRun domain is in Run. */
    constexpr std::uint32_t RCC_SRDAMR_DAC2AMEN_B_0x1 = 1;

    /** @brief COMP1 and 2 Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_COMP12AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1 and 2 peripheral clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: COMP1 and 2 peripheral clocks enabled when the SmartRun domain is in Run. (value: 1)
     */
        /** @brief COMP1 and 2 peripheral clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_COMP12AMEN_B_0x0 = 0;
        /** @brief COMP1 and 2 peripheral clocks enabled when the SmartRun domain is in Run. */
    constexpr std::uint32_t RCC_SRDAMR_COMP12AMEN_B_0x1 = 1;

    /** @brief VREF Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_VREFAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREF clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: VREF clocks enabled when the SmartRun domain is in Run or Stop mode. (value: 1)
     */
        /** @brief VREF clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_VREFAMEN_B_0x0 = 0;
        /** @brief VREF clocks enabled when the SmartRun domain is in Run or Stop mode. */
    constexpr std::uint32_t RCC_SRDAMR_VREFAMEN_B_0x1 = 1;

    /** @brief RTC Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_RTCAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC bus clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: RTC bus clocks enabled when the SmartRun domain is in Run. (value: 1)
     */
        /** @brief RTC bus clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_RTCAMEN_B_0x0 = 0;
        /** @brief RTC bus clocks enabled when the SmartRun domain is in Run. */
    constexpr std::uint32_t RCC_SRDAMR_RTCAMEN_B_0x1 = 1;

    /** @brief Digital temperature sensor Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_DTSAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS clocks disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: DTS clocks enabled when the SmartRun domain is in Run. (value: 1)
     */
        /** @brief DTS clocks disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_DTSAMEN_B_0x0 = 0;
        /** @brief DTS clocks enabled when the SmartRun domain is in Run. */
    constexpr std::uint32_t RCC_SRDAMR_DTSAMEN_B_0x1 = 1;

    /** @brief DFSDM2 Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_DFSDM2AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM2 clock disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: DFSDM2 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock enabled when the SmartRun domain is in Stop mode. (value: 1)
     */
        /** @brief DFSDM2 clock disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_DFSDM2AMEN_B_0x0 = 0;
        /** @brief DFSDM2 peripheral clocks enabled when the SmartRun domain is in Run mode. Kernel clock enabled when the SmartRun domain is in Stop mode. */
    constexpr std::uint32_t RCC_SRDAMR_DFSDM2AMEN_B_0x1 = 1;

    /** @brief Backup RAM Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_BKPRAMAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM clock disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: Backup RAM clock enabling is controlled by the SmartRun domain state. (value: 1)
     */
        /** @brief Backup RAM clock disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_BKPRAMAMEN_B_0x0 = 0;
        /** @brief Backup RAM clock enabling is controlled by the SmartRun domain state. */
    constexpr std::uint32_t RCC_SRDAMR_BKPRAMAMEN_B_0x1 = 1;

    /** @brief SmartRun domain SRAM Autonomous mode enable Set and reset by software. Refer to for additional information. */
    using RCC_SRDAMR_SRDSRAMAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRDSRAM clock disabled when the CPU is in CStop (default after reset) (value: 0)
     *          - B_0x1: SRDSRAM bus clock enabled when the SmartRun domain is in Run. (value: 1)
     */
        /** @brief SRDSRAM clock disabled when the CPU is in CStop (default after reset) */
    constexpr std::uint32_t RCC_SRDAMR_SRDSRAMAMEN_B_0x0 = 0;
        /** @brief SRDSRAM bus clock enabled when the SmartRun domain is in Run. */
    constexpr std::uint32_t RCC_SRDAMR_SRDSRAMAMEN_B_0x1 = 1;

    /** @brief RCC AXI clocks gating enable register */
    using RCC_CKGAENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI interconnect matrix clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_AXICKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI interconnect matrix clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled */
    constexpr std::uint32_t RCC_CKGAENR_AXICKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI interconnect matrix clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_AXICKG_B_0x1 = 1;

    /** @brief AXI master AHB clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_AHBCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix master AHB clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_AHBCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix master AHB clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_AHBCKG_B_0x1 = 1;

    /** @brief AXI master CPU clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_CPUCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix master CPU clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_CPUCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix master CPU clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_CPUCKG_B_0x1 = 1;

    /** @brief AXI master SDMMC clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_SDMMCCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix master SDMMC clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_SDMMCCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix master SDMMC clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_SDMMCCKG_B_0x1 = 1;

    /** @brief AXI master MDMA clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_MDMACKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix master MDMA clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled */
    constexpr std::uint32_t RCC_CKGAENR_MDMACKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix master MDMA clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_MDMACKG_B_0x1 = 1;

    /** @brief AXI master DMA2D clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_DMA2DCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix master DMA2D clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled */
    constexpr std::uint32_t RCC_CKGAENR_DMA2DCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix master DMA2D clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_DMA2DCKG_B_0x1 = 1;

    /** @brief AXI master LTDC clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_LTDCCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix master LTDC clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_LTDCCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix master LTDC clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_LTDCCKG_B_0x1 = 1;

    /** @brief AXI master GFXMMU clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_GFXMMUMCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix master GFXMMU clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled */
    constexpr std::uint32_t RCC_CKGAENR_GFXMMUMCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix master GFXMMU clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_GFXMMUMCKG_B_0x1 = 1;

    /** @brief AXI slave AHB12 clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_AHB12CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave AHB12 clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled */
    constexpr std::uint32_t RCC_CKGAENR_AHB12CKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave AHB12 clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_AHB12CKG_B_0x1 = 1;

    /** @brief AXI slave AHB34 clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_AHB34CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave AHB34 clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled */
    constexpr std::uint32_t RCC_CKGAENR_AHB34CKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave AHB34 clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_AHB34CKG_B_0x1 = 1;

    /** @brief AXI slave Flash interface (FLIFT) clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_FLIFTCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave FLIFT clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_FLIFTCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave FLIFT clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_FLIFTCKG_B_0x1 = 1;

    /** @brief AXI slave OCTOSPI2 clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_OCTOSPI2CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave OCTOSPI2 clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_OCTOSPI2CKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave OCTOSPI2 clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_OCTOSPI2CKG_B_0x1 = 1;

    /** @brief AXI slave FMC clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_FMCCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave FMC clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_FMCCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave FMC clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_FMCCKG_B_0x1 = 1;

    /** @brief AXI slave OCTOSPI1 clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_OCTOSPI1CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave OCTOSPI1 clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_OCTOSPI1CKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave OCTOSPI1 clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_OCTOSPI1CKG_B_0x1 = 1;

    /** @brief AXI slave SRAM1 clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_AXIRAM1CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave SRAM1 clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_AXIRAM1CKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave SRAM1 clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_AXIRAM1CKG_B_0x1 = 1;

    /** @brief AXI matrix slave SRAM2 clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_AXIRAM2CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave SRAM2 clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_AXIRAM2CKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave SRAM2 clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_AXIRAM2CKG_B_0x1 = 1;

    /** @brief AXI matrix slave SRAM3 clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_AXIRAM3CKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave SRAM3 clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_AXIRAM3CKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave SRAM3 clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_AXIRAM3CKG_B_0x1 = 1;

    /** @brief AXI matrix slave GFXMMU clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_GFXMMUSCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled (value: 0)
     *          - B_0x1: The clock gating is enabled. The AXI matrix slave GFXMMU clock is enabled on bus transaction request. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled */
    constexpr std::uint32_t RCC_CKGAENR_GFXMMUSCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The AXI matrix slave GFXMMU clock is enabled on bus transaction request. */
    constexpr std::uint32_t RCC_CKGAENR_GFXMMUSCKG_B_0x1 = 1;

    /** @brief RAM error code correction (ECC) clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_ECCRAMCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The ECC clock is enabled only during a RAM access. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_ECCRAMCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The ECC clock is enabled only during a RAM access. */
    constexpr std::uint32_t RCC_CKGAENR_ECCRAMCKG_B_0x1 = 1;

    /** @brief EXTI clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_EXTICKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The clock is enabled after an event detection and stopped again when the event flag is cleared. (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_EXTICKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The clock is enabled after an event detection and stopped again when the event flag is cleared. */
    constexpr std::uint32_t RCC_CKGAENR_EXTICKG_B_0x1 = 1;

    /** @brief JTAG automatic clock gating This bit is set and reset by software. */
    using RCC_CKGAENR_JTAGCKG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock gating is disabled. The clock is always enabled. (value: 0)
     *          - B_0x1: The clock gating is enabled. The clock is disabled except if a JTAG connection has been detected (value: 1)
     */
        /** @brief The clock gating is disabled. The clock is always enabled. */
    constexpr std::uint32_t RCC_CKGAENR_JTAGCKG_B_0x0 = 0;
        /** @brief The clock gating is enabled. The clock is disabled except if a JTAG connection has been detected */
    constexpr std::uint32_t RCC_CKGAENR_JTAGCKG_B_0x1 = 1;

    /** @brief RCC reset status register */
    using RCC_RSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief remove reset flag Set and reset by software to reset the value of the reset flags. */
    using RCC_RSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset of the reset flags not activated (default after power-on reset) (value: 0)
     *          - B_0x1: resets the value of the reset flags (value: 1)
     */
        /** @brief reset of the reset flags not activated (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x0 = 0;
        /** @brief resets the value of the reset flags */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x1 = 1;

    /** @brief CPU domain power-switch reset flag Reset by software by writing the RMVF bit. Set by hardware when a the CPU domain exits from DStop or after of power-on reset. Set also when the CPU domain exists DStop2 but only when a pad reset has occurred during DStop2 (PINRST bit also set by hardware) */
    using RCC_RSR_CDRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no CPU domain power-switch reset occurred (value: 0)
     *          - B_0x1: CPU domain power-switch (ePOD2) reset occurred (default after power-on reset) (value: 1)
     */
        /** @brief no CPU domain power-switch reset occurred */
    constexpr std::uint32_t RCC_RSR_CDRSTF_B_0x0 = 0;
        /** @brief CPU domain power-switch (ePOD2) reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_CDRSTF_B_0x1 = 1;

    /** @brief BOR reset flag Reset by software by writing the RMVF bit. Set by hardware when a BOR reset occurs (pwr_bor_rst). */
    using RCC_RSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no BOR reset occurred (value: 0)
     *          - B_0x1: BOR reset occurred (default after power-on reset) (value: 1)
     */
        /** @brief no BOR reset occurred */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x1 = 1;

    /** @brief pin reset flag (NRST) Reset by software by writing the RMVF bit. Set by hardware when a reset from pin occurs. */
    using RCC_RSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset from pin occurred (value: 0)
     *          - B_0x1: reset from pin occurred (default after power-on reset) (value: 1)
     */
        /** @brief no reset from pin occurred */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x0 = 0;
        /** @brief reset from pin occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x1 = 1;

    /** @brief POR/PDR reset flag Reset by software by writing the RMVF bit. Set by hardware when a POR/PDR reset occurs. */
    using RCC_RSR_PORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no POR/PDR reset occurred (value: 0)
     *          - B_0x1: POR/PDR reset occurred (default after power-on reset) (value: 1)
     */
        /** @brief no POR/PDR reset occurred */
    constexpr std::uint32_t RCC_RSR_PORRSTF_B_0x0 = 0;
        /** @brief POR/PDR reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_PORRSTF_B_0x1 = 1;

    /** @brief system reset from CPU reset flag Reset by software by writing the RMVF bit. Set by hardware when the system reset is due to CPU.The CPU can generate a system reset by writing SYSRESETREQ bit of AIRCR register of the core M7. */
    using RCC_RSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no CPU software reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: a system reset has been generated by the CPU (value: 1)
     */
        /** @brief no CPU software reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x0 = 0;
        /** @brief a system reset has been generated by the CPU */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x1 = 1;

    /** @brief independent watchdog reset flag Reset by software by writing the RMVF bit. Set by hardware when an independent watchdog reset occurs. */
    using RCC_RSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no independent watchdog reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: independent watchdog reset occurred (value: 1)
     */
        /** @brief no independent watchdog reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x0 = 0;
        /** @brief independent watchdog reset occurred */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x1 = 1;

    /** @brief window watchdog reset flag Reset by software by writing the RMVF bit. Set by hardware when a window watchdog reset occurs. */
    using RCC_RSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no window watchdog reset occurred from WWDG (default after power-on reset) (value: 0)
     *          - B_0x1: window watchdog reset occurred from WWDG (value: 1)
     */
        /** @brief no window watchdog reset occurred from WWDG (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x0 = 0;
        /** @brief window watchdog reset occurred from WWDG */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x1 = 1;

    /** @brief reset due to illegal CD DStop or CD DStop2 or CPU CStop flag Reset by software by writing the RMVF bit. Set by hardware when the CPU domain goes erroneously in DStop or DStop2, or when the CPU goes erroneously in CStop. */
    using RCC_RSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no illegal reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: illegal CD DStop or CD DStop2 or CPU CStop reset occurred (value: 1)
     */
        /** @brief no illegal reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x0 = 0;
        /** @brief illegal CD DStop or CD DStop2 or CPU CStop reset occurred */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC_AHB3ENR register */
    using RCC_AHB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDMA peripheral clock enable Set and reset by software. */
    using RCC_AHB3ENR_MDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDMA peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: MDMA peripheral clock enabled (value: 1)
     */
        /** @brief MDMA peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_MDMAEN_B_0x0 = 0;
        /** @brief MDMA peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_MDMAEN_B_0x1 = 1;

    /** @brief DMA2D peripheral clock enable Set and reset by software. */
    using RCC_AHB3ENR_DMA2DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DMA2D peripheral clock enabled (value: 1)
     */
        /** @brief DMA2D peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_DMA2DEN_B_0x0 = 0;
        /** @brief DMA2D peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_DMA2DEN_B_0x1 = 1;

    /** @brief JPGDEC peripheral clock enable Set and reset by software. */
    using RCC_AHB3ENR_JPGDECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JPGDEC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: JPGDEC peripheral clock enabled (value: 1)
     */
        /** @brief JPGDEC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_JPGDECEN_B_0x0 = 0;
        /** @brief JPGDEC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_JPGDECEN_B_0x1 = 1;

    /** @brief FMC peripheral clocks enable Set and reset by software. The peripheral clocks of the FMC are the kernel clock selected by FMCSEL and provided to fmc_ker_ck input, and the rcc_hclk3 bus interface clock. */
    using RCC_AHB3ENR_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: FMC peripheral clocks enabled (value: 1)
     */
        /** @brief FMC peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_FMCEN_B_0x0 = 0;
        /** @brief FMC peripheral clocks enabled */
    constexpr std::uint32_t RCC_AHB3ENR_FMCEN_B_0x1 = 1;

    /** @brief OCTOSPI1 and OCTOSPI1 delay clock enable Set and reset by software. */
    using RCC_AHB3ENR_OCTOSPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI1 and OCTOSPI1 delay clock disabled (default after reset) (value: 0)
     *          - B_0x1: OCTOSPI1 and OCTOSPI1 delay clock enabled (value: 1)
     */
        /** @brief OCTOSPI1 and OCTOSPI1 delay clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_OCTOSPI1EN_B_0x0 = 0;
        /** @brief OCTOSPI1 and OCTOSPI1 delay clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_OCTOSPI1EN_B_0x1 = 1;

    /** @brief SDMMC1 and SDMMC1 delay clock enable Set and reset by software. */
    using RCC_AHB3ENR_SDMMC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 and SDMMC1 delay clock disabled (default after reset) (value: 0)
     *          - B_0x1: SDMMC1 and SDMMC1 delay clock enabled (value: 1)
     */
        /** @brief SDMMC1 and SDMMC1 delay clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_SDMMC1EN_B_0x0 = 0;
        /** @brief SDMMC1 and SDMMC1 delay clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_SDMMC1EN_B_0x1 = 1;

    /** @brief OCTOSPI2 clock enable Set and reset by software. */
    using RCC_AHB3ENR_OCTOSPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI2 and OCTOSPI2 delay clock disabled (default after reset) (value: 0)
     *          - B_0x1: OCTOSPI2 OCTOSPI2 delay clock enabled (value: 1)
     */
        /** @brief OCTOSPI2 and OCTOSPI2 delay clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_OCTOSPI2EN_B_0x0 = 0;
        /** @brief OCTOSPI2 OCTOSPI2 delay clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_OCTOSPI2EN_B_0x1 = 1;

    /** @brief OCTOSPIM clock enable Set and reset by software. */
    using RCC_AHB3ENR_OCTOSPIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPIM clock disabled (default after reset) (value: 0)
     *          - B_0x1: OCTOSPIM clock enabled (value: 1)
     */
        /** @brief OCTOSPIM clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_OCTOSPIMEN_B_0x0 = 0;
        /** @brief OCTOSPIM clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_OCTOSPIMEN_B_0x1 = 1;

    /** @brief OTFD1 clock enable Set and reset by software. */
    using RCC_AHB3ENR_OTFD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFD1 clock disabled (default after reset) (value: 0)
     *          - B_0x1: OTFD1 clock enabled (value: 1)
     */
        /** @brief OTFD1 clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_OTFD1EN_B_0x0 = 0;
        /** @brief OTFD1 clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_OTFD1EN_B_0x1 = 1;

    /** @brief OTFD2 clock enable Set and reset by software. */
    using RCC_AHB3ENR_OTFD2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFD2 clock disabled (default after reset) (value: 0)
     *          - B_0x1: OTFD2 clock enabled (value: 1)
     */
        /** @brief OTFD2 clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_OTFD2EN_B_0x0 = 0;
        /** @brief OTFD2 clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_OTFD2EN_B_0x1 = 1;

    /** @brief GFXMMU clock enable Set and reset by software. */
    using RCC_AHB3ENR_GFXMMUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU clock disabled (default after reset) (value: 0)
     *          - B_0x1: GFXMMU clock enabled (value: 1)
     */
        /** @brief GFXMMU clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_GFXMMUEN_B_0x0 = 0;
        /** @brief GFXMMU clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_GFXMMUEN_B_0x1 = 1;

    /** @brief RCC_AHB1ENR register */
    using RCC_AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 clock enable Set and reset by software. */
    using RCC_AHB1ENR_DMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA1 clock disabled (default after reset) (value: 0)
     *          - B_0x1: DMA1 clock enabled (value: 1)
     */
        /** @brief DMA1 clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_DMA1EN_B_0x0 = 0;
        /** @brief DMA1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_DMA1EN_B_0x1 = 1;

    /** @brief DMA2 clock enable Set and reset by software. */
    using RCC_AHB1ENR_DMA2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2 clock disabled (default after reset) (value: 0)
     *          - B_0x1: DMA2 clock enabled (value: 1)
     */
        /** @brief DMA2 clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_DMA2EN_B_0x0 = 0;
        /** @brief DMA2 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_DMA2EN_B_0x1 = 1;

    /** @brief ADC1 and 2 peripheral clocks enable Set and reset by software. The peripheral clocks of the ADC1 and 2 are the kernel clock selected by ADCSEL and provided to adc_ker_ck input, and the rcc_hclk1 bus interface clock. */
    using RCC_AHB1ENR_ADC12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and 2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: ADC1 and 2 peripheral clocks enabled (value: 1)
     */
        /** @brief ADC1 and 2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ADC12EN_B_0x0 = 0;
        /** @brief ADC1 and 2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ADC12EN_B_0x1 = 1;

    /** @brief CRC peripheral clock enable Set and reset by software. */
    using RCC_AHB1ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRC peripheral clock enabled (value: 1)
     */
        /** @brief CRC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x0 = 0;
        /** @brief CRC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x1 = 1;

    /** @brief USB1OTG peripheral clocks enable Set and reset by software. The peripheral clocks of the USB1OTG are the kernel clock selected by USBSEL and the rcc_hclk1 bus interface clock. */
    using RCC_AHB1ENR_USB1OTGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB1OTG peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USB1OTG peripheral clocks enabled (value: 1)
     */
        /** @brief USB1OTG peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_USB1OTGEN_B_0x0 = 0;
        /** @brief USB1OTG peripheral clocks enabled */
    constexpr std::uint32_t RCC_AHB1ENR_USB1OTGEN_B_0x1 = 1;

    /** @brief USB_PHY1 clocks enable Set and reset by software. */
    using RCC_AHB1ENR_USB1ULPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB1ULPI PHY clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USB1ULPI PHY clocks enabled (value: 1)
     */
        /** @brief USB1ULPI PHY clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_USB1ULPIEN_B_0x0 = 0;
        /** @brief USB1ULPI PHY clocks enabled */
    constexpr std::uint32_t RCC_AHB1ENR_USB1ULPIEN_B_0x1 = 1;

    /** @brief RCC_AHB2ENR register */
    using RCC_AHB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief digital camera interface peripheral clock enable (DCMI or PSSI depending which IP is active) Set and reset by software. */
    using RCC_AHB2ENR_DCMI_PSSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI/PSSI peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DCMI/PSSI peripheral clock enabled (value: 1)
     */
        /** @brief DCMI/PSSI peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_DCMI_PSSIEN_B_0x0 = 0;
        /** @brief DCMI/PSSI peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_DCMI_PSSIEN_B_0x1 = 1;

    /** @brief HSEM peripheral clock enable Set and reset by software. */
    using RCC_AHB2ENR_HSEMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSEM peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: HSEM peripheral clock enabled (value: 1)
     */
        /** @brief HSEM peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_HSEMEN_B_0x0 = 0;
        /** @brief HSEM peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_HSEMEN_B_0x1 = 1;

    /** @brief CRYPT peripheral clock enable Set and reset by software. */
    using RCC_AHB2ENR_CRYPTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRYPT peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRYPT peripheral clock enabled (value: 1)
     */
        /** @brief CRYPT peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_CRYPTEN_B_0x0 = 0;
        /** @brief CRYPT peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_CRYPTEN_B_0x1 = 1;

    /** @brief HASH peripheral clock enable Set and reset by software. */
    using RCC_AHB2ENR_HASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: HASH peripheral clock enabled (value: 1)
     */
        /** @brief HASH peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x0 = 0;
        /** @brief HASH peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x1 = 1;

    /** @brief RNG peripheral clocks enable Set and reset by software. The peripheral clocks of the RNG are the kernel clock selected by RNGSEL and provided to rng_clk input, and the rcc_hclk2 bus interface clock. */
    using RCC_AHB2ENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: RNG peripheral clocks enabled: (value: 1)
     */
        /** @brief RNG peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x0 = 0;
        /** @brief RNG peripheral clocks enabled: */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x1 = 1;

    /** @brief SDMMC2 and SDMMC2 delay clock enable Set and reset by software. */
    using RCC_AHB2ENR_SDMMC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 and SDMMC2 delay clock disabled (default after reset) (value: 0)
     *          - B_0x1: SDMMC2 and SDMMC2 delay clock enabled (value: 1)
     */
        /** @brief SDMMC2 and SDMMC2 delay clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_SDMMC2EN_B_0x0 = 0;
        /** @brief SDMMC2 and SDMMC2 delay clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_SDMMC2EN_B_0x1 = 1;

    /** @brief DMA clock enable (DFSDM dedicated DMA) Set and reset by software. */
    using RCC_AHB2ENR_BDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA clock disabled (default after reset) (value: 0)
     *          - B_0x1: DMA clock enabled (value: 1)
     */
        /** @brief DMA clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_BDMA1EN_B_0x0 = 0;
        /** @brief DMA clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_BDMA1EN_B_0x1 = 1;

    /** @brief AHBSRAM1 block enable Set and reset by software. When set, this bit indicates that the SRAM1 is allocated by the CPU. It causes the CPU domain to take into account also the CPU operation modes, keeping the CPU domain in DRun when the CPU is in CRun. */
    using RCC_AHB2ENR_AHBSRAM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM1 interface clock is disabled. (default after reset) (value: 0)
     *          - B_0x1: AHBSRAM1 interface clock is enabled. (value: 1)
     */
        /** @brief AHBSRAM1 interface clock is disabled. (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_AHBSRAM1EN_B_0x0 = 0;
        /** @brief AHBSRAM1 interface clock is enabled. */
    constexpr std::uint32_t RCC_AHB2ENR_AHBSRAM1EN_B_0x1 = 1;

    /** @brief AHBSRAM2 block enable Set and reset by software. When set, this bit indicates that the SRAM2 is allocated by the CPU. It causes the CPU domain to take into account also the CPU operation modes, keeping the CPU domain in DRun when the CPU is in CRun. */
    using RCC_AHB2ENR_AHBSRAM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM2 interface clock is disabled. (default after reset) (value: 0)
     *          - B_0x1: AHBSRAM2 interface clock is enabled. (value: 1)
     */
        /** @brief AHBSRAM2 interface clock is disabled. (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_AHBSRAM2EN_B_0x0 = 0;
        /** @brief AHBSRAM2 interface clock is enabled. */
    constexpr std::uint32_t RCC_AHB2ENR_AHBSRAM2EN_B_0x1 = 1;

    /** @brief RCC_AHB4ENR register */
    using RCC_AHB4ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOA peripheral clock enabled (value: 1)
     */
        /** @brief GPIOA peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOAEN_B_0x0 = 0;
        /** @brief GPIOA peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOAEN_B_0x1 = 1;

    /** @brief GPIOB peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOB peripheral clock enabled (value: 1)
     */
        /** @brief GPIOB peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOBEN_B_0x0 = 0;
        /** @brief GPIOB peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOBEN_B_0x1 = 1;

    /** @brief GPIOC peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOC peripheral clock enabled (value: 1)
     */
        /** @brief GPIOC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOCEN_B_0x0 = 0;
        /** @brief GPIOC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOCEN_B_0x1 = 1;

    /** @brief GPIOD peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOD peripheral clock enabled (value: 1)
     */
        /** @brief GPIOD peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIODEN_B_0x0 = 0;
        /** @brief GPIOD peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIODEN_B_0x1 = 1;

    /** @brief GPIOE peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOE peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOE peripheral clock enabled (value: 1)
     */
        /** @brief GPIOE peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOEEN_B_0x0 = 0;
        /** @brief GPIOE peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOEEN_B_0x1 = 1;

    /** @brief GPIOF peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOF peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOF peripheral clock enabled (value: 1)
     */
        /** @brief GPIOF peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOFEN_B_0x0 = 0;
        /** @brief GPIOF peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOFEN_B_0x1 = 1;

    /** @brief GPIOG peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOG peripheral clock enabled (value: 1)
     */
        /** @brief GPIOG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOGEN_B_0x0 = 0;
        /** @brief GPIOG peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOGEN_B_0x1 = 1;

    /** @brief GPIOH peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOH peripheral clock enabled (value: 1)
     */
        /** @brief GPIOH peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOHEN_B_0x0 = 0;
        /** @brief GPIOH peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOHEN_B_0x1 = 1;

    /** @brief GPIOI peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOI peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOI peripheral clock enabled (value: 1)
     */
        /** @brief GPIOI peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOIEN_B_0x0 = 0;
        /** @brief GPIOI peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOIEN_B_0x1 = 1;

    /** @brief GPIOJ peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOJEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOJ peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOJ peripheral clock enabled (value: 1)
     */
        /** @brief GPIOJ peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOJEN_B_0x0 = 0;
        /** @brief GPIOJ peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOJEN_B_0x1 = 1;

    /** @brief GPIOK peripheral clock enable Set and reset by software. */
    using RCC_AHB4ENR_GPIOKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOK peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOK peripheral clock enabled (value: 1)
     */
        /** @brief GPIOK peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOKEN_B_0x0 = 0;
        /** @brief GPIOK peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOKEN_B_0x1 = 1;

    /** @brief SmartRun domain DMA and DMAMUX clock enable Set and reset by software. */
    using RCC_AHB4ENR_BDMA2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BDMA2 and DMAMUX2 clock disabled (default after reset) (value: 0)
     *          - B_0x1: BDMA2 and DMAMUX2 clock enabled (value: 1)
     */
        /** @brief BDMA2 and DMAMUX2 clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_BDMA2EN_B_0x0 = 0;
        /** @brief BDMA2 and DMAMUX2 clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_BDMA2EN_B_0x1 = 1;

    /** @brief Backup RAM clock enable Set and reset by software. */
    using RCC_AHB4ENR_BKPRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM clock disabled (default after reset) (value: 0)
     *          - B_0x1: Backup RAM clock enabled (value: 1)
     */
        /** @brief Backup RAM clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_BKPRAMEN_B_0x0 = 0;
        /** @brief Backup RAM clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_BKPRAMEN_B_0x1 = 1;

    /** @brief SmartRun domain SRAM clock enable Set and reset by software. */
    using RCC_AHB4ENR_SRDSRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRDSRAM clock disabled (default after reset) (value: 0)
     *          - B_0x1: SRDSRAM clock enabled (value: 1)
     */
        /** @brief SRDSRAM clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_SRDSRAMEN_B_0x0 = 0;
        /** @brief SRDSRAM clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_SRDSRAMEN_B_0x1 = 1;

    /** @brief RCC_APB3ENR register */
    using RCC_APB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC clock enable Provides the clock (ltdc_pclk, ltdc_aclk, ltdc_ker_ck) to the LTDC block. Set and reset by software. */
    using RCC_APB3ENR_LTDCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LTDC peripheral clock provided to the LTDC block (value: 1)
     */
        /** @brief LTDC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_LTDCEN_B_0x0 = 0;
        /** @brief LTDC peripheral clock provided to the LTDC block */
    constexpr std::uint32_t RCC_APB3ENR_LTDCEN_B_0x1 = 1;

    /** @brief WWDG clock enable Set by software, and reset by hardware when a system reset occurs. Note that in order to work properly, before enabling the WWDG, the bit WW1RSC must be set to 1. */
    using RCC_APB3ENR_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG peripheral clock disable (default after reset) (value: 0)
     *          - B_0x1: WWDG peripheral clock enabled (value: 1)
     */
        /** @brief WWDG peripheral clock disable (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_WWDGEN_B_0x0 = 0;
        /** @brief WWDG peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_WWDGEN_B_0x1 = 1;

    /** @brief RCC_APB1LENR register */
    using RCC_APB1LENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM2 peripheral clock enabled (value: 1)
     */
        /** @brief TIM2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM3 peripheral clock enabled (value: 1)
     */
        /** @brief TIM3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM3EN_B_0x1 = 1;

    /** @brief TIM4 peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 peripheral clock disable (default after reset) (value: 0)
     *          - B_0x1: TIM4 peripheral clock enabled (value: 1)
     */
        /** @brief TIM4 peripheral clock disable (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM4EN_B_0x0 = 0;
        /** @brief TIM4 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM4EN_B_0x1 = 1;

    /** @brief TIM5 peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM5 peripheral clock enabled (value: 1)
     */
        /** @brief TIM5 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM5EN_B_0x0 = 0;
        /** @brief TIM5 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM5EN_B_0x1 = 1;

    /** @brief TIM6 peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM6 peripheral clock enabled (value: 1)
     */
        /** @brief TIM6 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM6EN_B_0x0 = 0;
        /** @brief TIM6 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM7 peripheral clock enabled (value: 1)
     */
        /** @brief TIM7 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM7EN_B_0x0 = 0;
        /** @brief TIM7 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM7EN_B_0x1 = 1;

    /** @brief TIM12 peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM12 peripheral clock enabled (value: 1)
     */
        /** @brief TIM12 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM12EN_B_0x0 = 0;
        /** @brief TIM12 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM12EN_B_0x1 = 1;

    /** @brief TIM13 peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM13EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM13 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM13 peripheral clock enabled (value: 1)
     */
        /** @brief TIM13 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM13EN_B_0x0 = 0;
        /** @brief TIM13 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM13EN_B_0x1 = 1;

    /** @brief TIM14 peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM14EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM14 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM14 peripheral clock enabled (value: 1)
     */
        /** @brief TIM14 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM14EN_B_0x0 = 0;
        /** @brief TIM14 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM14EN_B_0x1 = 1;

    /** @brief LPTIM1 peripheral clocks enable Set and reset by software. The peripheral clocks of the LPTIM1 are the kernel clock selected by LPTIM1SEL and provided to lptim_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM1 peripheral clocks enabled (value: 1)
     */
        /** @brief LPTIM1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_LPTIM1EN_B_0x0 = 0;
        /** @brief LPTIM1 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_LPTIM1EN_B_0x1 = 1;

    /** @brief SPI2 peripheral clocks enable Set and reset by software. The peripheral clocks of the SPI2 are the kernel clock selected by I2S123SRC and provided to spi_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI2 peripheral clocks enabled (value: 1)
     */
        /** @brief SPI2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPI2EN_B_0x0 = 0;
        /** @brief SPI2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPI2EN_B_0x1 = 1;

    /** @brief SPI3 peripheral clocks enable Set and reset by software. The peripheral clocks of the SPI3 are the kernel clock selected by I2S123SRC and provided to spi_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI3 peripheral clocks enabled (value: 1)
     */
        /** @brief SPI3 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPI3EN_B_0x1 = 1;

    /** @brief SPDIFRX peripheral clocks enable Set and reset by software. The peripheral clocks of the SPDIFRX are the kernel clock selected by SPDIFRXSEL and provided to spdifrx_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_SPDIFRXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPDIFRX peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPDIFRX peripheral clocks enabled (value: 1)
     */
        /** @brief SPDIFRX peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPDIFRXEN_B_0x0 = 0;
        /** @brief SPDIFRX peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPDIFRXEN_B_0x1 = 1;

    /** @brief USART2peripheral clocks enable Set and reset by software. The peripheral clocks of the USART2 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USART2 peripheral clocks enabled (value: 1)
     */
        /** @brief USART2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART2EN_B_0x0 = 0;
        /** @brief USART2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART2EN_B_0x1 = 1;

    /** @brief USART3 peripheral clocks enable Set and reset by software. The peripheral clocks of the USART3 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USART3 peripheral clocks enabled (value: 1)
     */
        /** @brief USART3 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART3EN_B_0x0 = 0;
        /** @brief USART3 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART3EN_B_0x1 = 1;

    /** @brief UART4 peripheral clocks enable Set and reset by software. The peripheral clocks of the UART4 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_UART4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: UART4 peripheral clocks enabled (value: 1)
     */
        /** @brief UART4 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART4EN_B_0x0 = 0;
        /** @brief UART4 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART4EN_B_0x1 = 1;

    /** @brief UART5 peripheral clocks enable Set and reset by software. The peripheral clocks of the UART5 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_UART5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: UART5 peripheral clocks enabled (value: 1)
     */
        /** @brief UART5 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART5EN_B_0x0 = 0;
        /** @brief UART5 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART5EN_B_0x1 = 1;

    /** @brief I2C1 peripheral clocks enable Set and reset by software. The peripheral clocks of the I2C1 are the kernel clock selected by I2C123SEL and provided to i2C_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: I2C1 peripheral clocks enabled (value: 1)
     */
        /** @brief I2C1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C1EN_B_0x0 = 0;
        /** @brief I2C1 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 peripheral clocks enable Set and reset by software. The peripheral clocks of the I2C2 are the kernel clock selected by I2C123SEL and provided to i2C_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: I2C2 peripheral clocks enabled (value: 1)
     */
        /** @brief I2C2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C2EN_B_0x0 = 0;
        /** @brief I2C2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C2EN_B_0x1 = 1;

    /** @brief I2C3 peripheral clocks enable Set and reset by software. The peripheral clocks of the I2C3 are the kernel clock selected by I2C123SEL and provided to i2C_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: I2C3 peripheral clocks enabled (value: 1)
     */
        /** @brief I2C3 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C3EN_B_0x0 = 0;
        /** @brief I2C3 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C3EN_B_0x1 = 1;

    /** @brief HDMI-CEC peripheral clock enable Set and reset by software. The peripheral clocks of the HDMI-CEC are the kernel clock selected by CECSEL and provided to cec_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_CECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDMI-CEC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: HDMI-CEC peripheral clock enabled (value: 1)
     */
        /** @brief HDMI-CEC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_CECEN_B_0x0 = 0;
        /** @brief HDMI-CEC peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_CECEN_B_0x1 = 1;

    /** @brief DAC1 (containing two converters) peripheral clock enable Set and reset by software. */
    using RCC_APB1LENR_DAC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DAC1 peripheral clock enabled (value: 1)
     */
        /** @brief DAC1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_DAC1EN_B_0x0 = 0;
        /** @brief DAC1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_DAC1EN_B_0x1 = 1;

    /** @brief UART7 peripheral clocks enable Set and reset by software. The peripheral clocks of the UART7 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_UART7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART7 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: UART7 peripheral clocks enabled (value: 1)
     */
        /** @brief UART7 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART7EN_B_0x0 = 0;
        /** @brief UART7 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART7EN_B_0x1 = 1;

    /** @brief UART8 peripheral clocks enable Set and reset by software. The peripheral clocks of the UART8 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LENR_UART8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART8 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: UART8 peripheral clocks enabled (value: 1)
     */
        /** @brief UART8 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART8EN_B_0x0 = 0;
        /** @brief UART8 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART8EN_B_0x1 = 1;

    /** @brief RCC_APB1HENR register */
    using RCC_APB1HENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock recovery system peripheral clock enable Set and reset by software. */
    using RCC_APB1HENR_CRSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRS peripheral clock enabled (value: 1)
     */
        /** @brief CRS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_CRSEN_B_0x0 = 0;
        /** @brief CRS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_CRSEN_B_0x1 = 1;

    /** @brief SWPMI peripheral clocks enable Set and reset by software. */
    using RCC_APB1HENR_SWPMIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SWPMI peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SWPMI peripheral clocks enabled: (value: 1)
     */
        /** @brief SWPMI peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_SWPMIEN_B_0x0 = 0;
        /** @brief SWPMI peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB1HENR_SWPMIEN_B_0x1 = 1;

    /** @brief OPAMP peripheral clock enable Set and reset by software. */
    using RCC_APB1HENR_OPAMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: OPAMP peripheral clock enabled (value: 1)
     */
        /** @brief OPAMP peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_OPAMPEN_B_0x0 = 0;
        /** @brief OPAMP peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_OPAMPEN_B_0x1 = 1;

    /** @brief MDIOS peripheral clock enable Set and reset by software. */
    using RCC_APB1HENR_MDIOSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: MDIOS peripheral clock enabled (value: 1)
     */
        /** @brief MDIOS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_MDIOSEN_B_0x0 = 0;
        /** @brief MDIOS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_MDIOSEN_B_0x1 = 1;

    /** @brief FDCAN peripheral clocks enable Set and reset by software. The peripheral clocks of the FDCAN are the kernel clock selected by FDCANSEL and provided to fdcan_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1HENR_FDCANEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: FDCAN peripheral clocks enabled: (value: 1)
     */
        /** @brief FDCAN peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_FDCANEN_B_0x0 = 0;
        /** @brief FDCAN peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB1HENR_FDCANEN_B_0x1 = 1;

    /** @brief RCC_APB2ENR register */
    using RCC_APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 peripheral clock enable Set and reset by software. */
    using RCC_APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM1 peripheral clock enabled (value: 1)
     */
        /** @brief TIM1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief TIM8 peripheral clock enable Set and reset by software. */
    using RCC_APB2ENR_TIM8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM8 peripheral clock enabled (value: 1)
     */
        /** @brief TIM8 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x0 = 0;
        /** @brief TIM8 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x1 = 1;

    /** @brief USART1 peripheral clocks enable Set and reset by software. The peripheral clocks of the USART1 are the kernel clock selected by USART16910SEL and provided to UCKL input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USART1 peripheral clocks enabled: (value: 1)
     */
        /** @brief USART1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief USART6 peripheral clocks enable Set and reset by software. The peripheral clocks of the USART6 are the kernel clock selected by USART16910SEL and provided to UCKL input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2ENR_USART6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USART6 peripheral clocks enabled: (value: 1)
     */
        /** @brief USART6 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USART6EN_B_0x0 = 0;
        /** @brief USART6 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_USART6EN_B_0x1 = 1;

    /** @brief UART9 peripheral clocks enable Set and reset by software. The peripheral clocks of the UART9 are the kernel clock selected by USART16910SEL and provided to UCKL input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2ENR_UART9EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART9 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: UART9 peripheral clocks enabled: (value: 1)
     */
        /** @brief UART9 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_UART9EN_B_0x0 = 0;
        /** @brief UART9 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_UART9EN_B_0x1 = 1;

    /** @brief USART10 peripheral clocks enable Set and reset by software. The peripheral clocks of the USART10 are the kernel clock selected by USART16910SEL and provided to UCKL input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2ENR_USART10EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART10 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: USART10 peripheral clocks enabled: (value: 1)
     */
        /** @brief USART10 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USART10EN_B_0x0 = 0;
        /** @brief USART10 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_USART10EN_B_0x1 = 1;

    /** @brief SPI1 Peripheral Clocks Enable Set and reset by software. The peripheral clocks of the SPI1 are: the kernel clock selected by I2S123SRC and provided to spi_ker_ck input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI1 peripheral clocks enabled: (value: 1)
     */
        /** @brief SPI1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI1 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief SPI4 Peripheral Clocks Enable Set and reset by software. The peripheral clocks of the SPI4 are: the kernel clock selected by SPI45SEL and provided to spi_ker_ck input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2ENR_SPI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI4 peripheral clocks enabled: (value: 1)
     */
        /** @brief SPI4 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x0 = 0;
        /** @brief SPI4 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x1 = 1;

    /** @brief TIM15 peripheral clock enable Set and reset by software. */
    using RCC_APB2ENR_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM15 peripheral clock enabled (value: 1)
     */
        /** @brief TIM15 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x0 = 0;
        /** @brief TIM15 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x1 = 1;

    /** @brief TIM16 peripheral clock enable Set and reset by software. */
    using RCC_APB2ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM16 peripheral clock enabled (value: 1)
     */
        /** @brief TIM16 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x0 = 0;
        /** @brief TIM16 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x1 = 1;

    /** @brief TIM17 peripheral clock enable Set and reset by software. */
    using RCC_APB2ENR_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM17 peripheral clock enabled (value: 1)
     */
        /** @brief TIM17 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x0 = 0;
        /** @brief TIM17 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x1 = 1;

    /** @brief SPI5 peripheral clocks enable Set and reset by software. The peripheral clocks of the SPI5 are the kernel clock selected by SPI45SEL and provided to spi_ker_ck input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2ENR_SPI5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI5 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI5 peripheral clocks enabled: (value: 1)
     */
        /** @brief SPI5 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI5EN_B_0x0 = 0;
        /** @brief SPI5 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_SPI5EN_B_0x1 = 1;

    /** @brief SAI1 peripheral clocks enable Set and reset by software. The peripheral clocks of the SAI1 are: the kernel clock selected by SAI1SEL and provided to sai_a_ker_ck and sai_b_ker_ck inputs, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2ENR_SAI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SAI1 peripheral clocks enabled: (value: 1)
     */
        /** @brief SAI1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x0 = 0;
        /** @brief SAI1 peripheral clocks enabled: */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x1 = 1;

    /** @brief SAI2 peripheral clocks enable Set and reset by software. The peripheral clocks of the SAI2 are the kernel clock selected by SAI2SEL and provided to sai_a_ker_ck and sai_b_ker_ck inputs, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2ENR_SAI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SAI2 peripheral clocks enabled (value: 1)
     */
        /** @brief SAI2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SAI2EN_B_0x0 = 0;
        /** @brief SAI2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI2EN_B_0x1 = 1;

    /** @brief DFSDM1 peripheral clocks enable Set and reset by software. DFSDM1 peripheral clocks are the kernel clocks selected by SAI1SEL and DFSDM1SEL and provided to Aclk and clk inputs respectively, */
    using RCC_APB2ENR_DFSDM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: DFSDM1 peripheral clocks enabled (value: 1)
     */
        /** @brief DFSDM1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_DFSDM1EN_B_0x0 = 0;
        /** @brief DFSDM1 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_DFSDM1EN_B_0x1 = 1;

    /** @brief RCC_APB4ENR register */
    using RCC_APB4ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG peripheral clock enable Set and reset by software. */
    using RCC_APB4ENR_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SYSCFG peripheral clock enabled (value: 1)
     */
        /** @brief SYSCFG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_SYSCFGEN_B_0x0 = 0;
        /** @brief SYSCFG peripheral clock enabled */
    constexpr std::uint32_t RCC_APB4ENR_SYSCFGEN_B_0x1 = 1;

    /** @brief LPUART1 peripheral clocks enable Set and reset by software. The peripheral clocks of the LPUART1 are the kernel clock selected by LPUART1SEL and provided to lpuart_ker_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4ENR_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPUART1 peripheral clocks enabled (value: 1)
     */
        /** @brief LPUART1 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_LPUART1EN_B_0x0 = 0;
        /** @brief LPUART1 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_LPUART1EN_B_0x1 = 1;

    /** @brief SPI6 peripheral clocks enable Set and reset by software. The peripheral clocks of the SPI6 are the kernel clock selected by SPI6SEL and provided to spi_ker_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4ENR_SPI6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI6 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: SPI6 peripheral clocks enabled (value: 1)
     */
        /** @brief SPI6 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_SPI6EN_B_0x0 = 0;
        /** @brief SPI6 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_SPI6EN_B_0x1 = 1;

    /** @brief I2C4 peripheral clocks enable Set and reset by software. The peripheral clocks of the I2C4 are the kernel clock selected by I2C4SEL and provided to i2C_ker_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4ENR_I2C4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: I2C4 peripheral clocks enabled (value: 1)
     */
        /** @brief I2C4 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_I2C4EN_B_0x0 = 0;
        /** @brief I2C4 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_I2C4EN_B_0x1 = 1;

    /** @brief LPTIM2 peripheral clocks enable Set and reset by software. The peripheral clocks of the LPTIM2 are the kernel clock selected by LPTIM2SEL and provided to lptim_ker_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4ENR_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM2 peripheral clocks enabled (value: 1)
     */
        /** @brief LPTIM2 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM2EN_B_0x0 = 0;
        /** @brief LPTIM2 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM2EN_B_0x1 = 1;

    /** @brief LPTIM3 peripheral clocks enable Set and reset by software. The peripheral clocks of the LPTIM3 are the kernel clock selected by LPTIM345SEL and provided to lptim_ker_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4ENR_LPTIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 peripheral clocks disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM3 peripheral clocks enabled (value: 1)
     */
        /** @brief LPTIM3 peripheral clocks disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM3EN_B_0x0 = 0;
        /** @brief LPTIM3 peripheral clocks enabled */
    constexpr std::uint32_t RCC_APB4ENR_LPTIM3EN_B_0x1 = 1;

    /** @brief DAC2 (containing one converter) peripheral clock enable Set and reset by software. */
    using RCC_APB4ENR_DAC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DAC2 peripheral clock enabled (value: 1)
     */
        /** @brief DAC2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_DAC2EN_B_0x0 = 0;
        /** @brief DAC2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB4ENR_DAC2EN_B_0x1 = 1;

    /** @brief COMP1 and 2 peripheral clock enable Set and reset by software. */
    using RCC_APB4ENR_COMP12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1 and 2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: COMP1 and 2 peripheral clock enabled (value: 1)
     */
        /** @brief COMP1 and 2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_COMP12EN_B_0x0 = 0;
        /** @brief COMP1 and 2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB4ENR_COMP12EN_B_0x1 = 1;

    /** @brief VREF peripheral clock enable Set and reset by software. */
    using RCC_APB4ENR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREF peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: VREF peripheral clock enabled (value: 1)
     */
        /** @brief VREF peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_VREFEN_B_0x0 = 0;
        /** @brief VREF peripheral clock enabled */
    constexpr std::uint32_t RCC_APB4ENR_VREFEN_B_0x1 = 1;

    /** @brief RTC APB clock enable Set and reset by software. */
    using RCC_APB4ENR_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The register clock interface of the RTC (APB) is disabled (value: 0)
     *          - B_0x1: The register clock interface of the RTC (APB) is enabled (default after reset) (value: 1)
     */
        /** @brief The register clock interface of the RTC (APB) is disabled */
    constexpr std::uint32_t RCC_APB4ENR_RTCAPBEN_B_0x0 = 0;
        /** @brief The register clock interface of the RTC (APB) is enabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_RTCAPBEN_B_0x1 = 1;

    /** @brief Digital temperature sensor peripheral clock enable Set and reset by software. */
    using RCC_APB4ENR_DTSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DTS peripheral clock enabled (value: 1)
     */
        /** @brief DTS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_DTSEN_B_0x0 = 0;
        /** @brief DTS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB4ENR_DTSEN_B_0x1 = 1;

    /** @brief DFSDM2peripheral clock enable Set and reset by software. */
    using RCC_APB4ENR_DFSDM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM2peripheral peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DFSDM2peripheral peripheral clock enabled (value: 1)
     */
        /** @brief DFSDM2peripheral peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4ENR_DFSDM2EN_B_0x0 = 0;
        /** @brief DFSDM2peripheral peripheral clock enabled */
    constexpr std::uint32_t RCC_APB4ENR_DFSDM2EN_B_0x1 = 1;

    /** @brief RCC_AHB3LPENR register */
    using RCC_AHB3LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDMA clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_MDMALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDMA peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: MDMA peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief MDMA peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_MDMALPEN_B_0x0 = 0;
        /** @brief MDMA peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_MDMALPEN_B_0x1 = 1;

    /** @brief DMA2D clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_DMA2DLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DMA2D peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DMA2D peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_DMA2DLPEN_B_0x0 = 0;
        /** @brief DMA2D peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_DMA2DLPEN_B_0x1 = 1;

    /** @brief JPGDEC clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_JPGDECLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JPGDEC peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: JPGDEC peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief JPGDEC peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_JPGDECLPEN_B_0x0 = 0;
        /** @brief JPGDEC peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_JPGDECLPEN_B_0x1 = 1;

    /** @brief FLITF clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_FLITFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLITF clock disabled during CSleep mode (value: 0)
     *          - B_0x1: FLITF clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief FLITF clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_FLITFLPEN_B_0x0 = 0;
        /** @brief FLITF clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_FLITFLPEN_B_0x1 = 1;

    /** @brief FMC peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the FMC are the kernel clock selected by FMCSEL and provided to fmc_ker_ck input, and the rcc_hclk3 bus interface clock. */
    using RCC_AHB3LPENR_FMCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: FMC peripheral clocks enabled during CSleep mode (default after reset): (value: 1)
     */
        /** @brief FMC peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_FMCLPEN_B_0x0 = 0;
        /** @brief FMC peripheral clocks enabled during CSleep mode (default after reset): */
    constexpr std::uint32_t RCC_AHB3LPENR_FMCLPEN_B_0x1 = 1;

    /** @brief OCTOSPI1 and OCTOSPI1 delay clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_OCTOSPI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI1 and OCTOSPI1 delay clock disabled during CSleep mode (value: 0)
     *          - B_0x1: OCTOSPI1 and OCTOSPI1 delay clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief OCTOSPI1 and OCTOSPI1 delay clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_OCTOSPI1LPEN_B_0x0 = 0;
        /** @brief OCTOSPI1 and OCTOSPI1 delay clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_OCTOSPI1LPEN_B_0x1 = 1;

    /** @brief SDMMC1 and SDMMC1 delay clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_SDMMC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 and SDMMC1 delay clock disabled during CSleep mode (value: 0)
     *          - B_0x1: SDMMC1 and SDMMC1 delay clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SDMMC1 and SDMMC1 delay clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_SDMMC1LPEN_B_0x0 = 0;
        /** @brief SDMMC1 and SDMMC1 delay clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_SDMMC1LPEN_B_0x1 = 1;

    /** @brief OCTOSPI2 and OCTOSPI2 delay clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_OCTOSPI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI2 and OCTOSPI2 delay clock disabled during CSleep mode (value: 0)
     *          - B_0x1: OCTOSPI2 and OCTOSPI2 delay clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief OCTOSPI2 and OCTOSPI2 delay clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_OCTOSPI2LPEN_B_0x0 = 0;
        /** @brief OCTOSPI2 and OCTOSPI2 delay clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_OCTOSPI2LPEN_B_0x1 = 1;

    /** @brief OCTOSPIM block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_OCTOSPIMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPIM interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: OCTOSPIM interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief OCTOSPIM interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_OCTOSPIMLPEN_B_0x0 = 0;
        /** @brief OCTOSPIM interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_OCTOSPIMLPEN_B_0x1 = 1;

    /** @brief OTFD1 block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_OTFD1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFD1 interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: OTFD1 interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief OTFD1 interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_OTFD1LPEN_B_0x0 = 0;
        /** @brief OTFD1 interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_OTFD1LPEN_B_0x1 = 1;

    /** @brief OTFD2 block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_OTFD2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFD2 interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: OTFD2 interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief OTFD2 interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_OTFD2LPEN_B_0x0 = 0;
        /** @brief OTFD2 interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_OTFD2LPEN_B_0x1 = 1;

    /** @brief GFXMMU block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_GFXMMULPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GFXMMU interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GFXMMU interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_GFXMMULPEN_B_0x0 = 0;
        /** @brief GFXMMU interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_GFXMMULPEN_B_0x1 = 1;

    /** @brief AXISRAM2 block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_AXISRAM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM2 interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: AXISRAM2 interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief AXISRAM2 interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_AXISRAM2LPEN_B_0x0 = 0;
        /** @brief AXISRAM2 interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_AXISRAM2LPEN_B_0x1 = 1;

    /** @brief AXISRAM3 block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_AXISRAM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM3 interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: AXISRAM3 interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief AXISRAM3 interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_AXISRAM3LPEN_B_0x0 = 0;
        /** @brief AXISRAM3 interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_AXISRAM3LPEN_B_0x1 = 1;

    /** @brief DTCM1 block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_DTCM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTCM1 interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DTCM1 interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DTCM1 interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_DTCM1LPEN_B_0x0 = 0;
        /** @brief DTCM1 interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_DTCM1LPEN_B_0x1 = 1;

    /** @brief DTCM2 block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_DTCM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTCM2 interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DTCM2 interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DTCM2 interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_DTCM2LPEN_B_0x0 = 0;
        /** @brief DTCM2 interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_DTCM2LPEN_B_0x1 = 1;

    /** @brief ITCM block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_ITCMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ITCM interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: ITCM interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief ITCM interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_ITCMLPEN_B_0x0 = 0;
        /** @brief ITCM interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_ITCMLPEN_B_0x1 = 1;

    /** @brief AXISRAM1 block clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB3LPENR_AXISRAM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM1 interface clock disabled during CSleep mode (value: 0)
     *          - B_0x1: AXISRAM1 interface clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief AXISRAM1 interface clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_AXISRAM1LPEN_B_0x0 = 0;
        /** @brief AXISRAM1 interface clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_AXISRAM1LPEN_B_0x1 = 1;

    /** @brief RCC_AHB1LPENR register */
    using RCC_AHB1LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB1LPENR_DMA1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA1 clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DMA1 clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DMA1 clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_DMA1LPEN_B_0x0 = 0;
        /** @brief DMA1 clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_DMA1LPEN_B_0x1 = 1;

    /** @brief DMA2 clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB1LPENR_DMA2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2 clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DMA2 clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DMA2 clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_DMA2LPEN_B_0x0 = 0;
        /** @brief DMA2 clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_DMA2LPEN_B_0x1 = 1;

    /** @brief ADC1 and 2 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the ADC1 and 2 are the kernel clock selected by ADCSEL and provided to adc_ker_ck input, and the rcc_hclk1 bus interface clock. */
    using RCC_AHB1LPENR_ADC12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and 2 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: ADC1 and 2 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief ADC1 and 2 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ADC12LPEN_B_0x0 = 0;
        /** @brief ADC1 and 2 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ADC12LPEN_B_0x1 = 1;

    /** @brief CRC peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB1LPENR_CRCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: CRC peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief CRC peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_CRCLPEN_B_0x0 = 0;
        /** @brief CRC peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_CRCLPEN_B_0x1 = 1;

    /** @brief USB1OTG peripheral clock enable during CSleep mode Set and reset by software. The peripheral clocks of the USB1OTG are the kernel clock selected by USBSEL and the rcc_hclk1 bus interface clock. */
    using RCC_AHB1LPENR_USB1OTGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB1OTG peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: USB1OTG peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief USB1OTG peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_USB1OTGLPEN_B_0x0 = 0;
        /** @brief USB1OTG peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_USB1OTGLPEN_B_0x1 = 1;

    /** @brief USB_PHY1 clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB1LPENR_USB1ULPILPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB_PHY1 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: USB_PHY1 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief USB_PHY1 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_USB1ULPILPEN_B_0x0 = 0;
        /** @brief USB_PHY1 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_USB1ULPILPEN_B_0x1 = 1;

    /** @brief RCC_AHB2LPENR register */
    using RCC_AHB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief digital camera interface peripheral clock enable during CSleep mode (DCMI or PSSI depending which IP is active) Set and reset by software. */
    using RCC_AHB2LPENR_DCMI_PSSILPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI/PSSI peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DCMI/PSSI peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DCMI/PSSI peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_DCMI_PSSILPEN_B_0x0 = 0;
        /** @brief DCMI/PSSI peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_DCMI_PSSILPEN_B_0x1 = 1;

    /** @brief CRYPT peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB2LPENR_CRYPTLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRYPT peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: CRYPT peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief CRYPT peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_CRYPTLPEN_B_0x0 = 0;
        /** @brief CRYPT peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_CRYPTLPEN_B_0x1 = 1;

    /** @brief HASH peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB2LPENR_HASHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: HASH peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief HASH peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_HASHLPEN_B_0x0 = 0;
        /** @brief HASH peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_HASHLPEN_B_0x1 = 1;

    /** @brief RNG peripheral clock enable during CSleep mode Set and reset by software. The peripheral clocks of the RNG are the kernel clock selected by RNGSEL and provided to rng_clk input, and the rcc_hclk2 bus interface clock. */
    using RCC_AHB2LPENR_RNGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: RNG peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief RNG peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_RNGLPEN_B_0x0 = 0;
        /** @brief RNG peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_RNGLPEN_B_0x1 = 1;

    /** @brief SDMMC2 and SDMMC2 delay clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB2LPENR_SDMMC2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 and SDMMC2 delay clock disabled during CSleep mode (value: 0)
     *          - B_0x1: SDMMC2 and SDMMC2 delay clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SDMMC2 and SDMMC2 delay clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_SDMMC2LPEN_B_0x0 = 0;
        /** @brief SDMMC2 and SDMMC2 delay clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_SDMMC2LPEN_B_0x1 = 1;

    /** @brief DFSDMDMA clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB2LPENR_DFSDMDMALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDMDMA clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DFSDMDMA clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DFSDMDMA clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_DFSDMDMALPEN_B_0x0 = 0;
        /** @brief DFSDMDMA clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_DFSDMDMALPEN_B_0x1 = 1;

    /** @brief AHBSRAM1 clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB2LPENR_AHBSRAM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM1 clock disabled during CSleep mode (value: 0)
     *          - B_0x1: AHBSRAM1 clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief AHBSRAM1 clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_AHBSRAM1LPEN_B_0x0 = 0;
        /** @brief AHBSRAM1 clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_AHBSRAM1LPEN_B_0x1 = 1;

    /** @brief AHBSRAM2 clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB2LPENR_AHBSRAM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM2 clock disabled during CSleep mode (value: 0)
     *          - B_0x1: AHBSRAM2 clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief AHBSRAM2 clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_AHBSRAM2LPEN_B_0x0 = 0;
        /** @brief AHBSRAM2 clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_AHBSRAM2LPEN_B_0x1 = 1;

    /** @brief RCC_AHB4LPENR register */
    using RCC_AHB4LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOA peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOA peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOALPEN_B_0x0 = 0;
        /** @brief GPIOA peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOALPEN_B_0x1 = 1;

    /** @brief GPIOB peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOB peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOB peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOBLPEN_B_0x0 = 0;
        /** @brief GPIOB peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOBLPEN_B_0x1 = 1;

    /** @brief GPIOC peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOC peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOC peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOCLPEN_B_0x0 = 0;
        /** @brief GPIOC peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOCLPEN_B_0x1 = 1;

    /** @brief GPIOD peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIODLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOD peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOD peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIODLPEN_B_0x0 = 0;
        /** @brief GPIOD peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIODLPEN_B_0x1 = 1;

    /** @brief GPIOE peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOELPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOE peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOE peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOE peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOELPEN_B_0x0 = 0;
        /** @brief GPIOE peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOELPEN_B_0x1 = 1;

    /** @brief GPIOF peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOF peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOF peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOF peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOFLPEN_B_0x0 = 0;
        /** @brief GPIOF peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOFLPEN_B_0x1 = 1;

    /** @brief GPIOG peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOG peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOG peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOG peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOGLPEN_B_0x0 = 0;
        /** @brief GPIOG peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOGLPEN_B_0x1 = 1;

    /** @brief GPIOH peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOH peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOH peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOHLPEN_B_0x0 = 0;
        /** @brief GPIOH peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOHLPEN_B_0x1 = 1;

    /** @brief GPIOI peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOILPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOI peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOI peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOI peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOILPEN_B_0x0 = 0;
        /** @brief GPIOI peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOILPEN_B_0x1 = 1;

    /** @brief GPIOJ peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOJLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOJ peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOJ peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOJ peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOJLPEN_B_0x0 = 0;
        /** @brief GPIOJ peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOJLPEN_B_0x1 = 1;

    /** @brief GPIOK peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_GPIOKLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOK peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: GPIOK peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOK peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOKLPEN_B_0x0 = 0;
        /** @brief GPIOK peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOKLPEN_B_0x1 = 1;

    /** @brief SmartRun domain DMA and DMAMUX clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_BDMA2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BDMA2 and DMAMUX2 clock disabled during CSleep mode (value: 0)
     *          - B_0x1: BDMA2 and DMAMUX2 clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief BDMA2 and DMAMUX2 clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_BDMA2LPEN_B_0x0 = 0;
        /** @brief BDMA2 and DMAMUX2 clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_BDMA2LPEN_B_0x1 = 1;

    /** @brief Backup RAM clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_BKPRAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM clock disabled during CSleep mode (value: 0)
     *          - B_0x1: Backup RAM clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief Backup RAM clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_BKPRAMLPEN_B_0x0 = 0;
        /** @brief Backup RAM clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_BKPRAMLPEN_B_0x1 = 1;

    /** @brief SmartRun domain SRAM clock enable during CSleep mode Set and reset by software. */
    using RCC_AHB4LPENR_SRDSRAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRDSRAM clock disabled during CSleep mode (value: 0)
     *          - B_0x1: SRDSRAM clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SRDSRAM clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_SRDSRAMLPEN_B_0x0 = 0;
        /** @brief SRDSRAM clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_SRDSRAMLPEN_B_0x1 = 1;

    /** @brief RCC_APB3LPENR register */
    using RCC_APB3LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC peripheral clock enable during CSleep mode Set and reset by software. The LTDC peripheral clocks are the kernel clock provided to ltdc_ker_ck input and the rcc_pclk3 bus interface clock. */
    using RCC_APB3LPENR_LTDCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC clock disabled during CSleep mode (value: 0)
     *          - B_0x1: LTDC clock provided to the LTDC during CSleep mode (default after reset) (value: 1)
     */
        /** @brief LTDC clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_LTDCLPEN_B_0x0 = 0;
        /** @brief LTDC clock provided to the LTDC during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_LTDCLPEN_B_0x1 = 1;

    /** @brief WWDG clock enable during CSleep mode Set and reset by software. */
    using RCC_APB3LPENR_WWDGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG clock disable during CSleep mode (value: 0)
     *          - B_0x1: WWDG clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief WWDG clock disable during CSleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_WWDGLPEN_B_0x0 = 0;
        /** @brief WWDG clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_WWDGLPEN_B_0x1 = 1;

    /** @brief RCC_APB1LLPENR register */
    using RCC_APB1LLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM2 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM2 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM2LPEN_B_0x0 = 0;
        /** @brief TIM2 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM2LPEN_B_0x1 = 1;

    /** @brief TIM3 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM3 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM3 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM3LPEN_B_0x0 = 0;
        /** @brief TIM3 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM3LPEN_B_0x1 = 1;

    /** @brief TIM4 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM4 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM4 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM4LPEN_B_0x0 = 0;
        /** @brief TIM4 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM4LPEN_B_0x1 = 1;

    /** @brief TIM5 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM5 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM5 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM5LPEN_B_0x0 = 0;
        /** @brief TIM5 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM5LPEN_B_0x1 = 1;

    /** @brief TIM6 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM6 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM6 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM6LPEN_B_0x0 = 0;
        /** @brief TIM6 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM6LPEN_B_0x1 = 1;

    /** @brief TIM7 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM7 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM7 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM7LPEN_B_0x0 = 0;
        /** @brief TIM7 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM7LPEN_B_0x1 = 1;

    /** @brief TIM12 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM12 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM12 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM12LPEN_B_0x0 = 0;
        /** @brief TIM12 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM12LPEN_B_0x1 = 1;

    /** @brief TIM13 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM13LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM13 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM13 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM13 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM13LPEN_B_0x0 = 0;
        /** @brief TIM13 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM13LPEN_B_0x1 = 1;

    /** @brief TIM14 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM14LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM14 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM14 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM14 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM14LPEN_B_0x0 = 0;
        /** @brief TIM14 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM14LPEN_B_0x1 = 1;

    /** @brief LPTIM1 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the LPTIM1 are the kernel clock selected by LPTIM1SEL and provided to lptim_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_LPTIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: LPTIM1 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM1 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_LPTIM1LPEN_B_0x0 = 0;
        /** @brief LPTIM1 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_LPTIM1LPEN_B_0x1 = 1;

    /** @brief SPI2 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the SPI2 are the kernel clock selected by I2S123SRC and provided to spi_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_SPI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SPI2 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SPI2 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI2LPEN_B_0x0 = 0;
        /** @brief SPI2 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI2LPEN_B_0x1 = 1;

    /** @brief SPI3 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the SPI3 are the kernel clock selected by I2S123SRC and provided to spi_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_SPI3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SPI3 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SPI3 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI3LPEN_B_0x0 = 0;
        /** @brief SPI3 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI3LPEN_B_0x1 = 1;

    /** @brief SPDIFRX peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the SPDIFRX are: the kernel clock selected by SPDIFRXSEL and provided to spdifrx_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_SPDIFRXLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPDIFRX peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SPDIFRX peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SPDIFRX peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPDIFRXLPEN_B_0x0 = 0;
        /** @brief SPDIFRX peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPDIFRXLPEN_B_0x1 = 1;

    /** @brief USART2 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the USART2 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_USART2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: USART2 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief USART2 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART2LPEN_B_0x0 = 0;
        /** @brief USART2 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART2LPEN_B_0x1 = 1;

    /** @brief USART3 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the USART3 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_USART3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: USART3 peripheral clocks enabled during CSleep mode (default after reset): (value: 1)
     */
        /** @brief USART3 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART3LPEN_B_0x0 = 0;
        /** @brief USART3 peripheral clocks enabled during CSleep mode (default after reset): */
    constexpr std::uint32_t RCC_APB1LLPENR_USART3LPEN_B_0x1 = 1;

    /** @brief UART4 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the UART4 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_UART4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: UART4 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief UART4 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART4LPEN_B_0x0 = 0;
        /** @brief UART4 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART4LPEN_B_0x1 = 1;

    /** @brief UART5 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the UART5 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_UART5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: UART5 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief UART5 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART5LPEN_B_0x0 = 0;
        /** @brief UART5 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART5LPEN_B_0x1 = 1;

    /** @brief I2C1 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the I2C1 are the kernel clock selected by I2C123SEL and provided to i2C_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_I2C1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: I2C1 peripheral clocks enabled during CSleep mode (default after reset): (value: 1)
     */
        /** @brief I2C1 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C1LPEN_B_0x0 = 0;
        /** @brief I2C1 peripheral clocks enabled during CSleep mode (default after reset): */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C1LPEN_B_0x1 = 1;

    /** @brief I2C2 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the I2C2 are the kernel clock selected by I2C123SEL and provided to i2C_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_I2C2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: I2C2 peripheral clocks enabled during CSleep mode (default after reset): (value: 1)
     */
        /** @brief I2C2 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C2LPEN_B_0x0 = 0;
        /** @brief I2C2 peripheral clocks enabled during CSleep mode (default after reset): */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C2LPEN_B_0x1 = 1;

    /** @brief I2C3 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the I2C3 are the kernel clock selected by I2C123SEL and provided to i2C_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_I2C3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: I2C3 peripheral clocks enabled during CSleep mode (default after reset): (value: 1)
     */
        /** @brief I2C3 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C3LPEN_B_0x0 = 0;
        /** @brief I2C3 peripheral clocks enabled during CSleep mode (default after reset): */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C3LPEN_B_0x1 = 1;

    /** @brief HDMI-CEC peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the HDMI-CEC are the kernel clock selected by CECSEL and provided to cec_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_CECLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDMI-CEC peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: HDMI-CEC peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief HDMI-CEC peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_CECLPEN_B_0x0 = 0;
        /** @brief HDMI-CEC peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_CECLPEN_B_0x1 = 1;

    /** @brief DAC1 (containing two converters) peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1LLPENR_DAC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DAC1 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DAC1 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_DAC1LPEN_B_0x0 = 0;
        /** @brief DAC1 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_DAC1LPEN_B_0x1 = 1;

    /** @brief UART7 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the UART7 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_UART7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART7 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: UART7 peripheral clocks enabled during CSleep mode (default after reset): (value: 1)
     */
        /** @brief UART7 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART7LPEN_B_0x0 = 0;
        /** @brief UART7 peripheral clocks enabled during CSleep mode (default after reset): */
    constexpr std::uint32_t RCC_APB1LLPENR_UART7LPEN_B_0x1 = 1;

    /** @brief UART8 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the UART8 are the kernel clock selected by USART234578SEL and provided to usart_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1LLPENR_UART8LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART8 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: UART8 peripheral clocks enabled during CSleep mode (default after reset): (value: 1)
     */
        /** @brief UART8 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART8LPEN_B_0x0 = 0;
        /** @brief UART8 peripheral clocks enabled during CSleep mode (default after reset): */
    constexpr std::uint32_t RCC_APB1LLPENR_UART8LPEN_B_0x1 = 1;

    /** @brief RCC_APB1HLPENR register */
    using RCC_APB1HLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock recovery system peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1HLPENR_CRSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: CRS peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief CRS peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_CRSLPEN_B_0x0 = 0;
        /** @brief CRS peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_CRSLPEN_B_0x1 = 1;

    /** @brief SWPMI peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the SWPMI are the kernel clock selected by SWPMISEL and provided to swpmi_ker_ck input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1HLPENR_SWPMILPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SWPMI peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SWPMI peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SWPMI peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_SWPMILPEN_B_0x0 = 0;
        /** @brief SWPMI peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_SWPMILPEN_B_0x1 = 1;

    /** @brief OPAMP peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1HLPENR_OPAMPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: OPAMP peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief OPAMP peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_OPAMPLPEN_B_0x0 = 0;
        /** @brief OPAMP peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_OPAMPLPEN_B_0x1 = 1;

    /** @brief MDIOS peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB1HLPENR_MDIOSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: MDIOS peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief MDIOS peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_MDIOSLPEN_B_0x0 = 0;
        /** @brief MDIOS peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_MDIOSLPEN_B_0x1 = 1;

    /** @brief FDCAN peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the FDCAN are: the kernel clock selected by FDCANSEL and provided to fdcan_clk input, and the rcc_pclk1 bus interface clock. */
    using RCC_APB1HLPENR_FDCANLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: FDCAN peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief FDCAN peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_FDCANLPEN_B_0x0 = 0;
        /** @brief FDCAN peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_FDCANLPEN_B_0x1 = 1;

    /** @brief RCC_APB2LPENR register */
    using RCC_APB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB2LPENR_TIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM1 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM1 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x0 = 0;
        /** @brief TIM1 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x1 = 1;

    /** @brief TIM8 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB2LPENR_TIM8LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM8 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM8 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM8LPEN_B_0x0 = 0;
        /** @brief TIM8 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM8LPEN_B_0x1 = 1;

    /** @brief USART1 peripheral clock enable during CSleep mode Set and reset by software. The peripheral clocks of the USART1 are the kernel clock selected by USART16910SEL and provided to usart_ker_ck inputs, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_USART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: USART1 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief USART1 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x0 = 0;
        /** @brief USART1 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x1 = 1;

    /** @brief USART6 peripheral clock enable during CSleep mode Set and reset by software. The peripheral clocks of the USART6 are the kernel clock selected by USART16910SEL and provided to usart_ker_ck input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_USART6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: USART6 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief USART6 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USART6LPEN_B_0x0 = 0;
        /** @brief USART6 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USART6LPEN_B_0x1 = 1;

    /** @brief UART9 peripheral clock enable during CSleep mode Set and reset by software. The peripheral clocks of the UART9 are the kernel clock selected by USART16910SEL and provided to usart_ker_ck input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_UART9LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART9 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: UART9 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief UART9 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_UART9LPEN_B_0x0 = 0;
        /** @brief UART9 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_UART9LPEN_B_0x1 = 1;

    /** @brief USART10 peripheral clock enable during CSleep mode Set and reset by software. The peripheral clocks of the USART10 are the kernel clock selected by USART16910SEL and provided to usart_ker_ck input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_USART10LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART10 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: USART10 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief USART10 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USART10LPEN_B_0x0 = 0;
        /** @brief USART10 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USART10LPEN_B_0x1 = 1;

    /** @brief SPI1 peripheral clock enable during CSleep mode Set and reset by software. The peripheral clocks of the SPI1 are: the kernel clock selected by I2S123SRC and provided to spi_ker_ck input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_SPI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SPI1 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SPI1 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x0 = 0;
        /** @brief SPI1 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x1 = 1;

    /** @brief SPI4 peripheral clock enable during CSleep mode Set and reset by software. The peripheral clocks of the SPI4 are: the kernel clock selected by SPI45SEL and provided to spi_ker_ck input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_SPI4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SPI4 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SPI4 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI4LPEN_B_0x0 = 0;
        /** @brief SPI4 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI4LPEN_B_0x1 = 1;

    /** @brief TIM15 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB2LPENR_TIM15LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM15 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM15 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM15LPEN_B_0x0 = 0;
        /** @brief TIM15 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM15LPEN_B_0x1 = 1;

    /** @brief TIM16 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB2LPENR_TIM16LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM16 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM16 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM16LPEN_B_0x0 = 0;
        /** @brief TIM16 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM16LPEN_B_0x1 = 1;

    /** @brief TIM17 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB2LPENR_TIM17LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: TIM17 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief TIM17 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM17LPEN_B_0x0 = 0;
        /** @brief TIM17 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM17LPEN_B_0x1 = 1;

    /** @brief SPI5 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the SPI5 are the kernel clock selected by SPI45SEL and provided to spi_ker_ck input, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_SPI5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI5 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SPI5 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SPI5 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI5LPEN_B_0x0 = 0;
        /** @brief SPI5 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI5LPEN_B_0x1 = 1;

    /** @brief SAI1 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the SAI1 are: the kernel clock selected by SAI1SEL and provided to sai_a_ker_ck and sai_b_ker_ck inputs, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_SAI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SAI1 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SAI1 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SAI1LPEN_B_0x0 = 0;
        /** @brief SAI1 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SAI1LPEN_B_0x1 = 1;

    /** @brief SAI2 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the SAI2 are the kernel clock selected by SAI23EL and provided to sai_a_ker_ck and sai_b_ker_ck inputs, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_SAI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SAI2 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SAI2 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SAI2LPEN_B_0x0 = 0;
        /** @brief SAI2 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SAI2LPEN_B_0x1 = 1;

    /** @brief DFSDM1 peripheral clocks enable during CSleep mode Set and reset by software. DFSDM1 peripheral clocks are the kernel clocks selected by SAI1SEL and DFSDM1SEL and provided to Aclk and clk inputs respectively, and the rcc_pclk2 bus interface clock. */
    using RCC_APB2LPENR_DFSDM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM1 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: DFSDM1 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DFSDM1 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_DFSDM1LPEN_B_0x0 = 0;
        /** @brief DFSDM1 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_DFSDM1LPEN_B_0x1 = 1;

    /** @brief RCC_APB4LPENR register */
    using RCC_APB4LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB4LPENR_SYSCFGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: SYSCFG peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SYSCFG peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_SYSCFGLPEN_B_0x0 = 0;
        /** @brief SYSCFG peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_SYSCFGLPEN_B_0x1 = 1;

    /** @brief LPUART1 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the LPUART1 are the kernel clock selected by LPUART1SEL and provided to lpuart_ker_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4LPENR_LPUART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: LPUART1 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief LPUART1 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_LPUART1LPEN_B_0x0 = 0;
        /** @brief LPUART1 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_LPUART1LPEN_B_0x1 = 1;

    /** @brief SPI6 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the SPI6 are the kernel clock selected by SPI6SEL and provided to com_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4LPENR_SPI6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI6 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: SPI6 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief SPI6 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_SPI6LPEN_B_0x0 = 0;
        /** @brief SPI6 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_SPI6LPEN_B_0x1 = 1;

    /** @brief I2C4 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the I2C4 are the kernel clock selected by I2C4SEL and provided to i2C_ker_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4LPENR_I2C4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: I2C4 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief I2C4 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_I2C4LPEN_B_0x0 = 0;
        /** @brief I2C4 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_I2C4LPEN_B_0x1 = 1;

    /** @brief LPTIM2 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the LPTIM2 are the kernel clock selected by LPTIM2SEL and provided to lptim_ker_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4LPENR_LPTIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: LPTIM2 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM2 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM2LPEN_B_0x0 = 0;
        /** @brief LPTIM2 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM2LPEN_B_0x1 = 1;

    /** @brief LPTIM3 peripheral clocks enable during CSleep mode Set and reset by software. The peripheral clocks of the LPTIM3 are the kernel clock selected by LPTIM345SEL and provided to lptim_ker_ck input, and the rcc_pclk4 bus interface clock. */
    using RCC_APB4LPENR_LPTIM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 peripheral clocks disabled during CSleep mode (value: 0)
     *          - B_0x1: LPTIM3 peripheral clocks enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM3 peripheral clocks disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM3LPEN_B_0x0 = 0;
        /** @brief LPTIM3 peripheral clocks enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_LPTIM3LPEN_B_0x1 = 1;

    /** @brief DAC2 (containing one converter) peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB4LPENR_DAC2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC2 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DAC2 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DAC2 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_DAC2LPEN_B_0x0 = 0;
        /** @brief DAC2 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_DAC2LPEN_B_0x1 = 1;

    /** @brief COMP1 and 2 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB4LPENR_COMP12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1 and 2 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: COMP1 and 2 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief COMP1 and 2 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_COMP12LPEN_B_0x0 = 0;
        /** @brief COMP1 and 2 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_COMP12LPEN_B_0x1 = 1;

    /** @brief VREF peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB4LPENR_VREFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREF peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: VREF peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief VREF peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_VREFLPEN_B_0x0 = 0;
        /** @brief VREF peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_VREFLPEN_B_0x1 = 1;

    /** @brief RTC APB clock enable during CSleep mode Set and reset by software. */
    using RCC_APB4LPENR_RTCAPBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The register clock interface of the RTC (APB) is disabled during CSleep mode (value: 0)
     *          - B_0x1: The register clock interface of the RTC (APB) is enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief The register clock interface of the RTC (APB) is disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_RTCAPBLPEN_B_0x0 = 0;
        /** @brief The register clock interface of the RTC (APB) is enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_RTCAPBLPEN_B_0x1 = 1;

    /** @brief temperature sensor peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB4LPENR_DTSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DTS peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DTS peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_DTSLPEN_B_0x0 = 0;
        /** @brief DTS peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_DTSLPEN_B_0x1 = 1;

    /** @brief DFSDM2 peripheral clock enable during CSleep mode Set and reset by software. */
    using RCC_APB4LPENR_DFSDM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFSDM2 peripheral clock disabled during CSleep mode (value: 0)
     *          - B_0x1: DFSDM2 peripheral clock enabled during CSleep mode (default after reset) (value: 1)
     */
        /** @brief DFSDM2 peripheral clock disabled during CSleep mode */
    constexpr std::uint32_t RCC_APB4LPENR_DFSDM2LPEN_B_0x0 = 0;
        /** @brief DFSDM2 peripheral clock enabled during CSleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LPENR_DFSDM2LPEN_B_0x1 = 1;

}

#endif
