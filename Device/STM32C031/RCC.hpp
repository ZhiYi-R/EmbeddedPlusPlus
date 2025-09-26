/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32C031_RCC_HPP
#define EMBEDDED_PP_STM32C031_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RCC address block description */
namespace STM32C031::RCC {

    /** @brief RCC clock control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System clock division factor This bitfield controlled by software sets the division factor of the system clock divider to produce SYSCLK clock: */
    using RCC_CR_SYSDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 3 (reset value) (value: 2)
     *          - B_0x3: 4 (value: 3)
     *          - B_0x4: 5 (value: 4)
     *          - B_0x5: 6 (value: 5)
     *          - B_0x6: 7 (value: 6)
     *          - B_0x7: 8 (value: 7)
     */
        /** @brief 1 */
    constexpr std::uint32_t RCC_CR_SYSDIV_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t RCC_CR_SYSDIV_B_0x1 = 1;
        /** @brief 3 (reset value) */
    constexpr std::uint32_t RCC_CR_SYSDIV_B_0x2 = 2;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CR_SYSDIV_B_0x3 = 3;
        /** @brief 5 */
    constexpr std::uint32_t RCC_CR_SYSDIV_B_0x4 = 4;
        /** @brief 6 */
    constexpr std::uint32_t RCC_CR_SYSDIV_B_0x5 = 5;
        /** @brief 7 */
    constexpr std::uint32_t RCC_CR_SYSDIV_B_0x6 = 6;
        /** @brief 8 */
    constexpr std::uint32_t RCC_CR_SYSDIV_B_0x7 = 7;

    /** @brief HSI48 kernel clock division factor This bitfield controlled by software sets the division factor of the kernel clock divider to produce HSIKER clock: */
    using RCC_CR_HSIKERDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 3 (reset value) (value: 2)
     *          - B_0x3: 4 (value: 3)
     *          - B_0x4: 5 (value: 4)
     *          - B_0x5: 6 (value: 5)
     *          - B_0x6: 7 (value: 6)
     *          - B_0x7: 8 (value: 7)
     */
        /** @brief 1 */
    constexpr std::uint32_t RCC_CR_HSIKERDIV_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t RCC_CR_HSIKERDIV_B_0x1 = 1;
        /** @brief 3 (reset value) */
    constexpr std::uint32_t RCC_CR_HSIKERDIV_B_0x2 = 2;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CR_HSIKERDIV_B_0x3 = 3;
        /** @brief 5 */
    constexpr std::uint32_t RCC_CR_HSIKERDIV_B_0x4 = 4;
        /** @brief 6 */
    constexpr std::uint32_t RCC_CR_HSIKERDIV_B_0x5 = 5;
        /** @brief 7 */
    constexpr std::uint32_t RCC_CR_HSIKERDIV_B_0x6 = 6;
        /** @brief 8 */
    constexpr std::uint32_t RCC_CR_HSIKERDIV_B_0x7 = 7;

    /** @brief HSI48 clock enable Set and cleared by software and hardware, with hardware taking priority. Kept low by hardware as long as the device is in a low-power mode. Kept high by hardware as long as the system is clocked with a clock derived from HSI48. This includes the exit from low-power modes and the system clock fall-back to HSI48 upon failing HSE oscillator clock selected as system clock source. */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI48 always-enable for peripheral kernels. Set and cleared by software. Setting the bit activates the HSI48 oscillator in Run and Stop modes, regardless of the HSION bit state. The HSI48 clock can only feed USART1, USART2, and I2C1 peripherals configured with HSI48 as kernel clock. Note: Keeping the HSI48 active in Stop mode allows speeding up the serial interface communication as the HSI48 clock is ready immediately upon exiting Stop mode. */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 oscillator enable depends on the HSION bit (value: 0)
     *          - B_0x1: HSI48 oscillator is active in Run and Stop modes (value: 1)
     */
        /** @brief HSI48 oscillator enable depends on the HSION bit */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI48 oscillator is active in Run and Stop modes */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x1 = 1;

    /** @brief HSI48 clock ready flag Set by hardware when the HSI48 oscillator is enabled through HSION and ready to use (stable). Note: Upon clearing HSION, HSIRDY goes low after six HSI48 clock cycles. */
    using RCC_CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready (value: 0)
     *          - B_0x1: Ready (value: 1)
     */
        /** @brief Not ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x0 = 0;
        /** @brief Ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x1 = 1;

    /** @brief HSI48 clock division factor This bitfield controlled by software sets the division factor of the HSI48 clock divider to produce HSISYS clock: */
    using RCC_CR_HSIDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 4 (reset value) (value: 2)
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
        /** @brief 4 (reset value) */
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

    /** @brief HSE clock enable Set and cleared by software. Cleared by hardware to stop the HSE oscillator when entering Stop, or Standby, or Shutdown mode. This bit cannot be cleared if the HSE oscillator is used directly or indirectly as the system clock. */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x1 = 1;

