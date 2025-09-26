/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G474_RCC_HPP
#define EMBEDDED_PP_STM32G474_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Reset and clock control */
namespace STM32G474::RCC {

    /** @brief Clock control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock enable Set and cleared by software. Cleared by hardware to stop the HSI16 oscillator when entering Stop, Standby or Shutdown mode. Set by hardware to force the HSI16 oscillator ON when STOPWUCK=1 or HSIASFS = 1 when leaving Stop modes, or in case of failure of the HSE crystal oscillator. This bit is set by hardware if the HSI16 is used directly or indirectly as system clock. */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator OFF (value: 0)
     *          - B_0x1: HSI16 oscillator ON (value: 1)
     */
        /** @brief HSI16 oscillator OFF */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI16 oscillator ON */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI16 always enable for peripheral kernels. Set and cleared by software to force HSI16 ON even in Stop modes. The HSI16 can only feed USARTs and I<sup>2</sup>Cs peripherals configured with HSI16 as kernel clock. Keeping the HSI16 ON in Stop mode allows to avoid slowing down the communication speed because of the HSI16 startup time. This bit has no effect on HSION value. */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect on HSI16 oscillator. (value: 0)
     *          - B_0x1: HSI16 oscillator is forced ON even in Stop mode. (value: 1)
     */
        /** @brief No effect on HSI16 oscillator. */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI16 oscillator is forced ON even in Stop mode. */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x1 = 1;

    /** @brief HSI16 clock ready flag Set by hardware to indicate that HSI16 oscillator is stable. This bit is set only when HSI16 is enabled by software by setting HSION. Note: Once the HSION bit is cleared, HSIRDY goes low after 6 HSI16 clock cycles. */
    using RCC_CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator not ready (value: 0)
     *          - B_0x1: HSI16 oscillator ready (value: 1)
     */
        /** @brief HSI16 oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x0 = 0;
        /** @brief HSI16 oscillator ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x1 = 1;

    /** @brief HSE clock enable Set and cleared by software. Cleared by hardware to stop the HSE oscillator when entering Stop, Standby or Shutdown mode. This bit cannot be reset if the HSE oscillator is used directly or indirectly as the system clock. */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator OFF (value: 0)
     *          - B_0x1: HSE oscillator ON (value: 1)
     */
        /** @brief HSE oscillator OFF */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief HSE oscillator ON */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x1 = 1;

    /** @brief HSE clock ready flag Set by hardware to indicate that the HSE oscillator is stable. Note: Once the HSEON bit is cleared, HSERDY goes low after 6 HSE clock cycles. */
    using RCC_CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator not ready (value: 0)
     *          - B_0x1: HSE oscillator ready (value: 1)
     */
        /** @brief HSE oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x0 = 0;
        /** @brief HSE oscillator ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x1 = 1;

    /** @brief HSE crystal oscillator bypass Set and cleared by software to bypass the oscillator with an external clock. The external clock must be enabled with the HSEON bit set, to be used by the device. The HSEBYP bit can be written only if the HSE oscillator is disabled. */
    using RCC_CR_HSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE crystal oscillator not bypassed (value: 0)
     *          - B_0x1: HSE crystal oscillator bypassed with external clock (value: 1)
     */
        /** @brief HSE crystal oscillator not bypassed */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x0 = 0;
        /** @brief HSE crystal oscillator bypassed with external clock */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x1 = 1;

    /** @brief Clock security system enable Set by software to enable the clock security system. When CSSON is set, the clock detector is enabled by hardware when the HSE oscillator is ready, and disabled by hardware if a HSE clock failure is detected. This bit is set only and is cleared by reset. */
    using RCC_CR_CSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock security system OFF (clock detector OFF) (value: 0)
     *          - B_0x1: Clock security system ON (Clock detector ON if the HSE oscillator is stable, OFF if not). (value: 1)
     */
        /** @brief Clock security system OFF (clock detector OFF) */
    constexpr std::uint32_t RCC_CR_CSSON_B_0x0 = 0;
        /** @brief Clock security system ON (Clock detector ON if the HSE oscillator is stable, OFF if not). */
    constexpr std::uint32_t RCC_CR_CSSON_B_0x1 = 1;

    /** @brief Main PLL enable Set and cleared by software to enable the main PLL. Cleared by hardware when entering Stop, Standby or Shutdown mode. This bit cannot be reset if the PLL clock is used as the system clock. */
    using RCC_CR_PLLON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL OFF (value: 0)
     *          - B_0x1: PLL ON (value: 1)
     */
        /** @brief PLL OFF */
    constexpr std::uint32_t RCC_CR_PLLON_B_0x0 = 0;
        /** @brief PLL ON */
    constexpr std::uint32_t RCC_CR_PLLON_B_0x1 = 1;

    /** @brief Main PLL clock ready flag Set by hardware to indicate that the main PLL is locked. */
    using RCC_CR_PLLRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL unlocked (value: 0)
     *          - B_0x1: PLL locked (value: 1)
     */
        /** @brief PLL unlocked */
    constexpr std::uint32_t RCC_CR_PLLRDY_B_0x0 = 0;
        /** @brief PLL locked */
    constexpr std::uint32_t RCC_CR_PLLRDY_B_0x1 = 1;

    /** @brief Internal clock sources calibration register */
    using RCC_ICSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock calibration These bits are initialized at startup with the factory-programmed HSI16 calibration trim value. When HSITRIM is written, HSICAL is updated with the sum of HSITRIM and the factory trim value. */
    using RCC_ICSCR_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock trimming These bits provide an additional user-programmable trimming value that is added to the HSICAL[7:0] bits. It can be programmed to adjust to variations in voltage and temperature that influence the frequency of the HSI16. The default value is 16, which, when added to the HSICAL value, should trim the HSI16 to 16 MHz 1 %. */
    using RCC_ICSCR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock configuration register */
    using RCC_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System clock switch Set and cleared by software to select system clock source (SYSCLK). Configured by hardware to force HSI16 oscillator selection when exiting stop and standby modes or in case of failure of the HSE oscillator. */
    using RCC_CFGR_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved, must be kept at reset value (value: 0)
     *          - B_0x1: HSI16 selected as system clock (value: 1)
     *          - B_0x2: HSE selected as system clock (value: 2)
     *          - B_0x3: PLL selected as system clock (value: 3)
     */
        /** @brief Reserved, must be kept at reset value */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x0 = 0;
        /** @brief HSI16 selected as system clock */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x1 = 1;
        /** @brief HSE selected as system clock */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x2 = 2;
        /** @brief PLL selected as system clock */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x3 = 3;

    /** @brief System clock switch status Set and cleared by hardware to indicate which clock source is used as system clock. */
    using RCC_CFGR_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved, must be kept at reset value (value: 0)
     *          - B_0x1: HSI16 oscillator used as system clock (value: 1)
     *          - B_0x2: HSE used as system clock (value: 2)
     *          - B_0x3: PLL used as system clock (value: 3)
     */
        /** @brief Reserved, must be kept at reset value */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x0 = 0;
        /** @brief HSI16 oscillator used as system clock */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x1 = 1;
        /** @brief HSE used as system clock */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x2 = 2;
        /** @brief PLL used as system clock */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x3 = 3;

    /** @brief AHB prescaler Set and cleared by software to control the division factor of the AHB clock. Note: Depending on the device voltage range, the software has to set correctly these bits to ensure that the system frequency does not exceed the maximum allowed frequency (for more details please refer to Section 6.1.5: Dynamic voltage scaling management). After a write operation to these bits and before decreasing the voltage range, this register must be read to be sure that the new value has been taken into account. 0xxx: SYSCLK not divided */
    using RCC_CFGR_HPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x8: SYSCLK divided by 2 (value: 8)
     *          - B_0x9: SYSCLK divided by 4 (value: 9)
     *          - B_0xA: SYSCLK divided by 8 (value: 10)
     *          - B_0xB: SYSCLK divided by 16 (value: 11)
     *          - B_0xC: SYSCLK divided by 64 (value: 12)
     *          - B_0xD: SYSCLK divided by 128 (value: 13)
     *          - B_0xE: SYSCLK divided by 256 (value: 14)
     *          - B_0xF: SYSCLK divided by 512 (value: 15)
     */
        /** @brief SYSCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0x8 = 8;
        /** @brief SYSCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0x9 = 9;
        /** @brief SYSCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xA = 10;
        /** @brief SYSCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xB = 11;
        /** @brief SYSCLK divided by 64 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xC = 12;
        /** @brief SYSCLK divided by 128 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xD = 13;
        /** @brief SYSCLK divided by 256 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xE = 14;
        /** @brief SYSCLK divided by 512 */
    constexpr std::uint32_t RCC_CFGR_HPRE_B_0xF = 15;

    /** @brief APB1 prescaler Set and cleared by software to control the division factor of the APB1 clock (PCLK1). 0xx: HCLK not divided */
    using RCC_CFGR_PPRE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: HCLK divided by 2 (value: 4)
     *          - B_0x5: HCLK divided by 4 (value: 5)
     *          - B_0x6: HCLK divided by 8 (value: 6)
     *          - B_0x7: HCLK divided by 16 (value: 7)
     */
        /** @brief HCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR_PPRE1_B_0x4 = 4;
        /** @brief HCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR_PPRE1_B_0x5 = 5;
        /** @brief HCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR_PPRE1_B_0x6 = 6;
        /** @brief HCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR_PPRE1_B_0x7 = 7;

    /** @brief APB2 prescaler Set and cleared by software to control the division factor of the APB2 clock (PCLK2). 0xx: HCLK not divided */
    using RCC_CFGR_PPRE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: HCLK divided by 2 (value: 4)
     *          - B_0x5: HCLK divided by 4 (value: 5)
     *          - B_0x6: HCLK divided by 8 (value: 6)
     *          - B_0x7: HCLK divided by 16 (value: 7)
     */
        /** @brief HCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR_PPRE2_B_0x4 = 4;
        /** @brief HCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR_PPRE2_B_0x5 = 5;
        /** @brief HCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR_PPRE2_B_0x6 = 6;
        /** @brief HCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR_PPRE2_B_0x7 = 7;

    /** @brief Microcontroller clock output Set and cleared by software. Others: Reserved Note: This clock output may have some truncated cycles at startup or during MCO clock source switching. */
    using RCC_CFGR_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO output disabled, no clock on MCO (value: 0)
     *          - B_0x1: SYSCLK system clock selected (value: 1)
     *          - B_0x2: Reserved, must be kept at reset value (value: 2)
     *          - B_0x3: HSI16 clock selected (value: 3)
     *          - B_0x4: HSE clock selected (value: 4)
     *          - B_0x5: Main PLL clock selected (value: 5)
     *          - B_0x6: LSI clock selected (value: 6)
     *          - B_0x7: LSE clock selected (value: 7)
     *          - B_0x8: Internal HSI48 clock selected (value: 8)
     */
        /** @brief MCO output disabled, no clock on MCO */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x0 = 0;
        /** @brief SYSCLK system clock selected */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x1 = 1;
        /** @brief Reserved, must be kept at reset value */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x2 = 2;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x3 = 3;
        /** @brief HSE clock selected */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x4 = 4;
        /** @brief Main PLL clock selected */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x5 = 5;
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x6 = 6;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x7 = 7;
        /** @brief Internal HSI48 clock selected */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x8 = 8;

    /** @brief Microcontroller clock output prescaler These bits are set and cleared by software. It is highly recommended to change this prescaler before MCO output is enabled. Others: not allowed */
    using RCC_CFGR_MCOPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO is divided by 1 (value: 0)
     *          - B_0x1: MCO is divided by 2 (value: 1)
     *          - B_0x2: MCO is divided by 4 (value: 2)
     *          - B_0x3: MCO is divided by 8 (value: 3)
     *          - B_0x4: MCO is divided by 16 (value: 4)
     */
        /** @brief MCO is divided by 1 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x0 = 0;
        /** @brief MCO is divided by 2 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x1 = 1;
        /** @brief MCO is divided by 4 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x2 = 2;
        /** @brief MCO is divided by 8 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x3 = 3;
        /** @brief MCO is divided by 16 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x4 = 4;

    /** @brief PLL configuration register */
    using RCC_PLLCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Main PLL entry clock source Set and cleared by software to select PLL clock source. These bits can be written only when PLL is disabled. In order to save power, when no PLL is used, the value of PLLSRC should be 00. */
    using RCC_PLLCFGR_PLLSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock sent to PLL (value: 0)
     *          - B_0x1: No clock sent to PLL (value: 1)
     *          - B_0x2: HSI16 clock selected as PLL clock entry (value: 2)
     *          - B_0x3: HSE clock selected as PLL clock entry (value: 3)
     */
        /** @brief No clock sent to PLL */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x0 = 0;
        /** @brief No clock sent to PLL */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x1 = 1;
        /** @brief HSI16 clock selected as PLL clock entry */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x2 = 2;
        /** @brief HSE clock selected as PLL clock entry */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x3 = 3;

