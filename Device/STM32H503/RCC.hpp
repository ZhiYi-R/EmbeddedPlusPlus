/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H503_RCC_HPP
#define EMBEDDED_PP_STM32H503_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Reset and clock controller */
namespace STM32H503::RCC {

    /** @brief RCC clock control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock enable Set and cleared by software. Set by hardware to force the HSI to ON when the product leaves Stop mode, if STOPWUCK = 1 or STOPKERWUCK = 1. Set by hardware to force the HSI to ON when the product leaves Standby mode or in case of a failure of the HSE which is used as the system clock source. This bit cannot be cleared if the HSI is used directly (via SW mux) as system clock, or if the HSI is selected as reference clock for PLL1 with PLL1 enabled (PLL1ON bit set to 1). */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI is OFF (value: 0)
     *          - B_0x1: HSI is ON (default after reset) (value: 1)
     */
        /** @brief HSI is OFF */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI is ON (default after reset) */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI clock ready flag Set by hardware to indicate that the HSI oscillator is stable. */
    using RCC_CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: HSI clock is ready (value: 1)
     */
        /** @brief HSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x0 = 0;
        /** @brief HSI clock is ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x1 = 1;

    /** @brief HSI clock enable in Stop mode Set and reset by software to force the HSI to ON, even in Stop mode, in order to be quickly available as kernel clock for peripherals. This bit has no effect on the value of HSION. */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect on HSI (default after reset) (value: 0)
     *          - B_0x1: HSI is forced to ON even in Stop mode (value: 1)
     */
        /** @brief no effect on HSI (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI is forced to ON even in Stop mode */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x1 = 1;

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

    /** @brief HSI divider flag Set and reset by hardware. As a write operation to HSIDIV has not an immediate effect on the frequency, this flag indicates the current status of the HSI divider. HSIDIVF goes immediately to 0 when HSIDIV value is changed, and is set back to 1 when the output frequency matches the value programmed into HSIDIV. */
    using RCC_CR_HSIDIVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: new division ratio not yet propagated to hsi(_ker)_ck (default after reset) (value: 0)
     *          - B_0x1: hsi(_ker)_ck clock frequency reflects the new HSIDIV value (default register value when the clock setting is completed). (value: 1)
     */
        /** @brief new division ratio not yet propagated to hsi(_ker)_ck (default after reset) */
    constexpr std::uint32_t RCC_CR_HSIDIVF_B_0x0 = 0;
        /** @brief hsi(_ker)_ck clock frequency reflects the new HSIDIV value (default register value when the clock setting is completed). */
    constexpr std::uint32_t RCC_CR_HSIDIVF_B_0x1 = 1;

    /** @brief CSI clock enable Set and reset by software to enable/disable CSI clock for system and/or peripheral. Set by hardware to force the CSI to ON when the system leaves Stop mode, if STOPWUCK = 1 or STOPKERWUCK = 1. This bit cannot be cleared if the CSI is used directly (via SW mux) as system clock, or if the CSI is selected as reference clock for PLL1 with PLL1 enabled (PLL1ON bit set to 1). */
    using RCC_CR_CSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI is OFF (default after reset) (value: 0)
     *          - B_0x1: CSI is ON (value: 1)
     */
        /** @brief CSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_CSION_B_0x0 = 0;
        /** @brief CSI is ON */
    constexpr std::uint32_t RCC_CR_CSION_B_0x1 = 1;

    /** @brief CSI clock ready flag Set by hardware to indicate that the CSI oscillator is stable. This bit is activated only if the RC is enabled by CSION (it is not activated if the CSI is enabled by CSIKERON or by a peripheral request). */
    using RCC_CR_CSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI clock is not ready (default after reset) (value: 0)
     *          - B_0x1: CSI clock is ready (value: 1)
     */
        /** @brief CSI clock is not ready (default after reset) */
    constexpr std::uint32_t RCC_CR_CSIRDY_B_0x0 = 0;
        /** @brief CSI clock is ready */
    constexpr std::uint32_t RCC_CR_CSIRDY_B_0x1 = 1;

    /** @brief CSI clock enable in Stop mode Set and reset by software to force the CSI to ON, even in Stop mode, in order to be quickly available as kernel clock for some peripherals. This bit has no effect on the value of CSION. */
    using RCC_CR_CSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief HSE clock security system enable Set by software to enable clock security system on HSE. This bit is 'set only' (disabled by a system reset or when the system enters in Standby mode). When HSECSSON is set, the clock detector is enabled by hardware when the HSE is ready and disabled by hardware if an oscillator failure is detected. */
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

    /** @brief PLL2 clock ready flag Set by hardware to indicate that the PLL is locked. */
    using RCC_CR_PLL2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 unlocked (value: 0)
     *          - B_0x1: PLL2 locked (value: 1)
     */
        /** @brief PLL2 unlocked */
    constexpr std::uint32_t RCC_CR_PLL2RDY_B_0x0 = 0;
        /** @brief PLL2 locked */
    constexpr std::uint32_t RCC_CR_PLL2RDY_B_0x1 = 1;

    /** @brief RCC HSI calibration register */
    using RCC_HSICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock calibration Set by hardware by option byte loading during system reset nreset. Adjusted by software through trimming bits HSITRIM. This field represents the sum of engineering option byte calibration value and HSITRIM bits value. */
    using RCC_HSICFGR_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock trimming Set by software to adjust calibration. HSITRIM field is added to the engineering option bytes loaded during reset phase (FLASH_HSI_OPT) in order to form the calibration trimming value. HSICAL = HSITRIM + FLASH_HSI_OPT. After a change of HSITRIM it takes one system clock cycle before the new HSITRIM value is updated Note: The reset value of the field is 0x40. */
    using RCC_HSICFGR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock recovery RC register */
    using RCC_CRRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal RC 48 MHz clock calibration Set by hardware by option-byte loading during system reset NRESET. Read-only. */
    using RCC_CRRCR_HSI48CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC CSI calibration register */
    using RCC_CSICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI clock calibration Set by hardware by option byte loading during system reset NRESET. Adjusted by software through trimming bits CSITRIM. This field represents the sum of engineering option byte calibration value and CSITRIM bits value. */
    using RCC_CSICFGR_CSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI clock trimming Set by software to adjust calibration. CSITRIM field is added to the engineering option bytes loaded during reset phase (FLASH_CSI_OPT) in order to form the calibration trimming value. CSICAL = CSITRIM + FLASH_CSI_OPT. Note: The reset value of the field is 0x20. */
    using RCC_CSICFGR_CSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock configuration register */
    using RCC_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock and trace clock switch Set and reset by software to select system clock and trace clock sources (sys_ck). Set by hardware in order to: -	force the selection of the HSI or CSI (depending on STOPWUCK selection) when leaving a system Stop mode -	force the selection of the HSI in case of failure of the HSE when used directly or indirectly as system clock others: reserved */
    using RCC_CFGR1_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief system clock switch status Set and reset by hardware to indicate which clock source is used as system clock. 000: HSI used as system clock (hsi_ck) (default after reset). others: reserved */
    using RCC_CFGR1_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief system clock selection after a wakeup from system Stop Set and reset by software to select the system wakeup clock from system Stop. The selected clock is also used as emergency clock for the clock security system (CSS) on HSE. 0: HSI selected as wakeup clock from system Stop (default after reset) STOPWUCK must not be modified when CSS is enabled (by HSECSSON bit) and the system clock is HSE (SWS = 10) or a switch on HSE is requested (SW =10). */
    using RCC_CFGR1_STOPWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: CSI selected as wakeup clock from system Stop (value: 1)
     */
        /** @brief CSI selected as wakeup clock from system Stop */
    constexpr std::uint32_t RCC_CFGR1_STOPWUCK_B_0x1 = 1;

    /** @brief kernel clock selection after a wakeup from system Stop Set and reset by software to select the kernel wakeup clock from system Stop. */
    using RCC_CFGR1_STOPKERWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as wakeup clock from system Stop (default after reset) (value: 0)
     *          - B_0x1: CSI selected as wakeup clock from system Stop (value: 1)
     */
        /** @brief HSI selected as wakeup clock from system Stop (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_STOPKERWUCK_B_0x0 = 0;
        /** @brief CSI selected as wakeup clock from system Stop */
    constexpr std::uint32_t RCC_CFGR1_STOPKERWUCK_B_0x1 = 1;

    /** @brief HSE division factor for RTC clock Set and cleared by software to divide the HSE to generate a clock for RTC. Caution: The software must set these bits correctly to ensure that the clock supplied to the RTC is lower than 1 MHz. These bits must be configured if needed before selecting the RTC clock source. ... */
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

    /** @brief timers clocks prescaler selection This bit is set and reset by software to control the clock frequency of all the timers connected to APB1 and APB2 domains. */
    using RCC_CFGR1_TIMPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The timers kernel clock is equal to rcc_hclk1 if PPRE1 or PPRE2 corresponds to a division by 1 or 2, else it is equal to 2 x Frcc_pclk1 or 2 x Frcc_pclk2 (default after reset) (value: 0)
     *          - B_0x1: The timers kernel clock is equal to 2 x Frcc_pclk1 or 2 x Frcc_pclk2 if PPRE1 or PPRE2 corresponds to a division by 1, 2 or 4, else it is equal to 4 x Frcc_pclk1 or 4 x Frcc_pclk2 (value: 1)
     */
        /** @brief The timers kernel clock is equal to rcc_hclk1 if PPRE1 or PPRE2 corresponds to a division by 1 or 2, else it is equal to 2 x Frcc_pclk1 or 2 x Frcc_pclk2 (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_TIMPRE_B_0x0 = 0;
        /** @brief The timers kernel clock is equal to 2 x Frcc_pclk1 or 2 x Frcc_pclk2 if PPRE1 or PPRE2 corresponds to a division by 1, 2 or 4, else it is equal to 4 x Frcc_pclk1 or 4 x Frcc_pclk2 */
    constexpr std::uint32_t RCC_CFGR1_TIMPRE_B_0x1 = 1;