    /** @brief HSE clock ready flag Set by hardware to indicate that the HSE oscillator is stable and ready for use. Note: Upon clearing HSEON, HSERDY goes low after six HSE clock cycles. */
    using RCC_CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready (value: 0)
     *          - B_0x1: Ready (value: 1)
     */
        /** @brief Not ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x0 = 0;
        /** @brief Ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x1 = 1;

    /** @brief HSE crystal oscillator bypass Set and cleared by software. When the bit is set, the internal HSE oscillator is bypassed for use of an external clock. The external clock must then be enabled with the HSEON bit set. Write access to the bit is only effective when the HSE oscillator is disabled. */
    using RCC_CR_HSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No bypass (value: 0)
     *          - B_0x1: Bypass (value: 1)
     */
        /** @brief No bypass */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x0 = 0;
        /** @brief Bypass */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x1 = 1;

    /** @brief Clock security system enable Set by software to enable the clock security system. When the bit is set, the clock detector is enabled by hardware when the HSE oscillator is ready, and disabled by hardware if a HSE clock failure is detected. The bit is cleared by hardware upon reset. */
    using RCC_CR_CSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CR_CSSON_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CR_CSSON_B_0x1 = 1;

    /** @brief RCC internal clock source calibration register */
    using RCC_ICSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 clock calibration This bitfield directly acts on the HSI48 clock frequency. Its value is a sum of an internal factory-programmed number and the value of the HSITRIM[6:0] bitfield. In the factory, the internal number is set to calibrate the HSI48 clock frequency to 48 MHz (with HSITRIM[6:0] left at its reset value). Refer to the device datasheet for HSI48 calibration accuracy and for the frequency trimming granularity. Note: The trimming effect presents discontinuities at HSICAL[7:0] multiples of 64. */
    using RCC_ICSCR_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 clock trimming The value of this bitfield contributes to the HSICAL[7:0] bitfield value. It allows HSI48 clock frequency user trimming. The HSI48 frequency accuracy as stated in the device datasheet applies when this bitfield is left at its reset value. */
    using RCC_ICSCR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock configuration register */
    using RCC_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System clock switch This bitfield is controlled by software and hardware. The bitfield selects the clock for SYSCLK as follows: Others: Reserved The setting is forced by hardware to 000 (HSISYS selected) when the MCU exits Stop, or Standby, or Shutdown mode, or when the setting is 001 (HSE selected) and HSE oscillator failure is detected. */
    using RCC_CFGR_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSISYS (value: 0)
     *          - B_0x1: HSE (value: 1)
     *          - B_0x3: LSI (value: 3)
     *          - B_0x4: LSE (value: 4)
     */
        /** @brief HSISYS */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x0 = 0;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x1 = 1;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x3 = 3;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x4 = 4;

    /** @brief System clock switch status This bitfield is controlled by hardware to indicate the clock source used as system clock: Others: Reserved */
    using RCC_CFGR_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSISYS (value: 0)
     *          - B_0x1: HSE (value: 1)
     *          - B_0x3: LSI (value: 3)
     *          - B_0x4: LSE (value: 4)
     */
        /** @brief HSISYS */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x0 = 0;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x1 = 1;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x3 = 3;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x4 = 4;

    /** @brief AHB prescaler This bitfield is controlled by software. To produce HCLK clock, it sets the division factor of SYSCLK clock as follows: 0xxx: 1 */
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

    /** @brief APB prescaler This bitfield is controlled by software. To produce PCLK clock, it sets the division factor of HCLK clock as follows: 0xx: 1 */
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