    /** @brief Division factor for the main PLL input clock Set and cleared by software to divide the PLL input clock before the VCO. These bits can be written only when all PLLs are disabled. VCO input frequency = PLL input clock frequency / PLLM with 1 <= PLLM <= 16 ... Note: The software has to set these bits correctly to ensure that the VCO input frequency is within the range defined in the device datasheet. */
    using RCC_PLLCFGR_PLLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLLM = 1 (value: 0)
     *          - B_0x1: PLLM = 2 (value: 1)
     *          - B_0x2: PLLM = 3 (value: 2)
     *          - B_0x3: PLLM = 4 (value: 3)
     *          - B_0x4: PLLM = 5 (value: 4)
     *          - B_0x5: PLLM = 6 (value: 5)
     *          - B_0x6: PLLM = 7 (value: 6)
     *          - B_0x7: PLLM = 8 (value: 7)
     *          - B_0x8: PLLSYSM = 9 (value: 8)
     *          - B_0xF: PLLSYSM= 16 (value: 15)
     */
        /** @brief PLLM = 1 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x0 = 0;
        /** @brief PLLM = 2 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x1 = 1;
        /** @brief PLLM = 3 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x2 = 2;
        /** @brief PLLM = 4 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x3 = 3;
        /** @brief PLLM = 5 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x4 = 4;
        /** @brief PLLM = 6 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x5 = 5;
        /** @brief PLLM = 7 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x6 = 6;
        /** @brief PLLM = 8 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x7 = 7;
        /** @brief PLLSYSM = 9 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0x8 = 8;
        /** @brief PLLSYSM= 16 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLM_B_0xF = 15;

    /** @brief Main PLL multiplication factor for VCO Set and cleared by software to control the multiplication factor of the VCO. These bits can be written only when the PLL is disabled. VCO output frequency = VCO input frequency x PLLN with 8 =< PLLN =< 127 ... ... Note: The software has to set correctly these bits to assure that the VCO output frequency is within the range defined in the device datasheet. */
    using RCC_PLLCFGR_PLLN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLLN = 0 wrong configuration (value: 0)
     *          - B_0x1: PLLN = 1 wrong configuration (value: 1)
     *          - B_0x7: PLLN = 7 wrong configuration (value: 7)
     *          - B_0x8: PLLN = 8 (value: 8)
     *          - B_0x9: PLLN = 9 (value: 9)
     *          - B_0x7F: PLLN = 127 (value: 127)
     */
        /** @brief PLLN = 0 wrong configuration */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x0 = 0;
        /** @brief PLLN = 1 wrong configuration */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x1 = 1;
        /** @brief PLLN = 7 wrong configuration */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x7 = 7;
        /** @brief PLLN = 8 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x8 = 8;
        /** @brief PLLN = 9 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x9 = 9;
        /** @brief PLLN = 127 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x7F = 127;

    /** @brief Main PLL PLL P clock output enable Set and reset by software to enable the PLL P clock output of the PLL. In order to save power, when the PLL P clock output of the PLL is not used, the value of PLLPEN should be 0. */
    using RCC_PLLCFGR_PLLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL P clock output disable (value: 0)
     *          - B_0x1: PLL P clock output enable (value: 1)
     */
        /** @brief PLL P clock output disable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPEN_B_0x0 = 0;
        /** @brief PLL P clock output enable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPEN_B_0x1 = 1;

    /** @brief Main PLL division factor for PLL P clock. Set and cleared by software to control the frequency of the main PLL output clock PLL P clock. These bits can be written only if PLL is disabled. When the PLLPDIV[4:0] is set to 00000PLL P output clock frequency = VCO frequency / PLLP with PLLP =7, or 17 Note: The software has to set these bits correctly not to exceed 170 MHz on this domain. */
    using RCC_PLLCFGR_PLLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLLP = 7 (value: 0)
     *          - B_0x1: PLLP = 17 (value: 1)
     */
        /** @brief PLLP = 7 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLP_B_0x0 = 0;
        /** @brief PLLP = 17 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLP_B_0x1 = 1;

    /** @brief Main PLL Q clock output enable Set and reset by software to enable the PLL Q clock output of the PLL. In order to save power, when the PLL Q clock output of the PLL is not used, the value of PLLQEN should be 0. */
    using RCC_PLLCFGR_PLLQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL Q clock output disable (value: 0)
     *          - B_0x1: PLL Q clock output enable (value: 1)
     */
        /** @brief PLL Q clock output disable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQEN_B_0x0 = 0;
        /** @brief PLL Q clock output enable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQEN_B_0x1 = 1;

    /** @brief Main PLL division factor for PLL Q clock. Set and cleared by software to control the frequency of the main PLL output clock PLL Q clock. This output can be selected for USB, RNG, SAI (48 MHz clock). These bits can be written only if PLL is disabled. PLL Q output clock frequency = VCO frequency / PLLQ with PLLQ = 2, 4, 6, or 8 Note: The software has to set these bits correctly not to exceed 170 MHz on this domain. */
    using RCC_PLLCFGR_PLLQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLLQ = 2 (value: 0)
     *          - B_0x1: PLLQ = 4 (value: 1)
     *          - B_0x2: PLLQ = 6 (value: 2)
     *          - B_0x3: PLLQ = 8 (value: 3)
     */
        /** @brief PLLQ = 2 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x0 = 0;
        /** @brief PLLQ = 4 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x1 = 1;
        /** @brief PLLQ = 6 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x2 = 2;
        /** @brief PLLQ = 8 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQ_B_0x3 = 3;

    /** @brief PLL R clock output enable Set and reset by software to enable the PLL R clock output of the PLL (used as system clock). This bit cannot be written when PLL R clock output of the PLL is used as System Clock. In order to save power, when the PLL R clock output of the PLL is not used, the value of PLLREN should be 0. */
    using RCC_PLLCFGR_PLLREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL R clock output disable (value: 0)
     *          - B_0x1: PLL R clock output enable (value: 1)
     */
        /** @brief PLL R clock output disable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLREN_B_0x0 = 0;
        /** @brief PLL R clock output enable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLREN_B_0x1 = 1;

    /** @brief Main PLL division factor for PLL R clock (system clock) Set and cleared by software to control the frequency of the main PLL output clock PLLCLK. This output can be selected as system clock. These bits can be written only if PLL is disabled. PLL R output clock frequency = VCO frequency / PLLR with PLLR = 2, 4, 6, or 8 Note: The software has to set these bits correctly not to exceed 170 MHz on this domain. */
    using RCC_PLLCFGR_PLLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLLR = 2 (value: 0)
     *          - B_0x1: PLLR = 4 (value: 1)
     *          - B_0x2: PLLR = 6 (value: 2)
     *          - B_0x3: PLLR = 8 (value: 3)
     */
        /** @brief PLLR = 2 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x0 = 0;
        /** @brief PLLR = 4 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x1 = 1;
        /** @brief PLLR = 6 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x2 = 2;
        /** @brief PLLR = 8 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLR_B_0x3 = 3;

    /** @brief Main PLLP division factor Set and cleared by software to control the PLL P frequency. PLL P output clock frequency = VCO frequency / PLLPDIV. .... */
    using RCC_PLLCFGR_PLLPDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL P clock is controlled by the bit PLLP (value: 0)
     *          - B_0x1: Reserved. (value: 1)
     *          - B_0x2: PLL P clock = VCO / 2 (value: 2)
     *          - B_0x1F: PLL P clock = VCO / 31 (value: 31)
     */
        /** @brief PLL P clock is controlled by the bit PLLP */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPDIV_B_0x0 = 0;
        /** @brief Reserved. */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPDIV_B_0x1 = 1;
        /** @brief PLL P clock = VCO / 2 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPDIV_B_0x2 = 2;
        /** @brief PLL P clock = VCO / 31 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPDIV_B_0x1F = 31;

    /** @brief Clock interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the LSI oscillator stabilization. */
    using RCC_CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI ready interrupt disabled (value: 0)
     *          - B_0x1: LSI ready interrupt enabled (value: 1)
     */
        /** @brief LSI ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x0 = 0;
        /** @brief LSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x1 = 1;

    /** @brief LSE ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the LSE oscillator stabilization. */
    using RCC_CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE ready interrupt disabled (value: 0)
     *          - B_0x1: LSE ready interrupt enabled (value: 1)
     */
        /** @brief LSE ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x0 = 0;
        /** @brief LSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x1 = 1;

    /** @brief HSI16 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the HSI16 oscillator stabilization. */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 ready interrupt disabled (value: 0)
     *          - B_0x1: HSI16 ready interrupt enabled (value: 1)
     */
        /** @brief HSI16 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief HSI16 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the HSE oscillator stabilization. */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE ready interrupt disabled (value: 0)
     *          - B_0x1: HSE ready interrupt enabled (value: 1)
     */
        /** @brief HSE ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

    /** @brief PLL ready interrupt enable Set and cleared by software to enable/disable interrupt caused by PLL lock. */
    using RCC_CIER_PLLRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL lock interrupt disabled (value: 0)
     *          - B_0x1: PLL lock interrupt enabled (value: 1)
     */
        /** @brief PLL lock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_PLLRDYIE_B_0x0 = 0;
        /** @brief PLL lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLLRDYIE_B_0x1 = 1;

    /** @brief LSE clock security system interrupt enable Set and cleared by software to enable/disable interrupt caused by the clock security system on LSE. */
    using RCC_CIER_LSECSSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock security interrupt caused by LSE clock failure disabled (value: 0)
     *          - B_0x1: Clock security interrupt caused by LSE clock failure enabled (value: 1)
     */
        /** @brief Clock security interrupt caused by LSE clock failure disabled */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x0 = 0;
        /** @brief Clock security interrupt caused by LSE clock failure enabled */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x1 = 1;

    /** @brief HSI48 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the internal HSI48 oscillator. */
    using RCC_CIER_HSI48RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 ready interrupt disabled (value: 0)
     *          - B_0x1: HSI48 ready interrupt enabled (value: 1)
     */
        /** @brief HSI48 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x0 = 0;
        /** @brief HSI48 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x1 = 1;

    /** @brief Clock interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt flag Set by hardware when the LSI clock becomes stable and LSIRDYDIE is set. Cleared by software setting the LSIRDYC bit. */
    using RCC_CIFR_LSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the LSI oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the LSI oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the LSI oscillator */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the LSI oscillator */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag Set by hardware when the LSE clock becomes stable and LSERDYDIE is set. Cleared by software setting the LSERDYC bit. */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the LSE oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the LSE oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief HSI16 ready interrupt flag Set by hardware when the HSI16 clock becomes stable and HSIRDYDIE is set in a response to setting the HSION (refer to Clock control register (RCC_CR)). When HSION is not set but the HSI16 oscillator is enabled by the peripheral through a clock request, this bit is not set and no interrupt is generated. Cleared by software setting the HSIRDYC bit. */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSI16 oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSI16 oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag Set by hardware when the HSE clock becomes stable and HSERDYDIE is set. Cleared by software setting the HSERDYC bit. */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSE oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSE oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief PLL ready interrupt flag Set by hardware when the PLL locks and PLLRDYDIE is set. Cleared by software setting the PLLRDYC bit. */
    using RCC_CIFR_PLLRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by PLL lock (value: 0)
     *          - B_0x1: Clock ready interrupt caused by PLL lock (value: 1)
     */
        /** @brief No clock ready interrupt caused by PLL lock */
    constexpr std::uint32_t RCC_CIFR_PLLRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by PLL lock */
    constexpr std::uint32_t RCC_CIFR_PLLRDYF_B_0x1 = 1;

    /** @brief Clock security system interrupt flag Set by hardware when a failure is detected in the HSE oscillator. Cleared by software setting the CSSC bit. */
    using RCC_CIFR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock security interrupt caused by HSE clock failure (value: 0)
     *          - B_0x1: Clock security interrupt caused by HSE clock failure (value: 1)
     */
        /** @brief No clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x0 = 0;
        /** @brief Clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x1 = 1;

    /** @brief LSE Clock security system interrupt flag Set by hardware when a failure is detected in the LSE oscillator. Cleared by software setting the LSECSSC bit. */
    using RCC_CIFR_LSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock security interrupt caused by LSE clock failure (value: 0)
     *          - B_0x1: Clock security interrupt caused by LSE clock failure (value: 1)
     */
        /** @brief No clock security interrupt caused by LSE clock failure */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x0 = 0;
        /** @brief Clock security interrupt caused by LSE clock failure */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x1 = 1;

    /** @brief HSI48 ready interrupt flag Set by hardware when the HSI48 clock becomes stable and HSI48RDYIE is set in a response to setting the HSI48ON (refer to Clock recovery RC register (RCC_CRRCR)). Cleared by software setting the HSI48RDYC bit. */
    using RCC_CIFR_HSI48RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSI48 oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSI48 oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSI48 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSI48 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x1 = 1;