    /** @brief MCO1 prescaler Set and cleared by software to configure the prescaler of the MCO1. Modification of this prescaler may generate glitches on MCO1. It is highly recommended to change this prescaler only after reset, before enabling the external oscillators and the PLLs. ... */
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

    /** @brief Microcontroller clock output 1 Set and cleared by software. Clock source selection may generate glitches on MCO1. It is highly recommended to configure these bits only after reset, before enabling the external oscillators and the PLLs. others: reserved */
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

    /** @brief MCO2 prescaler Set and cleared by software to configure the prescaler of the MCO2. Modification of this prescaler may generate glitches on MCO2. It is highly recommended to change this prescaler only after reset, before enabling the external oscillators and the PLLs. ... */
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

    /** @brief microcontroller clock output 2 Set and cleared by software. Clock source selection may generate glitches on MCO2. It is highly recommended to configure these bits only after reset, before enabling the external oscillators and the PLLs. others: reserved */
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
    /** @brief AHB prescaler Set and reset by software to control the division factor of rcc_hclk. Changing this division ratio has an impact on the frequency of all bus matrix clocks 0xxx: rcc_hclk = sys_ck (default after reset) */
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

    /** @brief APB low-speed prescaler (APB1) Set and reset by software to control the division factor of rcc_pclk1. The clock is divided by the new prescaler factor from 1 to 16 cycles of rcc_hclk after PPRE write. 0xx: rcc_pclk1 = rcc_hclk1 (default after reset) */
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

    /** @brief APB high-speed prescaler (APB2) Set and reset by software to control APB high-speed clocks division factor. The clocks are divided with the new prescaler factor from 1 to 16 APB cycles after PPRE2 write. 0xx: rcc_pclk2 = rcc_hclk1 */
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

    /** @brief APB low-speed prescaler (APB3) Set and reset by software to control APB low-speed clocks division factor. The clocks are divided with the new prescaler factor from 1 to 16 APB cycles after PPRE3 write. 0xx: rcc_pclk3 = rcc_hclk1 */
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

    /** @brief AHB1 clock disable This bit can be set in order to further reduce power consumption, when none of the AHB1 peripherals from RCC_AHB1ENR are used and when their clocks are disabled in RCC_AHB1ENR. When this bit is set, all the AHB1 peripherals clocks from RCC_AHB1ENR are off. enable control bits */
    using RCC_CFGR2_AHB1DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB1 clock enabled, distributed to peripherals according to their dedicated clock (value: 0)
     *          - B_0x1: AHB1 clock disabled (value: 1)
     */
        /** @brief AHB1 clock enabled, distributed to peripherals according to their dedicated clock */
    constexpr std::uint32_t RCC_CFGR2_AHB1DIS_B_0x0 = 0;
        /** @brief AHB1 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_AHB1DIS_B_0x1 = 1;

    /** @brief AHB2 clock disable This bit can be set in order to further reduce power consumption, when none of the AHB2 peripherals from RCC_AHB2ENR are used and when their clocks are disabled in RCC_AHB2ENR. When this bit is set, all the AHB2 peripherals clocks from RCC_AHB2ENR are off. enable control bits */
    using RCC_CFGR2_AHB2DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2 clock enabled, distributed to peripherals according to their dedicated clock (value: 0)
     *          - B_0x1: AHB2 clock disabled (value: 1)
     */
        /** @brief AHB2 clock enabled, distributed to peripherals according to their dedicated clock */
    constexpr std::uint32_t RCC_CFGR2_AHB2DIS_B_0x0 = 0;
        /** @brief AHB2 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_AHB2DIS_B_0x1 = 1;

    /** @brief AHB4 clock disable This bit can be set in order to further reduce power consumption, when none of the AHB4 peripherals from RCC_AHB4ENR are used and when their clocks are disabled in RCC_AHB4ENR. When this bit is set, all the AHB4 peripherals clocks from RCC_AHB4ENR are off. enable control bits */
    using RCC_CFGR2_AHB4DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB4 clock enabled, distributed to peripherals according to their dedicated clock (value: 0)
     *          - B_0x1: AHB4 clock disabled (value: 1)
     */
        /** @brief AHB4 clock enabled, distributed to peripherals according to their dedicated clock */
    constexpr std::uint32_t RCC_CFGR2_AHB4DIS_B_0x0 = 0;
        /** @brief AHB4 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_AHB4DIS_B_0x1 = 1;

    /** @brief APB1 clock disable value This bit can be set in order to further reduce power consumption, when none of the APB1 peripherals (except IWDG) are used and when their clocks are disabled in RCC_APB1ENR. When this bit is set, all the APB1 peripherals clocks are off, except for IWDG. control bits */
    using RCC_CFGR2_APB1DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 clock enabled, distributed to peripherals according to their dedicated clock enable (value: 0)
     *          - B_0x1: APB1 clock disabled (value: 1)
     */
        /** @brief APB1 clock enabled, distributed to peripherals according to their dedicated clock enable */
    constexpr std::uint32_t RCC_CFGR2_APB1DIS_B_0x0 = 0;
        /** @brief APB1 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_APB1DIS_B_0x1 = 1;

    /** @brief APB2 clock disable value This bit can be set in order to further reduce power consumption, when none of the APB2 peripherals are used and when their clocks are disabled in RCC_APB2ENR. When this bit is set, all the APB2 peripherals clocks are off. control bits */
    using RCC_CFGR2_APB2DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 clock enabled, distributed to peripherals according to their dedicated clock enable (value: 0)
     *          - B_0x1: APB2 clock disabled (value: 1)
     */
        /** @brief APB2 clock enabled, distributed to peripherals according to their dedicated clock enable */
    constexpr std::uint32_t RCC_CFGR2_APB2DIS_B_0x0 = 0;
        /** @brief APB2 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_APB2DIS_B_0x1 = 1;

    /** @brief APB3 clock disable value.Set and cleared by software This bit can be set in order to further reduce power consumption, when none of the APB3 peripherals are used and when their clocks are disabled in RCC_APB3ENR. When this bit is set, all the APB3 peripherals clocks are off. control bits */
    using RCC_CFGR2_APB3DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 clock enabled, distributed to peripherals according to their dedicated clock enable (value: 0)
     *          - B_0x1: APB3 clock disabled (value: 1)
     */
        /** @brief APB3 clock enabled, distributed to peripherals according to their dedicated clock enable */
    constexpr std::uint32_t RCC_CFGR2_APB3DIS_B_0x0 = 0;
        /** @brief APB3 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_APB3DIS_B_0x1 = 1;

    /** @brief RCC PLL clock source selection register */
    using RCC_PLL1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIVMx and PLLs clock source selection Set and reset by software to select the PLL clock source. These bits can be written only when all PLLs are disabled. In order to save power, when no PLL is used, the value of PLL1SRC must be set to '00'. 00: no clock send to DIVMx divider and PLLs (default after reset). */
    using RCC_PLL1CFGR_PLL1SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: HSI selected as PLL clock (hsi_ck) (value: 1)
     *          - B_0x2: CSI selected as PLL clock (csi_ck) (value: 2)
     *          - B_0x3: HSE selected as PLL clock (hse_ck) (value: 3)
     */
        /** @brief HSI selected as PLL clock (hsi_ck) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x1 = 1;
        /** @brief CSI selected as PLL clock (csi_ck) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x2 = 2;
        /** @brief HSE selected as PLL clock (hse_ck) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x3 = 3;

    /** @brief PLL1 input frequency range Set and reset by software to select the proper reference frequency range used for PLL1. This bit must be written before enabling the PLL1. */
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

    /** @brief PLL1 fractional latch enable Set and reset by software to latch the content of FRACN1 into the sigma-delta modulator. In order to latch the FRACN1 value into the sigma-delta modulator, PLL1FRACEN must be set to 0, then set to 1. The transition 0 to 1 transfers the content of FRACN1 into the modulator. */
    using RCC_PLL1CFGR_PLL1FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 VCO selection Set and reset by software to select the proper VCO frequency range used for PLL1. This bit must be written before enabling the PLL1. */
    using RCC_PLL1CFGR_PLL1VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wide VCO range 192 to 836 MHz (default after reset) (value: 0)
     *          - B_0x1: medium VCO range 150 to 420 MHz (value: 1)
     */
        /** @brief wide VCO range 192 to 836 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1VCOSEL_B_0x0 = 0;
        /** @brief medium VCO range 150 to 420 MHz */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1VCOSEL_B_0x1 = 1;

    /** @brief prescaler for PLL1 Set and cleared by software to configure the prescaler of the PLL1. The hardware does not allow any modification of this prescaler when PLL1 is enabled (PLL1ON = 1 or PLL1RDY = 1). In order to save power when PLL1 is not used, the value of DIVM1 must be set to 0. ... ... */
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