    /** @brief Microcontroller clock output 2 clock selector This bitfield is controlled by software. It sets the clock selector for MCO2 output as follows: This bitfield is controlled by software. It sets the clock selector for MCO output as follows: Note: This clock output may have some truncated cycles at startup or during MCO2 clock source switching. */
    using RCC_CFGR_MCO2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock, MCO output disabled (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x3: HSI48 (value: 3)
     *          - B_0x4: HSE (value: 4)
     *          - B_0x6: LSI (value: 6)
     *          - B_0x7: LSE (value: 7)
     */
        /** @brief no clock, MCO output disabled */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x1 = 1;
        /** @brief HSI48 */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x3 = 3;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x4 = 4;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x6 = 6;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x7 = 7;

    /** @brief Microcontroller clock output 2 prescaler This bitfield is controlled by software. It sets the division factor of the clock sent to the MCO2 output as follows: ... It is highly recommended to set this field before the MCO2 output is enabled. */
    using RCC_CFGR_MCO2PRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 4 (value: 2)
     *          - B_0xF: 128 (value: 15)
     */
        /** @brief 1 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x1 = 1;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t RCC_CFGR_MCO2PRE_B_0xF = 15;

    /** @brief Microcontroller clock output clock selector This bitfield is controlled by software. It sets the clock selector for MCO output as follows: Note: This clock output may have some truncated cycles at startup or during MCO clock source switching. Any other value means no clock on MCO. */
    using RCC_CFGR_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock, MCO output disabled (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x3: HSI48 (value: 3)
     *          - B_0x4: HSE (value: 4)
     *          - B_0x6: LSI (value: 6)
     *          - B_0x7: LSE (value: 7)
     */
        /** @brief no clock, MCO output disabled */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x1 = 1;
        /** @brief HSI48 */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x3 = 3;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x4 = 4;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x6 = 6;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x7 = 7;

    /** @brief Microcontroller clock output prescaler This bitfield is controlled by software. It sets the division factor of the clock sent to the MCO output as follows: ... It is highly recommended to set this field before the MCO output is enabled. */
    using RCC_CFGR_MCOPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 4 (value: 2)
     *          - B_0xF: 128 (value: 15)
     */
        /** @brief 1 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x1 = 1;
        /** @brief 4 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t RCC_CFGR_MCOPRE_B_0xF = 15;

    /** @brief RCC clock interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the LSI oscillator stabilization: */
    using RCC_CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x1 = 1;

    /** @brief LSE ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the LSE oscillator stabilization: */
    using RCC_CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x1 = 1;

    /** @brief HSI16 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the HSI16 oscillator stabilization: */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the HSE oscillator stabilization: */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

    /** @brief RCC clock interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt flag This flag indicates a pending interrupt upon LSE clock getting ready. Set by hardware when the LSI clock becomes stable and LSIRDYDIE is set. Cleared by software setting the LSIRDYC bit. */
    using RCC_CIFR_LSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt not pending (value: 0)
     *          - B_0x1: Interrupt pending (value: 1)
     */
        /** @brief Interrupt not pending */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x0 = 0;
        /** @brief Interrupt pending */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag This flag indicates a pending interrupt upon LSE clock getting ready. Set by hardware when the LSE clock becomes stable and LSERDYDIE is set. Cleared by software setting the LSERDYC bit. */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt not pending (value: 0)
     *          - B_0x1: Interrupt pending (value: 1)
     */
        /** @brief Interrupt not pending */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief Interrupt pending */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief HSI16 ready interrupt flag This flag indicates a pending interrupt upon HSI16 clock getting ready. Set by hardware when the HSI16 clock becomes stable and HSIRDYIE is set in response to setting the HSION (refer to ). When HSION is not set but the HSI16 oscillator is enabled by the peripheral through a clock request, this bit is not set and no interrupt is generated. Cleared by software setting the HSIRDYC bit. */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt not pending (value: 0)
     *          - B_0x1: Interrupt pending (value: 1)
     */
        /** @brief Interrupt not pending */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief Interrupt pending */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag This flag indicates a pending interrupt upon HSE clock getting ready. Set by hardware when the HSE clock becomes stable and HSERDYIE is set. Cleared by software setting the HSERDYC bit. */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Iterrupt not pending (value: 0)
     *          - B_0x1: Interrupt pending (value: 1)
     */
        /** @brief Iterrupt not pending */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief Interrupt pending */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief HSE clock security system interrupt flag This flag indicates a pending interrupt upon HSE clock failure. Set by hardware when a failure is detected in the HSE oscillator. Cleared by software setting the CSSC bit. */
    using RCC_CIFR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt not pending (value: 0)
     *          - B_0x1: Interrupt pending (value: 1)
     */
        /** @brief Interrupt not pending */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x0 = 0;
        /** @brief Interrupt pending */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x1 = 1;

    /** @brief LSE clock security system interrupt flag This flag indicates a pending interrupt upon LSE clock failure. Set by hardware when a failure is detected in the LSE oscillator. Cleared by software by setting the LSECSSC bit. */
    using RCC_CIFR_LSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt not pending (value: 0)
     *          - B_0x1: Interrupt pending (value: 1)
     */
        /** @brief Interrupt not pending */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x0 = 0;
        /** @brief Interrupt pending */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x1 = 1;

    /** @brief RCC clock interrupt clear register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt clear This bit is set by software to clear the LSIRDYF flag. */
    using RCC_CICR_LSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear LSIRDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x0 = 0;
        /** @brief Clear LSIRDYF flag */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x1 = 1;

    /** @brief LSE ready interrupt clear This bit is set by software to clear the LSERDYF flag. */
    using RCC_CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear LSERDYF flag (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x0 = 0;
        /** @brief Clear LSERDYF flag */
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

    /** @brief Clock security system interrupt clear This bit is set by software to clear the HSECSSF flag. */
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

    /** @brief RCC I/O port reset register */
    using RCC_IOPRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port A reset This bit is set and cleared by software. */
    using RCC_IOPRSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port A (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOARST_B_0x0 = 0;
        /** @brief Reset I/O port A */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOARST_B_0x1 = 1;

    /** @brief I/O port B reset This bit is set and cleared by software. */
    using RCC_IOPRSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port B (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOBRST_B_0x0 = 0;
        /** @brief Reset I/O port B */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOBRST_B_0x1 = 1;

    /** @brief I/O port C reset This bit is set and cleared by software. */
    using RCC_IOPRSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port C (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOCRST_B_0x0 = 0;
        /** @brief Reset I/O port C */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOCRST_B_0x1 = 1;

    /** @brief I/O port D reset This bit is set and cleared by software. */
    using RCC_IOPRSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port D (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIODRST_B_0x0 = 0;
        /** @brief Reset I/O port D */
    constexpr std::uint32_t RCC_IOPRSTR_GPIODRST_B_0x1 = 1;

    /** @brief I/O port F reset This bit is set and cleared by software. */
    using RCC_IOPRSTR_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port F (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOFRST_B_0x0 = 0;
        /** @brief Reset I/O port F */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOFRST_B_0x1 = 1;

    /** @brief RCC AHB peripheral reset register */
    using RCC_AHBRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 and DMAMUX reset Set and cleared by software. */
    using RCC_AHBRSTR_DMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DMA1 and DMAMUX (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_DMA1RST_B_0x0 = 0;
        /** @brief Reset DMA1 and DMAMUX */
    constexpr std::uint32_t RCC_AHBRSTR_DMA1RST_B_0x1 = 1;

    /** @brief Flash memory interface reset Set and cleared by software. This bit can only be set when the Flash memory is in power down mode. */
    using RCC_AHBRSTR_FLASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset Flash memory interface (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_FLASHRST_B_0x0 = 0;
        /** @brief Reset Flash memory interface */
    constexpr std::uint32_t RCC_AHBRSTR_FLASHRST_B_0x1 = 1;

    /** @brief CRC reset Set and cleared by software. */
    using RCC_AHBRSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CRC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_CRCRST_B_0x0 = 0;
        /** @brief Reset CRC */
    constexpr std::uint32_t RCC_AHBRSTR_CRCRST_B_0x1 = 1;

    /** @brief RCC APB peripheral reset register 1 */
    using RCC_APBRSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 timer reset Set and cleared by software. */
    using RCC_APBRSTR1_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_TIM3RST_B_0x0 = 0;
        /** @brief Reset TIM3 */
    constexpr std::uint32_t RCC_APBRSTR1_TIM3RST_B_0x1 = 1;

    /** @brief USART2 reset Set and cleared by software. */
    using RCC_APBRSTR1_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USART2RST_B_0x0 = 0;
        /** @brief Reset USART2 */
    constexpr std::uint32_t RCC_APBRSTR1_USART2RST_B_0x1 = 1;

    /** @brief I2C1 reset Set and cleared by software. */
    using RCC_APBRSTR1_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_I2C1RST_B_0x0 = 0;
        /** @brief Reset I2C1 */
    constexpr std::uint32_t RCC_APBRSTR1_I2C1RST_B_0x1 = 1;

    /** @brief Debug support reset Set and cleared by software. */
    using RCC_APBRSTR1_DBGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DBG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_DBGRST_B_0x0 = 0;
        /** @brief Reset DBG */
    constexpr std::uint32_t RCC_APBRSTR1_DBGRST_B_0x1 = 1;

    /** @brief Power interface reset Set and cleared by software. */
    using RCC_APBRSTR1_PWRRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset PWR (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_PWRRST_B_0x0 = 0;
        /** @brief Reset PWR */
    constexpr std::uint32_t RCC_APBRSTR1_PWRRST_B_0x1 = 1;

    /** @brief RCC APB peripheral reset register 2 */
    using RCC_APBRSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG reset Set and cleared by software. */
    using RCC_APBRSTR2_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SYSCFG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_SYSCFGRST_B_0x0 = 0;
        /** @brief Reset SYSCFG */
    constexpr std::uint32_t RCC_APBRSTR2_SYSCFGRST_B_0x1 = 1;

    /** @brief TIM1 timer reset Set and cleared by software. */
    using RCC_APBRSTR2_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM1 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM1RST_B_0x0 = 0;
        /** @brief Reset TIM1 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM1RST_B_0x1 = 1;

    /** @brief SPI1 reset Set and cleared by software. */
    using RCC_APBRSTR2_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_SPI1RST_B_0x0 = 0;
        /** @brief Reset SPI1 */
    constexpr std::uint32_t RCC_APBRSTR2_SPI1RST_B_0x1 = 1;

    /** @brief USART1 reset Set and cleared by software. */
    using RCC_APBRSTR2_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_USART1RST_B_0x0 = 0;
        /** @brief Reset USART1 */
    constexpr std::uint32_t RCC_APBRSTR2_USART1RST_B_0x1 = 1;

    /** @brief TIM14 timer reset Set and cleared by software. */
    using RCC_APBRSTR2_TIM14RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM14 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM14RST_B_0x0 = 0;
        /** @brief Reset TIM14 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM14RST_B_0x1 = 1;

    /** @brief TIM16 timer reset Set and cleared by software. */
    using RCC_APBRSTR2_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM16 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM16RST_B_0x0 = 0;
        /** @brief Reset TIM16 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM16RST_B_0x1 = 1;

    /** @brief TIM16 timer reset Set and cleared by software. */
    using RCC_APBRSTR2_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM17 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM17RST_B_0x0 = 0;
        /** @brief Reset TIM17 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM17RST_B_0x1 = 1;

    /** @brief ADC reset Set and cleared by software. */
    using RCC_APBRSTR2_ADCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset ADC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_ADCRST_B_0x0 = 0;
        /** @brief Reset ADC */
    constexpr std::uint32_t RCC_APBRSTR2_ADCRST_B_0x1 = 1;

    /** @brief RCC I/O port clock enable register */
    using RCC_IOPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port A clock enable This bit is set and cleared by software. */
    using RCC_IOPENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIOAEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIOAEN_B_0x1 = 1;

    /** @brief I/O port B clock enable This bit is set and cleared by software. */
    using RCC_IOPENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIOBEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIOBEN_B_0x1 = 1;

    /** @brief I/O port C clock enable This bit is set and cleared by software. */
    using RCC_IOPENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIOCEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIOCEN_B_0x1 = 1;

    /** @brief I/O port D clock enable This bit is set and cleared by software. */
    using RCC_IOPENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIODEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIODEN_B_0x1 = 1;

    /** @brief I/O port F clock enable This bit is set and cleared by software. */
    using RCC_IOPENR_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIOFEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIOFEN_B_0x1 = 1;

    /** @brief RCC AHB peripheral clock enable register */
    using RCC_AHBENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 and DMAMUX clock enable Set and cleared by software. DMAMUX is enabled as long as at least one DMA peripheral is enabled. */
    using RCC_AHBENR_DMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_DMA1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_DMA1EN_B_0x1 = 1;

    /** @brief Flash memory interface clock enable Set and cleared by software. This bit can only be cleared when the Flash memory is in power down mode. */
    using RCC_AHBENR_FLASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_FLASHEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_FLASHEN_B_0x1 = 1;

    /** @brief CRC clock enable Set and cleared by software. */
    using RCC_AHBENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_CRCEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_CRCEN_B_0x1 = 1;

    /** @brief RCC APB peripheral clock enable register 1 */
    using RCC_APBENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 timer clock enable Set and cleared by software. */
    using RCC_APBENR1_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_TIM3EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_TIM3EN_B_0x1 = 1;

    /** @brief RTC APB clock enable Set and cleared by software. */
    using RCC_APBENR1_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_RTCAPBEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_RTCAPBEN_B_0x1 = 1;

    /** @brief WWDG clock enable Set by software to enable the window watchdog clock. Cleared by hardware system reset This bit can also be set by hardware if the WWDG_SW option bit is 0. */
    using RCC_APBENR1_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_WWDGEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_WWDGEN_B_0x1 = 1;

    /** @brief USART2 clock enable Set and cleared by software. */
    using RCC_APBENR1_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_USART2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_USART2EN_B_0x1 = 1;

    /** @brief I2C1 clock enable Set and cleared by software. */
    using RCC_APBENR1_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_I2C1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_I2C1EN_B_0x1 = 1;

    /** @brief Debug support clock enable Set and cleared by software. */
    using RCC_APBENR1_DBGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_DBGEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_DBGEN_B_0x1 = 1;

    /** @brief Power interface clock enable Set and cleared by software. */
    using RCC_APBENR1_PWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_PWREN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_PWREN_B_0x1 = 1;

    /** @brief RCC APB peripheral clock enable register 2 */
    using RCC_APBENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG clock enable Set and cleared by software. */
    using RCC_APBENR2_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_SYSCFGEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_SYSCFGEN_B_0x1 = 1;

    /** @brief TIM1 timer clock enable Set and cleared by software. */
    using RCC_APBENR2_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM1EN_B_0x1 = 1;

    /** @brief SPI1 clock enable Set and cleared by software. */
    using RCC_APBENR2_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_SPI1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_SPI1EN_B_0x1 = 1;

    /** @brief USART1 clock enable Set and cleared by software. */
    using RCC_APBENR2_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_USART1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_USART1EN_B_0x1 = 1;

    /** @brief TIM14 timer clock enable Set and cleared by software. */
    using RCC_APBENR2_TIM14EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM14EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM14EN_B_0x1 = 1;

    /** @brief TIM16 timer clock enable Set and cleared by software. */
    using RCC_APBENR2_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM16EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM16EN_B_0x1 = 1;

    /** @brief TIM16 timer clock enable Set and cleared by software. */
    using RCC_APBENR2_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM17EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM17EN_B_0x1 = 1;

    /** @brief ADC clock enable Set and cleared by software. */
    using RCC_APBENR2_ADCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_ADCEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_ADCEN_B_0x1 = 1;

    /** @brief RCC I/O port in Sleep mode clock enable register */
    using RCC_IOPSMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port A clock enable during Sleep mode Set and cleared by software. */
    using RCC_IOPSMENR_GPIOASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOASMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOASMEN_B_0x1 = 1;

    /** @brief I/O port B clock enable during Sleep mode Set and cleared by software. */
    using RCC_IOPSMENR_GPIOBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOBSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOBSMEN_B_0x1 = 1;

    /** @brief I/O port C clock enable during Sleep mode Set and cleared by software. */
    using RCC_IOPSMENR_GPIOCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOCSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOCSMEN_B_0x1 = 1;

    /** @brief I/O port D clock enable during Sleep mode Set and cleared by software. */
    using RCC_IOPSMENR_GPIODSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIODSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIODSMEN_B_0x1 = 1;

    /** @brief I/O port F clock enable during Sleep mode Set and cleared by software. */
    using RCC_IOPSMENR_GPIOFSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOFSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOFSMEN_B_0x1 = 1;

    /** @brief RCC AHB peripheral clock enable in Sleep/Stop mode register */
    using RCC_AHBSMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 and DMAMUX clock enable during Sleep mode Set and cleared by software. Clock to DMAMUX during Sleep mode is enabled as long as the clock in Sleep mode is enabled to at least one DMA peripheral. */
    using RCC_AHBSMENR_DMA1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_DMA1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_DMA1SMEN_B_0x1 = 1;

    /** @brief Flash memory interface clock enable during Sleep mode Set and cleared by software. This bit can be activated only when the Flash memory is in power down mode. */
    using RCC_AHBSMENR_FLASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_FLASHSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_FLASHSMEN_B_0x1 = 1;

    /** @brief SRAM clock enable during Sleep mode Set and cleared by software. */
    using RCC_AHBSMENR_SRAMSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_SRAMSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_SRAMSMEN_B_0x1 = 1;

    /** @brief CRC clock enable during Sleep mode Set and cleared by software. */
    using RCC_AHBSMENR_CRCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_CRCSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_CRCSMEN_B_0x1 = 1;

    /** @brief RCC APB peripheral clock enable in Sleep/Stop mode register 1 */
    using RCC_APBSMENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 timer clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_TIM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM3SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM3SMEN_B_0x1 = 1;

    /** @brief RTC APB clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_RTCAPBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_RTCAPBSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_RTCAPBSMEN_B_0x1 = 1;

    /** @brief WWDG clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR1_WWDGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_WWDGSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_WWDGSMEN_B_0x1 = 1;

    /** @brief USART2 clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR1_USART2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_USART2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_USART2SMEN_B_0x1 = 1;

    /** @brief I2C1 clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR1_I2C1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C1SMEN_B_0x1 = 1;

    /** @brief Debug support clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_DBGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_DBGSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_DBGSMEN_B_0x1 = 1;

    /** @brief Power interface clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_PWRSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_PWRSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_PWRSMEN_B_0x1 = 1;

    /** @brief RCC APB peripheral clock enable in Sleep/Stop mode register 2 */
    using RCC_APBSMENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR2_SYSCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_SYSCFGSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_SYSCFGSMEN_B_0x1 = 1;

    /** @brief TIM1 timer clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR2_TIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM1SMEN_B_0x1 = 1;

    /** @brief SPI1 clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR2_SPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_SPI1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_SPI1SMEN_B_0x1 = 1;

    /** @brief USART1 clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR2_USART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_USART1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_USART1SMEN_B_0x1 = 1;

    /** @brief TIM14 timer clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR2_TIM14SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM14SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM14SMEN_B_0x1 = 1;

    /** @brief TIM16 timer clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR2_TIM16SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM16SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM16SMEN_B_0x1 = 1;

    /** @brief TIM16 timer clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR2_TIM17SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM17SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM17SMEN_B_0x1 = 1;

    /** @brief ADC clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR2_ADCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_ADCSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_ADCSMEN_B_0x1 = 1;

    /** @brief RCC peripherals independent clock configuration register */
    using RCC_CCIPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 clock source selection This bitfield is controlled by software to select USART1 clock source as follows: */
    using RCC_CCIPR_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSIKER (value: 2)
     *          - B_0x3: LSE (value: 3)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x1 = 1;
        /** @brief HSIKER */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x2 = 2;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CCIPR_USART1SEL_B_0x3 = 3;

    /** @brief I2C1 clock source selection This bitfield is controlled by software to select I2C1 clock source as follows: */
    using RCC_CCIPR_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSIKER (value: 2)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_I2C1SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_I2C1SEL_B_0x1 = 1;
        /** @brief HSIKER */
    constexpr std::uint32_t RCC_CCIPR_I2C1SEL_B_0x2 = 2;

    /** @brief I2S1 clock source selection This bitfield is controlled by software to select I2S1 clock source as follows: */
    using RCC_CCIPR_I2S1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCLK (value: 0)
     *          - B_0x2: HSIKER (value: 2)
     *          - B_0x3: I2S_CKIN (value: 3)
     */
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_I2S1SEL_B_0x0 = 0;
        /** @brief HSIKER */
    constexpr std::uint32_t RCC_CCIPR_I2S1SEL_B_0x2 = 2;
        /** @brief I2S_CKIN */
    constexpr std::uint32_t RCC_CCIPR_I2S1SEL_B_0x3 = 3;

    /** @brief ADCs clock source selection This bitfield is controlled by software to select the clock source for ADC: */
    using RCC_CCIPR_ADCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System clock (value: 0)
     *          - B_0x2: HSIKER (value: 2)
     */
        /** @brief System clock */
    constexpr std::uint32_t RCC_CCIPR_ADCSEL_B_0x0 = 0;
        /** @brief HSIKER */
    constexpr std::uint32_t RCC_CCIPR_ADCSEL_B_0x2 = 2;

    /** @brief RCC control/status register 1 */
    using RCC_CSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable Set and cleared by software to enable LSE oscillator: */
    using RCC_CSR1_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CSR1_LSEON_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CSR1_LSEON_B_0x1 = 1;

    /** @brief LSE oscillator ready Set and cleared by hardware to indicate when the external 32 kHz oscillator is ready (stable): After the LSEON bit is cleared, LSERDY goes low after 6 external low-speed oscillator clock cycles. */
    using RCC_CSR1_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready (value: 0)
     *          - B_0x1: Ready (value: 1)
     */
        /** @brief Not ready */
    constexpr std::uint32_t RCC_CSR1_LSERDY_B_0x0 = 0;
        /** @brief Ready */
    constexpr std::uint32_t RCC_CSR1_LSERDY_B_0x1 = 1;

    /** @brief LSE oscillator bypass Set and cleared by software to bypass the LSE oscillator (in debug mode). This bit can be written only when the external 32 kHz oscillator is disabled (LSEON=0 and LSERDY=0). */
    using RCC_CSR1_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not bypassed (value: 0)
     *          - B_0x1: Bypassed (value: 1)
     */
        /** @brief Not bypassed */
    constexpr std::uint32_t RCC_CSR1_LSEBYP_B_0x0 = 0;
        /** @brief Bypassed */
    constexpr std::uint32_t RCC_CSR1_LSEBYP_B_0x1 = 1;

    /** @brief LSE oscillator drive capability Set by software to select the LSE oscillator drive capability as follows: Applicable when the LSE oscillator is in Xtal mode, as opposed to bypass mode. */
    using RCC_CSR1_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low driving capability (value: 0)
     *          - B_0x1: medium-low driving capability (value: 1)
     *          - B_0x2: medium-high driving capability (value: 2)
     *          - B_0x3: high driving capability (value: 3)
     */
        /** @brief low driving capability */
    constexpr std::uint32_t RCC_CSR1_LSEDRV_B_0x0 = 0;
        /** @brief medium-low driving capability */
    constexpr std::uint32_t RCC_CSR1_LSEDRV_B_0x1 = 1;
        /** @brief medium-high driving capability */
    constexpr std::uint32_t RCC_CSR1_LSEDRV_B_0x2 = 2;
        /** @brief high driving capability */
    constexpr std::uint32_t RCC_CSR1_LSEDRV_B_0x3 = 3;

    /** @brief CSS on LSE enable Set by software to enable the clock security system on LSE (32 kHz) oscillator as follows: LSECSSON must be enabled after the LSE oscillator is enabled (LSEON bit enabled) and ready (LSERDY flag set by hardware), and after the RTCSEL bit is selected. Once enabled, this bit cannot be disabled, except after a LSE failure detection (LSECSSD =1). In that case the software must disable the LSECSSON bit. */
    using RCC_CSR1_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CSR1_LSECSSON_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CSR1_LSECSSON_B_0x1 = 1;

    /** @brief CSS on LSE failure Detection Set by hardware to indicate when a failure is detected by the clock security system on the external 32 kHz oscillator (LSE): */
    using RCC_CSR1_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No failure detected (value: 0)
     *          - B_0x1: Failure detected (value: 1)
     */
        /** @brief No failure detected */
    constexpr std::uint32_t RCC_CSR1_LSECSSD_B_0x0 = 0;
        /** @brief Failure detected */
    constexpr std::uint32_t RCC_CSR1_LSECSSD_B_0x1 = 1;

    /** @brief RTC clock source selection Set by software to select the clock source for the RTC as follows: Once the RTC clock source is selected, it cannot be changed anymore unless the RTC domain is reset, or unless a failure is detected on LSE (LSECSSD is set). The RTCRST bit can be used to reset this bitfield to 00. */
    using RCC_CSR1_RTCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock (value: 0)
     *          - B_0x1: LSE (value: 1)
     *          - B_0x2: LSI (value: 2)
     *          - B_0x3: HSE divided by 32 (value: 3)
     */
        /** @brief No clock */
    constexpr std::uint32_t RCC_CSR1_RTCSEL_B_0x0 = 0;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CSR1_RTCSEL_B_0x1 = 1;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CSR1_RTCSEL_B_0x2 = 2;
        /** @brief HSE divided by 32 */
    constexpr std::uint32_t RCC_CSR1_RTCSEL_B_0x3 = 3;

    /** @brief RTC clock enable Set and cleared by software. The bit enables clock to RTC and TAMP. */
    using RCC_CSR1_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CSR1_RTCEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CSR1_RTCEN_B_0x1 = 1;

    /** @brief RTC domain software reset Set and cleared by software to reset the RTC domain: */
    using RCC_CSR1_RTCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CSR1_RTCRST_B_0x0 = 0;
        /** @brief Reset */
    constexpr std::uint32_t RCC_CSR1_RTCRST_B_0x1 = 1;

    /** @brief Low-speed clock output (LSCO) enable Set and cleared by software. */
    using RCC_CSR1_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CSR1_LSCOEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CSR1_LSCOEN_B_0x1 = 1;

    /** @brief Low-speed clock output selection Set and cleared by software to select the low-speed output clock: */
    using RCC_CSR1_LSCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI (value: 0)
     *          - B_0x1: LSE (value: 1)
     */
        /** @brief LSI */
    constexpr std::uint32_t RCC_CSR1_LSCOSEL_B_0x0 = 0;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CSR1_LSCOSEL_B_0x1 = 1;

    /** @brief RCC control/status register 2 */
    using RCC_CSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable Set and cleared by software to enable/disable the LSI oscillator: */
    using RCC_CSR2_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CSR2_LSION_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CSR2_LSION_B_0x1 = 1;

    /** @brief LSI oscillator ready Set and cleared by hardware to indicate when the LSI oscillator is ready (stable): After the LSION bit is cleared, LSIRDY goes low after 3 LSI oscillator clock cycles. This bit can be set even if LSION = 0 if the LSI is requested by the Clock Security System on LSE, by the Independent Watchdog or by the RTC. */
    using RCC_CSR2_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready (value: 0)
     *          - B_0x1: Ready (value: 1)
     */
        /** @brief Not ready */
    constexpr std::uint32_t RCC_CSR2_LSIRDY_B_0x0 = 0;
        /** @brief Ready */
    constexpr std::uint32_t RCC_CSR2_LSIRDY_B_0x1 = 1;

    /** @brief Remove reset flags Set by software to clear the reset flags. */
    using RCC_CSR2_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear reset flags (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CSR2_RMVF_B_0x0 = 0;
        /** @brief Clear reset flags */
    constexpr std::uint32_t RCC_CSR2_RMVF_B_0x1 = 1;

    /** @brief Option byte loader reset flag Set by hardware when a reset from the Option byte loading occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR2_OBLRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from Option byte loading occurred (value: 0)
     *          - B_0x1: Reset from Option byte loading occurred (value: 1)
     */
        /** @brief No reset from Option byte loading occurred */
    constexpr std::uint32_t RCC_CSR2_OBLRSTF_B_0x0 = 0;
        /** @brief Reset from Option byte loading occurred */
    constexpr std::uint32_t RCC_CSR2_OBLRSTF_B_0x1 = 1;

    /** @brief Pin reset flag Set by hardware when a reset from the NRST pin occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR2_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from NRST pin occurred (value: 0)
     *          - B_0x1: Reset from NRST pin occurred (value: 1)
     */
        /** @brief No reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR2_PINRSTF_B_0x0 = 0;
        /** @brief Reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR2_PINRSTF_B_0x1 = 1;

    /** @brief BOR or POR/PDR flag Set by hardware when a BOR or POR/PDR occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR2_PWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No BOR or POR occurred (value: 0)
     *          - B_0x1: BOR or POR occurred (value: 1)
     */
        /** @brief No BOR or POR occurred */
    constexpr std::uint32_t RCC_CSR2_PWRRSTF_B_0x0 = 0;
        /** @brief BOR or POR occurred */
    constexpr std::uint32_t RCC_CSR2_PWRRSTF_B_0x1 = 1;

    /** @brief Software reset flag Set by hardware when a software reset occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR2_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No software reset occurred (value: 0)
     *          - B_0x1: Software reset occurred (value: 1)
     */
        /** @brief No software reset occurred */
    constexpr std::uint32_t RCC_CSR2_SFTRSTF_B_0x0 = 0;
        /** @brief Software reset occurred */
    constexpr std::uint32_t RCC_CSR2_SFTRSTF_B_0x1 = 1;

    /** @brief Independent window watchdog reset flag Set by hardware when an independent watchdog reset domain occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR2_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No independent watchdog reset occurred (value: 0)
     *          - B_0x1: Independent watchdog reset occurred (value: 1)
     */
        /** @brief No independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR2_IWDGRSTF_B_0x0 = 0;
        /** @brief Independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR2_IWDGRSTF_B_0x1 = 1;

    /** @brief Window watchdog reset flag Set by hardware when a window watchdog reset occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR2_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No window watchdog reset occurred (value: 0)
     *          - B_0x1: Window watchdog reset occurred (value: 1)
     */
        /** @brief No window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR2_WWDGRSTF_B_0x0 = 0;
        /** @brief Window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR2_WWDGRSTF_B_0x1 = 1;

    /** @brief Low-power reset flag Set by hardware when a reset occurs due to illegal Stop, or Standby, or Shutdown mode entry. Cleared by setting the RMVF bit. This operates only if nRST_STOP, or nRST_STDBY or nRST_SHDW option bits are cleared. */
    using RCC_CSR2_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal mode reset occurred (value: 0)
     *          - B_0x1: Illegal mode reset occurred (value: 1)
     */
        /** @brief No illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR2_LPWRRSTF_B_0x0 = 0;
        /** @brief Illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR2_LPWRRSTF_B_0x1 = 1;

}

#endif