    /** @brief Clock interrupt clear register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt clear This bit is set by software to clear the LSIRDYF flag. */
    using RCC_CICR_LSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: LSIRDYF cleared (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x0 = 0;
        /** @brief LSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x1 = 1;

    /** @brief LSE ready interrupt clear This bit is set by software to clear the LSERDYF flag. */
    using RCC_CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: LSERDYF cleared (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x0 = 0;
        /** @brief LSERDYF cleared */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x1 = 1;

    /** @brief HSI16 ready interrupt clear This bit is set software to clear the HSIRDYF flag. */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear HSIRDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x0 = 0;
        /** @brief Clear HSIRDYF flag */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x1 = 1;

    /** @brief HSE ready interrupt clear This bit is set by software to clear the HSERDYF flag. */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear HSERDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x0 = 0;
        /** @brief Clear HSERDYF flag */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x1 = 1;

    /** @brief PLL ready interrupt clear This bit is set by software to clear the PLLRDYF flag. */
    using RCC_CICR_PLLRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear PLLRDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_PLLRDYC_B_0x0 = 0;
        /** @brief Clear PLLRDYF flag */
    constexpr std::uint32_t RCC_CICR_PLLRDYC_B_0x1 = 1;

    /** @brief Clock security system interrupt clear This bit is set by software to clear the CSSF flag. */
    using RCC_CICR_CSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear CSSF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_CSSC_B_0x0 = 0;
        /** @brief Clear CSSF flag */
    constexpr std::uint32_t RCC_CICR_CSSC_B_0x1 = 1;

    /** @brief LSE Clock security system interrupt clear This bit is set by software to clear the LSECSSF flag. */
    using RCC_CICR_LSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear LSECSSF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x0 = 0;
        /** @brief Clear LSECSSF flag */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x1 = 1;

    /** @brief HSI48 oscillator ready interrupt clear This bit is set by software to clear the HSI48RDYF flag. */
    using RCC_CICR_HSI48RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear the HSI48RDYC flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_HSI48RDYC_B_0x0 = 0;
        /** @brief Clear the HSI48RDYC flag */
    constexpr std::uint32_t RCC_CICR_HSI48RDYC_B_0x1 = 1;

    /** @brief AHB1 peripheral reset register */
    using RCC_AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 reset Set and cleared by software. */
    using RCC_AHB1RSTR_DMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DMA1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA1RST_B_0x0 = 0;
        /** @brief Reset DMA1 */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA1RST_B_0x1 = 1;

    /** @brief DMA2 reset Set and cleared by software. */
    using RCC_AHB1RSTR_DMA2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DMA2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA2RST_B_0x0 = 0;
        /** @brief Reset DMA2 */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA2RST_B_0x1 = 1;

    /** @brief Set and cleared by software. */
    using RCC_AHB1RSTR_DMAMUX1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DMAMUX1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_DMAMUX1RST_B_0x0 = 0;
        /** @brief Reset DMAMUX1 */
    constexpr std::uint32_t RCC_AHB1RSTR_DMAMUX1RST_B_0x1 = 1;

    /** @brief Set and cleared by software */
    using RCC_AHB1RSTR_CORDICRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CORDIC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_CORDICRST_B_0x0 = 0;
        /** @brief Reset CORDIC */
    constexpr std::uint32_t RCC_AHB1RSTR_CORDICRST_B_0x1 = 1;

    /** @brief Set and cleared by software */
    using RCC_AHB1RSTR_FMACRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset FMAC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_FMACRST_B_0x0 = 0;
        /** @brief Reset FMAC */
    constexpr std::uint32_t RCC_AHB1RSTR_FMACRST_B_0x1 = 1;

    /** @brief Flash memory interface reset Set and cleared by software. This bit can be activated only when the Flash memory is in power down mode. */
    using RCC_AHB1RSTR_FLASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset Flash memory interface (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_FLASHRST_B_0x0 = 0;
        /** @brief Reset Flash memory interface */
    constexpr std::uint32_t RCC_AHB1RSTR_FLASHRST_B_0x1 = 1;

    /** @brief CRC reset Set and cleared by software. */
    using RCC_AHB1RSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CRC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x0 = 0;
        /** @brief Reset CRC */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x1 = 1;

    /** @brief AHB2 peripheral reset register */
    using RCC_AHB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO port A reset Set and cleared by software. */
    using RCC_AHB2RSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port A (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x0 = 0;
        /** @brief Reset IO port A */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x1 = 1;

    /** @brief IO port B reset Set and cleared by software. */
    using RCC_AHB2RSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port B (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x0 = 0;
        /** @brief Reset IO port B */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x1 = 1;

    /** @brief IO port C reset Set and cleared by software. */
    using RCC_AHB2RSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port C (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x0 = 0;
        /** @brief Reset IO port C */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x1 = 1;

    /** @brief IO port D reset Set and cleared by software. */
    using RCC_AHB2RSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port D (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIODRST_B_0x0 = 0;
        /** @brief Reset IO port D */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIODRST_B_0x1 = 1;

    /** @brief IO port E reset Set and cleared by software. */
    using RCC_AHB2RSTR_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port E (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOERST_B_0x0 = 0;
        /** @brief Reset IO port E */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOERST_B_0x1 = 1;

    /** @brief IO port F reset Set and cleared by software. */
    using RCC_AHB2RSTR_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port F (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOFRST_B_0x0 = 0;
        /** @brief Reset IO port F */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOFRST_B_0x1 = 1;

    /** @brief IO port G reset Set and cleared by software. */
    using RCC_AHB2RSTR_GPIOGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port G (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOGRST_B_0x0 = 0;
        /** @brief Reset IO port G */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOGRST_B_0x1 = 1;

    /** @brief ADC12 reset Set and cleared by software. */
    using RCC_AHB2RSTR_ADC12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset ADC12 interface (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_ADC12RST_B_0x0 = 0;
        /** @brief Reset ADC12 interface */
    constexpr std::uint32_t RCC_AHB2RSTR_ADC12RST_B_0x1 = 1;

    /** @brief ADC345 reset Set and cleared by software. */
    using RCC_AHB2RSTR_ADC345RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset ADC345 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_ADC345RST_B_0x0 = 0;
        /** @brief Reset ADC345 */
    constexpr std::uint32_t RCC_AHB2RSTR_ADC345RST_B_0x1 = 1;

    /** @brief DAC1 reset Set and cleared by software. */
    using RCC_AHB2RSTR_DAC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DAC1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC1RST_B_0x0 = 0;
        /** @brief Reset DAC1 */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC1RST_B_0x1 = 1;

    /** @brief DAC2 reset Set and cleared by software. */
    using RCC_AHB2RSTR_DAC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DAC2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC2RST_B_0x0 = 0;
        /** @brief Reset DAC2 */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC2RST_B_0x1 = 1;

    /** @brief DAC3 reset Set and cleared by software. */
    using RCC_AHB2RSTR_DAC3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DAC3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC3RST_B_0x0 = 0;
        /** @brief Reset DAC3 */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC3RST_B_0x1 = 1;

    /** @brief DAC4 reset Set and cleared by software. */
    using RCC_AHB2RSTR_DAC4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DAC4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC4RST_B_0x0 = 0;
        /** @brief Reset DAC4 */
    constexpr std::uint32_t RCC_AHB2RSTR_DAC4RST_B_0x1 = 1;

    /** @brief AESRST reset Set and cleared by software. */
    using RCC_AHB2RSTR_AESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset AES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_AESRST_B_0x0 = 0;
        /** @brief Reset AES */
    constexpr std::uint32_t RCC_AHB2RSTR_AESRST_B_0x1 = 1;

    /** @brief RNG reset Set and cleared by software. */
    using RCC_AHB2RSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset RNG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x0 = 0;
        /** @brief Reset RNG */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x1 = 1;

    /** @brief AHB3 peripheral reset register */
    using RCC_AHB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flexible static memory controller reset Set and cleared by software. */
    using RCC_AHB3RSTR_FMCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset FSMC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB3RSTR_FMCRST_B_0x0 = 0;
        /** @brief Reset FSMC */
    constexpr std::uint32_t RCC_AHB3RSTR_FMCRST_B_0x1 = 1;

    /** @brief QUADSPI reset Set and cleared by software. */
    using RCC_AHB3RSTR_QSPIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset QUADSPI (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB3RSTR_QSPIRST_B_0x0 = 0;
        /** @brief Reset QUADSPI */
    constexpr std::uint32_t RCC_AHB3RSTR_QSPIRST_B_0x1 = 1;

    /** @brief APB1 peripheral reset register 1 */
    using RCC_APB1RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 timer reset Set and cleared by software. */
    using RCC_APB1RSTR1_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x0 = 0;
        /** @brief Reset TIM2 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 timer reset Set and cleared by software. */
    using RCC_APB1RSTR1_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x0 = 0;
        /** @brief Reset TIM3 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x1 = 1;

    /** @brief TIM3 timer reset Set and cleared by software. */
    using RCC_APB1RSTR1_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x0 = 0;
        /** @brief Reset TIM3 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x1 = 1;

    /** @brief TIM5 timer reset Set and cleared by software. */
    using RCC_APB1RSTR1_TIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM5 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM5RST_B_0x0 = 0;
        /** @brief Reset TIM5 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM5RST_B_0x1 = 1;

    /** @brief TIM6 timer reset Set and cleared by software. */
    using RCC_APB1RSTR1_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM7 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM6RST_B_0x0 = 0;
        /** @brief Reset TIM7 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM6RST_B_0x1 = 1;

    /** @brief TIM7 timer reset Set and cleared by software. */
    using RCC_APB1RSTR1_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM7 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM7RST_B_0x0 = 0;
        /** @brief Reset TIM7 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM7RST_B_0x1 = 1;

    /** @brief CRS reset Set and cleared by software. */
    using RCC_APB1RSTR1_CRSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CRS (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_CRSRST_B_0x0 = 0;
        /** @brief Reset CRS */
    constexpr std::uint32_t RCC_APB1RSTR1_CRSRST_B_0x1 = 1;

    /** @brief SPI2 reset Set and cleared by software. */
    using RCC_APB1RSTR1_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x0 = 0;
        /** @brief Reset SPI2 */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x1 = 1;

    /** @brief SPI3 reset Set and cleared by software. */
    using RCC_APB1RSTR1_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI3RST_B_0x0 = 0;
        /** @brief Reset SPI3 */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI3RST_B_0x1 = 1;

    /** @brief USART2 reset Set and cleared by software. */
    using RCC_APB1RSTR1_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x0 = 0;
        /** @brief Reset USART2 */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x1 = 1;

    /** @brief USART3 reset Set and cleared by software. */
    using RCC_APB1RSTR1_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x0 = 0;
        /** @brief Reset USART3 */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x1 = 1;

    /** @brief UART4 reset Set and cleared by software. */
    using RCC_APB1RSTR1_UART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UART4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_UART4RST_B_0x0 = 0;
        /** @brief Reset UART4 */
    constexpr std::uint32_t RCC_APB1RSTR1_UART4RST_B_0x1 = 1;

    /** @brief UART5 reset Set and cleared by software. */
    using RCC_APB1RSTR1_UART5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UART5 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_UART5RST_B_0x0 = 0;
        /** @brief Reset UART5 */
    constexpr std::uint32_t RCC_APB1RSTR1_UART5RST_B_0x1 = 1;

    /** @brief I2C1 reset Set and cleared by software. */
    using RCC_APB1RSTR1_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x0 = 0;
        /** @brief Reset I2C1 */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x1 = 1;

    /** @brief I2C2 reset Set and cleared by software. */
    using RCC_APB1RSTR1_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x0 = 0;
        /** @brief Reset I2C2 */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x1 = 1;

    /** @brief USB device reset Set and reset by software. */
    using RCC_APB1RSTR1_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USB device (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USBRST_B_0x0 = 0;
        /** @brief Reset USB device */
    constexpr std::uint32_t RCC_APB1RSTR1_USBRST_B_0x1 = 1;

    /** @brief FDCAN reset Set and reset by software. */
    using RCC_APB1RSTR1_FDCANRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the FDCAN (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_FDCANRST_B_0x0 = 0;
        /** @brief Reset the FDCAN */
    constexpr std::uint32_t RCC_APB1RSTR1_FDCANRST_B_0x1 = 1;

    /** @brief Power interface reset Set and cleared by software. */
    using RCC_APB1RSTR1_PWRRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset PWR (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_PWRRST_B_0x0 = 0;
        /** @brief Reset PWR */
    constexpr std::uint32_t RCC_APB1RSTR1_PWRRST_B_0x1 = 1;

    /** @brief I2C3 reset Set and cleared by software. */
    using RCC_APB1RSTR1_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C3 interface (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C3RST_B_0x0 = 0;
        /** @brief Reset I2C3 interface */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C3RST_B_0x1 = 1;

    /** @brief Low Power Timer 1 reset Set and cleared by software. */
    using RCC_APB1RSTR1_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_LPTIM1RST_B_0x0 = 0;
        /** @brief Reset LPTIM1 */
    constexpr std::uint32_t RCC_APB1RSTR1_LPTIM1RST_B_0x1 = 1;

    /** @brief APB1 peripheral reset register 2 */
    using RCC_APB1RSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power UART 1 reset Set and cleared by software. */
    using RCC_APB1RSTR2_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPUART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_LPUART1RST_B_0x0 = 0;
        /** @brief Reset LPUART1 */
    constexpr std::uint32_t RCC_APB1RSTR2_LPUART1RST_B_0x1 = 1;

    /** @brief I2C4 reset Set and cleared by software */
    using RCC_APB1RSTR2_I2C4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C4RST_B_0x0 = 0;
        /** @brief Reset I2C4 */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C4RST_B_0x1 = 1;

    /** @brief UCPD1 reset Set and cleared by software. */
    using RCC_APB1RSTR2_UCPD1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UCPD1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_UCPD1RST_B_0x0 = 0;
        /** @brief Reset UCPD1 */
    constexpr std::uint32_t RCC_APB1RSTR2_UCPD1RST_B_0x1 = 1;

    /** @brief APB2 peripheral reset register */
    using RCC_APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG + COMP + OPAMP + VREFBUF reset */
    using RCC_APB2RSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SYSCFG + COMP + OPAMP + VREFBUF (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SYSCFGRST_B_0x0 = 0;
        /** @brief Reset SYSCFG + COMP + OPAMP + VREFBUF */
    constexpr std::uint32_t RCC_APB2RSTR_SYSCFGRST_B_0x1 = 1;

    /** @brief TIM1 timer reset Set and cleared by software. */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM1 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief Reset TIM1 timer */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief SPI1 reset Set and cleared by software. */
    using RCC_APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief Reset SPI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief TIM8 timer reset Set and cleared by software. */
    using RCC_APB2RSTR_TIM8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM8 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x0 = 0;
        /** @brief Reset TIM8 timer */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x1 = 1;

    /** @brief USART1 reset Set and cleared by software. */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief Reset USART1 */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief SPI4 reset Set and cleared by software. */
    using RCC_APB2RSTR_SPI4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x0 = 0;
        /** @brief Reset SPI4 */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x1 = 1;

    /** @brief TIM15 timer reset Set and cleared by software. */
    using RCC_APB2RSTR_TIM15RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM15 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x0 = 0;
        /** @brief Reset TIM15 timer */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x1 = 1;

    /** @brief TIM16 timer reset Set and cleared by software. */
    using RCC_APB2RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM16 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x0 = 0;
        /** @brief Reset TIM16 timer */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x1 = 1;

    /** @brief TIM17 timer reset Set and cleared by software. */
    using RCC_APB2RSTR_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM17 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x0 = 0;
        /** @brief Reset TIM17 timer */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x1 = 1;

    /** @brief TIM20 reset Set and cleared by software. */
    using RCC_APB2RSTR_TIM20RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM20 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM20RST_B_0x0 = 0;
        /** @brief Reset TIM20 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM20RST_B_0x1 = 1;

    /** @brief Serial audio interface 1 (SAI1) reset Set and cleared by software. */
    using RCC_APB2RSTR_SAI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SAI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x0 = 0;
        /** @brief Reset SAI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x1 = 1;

    /** @brief HRTIM1 reset Set and cleared by software. */
    using RCC_APB2RSTR_HRTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset HRTIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_HRTIM1RST_B_0x0 = 0;
        /** @brief Reset HRTIM1 */
    constexpr std::uint32_t RCC_APB2RSTR_HRTIM1RST_B_0x1 = 1;

    /** @brief AHB1 peripheral clock enable register */
    using RCC_AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 clock enable Set and cleared by software. */
    using RCC_AHB1ENR_DMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA1 clock disable (value: 0)
     *          - B_0x1: DMA1 clock enable (value: 1)
     */
        /** @brief DMA1 clock disable */
    constexpr std::uint32_t RCC_AHB1ENR_DMA1EN_B_0x0 = 0;
        /** @brief DMA1 clock enable */
    constexpr std::uint32_t RCC_AHB1ENR_DMA1EN_B_0x1 = 1;

    /** @brief DMA2 clock enable Set and cleared by software. */
    using RCC_AHB1ENR_DMA2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2 clock disable (value: 0)
     *          - B_0x1: DMA2 clock enable (value: 1)
     */
        /** @brief DMA2 clock disable */
    constexpr std::uint32_t RCC_AHB1ENR_DMA2EN_B_0x0 = 0;
        /** @brief DMA2 clock enable */
    constexpr std::uint32_t RCC_AHB1ENR_DMA2EN_B_0x1 = 1;

    /** @brief DMAMUX1 clock enable Set and reset by software. */
    using RCC_AHB1ENR_DMAMUX1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMAMUX1 clock disabled (value: 0)
     *          - B_0x1: DMAMUX1 clock enabled (value: 1)
     */
        /** @brief DMAMUX1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_DMAMUX1EN_B_0x0 = 0;
        /** @brief DMAMUX1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_DMAMUX1EN_B_0x1 = 1;

    /** @brief CORDIC clock enable Set and reset by software. */
    using RCC_AHB1ENR_CORDICEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CORDIC clock disabled (value: 0)
     *          - B_0x1: CORDIC clock enabled (value: 1)
     */
        /** @brief CORDIC clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_CORDICEN_B_0x0 = 0;
        /** @brief CORDIC clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_CORDICEN_B_0x1 = 1;

    /** @brief FMAC enable Set and reset by software. */
    using RCC_AHB1ENR_FMACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMAC clock disabled (value: 0)
     *          - B_0x1: FMAC clock enabled (value: 1)
     */
        /** @brief FMAC clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_FMACEN_B_0x0 = 0;
        /** @brief FMAC clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_FMACEN_B_0x1 = 1;

    /** @brief Flash memory interface clock enable Set and cleared by software. This bit can be disabled only when the Flash is in power down mode. */
    using RCC_AHB1ENR_FLASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory interface clock disable (value: 0)
     *          - B_0x1: Flash memory interface clock enable (value: 1)
     */
        /** @brief Flash memory interface clock disable */
    constexpr std::uint32_t RCC_AHB1ENR_FLASHEN_B_0x0 = 0;
        /** @brief Flash memory interface clock enable */
    constexpr std::uint32_t RCC_AHB1ENR_FLASHEN_B_0x1 = 1;

    /** @brief CRC clock enable Set and cleared by software. */
    using RCC_AHB1ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC clock disable (value: 0)
     *          - B_0x1: CRC clock enable (value: 1)
     */
        /** @brief CRC clock disable */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x0 = 0;
        /** @brief CRC clock enable */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x1 = 1;

    /** @brief AHB2 peripheral clock enable register */
    using RCC_AHB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO port A clock enable Set and cleared by software. */
    using RCC_AHB2ENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port A clock disabled (value: 0)
     *          - B_0x1: IO port A clock enabled (value: 1)
     */
        /** @brief IO port A clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x0 = 0;
        /** @brief IO port A clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x1 = 1;

    /** @brief IO port B clock enable Set and cleared by software. */
    using RCC_AHB2ENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port B clock disabled (value: 0)
     *          - B_0x1: IO port B clock enabled (value: 1)
     */
        /** @brief IO port B clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x0 = 0;
        /** @brief IO port B clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x1 = 1;

    /** @brief IO port C clock enable Set and cleared by software. */
    using RCC_AHB2ENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port C clock disabled (value: 0)
     *          - B_0x1: IO port C clock enabled (value: 1)
     */
        /** @brief IO port C clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x0 = 0;
        /** @brief IO port C clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x1 = 1;

    /** @brief IO port D clock enable Set and cleared by software. */
    using RCC_AHB2ENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port D clock disabled (value: 0)
     *          - B_0x1: IO port D clock enabled (value: 1)
     */
        /** @brief IO port D clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIODEN_B_0x0 = 0;
        /** @brief IO port D clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIODEN_B_0x1 = 1;

    /** @brief IO port E clock enable Set and cleared by software. */
    using RCC_AHB2ENR_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port E clock disabled (value: 0)
     *          - B_0x1: IO port E clock enabled (value: 1)
     */
        /** @brief IO port E clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOEEN_B_0x0 = 0;
        /** @brief IO port E clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOEEN_B_0x1 = 1;

    /** @brief IO port F clock enable Set and cleared by software. */
    using RCC_AHB2ENR_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port F clock disabled (value: 0)
     *          - B_0x1: IO port F clock enabled (value: 1)
     */
        /** @brief IO port F clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOFEN_B_0x0 = 0;
        /** @brief IO port F clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOFEN_B_0x1 = 1;

    /** @brief IO port G clock enable Set and cleared by software. */
    using RCC_AHB2ENR_GPIOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port G clock disabled (value: 0)
     *          - B_0x1: IO port G clock enabled (value: 1)
     */
        /** @brief IO port G clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOGEN_B_0x0 = 0;
        /** @brief IO port G clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOGEN_B_0x1 = 1;

    /** @brief ADC12 clock enable Set and cleared by software. */
    using RCC_AHB2ENR_ADC12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC12 clock disabled (value: 0)
     *          - B_0x1: ADC12 clock enabled (value: 1)
     */
        /** @brief ADC12 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_ADC12EN_B_0x0 = 0;
        /** @brief ADC12 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_ADC12EN_B_0x1 = 1;

    /** @brief ADC345 clock enable Set and cleared by software */
    using RCC_AHB2ENR_ADC345EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC345 clock disabled (value: 0)
     *          - B_0x1: ADC345 clock enabled (value: 1)
     */
        /** @brief ADC345 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_ADC345EN_B_0x0 = 0;
        /** @brief ADC345 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_ADC345EN_B_0x1 = 1;

    /** @brief DAC1 clock enable Set and cleared by software. */
    using RCC_AHB2ENR_DAC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 clock disabled (value: 0)
     *          - B_0x1: DAC1 clock enabled (value: 1)
     */
        /** @brief DAC1 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC1EN_B_0x0 = 0;
        /** @brief DAC1 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC1EN_B_0x1 = 1;

    /** @brief DAC2 clock enable Set and cleared by software. */
    using RCC_AHB2ENR_DAC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC2 clock disabled (value: 0)
     *          - B_0x1: DAC2 clock enabled (value: 1)
     */
        /** @brief DAC2 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC2EN_B_0x0 = 0;
        /** @brief DAC2 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC2EN_B_0x1 = 1;

    /** @brief DAC3 clock enable Set and cleared by software. */
    using RCC_AHB2ENR_DAC3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC3 clock disabled (value: 0)
     *          - B_0x1: DAC3 clock enabled (value: 1)
     */
        /** @brief DAC3 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC3EN_B_0x0 = 0;
        /** @brief DAC3 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC3EN_B_0x1 = 1;

    /** @brief DAC4 clock enable Set and cleared by software. */
    using RCC_AHB2ENR_DAC4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC4 clock disabled (value: 0)
     *          - B_0x1: DAC4 clock enabled (value: 1)
     */
        /** @brief DAC4 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC4EN_B_0x0 = 0;
        /** @brief DAC4 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_DAC4EN_B_0x1 = 1;

    /** @brief AES clock enable Set and cleared by software. */
    using RCC_AHB2ENR_AESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES clock disabled (value: 0)
     *          - B_0x1: AES clock enabled (value: 1)
     */
        /** @brief AES clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_AESEN_B_0x0 = 0;
        /** @brief AES clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_AESEN_B_0x1 = 1;

    /** @brief RNG enable Set and cleared by software. */
    using RCC_AHB2ENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG disabled (value: 0)
     *          - B_0x1: RNG enabled (value: 1)
     */
        /** @brief RNG disabled */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x0 = 0;
        /** @brief RNG enabled */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x1 = 1;

    /** @brief AHB3 peripheral clock enable register */
    using RCC_AHB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flexible static memory controller clock enable Set and cleared by software. */
    using RCC_AHB3ENR_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FSMC clock disable (value: 0)
     *          - B_0x1: FSMC clock enable (value: 1)
     */
        /** @brief FSMC clock disable */
    constexpr std::uint32_t RCC_AHB3ENR_FMCEN_B_0x0 = 0;
        /** @brief FSMC clock enable */
    constexpr std::uint32_t RCC_AHB3ENR_FMCEN_B_0x1 = 1;

    /** @brief QUADSPI memory interface clock enable Set and cleared by software. */
    using RCC_AHB3ENR_QSPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: QUADSPI clock disable (value: 0)
     *          - B_0x1: QUADSPI clock enable (value: 1)
     */
        /** @brief QUADSPI clock disable */
    constexpr std::uint32_t RCC_AHB3ENR_QSPIEN_B_0x0 = 0;
        /** @brief QUADSPI clock enable */
    constexpr std::uint32_t RCC_AHB3ENR_QSPIEN_B_0x1 = 1;

    /** @brief APB1 peripheral clock enable register 1 */
    using RCC_APB1ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 timer clock enable Set and cleared by software. */
    using RCC_APB1ENR1_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 clock disabled (value: 0)
     *          - B_0x1: TIM2 clock enabled (value: 1)
     */
        /** @brief TIM2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 timer clock enable Set and cleared by software. */
    using RCC_APB1ENR1_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 clock disabled (value: 0)
     *          - B_0x1: TIM3 clock enabled (value: 1)
     */
        /** @brief TIM3 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x1 = 1;

    /** @brief TIM4 timer clock enable Set and cleared by software. */
    using RCC_APB1ENR1_TIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 clock disabled (value: 0)
     *          - B_0x1: TIM4 clock enabled (value: 1)
     */
        /** @brief TIM4 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x0 = 0;
        /** @brief TIM4 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x1 = 1;

    /** @brief TIM5 timer clock enable Set and cleared by software. */
    using RCC_APB1ENR1_TIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 clock disabled (value: 0)
     *          - B_0x1: TIM5 clock enabled (value: 1)
     */
        /** @brief TIM5 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM5EN_B_0x0 = 0;
        /** @brief TIM5 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM5EN_B_0x1 = 1;

    /** @brief TIM6 timer clock enable Set and cleared by software. */
    using RCC_APB1ENR1_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 clock disabled (value: 0)
     *          - B_0x1: TIM6 clock enabled (value: 1)
     */
        /** @brief TIM6 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM6EN_B_0x0 = 0;
        /** @brief TIM6 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 timer clock enable Set and cleared by software. */
    using RCC_APB1ENR1_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 clock disabled (value: 0)
     *          - B_0x1: TIM7 clock enabled (value: 1)
     */
        /** @brief TIM7 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM7EN_B_0x0 = 0;
        /** @brief TIM7 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM7EN_B_0x1 = 1;

    /** @brief CRS Recovery System clock enable Set and cleared by software. */
    using RCC_APB1ENR1_CRSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS clock disabled (value: 0)
     *          - B_0x1: CRS clock enabled (value: 1)
     */
        /** @brief CRS clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_CRSEN_B_0x0 = 0;
        /** @brief CRS clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_CRSEN_B_0x1 = 1;

    /** @brief RTC APB clock enable Set and cleared by software */
    using RCC_APB1ENR1_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC APB clock disabled (value: 0)
     *          - B_0x1: RTC APB clock enabled (value: 1)
     */
        /** @brief RTC APB clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_RTCAPBEN_B_0x0 = 0;
        /** @brief RTC APB clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_RTCAPBEN_B_0x1 = 1;

    /** @brief Window watchdog clock enable Set by software to enable the window watchdog clock. Reset by hardware system reset. This bit can also be set by hardware if the WWDG_SW option bit is reset. */
    using RCC_APB1ENR1_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Window watchdog clock disabled (value: 0)
     *          - B_0x1: Window watchdog clock enabled (value: 1)
     */
        /** @brief Window watchdog clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x0 = 0;
        /** @brief Window watchdog clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x1 = 1;

    /** @brief SPI2 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 clock disabled (value: 0)
     *          - B_0x1: SPI2 clock enabled (value: 1)
     */
        /** @brief SPI2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI2EN_B_0x0 = 0;
        /** @brief SPI2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI2EN_B_0x1 = 1;

    /** @brief SPI3 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 clock disabled (value: 0)
     *          - B_0x1: SPI3 clock enabled (value: 1)
     */
        /** @brief SPI3 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI3EN_B_0x1 = 1;

    /** @brief USART2 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 clock disabled (value: 0)
     *          - B_0x1: USART2 clock enabled (value: 1)
     */
        /** @brief USART2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x0 = 0;
        /** @brief USART2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x1 = 1;

    /** @brief USART3 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 clock disabled (value: 0)
     *          - B_0x1: USART3 clock enabled (value: 1)
     */
        /** @brief USART3 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART3EN_B_0x0 = 0;
        /** @brief USART3 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART3EN_B_0x1 = 1;

    /** @brief UART4 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_UART4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 clock disabled (value: 0)
     *          - B_0x1: UART4 clock enabled (value: 1)
     */
        /** @brief UART4 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART4EN_B_0x0 = 0;
        /** @brief UART4 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART4EN_B_0x1 = 1;

    /** @brief UART5 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_UART5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 clock disabled (value: 0)
     *          - B_0x1: UART5 clock enabled (value: 1)
     */
        /** @brief UART5 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART5EN_B_0x0 = 0;
        /** @brief UART5 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART5EN_B_0x1 = 1;

    /** @brief I2C1 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 clock disabled (value: 0)
     *          - B_0x1: I2C1 clock enabled (value: 1)
     */
        /** @brief I2C1 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1EN_B_0x0 = 0;
        /** @brief I2C1 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 clock disabled (value: 0)
     *          - B_0x1: I2C2 clock enabled (value: 1)
     */
        /** @brief I2C2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C2EN_B_0x0 = 0;
        /** @brief I2C2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C2EN_B_0x1 = 1;

    /** @brief USB device clock enable Set and cleared by software. */
    using RCC_APB1ENR1_USBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB device clock disabled (value: 0)
     *          - B_0x1: USB device clock enabled (value: 1)
     */
        /** @brief USB device clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_USBEN_B_0x0 = 0;
        /** @brief USB device clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USBEN_B_0x1 = 1;

    /** @brief FDCAN clock enable Set and cleared by software. */
    using RCC_APB1ENR1_FDCANEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN clock disabled (value: 0)
     *          - B_0x1: FDCAN clock enabled (value: 1)
     */
        /** @brief FDCAN clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_FDCANEN_B_0x0 = 0;
        /** @brief FDCAN clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_FDCANEN_B_0x1 = 1;

    /** @brief Power interface clock enable Set and cleared by software. */
    using RCC_APB1ENR1_PWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power interface clock disabled (value: 0)
     *          - B_0x1: Power interface clock enabled (value: 1)
     */
        /** @brief Power interface clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_PWREN_B_0x0 = 0;
        /** @brief Power interface clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_PWREN_B_0x1 = 1;

    /** @brief I2C3 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 clock disabled (value: 0)
     *          - B_0x1: I2C3 clock enabled (value: 1)
     */
        /** @brief I2C3 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C3EN_B_0x0 = 0;
        /** @brief I2C3 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C3EN_B_0x1 = 1;

    /** @brief Low power timer 1 clock enable Set and cleared by software. */
    using RCC_APB1ENR1_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 clock disabled (value: 0)
     *          - B_0x1: LPTIM1 clock enabled (value: 1)
     */
        /** @brief LPTIM1 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_LPTIM1EN_B_0x0 = 0;
        /** @brief LPTIM1 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_LPTIM1EN_B_0x1 = 1;

    /** @brief APB1 peripheral clock enable register 2 */
    using RCC_APB1ENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low power UART 1 clock enable Set and cleared by software. */
    using RCC_APB1ENR2_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 clock disable (value: 0)
     *          - B_0x1: LPUART1 clock enable (value: 1)
     */
        /** @brief LPUART1 clock disable */
    constexpr std::uint32_t RCC_APB1ENR2_LPUART1EN_B_0x0 = 0;
        /** @brief LPUART1 clock enable */
    constexpr std::uint32_t RCC_APB1ENR2_LPUART1EN_B_0x1 = 1;

    /** @brief I2C4 clock enable Set and cleared by software */
    using RCC_APB1ENR2_I2C4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 clock disabled (value: 0)
     *          - B_0x1: I2C4 clock enabled (value: 1)
     */
        /** @brief I2C4 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C4EN_B_0x0 = 0;
        /** @brief I2C4 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C4EN_B_0x1 = 1;

    /** @brief UCPD1 clock enable Set and cleared by software. */
    using RCC_APB1ENR2_UCPD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD1 clock disable (value: 0)
     *          - B_0x1: UCPD1 clock enable (value: 1)
     */
        /** @brief UCPD1 clock disable */
    constexpr std::uint32_t RCC_APB1ENR2_UCPD1EN_B_0x0 = 0;
        /** @brief UCPD1 clock enable */
    constexpr std::uint32_t RCC_APB1ENR2_UCPD1EN_B_0x1 = 1;

    /** @brief APB2 peripheral clock enable register */
    using RCC_APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG + COMP + VREFBUF + OPAMP clock enable Set and cleared by software. */
    using RCC_APB2ENR_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG + COMP + VREFBUF + OPAMP clock disabled (value: 0)
     *          - B_0x1: SYSCFG + COMP + VREFBUF + OPAMP clock enabled (value: 1)
     */
        /** @brief SYSCFG + COMP + VREFBUF + OPAMP clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_SYSCFGEN_B_0x0 = 0;
        /** @brief SYSCFG + COMP + VREFBUF + OPAMP clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SYSCFGEN_B_0x1 = 1;

    /** @brief TIM1 timer clock enable Set and cleared by software. */
    using RCC_APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 timer clock disabled (value: 0)
     *          - B_0x1: TIM1P timer clock enabled (value: 1)
     */
        /** @brief TIM1 timer clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1P timer clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief SPI1 clock enable Set and cleared by software. */
    using RCC_APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 clock disabled (value: 0)
     *          - B_0x1: SPI1 clock enabled (value: 1)
     */
        /** @brief SPI1 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI1 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief TIM8 timer clock enable Set and cleared by software. */
    using RCC_APB2ENR_TIM8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 timer clock disabled (value: 0)
     *          - B_0x1: TIM8 timer clock enabled (value: 1)
     */
        /** @brief TIM8 timer clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x0 = 0;
        /** @brief TIM8 timer clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x1 = 1;

    /** @brief USART1clock enable Set and cleared by software. */
    using RCC_APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1clock disabled (value: 0)
     *          - B_0x1: USART1clock enabled (value: 1)
     */
        /** @brief USART1clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief SPI4 clock enable Set and cleared by software. */
    using RCC_APB2ENR_SPI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 clock disabled (value: 0)
     *          - B_0x1: SPI4 clock enabled (value: 1)
     */
        /** @brief SPI4 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x0 = 0;
        /** @brief SPI4 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x1 = 1;

    /** @brief TIM15 timer clock enable Set and cleared by software. */
    using RCC_APB2ENR_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 timer clock disabled (value: 0)
     *          - B_0x1: TIM15 timer clock enabled (value: 1)
     */
        /** @brief TIM15 timer clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x0 = 0;
        /** @brief TIM15 timer clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x1 = 1;

    /** @brief TIM16 timer clock enable Set and cleared by software. */
    using RCC_APB2ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 timer clock disabled (value: 0)
     *          - B_0x1: TIM16 timer clock enabled (value: 1)
     */
        /** @brief TIM16 timer clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x0 = 0;
        /** @brief TIM16 timer clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x1 = 1;

    /** @brief TIM17 timer clock enable Set and cleared by software. */
    using RCC_APB2ENR_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 timer clock disabled (value: 0)
     *          - B_0x1: TIM17 timer clock enabled (value: 1)
     */
        /** @brief TIM17 timer clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x0 = 0;
        /** @brief TIM17 timer clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x1 = 1;

    /** @brief TIM20 timer clock enable Set and cleared by software. */
    using RCC_APB2ENR_TIM20EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM20 clock disabled (value: 0)
     *          - B_0x1: TIM20 clock enabled (value: 1)
     */
        /** @brief TIM20 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM20EN_B_0x0 = 0;
        /** @brief TIM20 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM20EN_B_0x1 = 1;

    /** @brief SAI1 clock enable Set and cleared by software. */
    using RCC_APB2ENR_SAI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 clock disabled (value: 0)
     *          - B_0x1: SAI1 clock enabled (value: 1)
     */
        /** @brief SAI1 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x0 = 0;
        /** @brief SAI1 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x1 = 1;

    /** @brief HRTIM1 clock enable Set and cleared by software. */
    using RCC_APB2ENR_HRTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HRTIM1 clock disabled (value: 0)
     *          - B_0x1: HRTIM1 clock enable (value: 1)
     */
        /** @brief HRTIM1 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_HRTIM1EN_B_0x0 = 0;
        /** @brief HRTIM1 clock enable */
    constexpr std::uint32_t RCC_APB2ENR_HRTIM1EN_B_0x1 = 1;

    /** @brief AHB1 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_AHB1SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB1SMENR_DMA1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: DMA1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief DMA1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DMA1SMEN_B_0x0 = 0;
        /** @brief DMA1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DMA1SMEN_B_0x1 = 1;

    /** @brief DMA2 clocks enable during Sleep and Stop modes Set and cleared by software during Sleep mode. */
    using RCC_AHB1SMENR_DMA2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: DMA2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief DMA2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DMA2SMEN_B_0x0 = 0;
        /** @brief DMA2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DMA2SMEN_B_0x1 = 1;

    /** @brief DMAMUX1 clock enable during Sleep and Stop modes. Set and cleared by software. */
    using RCC_AHB1SMENR_DMAMUX1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMAMUX1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: DMAMUX1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief DMAMUX1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DMAMUX1SMEN_B_0x0 = 0;
        /** @brief DMAMUX1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DMAMUX1SMEN_B_0x1 = 1;

    /** @brief CORDICSM clock enable. Set and cleared by software. */
    using RCC_AHB1SMENR_CORDICSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CORDICSM clocks disabled. (value: 0)
     *          - B_0x1: CORDICSM clocks enabled. (value: 1)
     */
        /** @brief CORDICSM clocks disabled. */
    constexpr std::uint32_t RCC_AHB1SMENR_CORDICSMEN_B_0x0 = 0;
        /** @brief CORDICSM clocks enabled. */
    constexpr std::uint32_t RCC_AHB1SMENR_CORDICSMEN_B_0x1 = 1;

    /** @brief FMACSM clock enable. Set and cleared by software. */
    using RCC_AHB1SMENR_FMACSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMACSM clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: FMACSM clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief FMACSM clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FMACSMEN_B_0x0 = 0;
        /** @brief FMACSM clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FMACSMEN_B_0x1 = 1;

    /** @brief Flash memory interface clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB1SMENR_FLASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: Flash memory interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief Flash memory interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FLASHSMEN_B_0x0 = 0;
        /** @brief Flash memory interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FLASHSMEN_B_0x1 = 1;

    /** @brief SRAM1 interface clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB1SMENR_SRAM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM1 interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM1 interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_SRAM1SMEN_B_0x0 = 0;
        /** @brief SRAM1 interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_SRAM1SMEN_B_0x1 = 1;

    /** @brief CRC clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB1SMENR_CRCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: CRC clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief CRC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CRCSMEN_B_0x0 = 0;
        /** @brief CRC clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CRCSMEN_B_0x1 = 1;

    /** @brief AHB2 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_AHB2SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO port A clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_GPIOASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port A clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port A clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port A clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOASMEN_B_0x0 = 0;
        /** @brief IO port A clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOASMEN_B_0x1 = 1;

    /** @brief IO port B clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_GPIOBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port B clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port B clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port B clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOBSMEN_B_0x0 = 0;
        /** @brief IO port B clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOBSMEN_B_0x1 = 1;

    /** @brief IO port C clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_GPIOCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port C clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port C clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port C clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOCSMEN_B_0x0 = 0;
        /** @brief IO port C clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOCSMEN_B_0x1 = 1;

    /** @brief IO port D clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_GPIODSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port D clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port D clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port D clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIODSMEN_B_0x0 = 0;
        /** @brief IO port D clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIODSMEN_B_0x1 = 1;

    /** @brief IO port E clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_GPIOESMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port E clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port E clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port E clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOESMEN_B_0x0 = 0;
        /** @brief IO port E clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOESMEN_B_0x1 = 1;

    /** @brief IO port F clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_GPIOFSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port F clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port F clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port F clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOFSMEN_B_0x0 = 0;
        /** @brief IO port F clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOFSMEN_B_0x1 = 1;

    /** @brief IO port G clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_GPIOGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port G clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port G clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port G clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOGSMEN_B_0x0 = 0;
        /** @brief IO port G clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOGSMEN_B_0x1 = 1;

    /** @brief CCM SRAM interface clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_CCMSRAMSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCM SRAM interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: CCM SRAM interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief CCM SRAM interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_CCMSRAMSMEN_B_0x0 = 0;
        /** @brief CCM SRAM interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_CCMSRAMSMEN_B_0x1 = 1;

    /** @brief SRAM2 interface clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_SRAM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM2 interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM2 interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_SRAM2SMEN_B_0x0 = 0;
        /** @brief SRAM2 interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_SRAM2SMEN_B_0x1 = 1;

    /** @brief ADC12 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB2SMENR_ADC12SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC12 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ADC12 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief ADC12 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_ADC12SMEN_B_0x0 = 0;
        /** @brief ADC12 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_ADC12SMEN_B_0x1 = 1;

    /** @brief ADC345 clock enable Set and cleared by software. */
    using RCC_AHB2SMENR_ADC345SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC345 clock disabled (value: 0)
     *          - B_0x1: ADC345 clock enabled (value: 1)
     */
        /** @brief ADC345 clock disabled */
    constexpr std::uint32_t RCC_AHB2SMENR_ADC345SMEN_B_0x0 = 0;
        /** @brief ADC345 clock enabled */
    constexpr std::uint32_t RCC_AHB2SMENR_ADC345SMEN_B_0x1 = 1;

    /** @brief DAC1 clock enable Set and cleared by software. */
    using RCC_AHB2SMENR_DAC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 clock disabled (value: 0)
     *          - B_0x1: DAC1 clock enabled during sleep and stop modes (value: 1)
     */
        /** @brief DAC1 clock disabled */
    constexpr std::uint32_t RCC_AHB2SMENR_DAC1SMEN_B_0x0 = 0;
        /** @brief DAC1 clock enabled during sleep and stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_DAC1SMEN_B_0x1 = 1;

    /** @brief DAC2 clock enable Set and cleared by software. */
    using RCC_AHB2SMENR_DAC2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC2 clock disabled (value: 0)
     *          - B_0x1: DAC2 clock enabled during sleep and stop modes (value: 1)
     */
        /** @brief DAC2 clock disabled */
    constexpr std::uint32_t RCC_AHB2SMENR_DAC2SMEN_B_0x0 = 0;
        /** @brief DAC2 clock enabled during sleep and stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_DAC2SMEN_B_0x1 = 1;

    /** @brief DAC3 clock enable Set and cleared by software. */
    using RCC_AHB2SMENR_DAC3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC3 clock disabled (value: 0)
     *          - B_0x1: DAC3 clock enabled during sleep and stop modes (value: 1)
     */
        /** @brief DAC3 clock disabled */
    constexpr std::uint32_t RCC_AHB2SMENR_DAC3SMEN_B_0x0 = 0;
        /** @brief DAC3 clock enabled during sleep and stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_DAC3SMEN_B_0x1 = 1;

    /** @brief DAC4 clock enable Set and cleared by software. */
    using RCC_AHB2SMENR_DAC4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC4 clock disabled (value: 0)
     *          - B_0x1: DAC4 clock enabled during sleep and stop modes (value: 1)
     */
        /** @brief DAC4 clock disabled */
    constexpr std::uint32_t RCC_AHB2SMENR_DAC4SMEN_B_0x0 = 0;
        /** @brief DAC4 clock enabled during sleep and stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_DAC4SMEN_B_0x1 = 1;

    /** @brief AESM clocks enable Set and cleared by software. */
    using RCC_AHB2SMENR_AESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AESM clocks disabled (value: 0)
     *          - B_0x1: AESM clocks enabled (value: 1)
     */
        /** @brief AESM clocks disabled */
    constexpr std::uint32_t RCC_AHB2SMENR_AESSMEN_B_0x0 = 0;
        /** @brief AESM clocks enabled */
    constexpr std::uint32_t RCC_AHB2SMENR_AESSMEN_B_0x1 = 1;

    /** @brief RNG enable Set and cleared by software. */
    using RCC_AHB2SMENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG disabled (value: 0)
     *          - B_0x1: RNG enabled (value: 1)
     */
        /** @brief RNG disabled */
    constexpr std::uint32_t RCC_AHB2SMENR_RNGEN_B_0x0 = 0;
        /** @brief RNG enabled */
    constexpr std::uint32_t RCC_AHB2SMENR_RNGEN_B_0x1 = 1;

    /** @brief AHB3 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_AHB3SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flexible static memory controller clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB3SMENR_FMCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FSMC clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: FSMC clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief FSMC clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_FMCSMEN_B_0x0 = 0;
        /** @brief FSMC clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_FMCSMEN_B_0x1 = 1;

    /** @brief QUADSPI memory interface clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_AHB3SMENR_QSPISMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: QUADSPI clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: QUADSPI clock enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief QUADSPI clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_QSPISMEN_B_0x0 = 0;
        /** @brief QUADSPI clock enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_QSPISMEN_B_0x1 = 1;

    /** @brief APB1 peripheral clocks enable in Sleep and Stop modes register 1 */
    using RCC_APB1SMENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_TIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM2SMEN_B_0x0 = 0;
        /** @brief TIM2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM2SMEN_B_0x1 = 1;

    /** @brief TIM3 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_TIM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM3 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM3 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM3SMEN_B_0x0 = 0;
        /** @brief TIM3 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM3SMEN_B_0x1 = 1;

    /** @brief TIM4 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_TIM4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM4 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM4 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM4SMEN_B_0x0 = 0;
        /** @brief TIM4 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM4SMEN_B_0x1 = 1;

    /** @brief TIM5 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_TIM5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM5 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM5 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM5SMEN_B_0x0 = 0;
        /** @brief TIM5 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM5SMEN_B_0x1 = 1;

    /** @brief TIM6 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_TIM6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM6 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM6 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM6SMEN_B_0x0 = 0;
        /** @brief TIM6 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM6SMEN_B_0x1 = 1;

    /** @brief TIM7 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_TIM7SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM7 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM7 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM7SMEN_B_0x0 = 0;
        /** @brief TIM7 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM7SMEN_B_0x1 = 1;

    /** @brief CRS timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_CRSSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: CRS clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief CRS clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_CRSSMEN_B_0x0 = 0;
        /** @brief CRS clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_CRSSMEN_B_0x1 = 1;

    /** @brief RTC APB clock enable during Sleep and Stop modes Set and cleared by software */
    using RCC_APB1SMENR1_RTCAPBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC APB clock disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: RTC APB clock enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief RTC APB clock disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_RTCAPBSMEN_B_0x0 = 0;
        /** @brief RTC APB clock enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_RTCAPBSMEN_B_0x1 = 1;

    /** @brief Window watchdog clocks enable during Sleep and Stop modes Set and cleared by software. This bit is forced to 1 by hardware when the hardware WWDG option is activated. */
    using RCC_APB1SMENR1_WWDGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Window watchdog clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: Window watchdog clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief Window watchdog clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_WWDGSMEN_B_0x0 = 0;
        /** @brief Window watchdog clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_WWDGSMEN_B_0x1 = 1;

    /** @brief SPI2 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_SPI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_SPI2SMEN_B_0x0 = 0;
        /** @brief SPI2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_SPI2SMEN_B_0x1 = 1;

    /** @brief SPI3 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_SPI3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI3 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI3 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_SPI3SMEN_B_0x0 = 0;
        /** @brief SPI3 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_SPI3SMEN_B_0x1 = 1;

    /** @brief USART2 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_USART2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief USART2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART2SMEN_B_0x0 = 0;
        /** @brief USART2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART2SMEN_B_0x1 = 1;

    /** @brief USART3 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_USART3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART3 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief USART3 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART3SMEN_B_0x0 = 0;
        /** @brief USART3 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART3SMEN_B_0x1 = 1;

    /** @brief UART4 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_UART4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: UART4 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief UART4 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_UART4SMEN_B_0x0 = 0;
        /** @brief UART4 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_UART4SMEN_B_0x1 = 1;

    /** @brief UART5 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_UART5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: UART5 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief UART5 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_UART5SMEN_B_0x0 = 0;
        /** @brief UART5 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_UART5SMEN_B_0x1 = 1;

    /** @brief I2C1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_I2C1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C1SMEN_B_0x0 = 0;
        /** @brief I2C1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C1SMEN_B_0x1 = 1;

    /** @brief I2C2 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_I2C2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C2 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C2SMEN_B_0x0 = 0;
        /** @brief I2C2 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C2SMEN_B_0x1 = 1;

    /** @brief USB device clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_USBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB device clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: USB device clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief USB device clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USBSMEN_B_0x0 = 0;
        /** @brief USB device clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USBSMEN_B_0x1 = 1;

    /** @brief FDCAN clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_FDCANSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: FDCAN clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief FDCAN clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_FDCANSMEN_B_0x0 = 0;
        /** @brief FDCAN clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_FDCANSMEN_B_0x1 = 1;

    /** @brief Power interface clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_PWRSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: Power interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief Power interface clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_PWRSMEN_B_0x0 = 0;
        /** @brief Power interface clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_PWRSMEN_B_0x1 = 1;

    /** @brief I2C3 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_I2C3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C3 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C3 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C3SMEN_B_0x0 = 0;
        /** @brief I2C3 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C3SMEN_B_0x1 = 1;

    /** @brief Low power timer 1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR1_LPTIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPTIM1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief LPTIM1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_LPTIM1SMEN_B_0x0 = 0;
        /** @brief LPTIM1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_LPTIM1SMEN_B_0x1 = 1;

    /** @brief APB1 peripheral clocks enable in Sleep and Stop modes register 2 */
    using RCC_APB1SMENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low power UART 1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR2_LPUART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPUART1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief LPUART1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_LPUART1SMEN_B_0x0 = 0;
        /** @brief LPUART1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_LPUART1SMEN_B_0x1 = 1;

    /** @brief I2C4 clocks enable during Sleep and Stop modes Set and cleared by software */
    using RCC_APB1SMENR2_I2C4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C4 clock enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C4 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C4SMEN_B_0x0 = 0;
        /** @brief I2C4 clock enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C4SMEN_B_0x1 = 1;

    /** @brief UCPD1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB1SMENR2_UCPD1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: UCPD1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief UCPD1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_UCPD1SMEN_B_0x0 = 0;
        /** @brief UCPD1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_UCPD1SMEN_B_0x1 = 1;

    /** @brief APB2 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_APB2SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG + COMP + VREFBUF + OPAMP clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_SYSCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG + COMP + VREFBUF + OPAMP clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: SYSCFG + COMP + VREFBUF + OPAMP clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief SYSCFG + COMP + VREFBUF + OPAMP clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SYSCFGSMEN_B_0x0 = 0;
        /** @brief SYSCFG + COMP + VREFBUF + OPAMP clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SYSCFGSMEN_B_0x1 = 1;

    /** @brief TIM1 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_TIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 timer clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM1P timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM1 timer clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM1SMEN_B_0x0 = 0;
        /** @brief TIM1P timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM1SMEN_B_0x1 = 1;

    /** @brief SPI1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_SPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 clocks disabled by the clock gating during<sup>(1)</sup> Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI1 clocks enabled by the clock gating during<sup>(1)</sup> Sleep and Stop modes (value: 1)
     */
        /** @brief SPI1 clocks disabled by the clock gating during<sup>(1)</sup> Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SPI1SMEN_B_0x0 = 0;
        /** @brief SPI1 clocks enabled by the clock gating during<sup>(1)</sup> Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SPI1SMEN_B_0x1 = 1;

    /** @brief TIM8 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_TIM8SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 timer clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM8 timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM8 timer clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM8SMEN_B_0x0 = 0;
        /** @brief TIM8 timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM8SMEN_B_0x1 = 1;

    /** @brief USART1clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_USART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART1clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief USART1clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USART1SMEN_B_0x0 = 0;
        /** @brief USART1clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USART1SMEN_B_0x1 = 1;

    /** @brief SPI4 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_SPI4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI4 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop mode (value: 1)
     */
        /** @brief SPI4 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SPI4SMEN_B_0x0 = 0;
        /** @brief SPI4 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop mode */
    constexpr std::uint32_t RCC_APB2SMENR_SPI4SMEN_B_0x1 = 1;

    /** @brief TIM15 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_TIM15SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 timer clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM15 timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop mode (value: 1)
     */
        /** @brief TIM15 timer clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM15SMEN_B_0x0 = 0;
        /** @brief TIM15 timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop mode */
    constexpr std::uint32_t RCC_APB2SMENR_TIM15SMEN_B_0x1 = 1;

    /** @brief TIM16 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_TIM16SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 timer clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM16 timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM16 timer clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM16SMEN_B_0x0 = 0;
        /** @brief TIM16 timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM16SMEN_B_0x1 = 1;

    /** @brief TIM17 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_TIM17SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 timer clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM17 timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM17 timer clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM17SMEN_B_0x0 = 0;
        /** @brief TIM17 timer clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM17SMEN_B_0x1 = 1;

    /** @brief TIM20 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_TIM20SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM20 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM20 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM20 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM20SMEN_B_0x0 = 0;
        /** @brief TIM20 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM20SMEN_B_0x1 = 1;

    /** @brief SAI1 clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_SAI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAI1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief SAI1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SAI1SMEN_B_0x0 = 0;
        /** @brief SAI1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SAI1SMEN_B_0x1 = 1;

    /** @brief HRTIM1 timer clocks enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APB2SMENR_HRTIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HRTIM1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 0)
     *          - B_0x1: HRTIM1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes (value: 1)
     */
        /** @brief HRTIM1 clocks disabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_HRTIM1SMEN_B_0x0 = 0;
        /** @brief HRTIM1 clocks enabled by the clock gating<sup>(1)</sup> during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_HRTIM1SMEN_B_0x1 = 1;

    /** @brief Peripherals independent clock configuration register */
    using RCC_CCIPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 clock source selection This bit is set and cleared by software to select the USART1 clock source. */
    using RCC_CCIPR_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as USART1 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as USART1 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as USART1 clock (value: 2)
     *          - B_0x3: LSE clock selected as USART1 clock (value: 3)
     */
        /** @brief PCLK selected as USART1 clock */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as USART1 clock */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as USART1 clock */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x2 = 2;
        /** @brief LSE clock selected as USART1 clock */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x3 = 3;

    /** @brief USART2 clock source selection This bit is set and cleared by software to select the USART2 clock source. */
    using RCC_CCIPR_USART2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as USART2 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as USART2 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as USART2 clock (value: 2)
     *          - B_0x3: LSE clock selected as USART2 clock (value: 3)
     */
        /** @brief PCLK selected as USART2 clock */
    constexpr std::uint32_t RCC_CCIPR_USART2SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as USART2 clock */
    constexpr std::uint32_t RCC_CCIPR_USART2SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as USART2 clock */
    constexpr std::uint32_t RCC_CCIPR_USART2SEL_B_0x2 = 2;
        /** @brief LSE clock selected as USART2 clock */
    constexpr std::uint32_t RCC_CCIPR_USART2SEL_B_0x3 = 3;

    /** @brief USART3 clock source selection This bit is set and cleared by software to select the USART3 clock source. */
    using RCC_CCIPR_USART3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as USART3 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as USART3 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as USART3 clock (value: 2)
     *          - B_0x3: LSE clock selected as USART3 clock (value: 3)
     */
        /** @brief PCLK selected as USART3 clock */
    constexpr std::uint32_t RCC_CCIPR_USART3SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as USART3 clock */
    constexpr std::uint32_t RCC_CCIPR_USART3SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as USART3 clock */
    constexpr std::uint32_t RCC_CCIPR_USART3SEL_B_0x2 = 2;
        /** @brief LSE clock selected as USART3 clock */
    constexpr std::uint32_t RCC_CCIPR_USART3SEL_B_0x3 = 3;

    /** @brief UART4 clock source selection This bit is set and cleared by software to select the UART4 clock source. */
    using RCC_CCIPR_UART4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as UART4 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as UART4 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as UART4 clock (value: 2)
     *          - B_0x3: LSE clock selected as UART4 clock (value: 3)
     */
        /** @brief PCLK selected as UART4 clock */
    constexpr std::uint32_t RCC_CCIPR_UART4SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as UART4 clock */
    constexpr std::uint32_t RCC_CCIPR_UART4SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as UART4 clock */
    constexpr std::uint32_t RCC_CCIPR_UART4SEL_B_0x2 = 2;
        /** @brief LSE clock selected as UART4 clock */
    constexpr std::uint32_t RCC_CCIPR_UART4SEL_B_0x3 = 3;

    /** @brief UART5 clock source selection These bits are set and cleared by software to select the UART5 clock source. */
    using RCC_CCIPR_UART5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as UART5 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as UART5 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as UART5 clock (value: 2)
     *          - B_0x3: LSE clock selected as UART5 clock (value: 3)
     */
        /** @brief PCLK selected as UART5 clock */
    constexpr std::uint32_t RCC_CCIPR_UART5SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as UART5 clock */
    constexpr std::uint32_t RCC_CCIPR_UART5SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as UART5 clock */
    constexpr std::uint32_t RCC_CCIPR_UART5SEL_B_0x2 = 2;
        /** @brief LSE clock selected as UART5 clock */
    constexpr std::uint32_t RCC_CCIPR_UART5SEL_B_0x3 = 3;

    /** @brief LPUART1 clock source selection These bits are set and cleared by software to select the LPUART1 clock source. */
    using RCC_CCIPR_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as LPUART1 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as LPUART1 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as LPUART1 clock (value: 2)
     *          - B_0x3: LSE clock selected as LPUART1 clock (value: 3)
     */
        /** @brief PCLK selected as LPUART1 clock */
    constexpr std::uint32_t RCC_CCIPR_LPUART1SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as LPUART1 clock */
    constexpr std::uint32_t RCC_CCIPR_LPUART1SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as LPUART1 clock */
    constexpr std::uint32_t RCC_CCIPR_LPUART1SEL_B_0x2 = 2;
        /** @brief LSE clock selected as LPUART1 clock */
    constexpr std::uint32_t RCC_CCIPR_LPUART1SEL_B_0x3 = 3;

    /** @brief I2C1 clock source selection These bits are set and cleared by software to select the I2C1 clock source. */
    using RCC_CCIPR_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as I2C1 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as I2C1 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as I2C1 clock (value: 2)
     */
        /** @brief PCLK selected as I2C1 clock */
    constexpr std::uint32_t RCC_CCIPR_I2C1SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as I2C1 clock */
    constexpr std::uint32_t RCC_CCIPR_I2C1SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as I2C1 clock */
    constexpr std::uint32_t RCC_CCIPR_I2C1SEL_B_0x2 = 2;

    /** @brief I2C2 clock source selection These bits are set and cleared by software to select the I2C2 clock source. */
    using RCC_CCIPR_I2C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as I2C2 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as I2C2 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as I2C2 clock (value: 2)
     */
        /** @brief PCLK selected as I2C2 clock */
    constexpr std::uint32_t RCC_CCIPR_I2C2SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as I2C2 clock */
    constexpr std::uint32_t RCC_CCIPR_I2C2SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as I2C2 clock */
    constexpr std::uint32_t RCC_CCIPR_I2C2SEL_B_0x2 = 2;

    /** @brief I2C3 clock source selection These bits are set and cleared by software to select the I2C3 clock source. */
    using RCC_CCIPR_I2C3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as I2C3 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as I2C3 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as I2C3 clock (value: 2)
     */
        /** @brief PCLK selected as I2C3 clock */
    constexpr std::uint32_t RCC_CCIPR_I2C3SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as I2C3 clock */
    constexpr std::uint32_t RCC_CCIPR_I2C3SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as I2C3 clock */
    constexpr std::uint32_t RCC_CCIPR_I2C3SEL_B_0x2 = 2;

    /** @brief Low power timer 1 clock source selection These bits are set and cleared by software to select the LPTIM1 clock source. */
    using RCC_CCIPR_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as LPTIM1 clock (value: 0)
     *          - B_0x1: LSI clock selected as LPTIM1 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as LPTIM1 clock (value: 2)
     *          - B_0x3: LSE clock selected as LPTIM1 clock (value: 3)
     */
        /** @brief PCLK selected as LPTIM1 clock */
    constexpr std::uint32_t RCC_CCIPR_LPTIM1SEL_B_0x0 = 0;
        /** @brief LSI clock selected as LPTIM1 clock */
    constexpr std::uint32_t RCC_CCIPR_LPTIM1SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as LPTIM1 clock */
    constexpr std::uint32_t RCC_CCIPR_LPTIM1SEL_B_0x2 = 2;
        /** @brief LSE clock selected as LPTIM1 clock */
    constexpr std::uint32_t RCC_CCIPR_LPTIM1SEL_B_0x3 = 3;

    /** @brief clock source selection These bits are set and cleared by software to select the SAI clock source. */
    using RCC_CCIPR_SAI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System clock selected as SAI clock (value: 0)
     *          - B_0x1: PLL Q clock selected as SAI clock (value: 1)
     *          - B_0x2: Clock provided on I2S_CKIN pin selected as SAI clock (value: 2)
     *          - B_0x3: HSI16 clock selected as SAI clock (value: 3)
     */
        /** @brief System clock selected as SAI clock */
    constexpr std::uint32_t RCC_CCIPR_SAI1SEL_B_0x0 = 0;
        /** @brief PLL Q clock selected as SAI clock */
    constexpr std::uint32_t RCC_CCIPR_SAI1SEL_B_0x1 = 1;
        /** @brief Clock provided on I2S_CKIN pin selected as SAI clock */
    constexpr std::uint32_t RCC_CCIPR_SAI1SEL_B_0x2 = 2;
        /** @brief HSI16 clock selected as SAI clock */
    constexpr std::uint32_t RCC_CCIPR_SAI1SEL_B_0x3 = 3;

    /** @brief clock source selection These bits are set and cleared by software to select the I2S23 clock source. */
    using RCC_CCIPR_I2S23SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System clock selected as I2S23 clock (value: 0)
     *          - B_0x1: PLL Q clock selected as I2S23 clock (value: 1)
     *          - B_0x2: Clock provided on I2S_CKIN pin is selected as I2S23 clock (value: 2)
     *          - B_0x3: HSI16 clock selected as I2S23 clock. (value: 3)
     */
        /** @brief System clock selected as I2S23 clock */
    constexpr std::uint32_t RCC_CCIPR_I2S23SEL_B_0x0 = 0;
        /** @brief PLL Q clock selected as I2S23 clock */
    constexpr std::uint32_t RCC_CCIPR_I2S23SEL_B_0x1 = 1;
        /** @brief Clock provided on I2S_CKIN pin is selected as I2S23 clock */
    constexpr std::uint32_t RCC_CCIPR_I2S23SEL_B_0x2 = 2;
        /** @brief HSI16 clock selected as I2S23 clock. */
    constexpr std::uint32_t RCC_CCIPR_I2S23SEL_B_0x3 = 3;

    /** @brief None */
    using RCC_CCIPR_FDCANSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 48 MHz clock source selection These bits are set and cleared by software to select the 48 MHz clock source used by USB device FS and RNG. */
    using RCC_CCIPR_CLK48SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 clock selected as 48 MHz clock (value: 0)
     *          - B_0x2: PLL Q clock (PLL48M1CLK) selected as 48 MHz clock (value: 2)
     *          - B_0x3: Reserved, must be kept at reset value (value: 3)
     */
        /** @brief HSI48 clock selected as 48 MHz clock */
    constexpr std::uint32_t RCC_CCIPR_CLK48SEL_B_0x0 = 0;
        /** @brief PLL Q clock (PLL48M1CLK) selected as 48 MHz clock */
    constexpr std::uint32_t RCC_CCIPR_CLK48SEL_B_0x2 = 2;
        /** @brief Reserved, must be kept at reset value */
    constexpr std::uint32_t RCC_CCIPR_CLK48SEL_B_0x3 = 3;

    /** @brief ADC1/2 clock source selection These bits are set and cleared by software to select the clock source used by the ADC interface. */
    using RCC_CCIPR_ADC12SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock selected (value: 0)
     *          - B_0x1: PLL P clock selected as ADC1/2 clock (value: 1)
     *          - B_0x2: System clock selected as ADC1/2 clock (value: 2)
     */
        /** @brief No clock selected */
    constexpr std::uint32_t RCC_CCIPR_ADC12SEL_B_0x0 = 0;
        /** @brief PLL P clock selected as ADC1/2 clock */
    constexpr std::uint32_t RCC_CCIPR_ADC12SEL_B_0x1 = 1;
        /** @brief System clock selected as ADC1/2 clock */
    constexpr std::uint32_t RCC_CCIPR_ADC12SEL_B_0x2 = 2;

    /** @brief ADC3/4/5 clock source selection These bits are set and cleared by software to select the clock source used by the ADC345 interface. */
    using RCC_CCIPR_ADC345SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock selected (value: 0)
     *          - B_0x1: PLL P clock selected as ADC345 clock (value: 1)
     *          - B_0x2: System clock selected as ADC3/4/5 clock (value: 2)
     *          - B_0x3: Reserved. (value: 3)
     */
        /** @brief No clock selected */
    constexpr std::uint32_t RCC_CCIPR_ADC345SEL_B_0x0 = 0;
        /** @brief PLL P clock selected as ADC345 clock */
    constexpr std::uint32_t RCC_CCIPR_ADC345SEL_B_0x1 = 1;
        /** @brief System clock selected as ADC3/4/5 clock */
    constexpr std::uint32_t RCC_CCIPR_ADC345SEL_B_0x2 = 2;
        /** @brief Reserved. */
    constexpr std::uint32_t RCC_CCIPR_ADC345SEL_B_0x3 = 3;

    /** @brief RTC domain control register */
    using RCC_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable Set and cleared by software. */
    using RCC_BDCR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator OFF (value: 0)
     *          - B_0x1: LSE oscillator ON (value: 1)
     */
        /** @brief LSE oscillator OFF */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x0 = 0;
        /** @brief LSE oscillator ON */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x1 = 1;

    /** @brief LSE oscillator ready Set and cleared by hardware to indicate when the external 32 kHz oscillator is stable. After the LSEON bit is cleared, LSERDY goes low after 6 external low-speed oscillator clock cycles. */
    using RCC_BDCR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not ready (value: 0)
     *          - B_0x1: LSE oscillator ready (value: 1)
     */
        /** @brief LSE oscillator not ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x0 = 0;
        /** @brief LSE oscillator ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x1 = 1;

    /** @brief LSE oscillator bypass Set and cleared by software to bypass oscillator in debug mode. This bit can be written only when the external 32 kHz oscillator is disabled (LSEON=0 and LSERDY=0). */
    using RCC_BDCR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not bypassed (value: 0)
     *          - B_0x1: LSE oscillator bypassed (value: 1)
     */
        /** @brief LSE oscillator not bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x0 = 0;
        /** @brief LSE oscillator bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x1 = 1;

    /** @brief LSE oscillator drive capability Set by software to modulate the LSE oscillators drive capability. The oscillator is in Xtal mode when it is not in bypass mode. */
    using RCC_BDCR_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Xtal mode lower driving capability (value: 0)
     *          - B_0x1: Xtal mode medium low driving capability (value: 1)
     *          - B_0x2: Xtal mode medium high driving capability (value: 2)
     *          - B_0x3: Xtal mode higher driving capability (value: 3)
     */
        /** @brief Xtal mode lower driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x0 = 0;
        /** @brief Xtal mode medium low driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x1 = 1;
        /** @brief Xtal mode medium high driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x2 = 2;
        /** @brief Xtal mode higher driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x3 = 3;

    /** @brief CSS on LSE enable Set by software to enable the Clock Security System on LSE (32 kHz oscillator). LSECSSON must be enabled after the LSE oscillator is enabled (LSEON bit enabled) and ready (LSERDY flag set by hardware), and after the RTCSEL bit is selected. Once enabled this bit cannot be disabled, except after a LSE failure detection (LSECSSD =1). In that case the software MUST disable the LSECSSON bit. */
    using RCC_BDCR_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSS on LSE (32 kHz external oscillator) OFF (value: 0)
     *          - B_0x1: CSS on LSE (32 kHz external oscillator) ON (value: 1)
     */
        /** @brief CSS on LSE (32 kHz external oscillator) OFF */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x0 = 0;
        /** @brief CSS on LSE (32 kHz external oscillator) ON */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x1 = 1;

    /** @brief CSS on LSE failure Detection Set by hardware to indicate when a failure has been detected by the Clock Security System on the external 32 kHz oscillator (LSE). */
    using RCC_BDCR_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No failure detected on LSE (32 kHz oscillator) (value: 0)
     *          - B_0x1: Failure detected on LSE (32 kHz oscillator) (value: 1)
     */
        /** @brief No failure detected on LSE (32 kHz oscillator) */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x0 = 0;
        /** @brief Failure detected on LSE (32 kHz oscillator) */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x1 = 1;

    /** @brief RTC clock source selection Set by software to select the clock source for the RTC. Once the RTC clock source has been selected, it cannot be changed anymore unless the RTC domain is reset, or unless a failure is detected on LSE (LSECSSD is set). The BDRST bit can be used to reset them. */
    using RCC_BDCR_RTCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock (value: 0)
     *          - B_0x1: LSE oscillator clock used as RTC clock (value: 1)
     *          - B_0x2: LSI oscillator clock used as RTC clock (value: 2)
     *          - B_0x3: HSE oscillator clock divided by 32 used as RTC clock (value: 3)
     */
        /** @brief No clock */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x0 = 0;
        /** @brief LSE oscillator clock used as RTC clock */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x1 = 1;
        /** @brief LSI oscillator clock used as RTC clock */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x2 = 2;
        /** @brief HSE oscillator clock divided by 32 used as RTC clock */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x3 = 3;

    /** @brief RTC clock enable Set and cleared by software. */
    using RCC_BDCR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC clock disabled (value: 0)
     *          - B_0x1: RTC clock enabled (value: 1)
     */
        /** @brief RTC clock disabled */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x0 = 0;
        /** @brief RTC clock enabled */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x1 = 1;

    /** @brief RTC domain software reset Set and cleared by software. */
    using RCC_BDCR_BDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset not activated (value: 0)
     *          - B_0x1: Reset the entire RTC domain (value: 1)
     */
        /** @brief Reset not activated */
    constexpr std::uint32_t RCC_BDCR_BDRST_B_0x0 = 0;
        /** @brief Reset the entire RTC domain */
    constexpr std::uint32_t RCC_BDCR_BDRST_B_0x1 = 1;

    /** @brief Low speed clock output enable Set and cleared by software. */
    using RCC_BDCR_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed clock output (LSCO) disable (value: 0)
     *          - B_0x1: Low speed clock output (LSCO) enable (value: 1)
     */
        /** @brief Low speed clock output (LSCO) disable */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x0 = 0;
        /** @brief Low speed clock output (LSCO) enable */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x1 = 1;

    /** @brief Low speed clock output selection Set and cleared by software. */
    using RCC_BDCR_LSCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI clock selected (value: 0)
     *          - B_0x1: LSE clock selected (value: 1)
     */
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x0 = 0;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x1 = 1;

    /** @brief Control/status register */
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable Set and cleared by software. */
    using RCC_CSR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI oscillator OFF (value: 0)
     *          - B_0x1: LSI oscillator ON (value: 1)
     */
        /** @brief LSI oscillator OFF */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x0 = 0;
        /** @brief LSI oscillator ON */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x1 = 1;

    /** @brief LSI oscillator ready Set and cleared by hardware to indicate when the LSI oscillator is stable. After the LSION bit is cleared, LSIRDY goes low after 3 LSI oscillator clock cycles. This bit can be set even if LSION = 0 if the LSI is requested by the Clock Security System on LSE, by the Independent Watchdog or by the RTC. */
    using RCC_CSR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI oscillator not ready (value: 0)
     *          - B_0x1: LSI oscillator ready (value: 1)
     */
        /** @brief LSI oscillator not ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x0 = 0;
        /** @brief LSI oscillator ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x1 = 1;

    /** @brief Remove reset flag Set by software to clear the reset flags. */
    using RCC_CSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear the reset flags (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x0 = 0;
        /** @brief Clear the reset flags */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x1 = 1;

    /** @brief Option byte loader reset flag Set by hardware when a reset from the Option Byte loading occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_OBLRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from Option Byte loading occurred (value: 0)
     *          - B_0x1: Reset from Option Byte loading occurred (value: 1)
     */
        /** @brief No reset from Option Byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x0 = 0;
        /** @brief Reset from Option Byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x1 = 1;

    /** @brief Pin reset flag Set by hardware when a reset from the NRST pin occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from NRST pin occurred (value: 0)
     *          - B_0x1: Reset from NRST pin occurred (value: 1)
     */
        /** @brief No reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x0 = 0;
        /** @brief Reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x1 = 1;

    /** @brief BOR flag Set by hardware when a BOR occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No BOR occurred (value: 0)
     *          - B_0x1: BOR occurred (value: 1)
     */
        /** @brief No BOR occurred */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR occurred */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x1 = 1;

    /** @brief Software reset flag Set by hardware when a software reset occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No software reset occurred (value: 0)
     *          - B_0x1: Software reset occurred (value: 1)
     */
        /** @brief No software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x0 = 0;
        /** @brief Software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x1 = 1;

    /** @brief Independent window watchdog reset flag Set by hardware when an independent watchdog reset domain occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No independent watchdog reset occurred (value: 0)
     *          - B_0x1: Independent watchdog reset occurred (value: 1)
     */
        /** @brief No independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x0 = 0;
        /** @brief Independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x1 = 1;

    /** @brief Window watchdog reset flag Set by hardware when a window watchdog reset occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No window watchdog reset occurred (value: 0)
     *          - B_0x1: Window watchdog reset occurred (value: 1)
     */
        /** @brief No window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x0 = 0;
        /** @brief Window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Low-power reset flag Set by hardware when a reset occurs due to illegal Stop, Standby or Shutdown mode entry. Cleared by writing to the RMVF bit. */
    using RCC_CSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal mode reset occurred (value: 0)
     *          - B_0x1: Illegal mode reset occurred (value: 1)
     */
        /** @brief No illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x0 = 0;
        /** @brief Illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x1 = 1;

    /** @brief Clock recovery RC register */
    using RCC_CRRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 clock enable Set and cleared by software. Cleared by hardware to stop the HSI48 when entering in Stop, Standby or Shutdown modes. */
    using RCC_CRRCR_HSI48ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 oscillator OFF (value: 0)
     *          - B_0x1: HSI48 oscillator ON (value: 1)
     */
        /** @brief HSI48 oscillator OFF */
    constexpr std::uint32_t RCC_CRRCR_HSI48ON_B_0x0 = 0;
        /** @brief HSI48 oscillator ON */
    constexpr std::uint32_t RCC_CRRCR_HSI48ON_B_0x1 = 1;

    /** @brief HSI48 clock ready flag Set by hardware to indicate that HSI48 oscillator is stable. This bit is set only when HSI48 is enabled by software by setting HSI48ON. */
    using RCC_CRRCR_HSI48RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 oscillator not ready (value: 0)
     *          - B_0x1: HSI48 oscillator ready (value: 1)
     */
        /** @brief HSI48 oscillator not ready */
    constexpr std::uint32_t RCC_CRRCR_HSI48RDY_B_0x0 = 0;
        /** @brief HSI48 oscillator ready */
    constexpr std::uint32_t RCC_CRRCR_HSI48RDY_B_0x1 = 1;

    /** @brief HSI48 clock calibration These bits are initialized at startup with the factory-programmed HSI48 calibration trim value. They are ready only. */
    using RCC_CRRCR_HSI48CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripherals independent clock configuration register */
    using RCC_CCIPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 clock source selection These bits are set and cleared by software to select the I2C4 clock source. */
    using RCC_CCIPR2_I2C4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK selected as I2C4 clock (value: 0)
     *          - B_0x1: System clock (SYSCLK) selected as I2C4 clock (value: 1)
     *          - B_0x2: HSI16 clock selected as I2C4 clock (value: 2)
     */
        /** @brief PCLK selected as I2C4 clock */
    constexpr std::uint32_t RCC_CCIPR2_I2C4SEL_B_0x0 = 0;
        /** @brief System clock (SYSCLK) selected as I2C4 clock */
    constexpr std::uint32_t RCC_CCIPR2_I2C4SEL_B_0x1 = 1;
        /** @brief HSI16 clock selected as I2C4 clock */
    constexpr std::uint32_t RCC_CCIPR2_I2C4SEL_B_0x2 = 2;

    /** @brief QUADSPI clock source selection Set and reset by software. */
    using RCC_CCIPR2_QSPISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: system clock selected as QUADSPI kernel clock (value: 0)
     *          - B_0x1: HSI16 clock selected as QUADSPI kernel clock (value: 1)
     *          - B_0x2: PLL Q clock selected as QUADSPI kernel clock (value: 2)
     */
        /** @brief system clock selected as QUADSPI kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_QSPISEL_B_0x0 = 0;
        /** @brief HSI16 clock selected as QUADSPI kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_QSPISEL_B_0x1 = 1;
        /** @brief PLL Q clock selected as QUADSPI kernel clock */
    constexpr std::uint32_t RCC_CCIPR2_QSPISEL_B_0x2 = 2;

}

#endif