    /** @brief PLL1 DIVP divider output enable Set and reset by software to enable the pll1_p_ck output of the PLL1. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). In order to save power, when the pll1_p_ck output of the PLL1 is not used, the pll1_p_ck must be disabled. */
    using RCC_PLL1CFGR_PLL1PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll1_p_ck output enabled (value: 1)
     */
        /** @brief pll1_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x0 = 0;
        /** @brief pll1_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x1 = 1;

    /** @brief PLL1 DIVQ divider output enable Set and reset by software to enable the pll1_q_ck output of the PLL1. In order to save power, when the pll1_q_ck output of the PLL1 is not used, the pll1_q_ck must be disabled. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). */
    using RCC_PLL1CFGR_PLL1QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck output enabled (value: 1)
     */
        /** @brief pll1_q_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x0 = 0;
        /** @brief pll1_q_ck output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x1 = 1;

    /** @brief PLL1 DIVR divider output enable Set and reset by software to enable the pll1_r_ck output of the PLL1. To save power, DIVR1EN and DIVR1 bits must be set to 0 when the pll1_r_ck is not used. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). */
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
    /** @brief DIVMx and PLLs clock source selection Set and reset by software to select the PLL clock source. These bits can be written only when all PLLs are disabled. In order to save power, when no PLL is used, the value of PLL2SRC must be set to '00'. */
    using RCC_PLL2CFGR_PLL2SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock send to DIVMx divider and PLLs (default after reset) (value: 0)
     *          - B_0x1: HSI selected as PLL clock (hsi_ck) (value: 1)
     *          - B_0x2: CSI selected as PLL clock (csi_ck) (value: 2)
     *          - B_0x3: HSE selected as PLL clock (hse_ck) (value: 3)
     */
        /** @brief no clock send to DIVMx divider and PLLs (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x0 = 0;
        /** @brief HSI selected as PLL clock (hsi_ck) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x1 = 1;
        /** @brief CSI selected as PLL clock (csi_ck) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x2 = 2;
        /** @brief HSE selected as PLL clock (hse_ck) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x3 = 3;

    /** @brief PLL2 input frequency range Set and reset by software to select the proper reference frequency range used for PLL2. These bits must be written before enabling the PLL2. */
    using RCC_PLL2CFGR_PLL2RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 input (ref2_ck) clock range frequency between 1 and 2 MHz (default after reset) (value: 0)
     *          - B_0x1: PLL2 input (ref2_ck) clock range frequency between 2 and 4 MHz (value: 1)
     *          - B_0x2: PLL2 input (ref2_ck) clock range frequency between 4 and 8 MHz (value: 2)
     *          - B_0x3: PLL2 input (ref2_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL2 input (ref2_ck) clock range frequency between 1 and 2 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2RGE_B_0x0 = 0;
        /** @brief PLL2 input (ref2_ck) clock range frequency between 2 and 4 MHz */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2RGE_B_0x1 = 1;
        /** @brief PLL2 input (ref2_ck) clock range frequency between 4 and 8 MHz */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2RGE_B_0x2 = 2;
        /** @brief PLL2 input (ref2_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2RGE_B_0x3 = 3;

    /** @brief PLL2 fractional latch enable Set and reset by software to enable the pll2_p_ck output of the PLL2. To save power, when the pll2_p_ck output of the PLL2 is not used, the pll2_p_ck must be disabled. */
    using RCC_PLL2CFGR_PLL2FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck output enabled (value: 1)
     */
        /** @brief pll2_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2FRACEN_B_0x0 = 0;
        /** @brief pll2_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2FRACEN_B_0x1 = 1;

    /** @brief PLL2 VCO selection Set and reset by software to select the proper VCO frequency range used for PLL2. This bit must be written before enabling the PLL2. */
    using RCC_PLL2CFGR_PLL2VCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wide VCO range 192 to 836 MHz (default after reset) (value: 0)
     *          - B_0x1: medium VCO range 150 to 420 MHz (value: 1)
     */
        /** @brief wide VCO range 192 to 836 MHz (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2VCOSEL_B_0x0 = 0;
        /** @brief medium VCO range 150 to 420 MHz */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2VCOSEL_B_0x1 = 1;

    /** @brief prescaler for PLL2 Set and cleared by software to configure the prescaler of the PLL2. The hardware does not allow any modification of this prescaler when PLL2 is enabled (PLL2ON = 1 or PLL2RDY = 1). In order to save power when PLL2 is not used, the value of DIVM2 must be set to 0. ... ... */
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

    /** @brief PLL2 DIVP divider output enable Set and reset by software to enable the pll2_p_ck output of the PLL2. To save power, when the pll2_p_ck output of the PLL2 is not used, the pll2_p_ck must be disabled. */
    using RCC_PLL2CFGR_PLL2PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck output enabled (value: 1)
     */
        /** @brief pll2_p_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2PEN_B_0x0 = 0;
        /** @brief pll2_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2PEN_B_0x1 = 1;

    /** @brief PLL2 DIVQ divider output enable Set and reset by software to enable the pll2_q_ck output of the PLL2. To save power, when the pll2_q_ck output of the PLL2 is not used, the pll2_q_ck must be disabled. */
    using RCC_PLL2CFGR_PLL2QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_q_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck output enabled (value: 1)
     */
        /** @brief pll2_q_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2QEN_B_0x0 = 0;
        /** @brief pll2_q_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2QEN_B_0x1 = 1;

    /** @brief PLL2 DIVR divider output enable Set and reset by software to enable the pll2_r_ck output of the PLL2. To save power, DIVR2EN and DIVR2 bits must be set to 0 when the pll2_r_ck is not used. */
    using RCC_PLL2CFGR_PLL2REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_r_ck output disabled (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck output enabled (value: 1)
     */
        /** @brief pll2_r_ck output disabled (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2REN_B_0x0 = 0;
        /** @brief pll2_r_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2REN_B_0x1 = 1;

    /** @brief RCC PLL1 dividers register */
    using RCC_PLL1DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL1VCO Set and reset by software to control the multiplication factor of the VCO. These bits can be written only when the PLL is disabled (PLL1ON = 0 and PLL1RDY = 0). ... ... Others: reserved */
    using RCC_PLL1DIVR_PLL1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: PLL1N = 4 (value: 3)
     *          - B_0x4: PLL1N = 5 (value: 4)
     *          - B_0x5: PLL1N = 6 (value: 5)
     *          - B_0x80: PLL1N = 129 (default after reset) (value: 128)
     *          - B_0x1FF: PLL1N = 512 (value: 511)
     */
        /** @brief PLL1N = 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x3 = 3;
        /** @brief PLL1N = 5 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x4 = 4;
        /** @brief PLL1N = 6 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x5 = 5;
        /** @brief PLL1N = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x80 = 128;
        /** @brief PLL1N = 512 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x1FF = 511;

    /** @brief PLL1 DIVP division factor Set and reset by software to control the frequency of the pll1_p_ck clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). Note that odd division factors are not allowed. ... */
    using RCC_PLL1DIVR_PLL1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_p_ck = vco1_ck (value: 0)
     *          - B_0x1: pll1_p_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: Not allowed (value: 2)
     *          - B_0x3: pll1_p_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_p_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief pll1_p_ck = vco1_ck */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x0 = 0;
        /** @brief pll1_p_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x1 = 1;
        /** @brief Not allowed */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x2 = 2;
        /** @brief pll1_p_ck = vco1_ck / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x3 = 3;
        /** @brief pll1_p_ck = vco1_ck / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x7F = 127;

    /** @brief PLL1 DIVQ division factor Set and reset by software to control the frequency of the pll1_q_ck clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ... */
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

    /** @brief PLL1 DIVR division factor Set and reset by software to control the frequency of the pll1_r_ck clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ... */
    using RCC_PLL1DIVR_PLL1R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_r_ck = Not allowed (value: 0)
     *          - B_0x1: pll1_r_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1_r_ck = vco1_ck / 3 (value: 2)
     *          - B_0x3: pll1_r_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_r_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief pll1_r_ck = Not allowed */
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
    /** @brief fractional part of the multiplication factor for PLL1 VCO Set and reset by software to control the fractional part of the multiplication factor of the VCO. These bits can be written at any time, allowing dynamic fine-tuning of the PLL1 VCO. The software must set correctly these bits to insure that the VCO output frequency is between its valid frequency range, that is: * 128 to 560 MHz if PLL1VCOSEL = 0 * 	150 to 420 MHz if PLL1VCOSEL = 1 VCO output frequency = Fref1_ck x (PLL1N + (PLL1FRACN / 213)), with * 	PLL1N between 8 and 420 * 	PLL1FRACN can be between 0 and 213- 1 * 	The input frequency Fref1_ck must be between 1 and 16 MHz. To change the PLL1FRACN value on-the-fly even if the PLL is enabled, the application must proceed as follows: * 	Set the bit PLL1FRACEN to 0 * 	Write the new fractional value into PLL1FRACN * 	Set the bit PLL1FRACEN to 1 */
    using RCC_PLL1FRACR_PLL1FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL1 dividers register */
    using RCC_PLL2DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL2VCO Set and reset by software to control the multiplication factor of the VCO. These bits can be written only when the PLL is disabled (PLL2ON = 0 and PLL2RDY = 0). ... ... Others: reserved */
    using RCC_PLL2DIVR_PLL2N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: PLL2N = 4 (value: 3)
     *          - B_0x4: PLL2N = 5 (value: 4)
     *          - B_0x5: PLL2N = 6 (value: 5)
     *          - B_0x80: PLL2N = 129 (default after reset) (value: 128)
     *          - B_0x1FF: PLL2N = 512 (value: 511)
     */
        /** @brief PLL2N = 4 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x3 = 3;
        /** @brief PLL2N = 5 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x4 = 4;
        /** @brief PLL2N = 6 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x5 = 5;
        /** @brief PLL2N = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x80 = 128;
        /** @brief PLL2N = 512 */
    constexpr std::uint32_t RCC_PLL2DIVR_PLL2N_B_0x1FF = 511;

    /** @brief PLL2 DIVP division factor Set and reset by software to control the frequency of the pll2_p_ck clock. These bits can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0). ... */
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

    /** @brief PLL2 DIVQ division factor Set and reset by software to control the frequency of the pll2_q_ck clock. These bits can be written only when the PLL2 is disabled (PLL2ON = 0 and PLL2RDY = 0). ... */
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

    /** @brief PLL2 DIVR division factor Set and reset by software to control the frequency of the pll2_r_ck clock. These bits can be written only when the PLL1 is disabled (PLL2ON = 0 and PLL2RDY = 0). ... */
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
    /** @brief fractional part of the multiplication factor for PLL2 VCO Set and reset by software to control the fractional part of the multiplication factor of the VCO. These bits can be written at any time, allowing dynamic fine-tuning of the PLL2 VCO. The software must set correctly these bits to insure that the VCO output frequency is between its valid frequency range, that is: * 128 to 560 MHz if PLL2VCOSEL = 0 * 	150 to 420 MHz if PLL2VCOSEL = 1 VCO output frequency = Fref2_ck x (PLL2N + (PLL2FRACN / 213)), with * 	PLL2N between 8 and 420 * 	PLL2FRACN can be between 0 and 213- 1 * 	The input frequency Fref2_ck must be between 1 and 16 MHz. To change the PLL2FRACN value on-the-fly even if the PLL is enabled, the application must proceed as follows: * 	Set the bit PLL2FRACEN to 0 * 	Write the new fractional value into PLL2FRACN * 	Set the bit PLL2FRACEN to 1 */
    using RCC_PLL2FRACR_PLL2FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock source interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief CSI ready interrupt enable Set and reset by software to enable/disable interrupt caused by the CSI oscillator stabilization. */
    using RCC_CIER_CSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: CSI ready interrupt enabled (value: 1)
     */
        /** @brief CSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_CSIRDYIE_B_0x0 = 0;
        /** @brief CSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_CSIRDYIE_B_0x1 = 1;

    /** @brief HSI ready interrupt enable Set and reset by software to enable/disable interrupt caused by the HSI oscillator stabilization. */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSI ready interrupt enabled (value: 1)
     */
        /** @brief HSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief HSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE ready interrupt enable Set and reset by software to enable/disable interrupt caused by the HSE oscillator stabilization. */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSE ready interrupt enabled (value: 1)
     */
        /** @brief HSE ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

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

    /** @brief RCC clock source interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief CSI ready interrupt flag Reset by software by writing CSIRDYC bit. Set by hardware when the CSI clock becomes stable and CSIRDYIE is set. */
    using RCC_CIFR_CSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the CSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the CSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the CSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_CSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the CSI */
    constexpr std::uint32_t RCC_CIFR_CSIRDYF_B_0x1 = 1;

    /** @brief HSI ready interrupt flag Reset by software by writing HSIRDYC bit. Set by hardware when the HSI clock becomes stable and HSIRDYIE is set. */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSI */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag Reset by software by writing HSERDYC bit. Set by hardware when the HSE clock becomes stable and HSERDYIE is set. */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSE */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

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

    /** @brief RCC clock source interrupt clear register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief HSI ready interrupt clear Set by software to clear CSIRDYF. Reset by hardware when clear done. */
    using RCC_CICR_CSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: CSIRDYF cleared (value: 1)
     */
        /** @brief CSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_CSIRDYC_B_0x0 = 0;
        /** @brief CSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_CSIRDYC_B_0x1 = 1;

    /** @brief HSI ready interrupt clear Set by software to clear HSIRDYF. Reset by hardware when clear done. */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSIRDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSIRDYF cleared (value: 1)
     */
        /** @brief HSIRDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x0 = 0;
        /** @brief HSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x1 = 1;

    /** @brief HSE ready interrupt clear Set by software to clear HSERDYF. Reset by hardware when clear done. */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSERDYF no effect (default after reset) (value: 0)
     *          - B_0x1: HSERDYF cleared (value: 1)
     */
        /** @brief HSERDYF no effect (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x0 = 0;
        /** @brief HSERDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x1 = 1;

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

    /** @brief RCC AHB1 reset register */
    using RCC_AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 block reset Set and reset by software. */
    using RCC_AHB1RSTR_GPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset GPDMA1 block (default after reset) (value: 0)
     *          - B_0x1: resets GPDMA1 block (value: 1)
     */
        /** @brief does not reset GPDMA1 block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x0 = 0;
        /** @brief resets GPDMA1 block */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x1 = 1;

    /** @brief GPDMA2 block reset Set and reset by software. */
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

    /** @brief RAMCFG block reset Set and reset by software. */
    using RCC_AHB1RSTR_RAMCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset RAMCFG block (default after reset) (value: 0)
     *          - B_0x1: resets RAMCFG block (value: 1)
     */
        /** @brief does not reset RAMCFG block (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_RAMCFGRST_B_0x0 = 0;
        /** @brief resets RAMCFG block */
    constexpr std::uint32_t RCC_AHB1RSTR_RAMCFGRST_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral reset register */
    using RCC_AHB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA block reset Set and reset by software. */
    using RCC_AHB2RSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOA block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOA block (value: 1)
     */
        /** @brief does not reset the GPIOA block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x0 = 0;
        /** @brief resets the GPIOA block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x1 = 1;

    /** @brief GPIOB block reset Set and reset by software. */
    using RCC_AHB2RSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOB block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOB block (value: 1)
     */
        /** @brief does not reset the GPIOB block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x0 = 0;
        /** @brief resets the GPIOB block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x1 = 1;

    /** @brief GPIOC block reset Set and reset by software. */
    using RCC_AHB2RSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOC block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOC block (value: 1)
     */
        /** @brief does not reset the GPIOC block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x0 = 0;
        /** @brief resets the GPIOC block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x1 = 1;

    /** @brief GPIOD block reset Set and reset by software. */
    using RCC_AHB2RSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOD block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOD block (value: 1)
     */
        /** @brief does not reset the GPIOD block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIODRST_B_0x0 = 0;
        /** @brief resets the GPIOD block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIODRST_B_0x1 = 1;

    /** @brief GPIOH block reset Set and reset by software. */
    using RCC_AHB2RSTR_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the GPIOH block (default after reset) (value: 0)
     *          - B_0x1: resets the GPIOH block (value: 1)
     */
        /** @brief does not reset the GPIOH block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOHRST_B_0x0 = 0;
        /** @brief resets the GPIOH block */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOHRST_B_0x1 = 1;

    /** @brief ADC1 block reset Set and reset by software. */
    using RCC_AHB2RSTR_ADC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset ADC1 block (default after reset) (value: 0)
     *          - B_0x1: resets ADC1 block (value: 1)
     */
        /** @brief does not reset ADC1 block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_ADC1RST_B_0x0 = 0;
        /** @brief resets ADC1 block */
    constexpr std::uint32_t RCC_AHB2RSTR_ADC1RST_B_0x1 = 1;

    /** @brief DAC block reset Set and reset by software. */
    using RCC_AHB2RSTR_DAC12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset DAC block (default after reset) (value: 0)
     *          - B_0x1: resets DAC block (value: 1)
     */
        /** @brief does not reset DAC block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC12RST_B_0x0 = 0;
        /** @brief resets DAC block */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC12RST_B_0x1 = 1;

    /** @brief HASH block reset Set and reset by software. */
    using RCC_AHB2RSTR_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset HASH block (default after reset) (value: 0)
     *          - B_0x1: resets HASH block (value: 1)
     */
        /** @brief does not reset HASH block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x0 = 0;
        /** @brief resets HASH block */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x1 = 1;

    /** @brief RNG block reset Set and reset by software. */
    using RCC_AHB2RSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset RNG block (default after reset) (value: 0)
     *          - B_0x1: resets RNG block (value: 1)
     */
        /** @brief does not reset RNG block (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x0 = 0;
        /** @brief resets RNG block */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral low reset register */
    using RCC_APB1LRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief OPAMP block reset Set and reset by software. */
    using RCC_APB1LRSTR_OPAMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the OPAMP block (default after reset) (value: 0)
     *          - B_0x1: resets the OPAMP block (value: 1)
     */
        /** @brief does not reset the OPAMP block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_OPAMPRST_B_0x0 = 0;
        /** @brief resets the OPAMP block */
    constexpr std::uint32_t RCC_APB1LRSTR_OPAMPRST_B_0x1 = 1;

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

    /** @brief COMP block reset Set and reset by software. */
    using RCC_APB1LRSTR_COMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the COMP block (default after reset) (value: 0)
     *          - B_0x1: resets the COMP block (value: 1)
     */
        /** @brief does not reset the COMP block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_COMPRST_B_0x0 = 0;
        /** @brief resets the COMP block */
    constexpr std::uint32_t RCC_APB1LRSTR_COMPRST_B_0x1 = 1;

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

    /** @brief I3C1 block reset Set and reset by software. */
    using RCC_APB1LRSTR_I3C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I3C1 block (default after reset) (value: 0)
     *          - B_0x1: resets the I3C1 block (value: 1)
     */
        /** @brief does not reset the I3C1 block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I3C1RST_B_0x0 = 0;
        /** @brief resets the I3C1 block */
    constexpr std::uint32_t RCC_APB1LRSTR_I3C1RST_B_0x1 = 1;

    /** @brief CRS block reset Set and reset by software. */
    using RCC_APB1LRSTR_CRSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the CRS block (default after reset) (value: 0)
     *          - B_0x1: resets the CRS block (value: 1)
     */
        /** @brief does not reset the CRS block (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_CRSRST_B_0x0 = 0;
        /** @brief resets the CRS block */
    constexpr std::uint32_t RCC_APB1LRSTR_CRSRST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral high reset register */
    using RCC_APB1HRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS block reset Set and reset by software. */
    using RCC_APB1HRSTR_DTSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the DTS block (default after reset) (value: 0)
     *          - B_0x1: resets the DTS block (value: 1)
     */
        /** @brief does not reset the DTS block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_DTSRST_B_0x0 = 0;
        /** @brief resets the DTS block */
    constexpr std::uint32_t RCC_APB1HRSTR_DTSRST_B_0x1 = 1;

    /** @brief LPTIM2 block reset Set and reset by software. */
    using RCC_APB1HRSTR_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM2 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM2 block (value: 1)
     */
        /** @brief does not reset the LPTIM2 block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_LPTIM2RST_B_0x0 = 0;
        /** @brief resets the LPTIM2 block */
    constexpr std::uint32_t RCC_APB1HRSTR_LPTIM2RST_B_0x1 = 1;

    /** @brief FDCAN1 block reset Set and reset by software. */
    using RCC_APB1HRSTR_FDCAN1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the FDCAN1 block (default after reset) (value: 0)
     *          - B_0x1: resets the FDCAN1 block (value: 1)
     */
        /** @brief does not reset the FDCAN1 block (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_FDCAN1RST_B_0x0 = 0;
        /** @brief resets the FDCAN1 block */
    constexpr std::uint32_t RCC_APB1HRSTR_FDCAN1RST_B_0x1 = 1;

    /** @brief RCC APB2 peripheral reset register */
    using RCC_APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 block reset Set and reset by software. */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the TIM1 block (default after reset) (value: 0)
     *          - B_0x1: resets the TIM1 block (value: 1)
     */
        /** @brief does not reset the TIM1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief resets the TIM1 block */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

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

    /** @brief USART1 block reset Set and reset by software. */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USART1 block (default after reset) (value: 0)
     *          - B_0x1: resets the USART1 block (value: 1)
     */
        /** @brief does not reset the USART1 block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief resets the USART1 block */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief USBFS block reset Set and reset by software. */
    using RCC_APB2RSTR_USBFSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the USBFS block (default after reset) (value: 0)
     *          - B_0x1: resets the USBFS block (value: 1)
     */
        /** @brief does not reset the USBFS block (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USBFSRST_B_0x0 = 0;
        /** @brief resets the USBFS block */
    constexpr std::uint32_t RCC_APB2RSTR_USBFSRST_B_0x1 = 1;

    /** @brief RCC APB3 peripheral reset register */
    using RCC_APB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS block reset Set and reset by software. */
    using RCC_APB3RSTR_SBSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the SBS block (default after reset) (value: 0)
     *          - B_0x1: resets the SBS block (value: 1)
     */
        /** @brief does not reset the SBS block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_SBSRST_B_0x0 = 0;
        /** @brief resets the SBS block */
    constexpr std::uint32_t RCC_APB3RSTR_SBSRST_B_0x1 = 1;

    /** @brief LPUART1 block reset Set and reset by software. */
    using RCC_APB3RSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPUART1 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPUART1 block (value: 1)
     */
        /** @brief does not reset the LPUART1 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_LPUART1RST_B_0x0 = 0;
        /** @brief resets the LPUART1 block */
    constexpr std::uint32_t RCC_APB3RSTR_LPUART1RST_B_0x1 = 1;

    /** @brief I3C2RST block reset Set and reset by software. */
    using RCC_APB3RSTR_I3C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the I3C2RST block (default after reset) (value: 0)
     *          - B_0x1: resets the I3C2RST block (value: 1)
     */
        /** @brief does not reset the I3C2RST block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_I3C2RST_B_0x0 = 0;
        /** @brief resets the I3C2RST block */
    constexpr std::uint32_t RCC_APB3RSTR_I3C2RST_B_0x1 = 1;

    /** @brief LPTIM1 block reset Set and reset by software. */
    using RCC_APB3RSTR_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the LPTIM1 block (default after reset) (value: 0)
     *          - B_0x1: resets the LPTIM1 block (value: 1)
     */
        /** @brief does not reset the LPTIM1 block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM1RST_B_0x0 = 0;
        /** @brief resets the LPTIM1 block */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM1RST_B_0x1 = 1;

    /** @brief VREF block reset Set and reset by software. */
    using RCC_APB3RSTR_VREFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset the VREF block (default after reset) (value: 0)
     *          - B_0x1: resets the VREF block (value: 1)
     */
        /** @brief does not reset the VREF block (default after reset) */
    constexpr std::uint32_t RCC_APB3RSTR_VREFRST_B_0x0 = 0;
        /** @brief resets the VREF block */
    constexpr std::uint32_t RCC_APB3RSTR_VREFRST_B_0x1 = 1;

    /** @brief RCC AHB1 peripherals clock register */
    using RCC_AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable Set and reset by software. */
    using RCC_AHB1ENR_GPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPDMA1 peripheral clock enabled (value: 1)
     */
        /** @brief GPDMA1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x0 = 0;
        /** @brief GPDMA1 peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x1 = 1;

    /** @brief GPDMA2 clock enable Set and reset by software. */
    using RCC_AHB1ENR_GPDMA2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPDMA2 peripheral clock enabled (value: 1)
     */
        /** @brief GPDMA2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA2EN_B_0x0 = 0;
        /** @brief GPDMA2 peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA2EN_B_0x1 = 1;

    /** @brief Flash interface clock enable Set and reset by software. */
    using RCC_AHB1ENR_FLITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH interface clock disabled (value: 0)
     *          - B_0x1: FLASH interface clock enabled (default after reset) (value: 1)
     */
        /** @brief FLASH interface clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_FLITFEN_B_0x0 = 0;
        /** @brief FLASH interface clock enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_FLITFEN_B_0x1 = 1;

    /** @brief CRC clock enable Set and reset by software. */
    using RCC_AHB1ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRC peripheral clock enabled (value: 1)
     */
        /** @brief CRC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x0 = 0;
        /** @brief CRC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x1 = 1;

    /** @brief RAMCFG clock enable Set and reset by software. */
    using RCC_AHB1ENR_RAMCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: RAMCFG peripheral clock enabled (value: 1)
     */
        /** @brief RAMCFG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x0 = 0;
        /** @brief RAMCFG peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x1 = 1;

    /** @brief BKPRAM clock enable Set and reset by software */
    using RCC_AHB1ENR_BKPRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPRAM peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: BKPRAM peripheral clock enabled (value: 1)
     */
        /** @brief BKPRAM peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_BKPRAMEN_B_0x0 = 0;
        /** @brief BKPRAM peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_BKPRAMEN_B_0x1 = 1;

    /** @brief SRAM1 clock enable Set and reset by software. */
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
    /** @brief GPIOA clock enable Set and reset by software. */
    using RCC_AHB2ENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOA peripheral clock enabled (value: 1)
     */
        /** @brief GPIOA peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x0 = 0;
        /** @brief GPIOA peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x1 = 1;

    /** @brief GPIOB clock enable Set and reset by software. */
    using RCC_AHB2ENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOB peripheral clock enabled (value: 1)
     */
        /** @brief GPIOB peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x0 = 0;
        /** @brief GPIOB peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x1 = 1;

    /** @brief GPIOC clock enable Set and reset by software. */
    using RCC_AHB2ENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOC peripheral clock enabled (value: 1)
     */
        /** @brief GPIOC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x0 = 0;
        /** @brief GPIOC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x1 = 1;

    /** @brief GPIOD clock enable Set and reset by software. */
    using RCC_AHB2ENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOD peripheral clock enabled (value: 1)
     */
        /** @brief GPIOD peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIODEN_B_0x0 = 0;
        /** @brief GPIOD peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIODEN_B_0x1 = 1;

    /** @brief GPIOH clock enable Set and reset by software. */
    using RCC_AHB2ENR_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOH peripheral clock enabled (value: 1)
     */
        /** @brief GPIOH peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOHEN_B_0x0 = 0;
        /** @brief GPIOH peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOHEN_B_0x1 = 1;

    /** @brief ADC1 peripherals clock enabled Set and reset by software. */
    using RCC_AHB2ENR_ADC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 peripherals clock disabled (default after reset) (value: 0)
     *          - B_0x1: ADC1 peripherals clock enabled (value: 1)
     */
        /** @brief ADC1 peripherals clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_ADC1EN_B_0x0 = 0;
        /** @brief ADC1 peripherals clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_ADC1EN_B_0x1 = 1;

    /** @brief DAC clock enable Set and reset by software. */
    using RCC_AHB2ENR_DAC12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DAC peripheral clock enabled (value: 1)
     */
        /** @brief DAC peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_DAC12EN_B_0x0 = 0;
        /** @brief DAC peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC12EN_B_0x1 = 1;

    /** @brief HASH clock enable Set and reset by software. */
    using RCC_AHB2ENR_HASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: HASH peripheral clock enabled (value: 1)
     */
        /** @brief HASH peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x0 = 0;
        /** @brief HASH peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x1 = 1;

    /** @brief RNG clock enable Set and reset by software. */
    using RCC_AHB2ENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: RNG peripheral clock enabled (value: 1)
     */
        /** @brief RNG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x0 = 0;
        /** @brief RNG peripheral clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x1 = 1;

    /** @brief SRAM2 clock enable Set and reset by software. */
    using RCC_AHB2ENR_SRAM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clock disabled (value: 0)
     *          - B_0x1: SRAM2 clock enabled (default after reset) (value: 1)
     */
        /** @brief SRAM2 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM2EN_B_0x0 = 0;
        /** @brief SRAM2 clock enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_SRAM2EN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock register */
    using RCC_APB1LENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM2 peripheral clock enabled (value: 1)
     */
        /** @brief TIM2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM3 peripheral clock enabled (value: 1)
     */
        /** @brief TIM3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM3EN_B_0x1 = 1;

    /** @brief TIM6 clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM6 peripheral clock enabled (value: 1)
     */
        /** @brief TIM6 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM6EN_B_0x0 = 0;
        /** @brief TIM6 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 clock enable Set and reset by software. */
    using RCC_APB1LENR_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM7 peripheral clock enabled (value: 1)
     */
        /** @brief TIM7 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM7EN_B_0x0 = 0;
        /** @brief TIM7 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM7EN_B_0x1 = 1;

    /** @brief WWDG clock enable Set and reset by software. */
    using RCC_APB1LENR_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: WWDG peripheral clock enabled (value: 1)
     */
        /** @brief WWDG peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_WWDGEN_B_0x0 = 0;
        /** @brief WWDG peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_WWDGEN_B_0x1 = 1;

    /** @brief OPAMP clock enable Set and reset by software. */
    using RCC_APB1LENR_OPAMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: OPAMP peripheral clock enabled (value: 1)
     */
        /** @brief OPAMP peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_OPAMPEN_B_0x0 = 0;
        /** @brief OPAMP peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_OPAMPEN_B_0x1 = 1;

    /** @brief SPI2 clock enable Set and reset by software. */
    using RCC_APB1LENR_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SPI2 peripheral clock enabled (value: 1)
     */
        /** @brief SPI2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPI2EN_B_0x0 = 0;
        /** @brief SPI2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPI2EN_B_0x1 = 1;

    /** @brief SPI3 clock enable Set and reset by software. */
    using RCC_APB1LENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SPI3 peripheral clock enabled (value: 1)
     */
        /** @brief SPI3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPI3EN_B_0x1 = 1;

    /** @brief COMP clock enable Set and reset by software. */
    using RCC_APB1LENR_COMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: COMP peripheral clock enabled (value: 1)
     */
        /** @brief COMP peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_COMPEN_B_0x0 = 0;
        /** @brief COMP peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_COMPEN_B_0x1 = 1;

    /** @brief USART2 clock enable Set and reset by software. */
    using RCC_APB1LENR_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USART2 peripheral clock enabled (value: 1)
     */
        /** @brief USART2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART2EN_B_0x0 = 0;
        /** @brief USART2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART2EN_B_0x1 = 1;

    /** @brief USART3 clock enable Set and reset by software. */
    using RCC_APB1LENR_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USART3 peripheral clock enabled (value: 1)
     */
        /** @brief USART3 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART3EN_B_0x0 = 0;
        /** @brief USART3 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART3EN_B_0x1 = 1;

    /** @brief I2C1 clock enable Set and reset by software. */
    using RCC_APB1LENR_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: I2C1 peripheral clock enabled (value: 1)
     */
        /** @brief I2C1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C1EN_B_0x0 = 0;
        /** @brief I2C1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 clock enable Set and reset by software. */
    using RCC_APB1LENR_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: I2C2 peripheral clock enabled (value: 1)
     */
        /** @brief I2C2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C2EN_B_0x0 = 0;
        /** @brief I2C2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C2EN_B_0x1 = 1;

    /** @brief I3C1 clock enable Set and reset by software. */
    using RCC_APB1LENR_I3C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: I3C1 peripheral clock enabled (value: 1)
     */
        /** @brief I3C1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I3C1EN_B_0x0 = 0;
        /** @brief I3C1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_I3C1EN_B_0x1 = 1;

    /** @brief CRS clock enable Set and reset by software. */
    using RCC_APB1LENR_CRSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: CRS peripheral clock enabled (value: 1)
     */
        /** @brief CRS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_CRSEN_B_0x0 = 0;
        /** @brief CRS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1LENR_CRSEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock register */
    using RCC_APB1HENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS clock enable Set and reset by software. */
    using RCC_APB1HENR_DTSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: DTS peripheral clock enabled (value: 1)
     */
        /** @brief DTS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_DTSEN_B_0x0 = 0;
        /** @brief DTS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_DTSEN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable Set and reset by software. */
    using RCC_APB1HENR_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM2 peripheral clock enabled (value: 1)
     */
        /** @brief LPTIM2 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_LPTIM2EN_B_0x0 = 0;
        /** @brief LPTIM2 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_LPTIM2EN_B_0x1 = 1;

    /** @brief FDCAN1 peripheral clock enable Set and reset by software. */
    using RCC_APB1HENR_FDCAN1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: FDCAN1 peripheral clock enabled (value: 1)
     */
        /** @brief FDCAN1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_FDCAN1EN_B_0x0 = 0;
        /** @brief FDCAN1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB1HENR_FDCAN1EN_B_0x1 = 1;

    /** @brief RCC APB2 peripheral clock register */
    using RCC_APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 clock enable Set and reset by software. */
    using RCC_APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: TIM1 peripheral clock enabled (value: 1)
     */
        /** @brief TIM1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief SPI1 clock enable Set and reset by software. */
    using RCC_APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SPI1 peripheral clock enabled (value: 1)
     */
        /** @brief SPI1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief USART1 clock enable Set and reset by software. */
    using RCC_APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USART1 peripheral clock enabled (value: 1)
     */
        /** @brief USART1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief USBFS clock enable Set and reset by software. */
    using RCC_APB2ENR_USBFSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USBFS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: USBFS peripheral clock enabled (value: 1)
     */
        /** @brief USBFS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USBFSEN_B_0x0 = 0;
        /** @brief USBFS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_USBFSEN_B_0x1 = 1;

    /** @brief RCC APB3 peripheral clock register */
    using RCC_APB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS clock enable Set and reset by software. */
    using RCC_APB3ENR_SBSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBS peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: SBS peripheral clock enabled (value: 1)
     */
        /** @brief SBS peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_SBSEN_B_0x0 = 0;
        /** @brief SBS peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_SBSEN_B_0x1 = 1;

    /** @brief LPUART1 clock enable Set and reset by software. */
    using RCC_APB3ENR_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPUART1 peripheral clock enabled (value: 1)
     */
        /** @brief LPUART1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_LPUART1EN_B_0x0 = 0;
        /** @brief LPUART1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPUART1EN_B_0x1 = 1;

    /** @brief I3C2EN clock enable Set and reset by software. */
    using RCC_APB3ENR_I3C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2EN peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: I3C2EN peripheral clock enabled (value: 1)
     */
        /** @brief I3C2EN peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_I3C2EN_B_0x0 = 0;
        /** @brief I3C2EN peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_I3C2EN_B_0x1 = 1;

    /** @brief LPTIM1 clock enable Set and reset by software. */
    using RCC_APB3ENR_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM1 peripheral clock enabled (value: 1)
     */
        /** @brief LPTIM1 peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM1EN_B_0x0 = 0;
        /** @brief LPTIM1 peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM1EN_B_0x1 = 1;

    /** @brief VREF clock enable Set and reset by software. */
    using RCC_APB3ENR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREF peripheral clock disabled (default after reset) (value: 0)
     *          - B_0x1: VREF peripheral clock enabled (value: 1)
     */
        /** @brief VREF peripheral clock disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_VREFEN_B_0x0 = 0;
        /** @brief VREF peripheral clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_VREFEN_B_0x1 = 1;

    /** @brief RTC APB interface clock enable Set and reset by software. */
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
    /** @brief GPDMA1 clock enable during sleep mode Set and reset by software. */
    using RCC_AHB1LPENR_GPDMA1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: GPDMA1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief GPDMA1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA1LPEN_B_0x0 = 0;
        /** @brief GPDMA1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA1LPEN_B_0x1 = 1;

    /** @brief GPDMA2 clock enable during sleep mode Set and reset by software. */
    using RCC_AHB1LPENR_GPDMA2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA2 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: GPDMA2 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief GPDMA2 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA2LPEN_B_0x0 = 0;
        /** @brief GPDMA2 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA2LPEN_B_0x1 = 1;

    /** @brief Flash interface (FLITF) clock enable during sleep mode Set and reset by software. */
    using RCC_AHB1LPENR_FLITFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLITF peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: FLITF peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief FLITF peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_FLITFLPEN_B_0x0 = 0;
        /** @brief FLITF peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_FLITFLPEN_B_0x1 = 1;

    /** @brief CRC clock enable during sleep mode Set and reset by software. */
    using RCC_AHB1LPENR_CRCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: CRC peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief CRC peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_CRCLPEN_B_0x0 = 0;
        /** @brief CRC peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_CRCLPEN_B_0x1 = 1;

    /** @brief RAMCFG clock enable during sleep mode Set and reset by software. */
    using RCC_AHB1LPENR_RAMCFGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: RAMCFG peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief RAMCFG peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_RAMCFGLPEN_B_0x0 = 0;
        /** @brief RAMCFG peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_RAMCFGLPEN_B_0x1 = 1;

    /** @brief BKPRAM clock enable during sleep mode Set and reset by software */
    using RCC_AHB1LPENR_BKPRAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPRAM peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: BKPRAM peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief BKPRAM peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_BKPRAMLPEN_B_0x0 = 0;
        /** @brief BKPRAM peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_BKPRAMLPEN_B_0x1 = 1;

    /** @brief ICACHE clock enable during sleep mode Set and reset by software */
    using RCC_AHB1LPENR_ICACHELPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: ICACHE peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief ICACHE peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ICACHELPEN_B_0x0 = 0;
        /** @brief ICACHE peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ICACHELPEN_B_0x1 = 1;

    /** @brief SRAM1 clock enable during sleep mode Set and reset by software */
    using RCC_AHB1LPENR_SRAM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: SRAM1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief SRAM1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_SRAM1LPEN_B_0x0 = 0;
        /** @brief SRAM1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_SRAM1LPEN_B_0x1 = 1;

    /** @brief RCC AHB2 sleep clock register */
    using RCC_AHB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_GPIOALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: GPIOA peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOA peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOALPEN_B_0x0 = 0;
        /** @brief GPIOA peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOALPEN_B_0x1 = 1;

    /** @brief GPIOB clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_GPIOBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: GPIOB peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOB peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOBLPEN_B_0x0 = 0;
        /** @brief GPIOB peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOBLPEN_B_0x1 = 1;

    /** @brief GPIOC clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_GPIOCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: GPIOC peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOC peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOCLPEN_B_0x0 = 0;
        /** @brief GPIOC peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOCLPEN_B_0x1 = 1;

    /** @brief GPIOD clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_GPIODLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: GPIOD peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOD peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIODLPEN_B_0x0 = 0;
        /** @brief GPIOD peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIODLPEN_B_0x1 = 1;

    /** @brief GPIOH clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_GPIOHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: GPIOH peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief GPIOH peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOHLPEN_B_0x0 = 0;
        /** @brief GPIOH peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_GPIOHLPEN_B_0x1 = 1;

    /** @brief ADC1 peripherals clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_ADC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 peripherals clock disabled during sleep mode (value: 0)
     *          - B_0x1: ADC1 peripherals clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief ADC1 peripherals clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_ADC1LPEN_B_0x0 = 0;
        /** @brief ADC1 peripherals clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_ADC1LPEN_B_0x1 = 1;

    /** @brief DAC clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_DAC12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: DAC peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief DAC peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_DAC12LPEN_B_0x0 = 0;
        /** @brief DAC peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_DAC12LPEN_B_0x1 = 1;

    /** @brief HASH clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_HASHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: HASH peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief HASH peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_HASHLPEN_B_0x0 = 0;
        /** @brief HASH peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_HASHLPEN_B_0x1 = 1;

    /** @brief RNG clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_RNGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: RNG peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief RNG peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_RNGLPEN_B_0x0 = 0;
        /** @brief RNG peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_RNGLPEN_B_0x1 = 1;

    /** @brief SRAM2 clock enable during sleep mode Set and reset by software. */
    using RCC_AHB2LPENR_SRAM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: SRAM2 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief SRAM2 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM2LPEN_B_0x0 = 0;
        /** @brief SRAM2 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_SRAM2LPEN_B_0x1 = 1;

    /** @brief RCC APB1 sleep clock register */
    using RCC_APB1LLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: TIM2 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM2 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM2LPEN_B_0x0 = 0;
        /** @brief TIM2 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM2LPEN_B_0x1 = 1;

    /** @brief TIM3 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: TIM3 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM3 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM3LPEN_B_0x0 = 0;
        /** @brief TIM3 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM3LPEN_B_0x1 = 1;

    /** @brief TIM6 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: TIM6 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM6 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM6LPEN_B_0x0 = 0;
        /** @brief TIM6 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM6LPEN_B_0x1 = 1;

    /** @brief TIM7 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_TIM7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: TIM7 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM7 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM7LPEN_B_0x0 = 0;
        /** @brief TIM7 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM7LPEN_B_0x1 = 1;

    /** @brief WWDG clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_WWDGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: WWDG peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief WWDG peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_WWDGLPEN_B_0x0 = 0;
        /** @brief WWDG peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_WWDGLPEN_B_0x1 = 1;

    /** @brief OPAMP clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_OPAMPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: OPAMP peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief OPAMP peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_OPAMPLPEN_B_0x0 = 0;
        /** @brief OPAMP peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_OPAMPLPEN_B_0x1 = 1;

    /** @brief SPI2 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_SPI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: SPI2 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief SPI2 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI2LPEN_B_0x0 = 0;
        /** @brief SPI2 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI2LPEN_B_0x1 = 1;

    /** @brief SPI3 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_SPI3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: SPI3 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief SPI3 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI3LPEN_B_0x0 = 0;
        /** @brief SPI3 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI3LPEN_B_0x1 = 1;

    /** @brief COMP clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_COMPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: COMP peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief COMP peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_COMPLPEN_B_0x0 = 0;
        /** @brief COMP peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_COMPLPEN_B_0x1 = 1;

    /** @brief USART2 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_USART2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: USART2 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief USART2 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART2LPEN_B_0x0 = 0;
        /** @brief USART2 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART2LPEN_B_0x1 = 1;

    /** @brief USART3 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_USART3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: USART3 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief USART3 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART3LPEN_B_0x0 = 0;
        /** @brief USART3 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART3LPEN_B_0x1 = 1;

    /** @brief I2C1 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_I2C1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: I2C1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief I2C1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C1LPEN_B_0x0 = 0;
        /** @brief I2C1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C1LPEN_B_0x1 = 1;

    /** @brief I2C2 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_I2C2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: I2C2 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief I2C2 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C2LPEN_B_0x0 = 0;
        /** @brief I2C2 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C2LPEN_B_0x1 = 1;

    /** @brief I3C1 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_I3C1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: I3C1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief I3C1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I3C1LPEN_B_0x0 = 0;
        /** @brief I3C1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I3C1LPEN_B_0x1 = 1;

    /** @brief CRS clock enable during sleep mode Set and reset by software. */
    using RCC_APB1LLPENR_CRSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: CRS peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief CRS peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_CRSLPEN_B_0x0 = 0;
        /** @brief CRS peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_CRSLPEN_B_0x1 = 1;

    /** @brief RCC APB1 sleep clock register */
    using RCC_APB1HLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS clock enable during sleep mode Set and reset by software. */
    using RCC_APB1HLPENR_DTSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: DTS peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief DTS peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_DTSLPEN_B_0x0 = 0;
        /** @brief DTS peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_DTSLPEN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable during sleep mode Set and reset by software. */
    using RCC_APB1HLPENR_LPTIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: LPTIM2 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM2 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_LPTIM2LPEN_B_0x0 = 0;
        /** @brief LPTIM2 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_LPTIM2LPEN_B_0x1 = 1;

    /** @brief FDCAN1 peripheral clock enable during sleep mode Set and reset by software. */
    using RCC_APB1HLPENR_FDCAN1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: FDCAN1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief FDCAN1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_FDCAN1LPEN_B_0x0 = 0;
        /** @brief FDCAN1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_FDCAN1LPEN_B_0x1 = 1;

    /** @brief RCC APB2 sleep clock register */
    using RCC_APB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 clock enable during sleep mode Set and reset by software. */
    using RCC_APB2LPENR_TIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: TIM1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief TIM1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x0 = 0;
        /** @brief TIM1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x1 = 1;

    /** @brief SPI1 clock enable during sleep mode Set and reset by software. */
    using RCC_APB2LPENR_SPI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: SPI1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief SPI1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x0 = 0;
        /** @brief SPI1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x1 = 1;

    /** @brief USART1 clock enable during sleep mode Set and reset by software. */
    using RCC_APB2LPENR_USART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: USART1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief USART1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x0 = 0;
        /** @brief USART1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x1 = 1;

    /** @brief USBFS clock enable during sleep mode Set and reset by software. */
    using RCC_APB2LPENR_USBFSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USBFS peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: USBFS peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief USBFS peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USBFSLPEN_B_0x0 = 0;
        /** @brief USBFS peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USBFSLPEN_B_0x1 = 1;

    /** @brief RCC APB3 sleep clock register */
    using RCC_APB3LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS clock enable during sleep mode Set and reset by software. */
    using RCC_APB3LPENR_SBSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBS peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: SBS peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief SBS peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_SBSLPEN_B_0x0 = 0;
        /** @brief SBS peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_SBSLPEN_B_0x1 = 1;

    /** @brief LPUART1 clock enable during sleep mode Set and reset by software. */
    using RCC_APB3LPENR_LPUART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: LPUART1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief LPUART1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_LPUART1LPEN_B_0x0 = 0;
        /** @brief LPUART1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_LPUART1LPEN_B_0x1 = 1;

    /** @brief I3C2 clock enable during sleep mode Set and reset by software. */
    using RCC_APB3LPENR_I3C2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: I3C2 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief I3C2 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_I3C2LPEN_B_0x0 = 0;
        /** @brief I3C2 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_I3C2LPEN_B_0x1 = 1;

    /** @brief LPTIM1 clock enable during sleep mode Set and reset by software. */
    using RCC_APB3LPENR_LPTIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: LPTIM1 peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief LPTIM1 peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM1LPEN_B_0x0 = 0;
        /** @brief LPTIM1 peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_LPTIM1LPEN_B_0x1 = 1;

    /** @brief VREF clock enable during sleep mode Set and reset by software. */
    using RCC_APB3LPENR_VREFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREF peripheral clock disabled during sleep mode (value: 0)
     *          - B_0x1: VREF peripheral clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief VREF peripheral clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_VREFLPEN_B_0x0 = 0;
        /** @brief VREF peripheral clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_VREFLPEN_B_0x1 = 1;

    /** @brief RTC APB interface clock enable during sleep mode Set and reset by software. */
    using RCC_APB3LPENR_RTCAPBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC APB interface clock disabled during sleep mode (value: 0)
     *          - B_0x1: RTC APB interface clock enabled during sleep mode (default after reset) (value: 1)
     */
        /** @brief RTC APB interface clock disabled during sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_RTCAPBLPEN_B_0x0 = 0;
        /** @brief RTC APB interface clock enabled during sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_RTCAPBLPEN_B_0x1 = 1;

    /** @brief RCC kernel clock configuration register */
    using RCC_CCIPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CCIPR1_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk2 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk2 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x5 = 5;

    /** @brief USART2 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CCIPR1_USART2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART2SEL_B_0x5 = 5;

    /** @brief USART3 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CCIPR1_USART3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x5 = 5;

    /** @brief TIM2, TIM3 and LPTIM2 input capture source selection Set and reset by software. */
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
    /** @brief LPTIM1 kernel clock source selection others: reserved, the kernel clock is disabled */
    using RCC_CCIPR2_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x3: lse_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: lsi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: per_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk3 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x1 = 1;
        /** @brief lse_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x3 = 3;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM1SEL_B_0x5 = 5;

    /** @brief LPTIM2 kernel clock source selection others: reserved, the kernel clock is disabled */
    using RCC_CCIPR2_LPTIM2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x3: lse_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: lsi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: per_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x1 = 1;
        /** @brief lse_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x3 = 3;
        /** @brief lsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x4 = 4;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_LPTIM2SEL_B_0x5 = 5;

    /** @brief RCC kernel clock configuration register */
    using RCC_CCIPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CCIPR3_SPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x3: AUDIOCLK selected as kernel clock (value: 3)
     *          - B_0x4: per_ck selected as kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x1 = 1;
        /** @brief AUDIOCLK selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x3 = 3;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI1SEL_B_0x4 = 4;

    /** @brief SPI2 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CCIPR3_SPI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x3: AUDIOCLK selected as kernel clock (value: 3)
     *          - B_0x4: per_ck selected as kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI2SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI2SEL_B_0x1 = 1;
        /** @brief AUDIOCLK selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI2SEL_B_0x3 = 3;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI2SEL_B_0x4 = 4;

    /** @brief SPI3 kernel clock source selection Set and reset by software. others: reserved, the kernel clock is disabled */
    using RCC_CCIPR3_SPI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_p_ck selected as kernel clock (value: 1)
     *          - B_0x3: AUDIOCLK selected as kernel clock (value: 3)
     *          - B_0x4: per_ck selected as kernel clock (value: 4)
     */
        /** @brief pll1_q_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x0 = 0;
        /** @brief pll2_p_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x1 = 1;
        /** @brief AUDIOCLK selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x3 = 3;
        /** @brief per_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x4 = 4;

    /** @brief LPUART1 kernel clock source selection others: reserved, the kernel clock is disabled */
    using RCC_CCIPR3_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 s elected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_q_ck selected as kernel clock (value: 1)
     *          - B_0x3: hsi_ker_ck selected as kernel clock (value: 3)
     *          - B_0x4: csi_ker_ck selected as kernel clock (value: 4)
     *          - B_0x5: lse_ck selected as kernel clock (value: 5)
     */
        /** @brief rcc_pclk3 s elected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x0 = 0;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x3 = 3;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x4 = 4;
        /** @brief lse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x5 = 5;

    /** @brief RCC kernel clock configuration register */
    using RCC_CCIPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSTICK clock source selection Note: rcc_hclk frequency must be four times higher than lsi_ker_ck/lse_ck (period (LSI/LSE) greater than or equal 4 * period (HCLK). */
    using RCC_CCIPR4_SYSTICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_hclk/8 selected as clock source (default after reset) (value: 0)
     *          - B_0x1: lsi_ker_ck[1] selected as clock source (value: 1)
     *          - B_0x2: lse_ck[1] selected as clock source (value: 2)
     *          - B_0x3: reserved, the kernel clock is disabled (value: 3)
     */
        /** @brief rcc_hclk/8 selected as clock source (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_SYSTICKSEL_B_0x0 = 0;
        /** @brief lsi_ker_ck[1] selected as clock source */
    constexpr std::uint32_t RCC_CCIPR4_SYSTICKSEL_B_0x1 = 1;
        /** @brief lse_ck[1] selected as clock source */
    constexpr std::uint32_t RCC_CCIPR4_SYSTICKSEL_B_0x2 = 2;
        /** @brief reserved, the kernel clock is disabled */
    constexpr std::uint32_t RCC_CCIPR4_SYSTICKSEL_B_0x3 = 3;

    /** @brief USBFS kernel clock source selection */
    using RCC_CCIPR4_USBFSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock is selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll2_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: hsi48_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief no clock is selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_USBFSSEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_USBFSSEL_B_0x1 = 1;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_USBFSSEL_B_0x2 = 2;
        /** @brief hsi48_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_USBFSSEL_B_0x3 = 3;

    /** @brief I2C1 kernel clock source selection */
    using RCC_CCIPR4_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: csi_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x0 = 0;
        /** @brief pll2_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x2 = 2;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x3 = 3;

    /** @brief I2C2 kernel clock source selection */
    using RCC_CCIPR4_I2C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: csi_ker_ck selected as kernel clock (value: 3)
     */
        /** @brief rcc_pclk1 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x0 = 0;
        /** @brief pll2_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x2 = 2;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x3 = 3;

    /** @brief I3C1 kernel clock source selection */
    using RCC_CCIPR4_I3C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: no clock selected (value: 3)
     */
        /** @brief rcc_pclk3 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x0 = 0;
        /** @brief pll2_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x2 = 2;
        /** @brief no clock selected */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x3 = 3;

    /** @brief I3C2 kernel clock source selection */
    using RCC_CCIPR4_I3C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk3 selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll2_r_ck selected as kernel clock (value: 1)
     *          - B_0x2: hsi_ker_ck selected as kernel clock (value: 2)
     *          - B_0x3: no clock selected (value: 3)
     */
        /** @brief rcc_pclk3 selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x0 = 0;
        /** @brief pll2_r_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x1 = 1;
        /** @brief hsi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x2 = 2;
        /** @brief no clock selected */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x3 = 3;

    /** @brief RCC kernel clock configuration register */
    using RCC_CCIPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC and DAC kernel clock source selection others: reserved, the kernel clock is disabled */
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

    /** @brief DAC1 sample and hold clock source selection */
    using RCC_CCIPR5_DAC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: dac_hold_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: dac_hold_ck selected as kernel clock (value: 1)
     */
        /** @brief dac_hold_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_DAC1SEL_B_0x0 = 0;
        /** @brief dac_hold_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_DAC1SEL_B_0x1 = 1;

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

    /** @brief FDCAN1 kernel clock source selection */
    using RCC_CCIPR5_FDCAN1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hse_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: pll1_q_ck selected as kernel clock (value: 1)
     *          - B_0x2: pll2_q_ck selected as kernel clock (value: 2)
     *          - B_0x3: reserved, the kernel clock is disabled (value: 3)
     */
        /** @brief hse_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_FDCAN1SEL_B_0x0 = 0;
        /** @brief pll1_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_FDCAN1SEL_B_0x1 = 1;
        /** @brief pll2_q_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_FDCAN1SEL_B_0x2 = 2;
        /** @brief reserved, the kernel clock is disabled */
    constexpr std::uint32_t RCC_CCIPR5_FDCAN1SEL_B_0x3 = 3;

    /** @brief per_ck clock source selection */
    using RCC_CCIPR5_CKPERSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ker_ck selected as kernel clock (default after reset) (value: 0)
     *          - B_0x1: csi_ker_ck selected as kernel clock (value: 1)
     *          - B_0x2: hse_ck selected as kernel clock (value: 2)
     *          - B_0x3: reserved, the per_ck clock is disabled (value: 3)
     */
        /** @brief hsi_ker_ck selected as kernel clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_CKPERSEL_B_0x0 = 0;
        /** @brief csi_ker_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_CKPERSEL_B_0x1 = 1;
        /** @brief hse_ck selected as kernel clock */
    constexpr std::uint32_t RCC_CCIPR5_CKPERSEL_B_0x2 = 2;
        /** @brief reserved, the per_ck clock is disabled */
    constexpr std::uint32_t RCC_CCIPR5_CKPERSEL_B_0x3 = 3;

    /** @brief RCC Backup domain control register */
    using RCC_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief LSE oscillator driving capability Set by software to select the driving capability of the LSE oscillator. These bit can be written only if LSE oscillator is disabled (LSEON = 0 and LSERDY = 0). */
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

    /** @brief low-speed external clock type in bypass mode Set and reset by software to select the external clock type (analog or digital). The external clock must be enabled with the LSEON bit, to be used by the device. The LSEEXT bit can be written only if the LSE oscillator is disabled. */
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

    /** @brief Low-speed clock output (LSCO) enable Set and cleared by software. */
    using RCC_BDCR_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSCO output disabled (value: 0)
     *          - B_0x1: LSCO output enabled (value: 1)
     */
        /** @brief LSCO output disabled */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x0 = 0;
        /** @brief LSCO output enabled */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x1 = 1;

    /** @brief Low-speed clock output selection Set and cleared by software. */
    using RCC_BDCR_LSCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI clock selected (value: 0)
     *          - B_0x1: LSE clock selected (value: 1)
     */
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x0 = 0;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x1 = 1;

    /** @brief LSI oscillator enable Set and cleared by software. */
    using RCC_BDCR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI oscillator off (value: 0)
     *          - B_0x1: LSI oscillator on (value: 1)
     */
        /** @brief LSI oscillator off */
    constexpr std::uint32_t RCC_BDCR_LSION_B_0x0 = 0;
        /** @brief LSI oscillator on */
    constexpr std::uint32_t RCC_BDCR_LSION_B_0x1 = 1;

    /** @brief LSI oscillator ready Set and cleared by hardware to indicate when the LSI oscillator is stable. After the LSION bit is cleared, LSIRDY goes low after three internal low-speed oscillator clock cycles. This bit is set when the LSI is used by IWDG or RTC, even if LSION = 0. */
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
    /** @brief remove reset flag Set and reset by software to reset the value of the reset flags. */
    using RCC_RSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reset of the reset flags not activated (default after power-on reset) (value: 0)
     *          - B_0x1: resets the value of the reset flags (value: 1)
     */
        /** @brief reset of the reset flags not activated (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x0 = 0;
        /** @brief resets the value of the reset flags */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x1 = 1;

    /** @brief pin reset flag (NRST) Reset by software by writing the RMVF bit. Set by hardware when a reset from pin occurs. */
    using RCC_RSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset from pin occurred (value: 0)
     *          - B_0x1: reset from pin occurred (default after power-on reset) (value: 1)
     */
        /** @brief no reset from pin occurred */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x0 = 0;
        /** @brief reset from pin occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x1 = 1;

    /** @brief BOR reset flag Reset by software by writing the RMVF bit. Set by hardware when a BOR reset occurs (pwr_bor_rst). */
    using RCC_RSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no BOR reset occurred (value: 0)
     *          - B_0x1: BOR reset occurred (default after power-on reset) (value: 1)
     */
        /** @brief no BOR reset occurred */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x1 = 1;

    /** @brief system reset from CPU reset flag Reset by software by writing the RMVF bit. Set by hardware when the system reset is due to CPU.The CPU can generate a system reset by writing SYSRESETREQ bit of AIRCR register of the core M33. */
    using RCC_RSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no CPU software reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: a system reset has been generated by the CPU (value: 1)
     */
        /** @brief no CPU software reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x0 = 0;
        /** @brief a system reset has been generated by the CPU */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x1 = 1;

    /** @brief independent watchdog reset flag Reset by software by writing the RMVF bit. Set by hardware when an independent watchdog reset occurs. */
    using RCC_RSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no independent watchdog reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: independent watchdog reset occurred (value: 1)
     */
        /** @brief no independent watchdog reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x0 = 0;
        /** @brief independent watchdog reset occurred */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x1 = 1;

    /** @brief window watchdog reset flag Reset by software by writing the RMVF bit. Set by hardware when a window watchdog reset occurs. */
    using RCC_RSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no window watchdog reset occurred from WWDG (default after power-on reset) (value: 0)
     *          - B_0x1: window watchdog reset occurred from WWDG (value: 1)
     */
        /** @brief no window watchdog reset occurred from WWDG (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x0 = 0;
        /** @brief window watchdog reset occurred from WWDG */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Low-power reset flag Set by hardware when a reset occurs due to Stop or Standby mode entry, whereas the corresponding nRST_STOP, nRST_STBY option bit is cleared. Cleared by writing to the RMVF bit. */
    using RCC_RSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal low-power mode reset occurred (value: 0)
     *          - B_0x1: Illegal low-power mode reset occurred (value: 1)
     */
        /** @brief No illegal low-power mode reset occurred */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x0 = 0;
        /** @brief Illegal low-power mode reset occurred */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x1 = 1;

}

#endif
