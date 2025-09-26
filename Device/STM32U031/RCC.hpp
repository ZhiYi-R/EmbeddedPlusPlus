/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U031_RCC_HPP
#define EMBEDDED_PP_STM32U031_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RCC address block description */
namespace STM32U031::RCC {

    /** @brief Clock control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock enable This bit is set and cleared by software. Cleared by hardware to stop the MSI oscillator when entering Stop, Standby or Shutdown mode. Set by hardware to force the MSI oscillator ON when exiting Standby or Shutdown mode. Set by hardware to force the MSI oscillator ON when STOPWUCK=0 when exiting from Stop modes, or in case of a failure of the HSE oscillator Set by hardware when used directly or indirectly as system clock. */
    using RCC_CR_MSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI oscillator OFF (value: 0)
     *          - B_0x1: MSI oscillator ON (value: 1)
     */
        /** @brief MSI oscillator OFF */
    constexpr std::uint32_t RCC_CR_MSION_B_0x0 = 0;
        /** @brief MSI oscillator ON */
    constexpr std::uint32_t RCC_CR_MSION_B_0x1 = 1;

    /** @brief MSI clock ready flag This bit is set by hardware to indicate that the MSI oscillator is stable. Note: Once the MSION bit is cleared, MSIRDY goes low after 6 MSI clock cycles. */
    using RCC_CR_MSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI oscillator not ready (value: 0)
     *          - B_0x1: MSI oscillator ready (value: 1)
     */
        /** @brief MSI oscillator not ready */
    constexpr std::uint32_t RCC_CR_MSIRDY_B_0x0 = 0;
        /** @brief MSI oscillator ready */
    constexpr std::uint32_t RCC_CR_MSIRDY_B_0x1 = 1;

    /** @brief MSI clock PLL enable Set and cleared by software to enable/ disable the PLL part of the MSI clock source. MSIPLLEN must be enabled after LSE is enabled (LSEON enabled) and ready (LSERDY set by hardware).There is a hardware protection to avoid enabling MSIPLLEN if LSE is not ready. This bit is cleared by hardware when LSE is disabled (LSEON = 0) or when the Clock Security System on LSE detects a LSE failure (refer to RCC_CSR register). */
    using RCC_CR_MSIPLLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI PLL OFF (value: 0)
     *          - B_0x1: MSI PLL ON (value: 1)
     */
        /** @brief MSI PLL OFF */
    constexpr std::uint32_t RCC_CR_MSIPLLEN_B_0x0 = 0;
        /** @brief MSI PLL ON */
    constexpr std::uint32_t RCC_CR_MSIPLLEN_B_0x1 = 1;

    /** @brief MSI clock range selection Set by software to select the MSI clock range with MSIRANGE[3:0]. Write 0 has no effect. After a standby or a reset MSIRGSEL is at 0 and the MSI range value is provided by MSISRANGE in CSR register. */
    using RCC_CR_MSIRGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI Range is provided by MSISRANGE[3:0] in RCC_CSR register (value: 0)
     *          - B_0x1: MSI Range is provided by MSIRANGE[3:0] in the RCC_CR register (value: 1)
     */
        /** @brief MSI Range is provided by MSISRANGE[3:0] in RCC_CSR register */
    constexpr std::uint32_t RCC_CR_MSIRGSEL_B_0x0 = 0;
        /** @brief MSI Range is provided by MSIRANGE[3:0] in the RCC_CR register */
    constexpr std::uint32_t RCC_CR_MSIRGSEL_B_0x1 = 1;

    /** @brief MSI clock ranges These bits are configured by software to choose the frequency range of MSI when MSIRGSEL is set.12 frequency ranges are available: others: not allowed (hardware write protection) Note: Warning: MSIRANGE can be modified when MSI is OFF (MSION=0) or when MSI is ready (MSIRDY=1). MSIRANGE must NOT be modified when MSI is ON and NOT ready (MSION=1 and MSIRDY=0) */
    using RCC_CR_MSIRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: range 0 around 1001kHz (value: 0)
     *          - B_0x1: range 1 around 2001kHz (value: 1)
     *          - B_0x2: range 2 around 4001kHz (value: 2)
     *          - B_0x3: range 3 around 8001kHz (value: 3)
     *          - B_0x4: range 4 around 1M1Hz (value: 4)
     *          - B_0x5: range 5 around 21MHz (value: 5)
     *          - B_0x6: range 6 around 41MHz (reset value) (value: 6)
     *          - B_0x7: range 7 around 81MHz (value: 7)
     *          - B_0x8: range 8 around 161MHz (value: 8)
     *          - B_0x9: range 9 around 241MHz (value: 9)
     *          - B_0xA: range 10 around 321MHz (value: 10)
     *          - B_0xB: range 11 around 481MHz (value: 11)
     */
        /** @brief range 0 around 1001kHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x0 = 0;
        /** @brief range 1 around 2001kHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x1 = 1;
        /** @brief range 2 around 4001kHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x2 = 2;
        /** @brief range 3 around 8001kHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x3 = 3;
        /** @brief range 4 around 1M1Hz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x4 = 4;
        /** @brief range 5 around 21MHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x5 = 5;
        /** @brief range 6 around 41MHz (reset value) */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x6 = 6;
        /** @brief range 7 around 81MHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x7 = 7;
        /** @brief range 8 around 161MHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x8 = 8;
        /** @brief range 9 around 241MHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0x9 = 9;
        /** @brief range 10 around 321MHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0xA = 10;
        /** @brief range 11 around 481MHz */
    constexpr std::uint32_t RCC_CR_MSIRANGE_B_0xB = 11;

    /** @brief HSI16 clock enable Set and cleared by software. Cleared by hardware to stop the HSI16 oscillator when entering Stop, Standby, or Shutdown mode. Forced by hardware to keep the HSI16 oscillator ON when it is used directly or indirectly as system clock (also when leaving Stop, Standby, or Shutdown modes, or in case of failure of the HSE oscillator used for system clock). */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator OFF (value: 0)
     *          - B_0x1: HSI16 oscillator ON (value: 1)
     */
        /** @brief HSI16 oscillator OFF */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI16 oscillator ON */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI16 always enable for peripheral kernels. Set and cleared by software to force HSI16 ON even in Stop modes. The HSI16 can only feed USART1, USART2, CEC and I2C1 peripherals configured with HSI16 as kernel clock. Keeping the HSI16 ON in Stop mode allows avoiding to slow down the communication speed because of the HSI16 startup time. This bit has no effect on HSION value. */
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

    /** @brief HSI16 automatic start from Stop Set and cleared by software. When the system wake-up clock is MSI, this bit is used to wake up the HSI16 is parallel of the system wake-up. */
    using RCC_CR_HSIASFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator is not enabled by hardware when exiting Stop mode with MSI as wake-up clock. (value: 0)
     *          - B_0x1: HSI16 oscillator is enabled by hardware when exiting Stop mode with MSI as wake-up clock. (value: 1)
     */
        /** @brief HSI16 oscillator is not enabled by hardware when exiting Stop mode with MSI as wake-up clock. */
    constexpr std::uint32_t RCC_CR_HSIASFS_B_0x0 = 0;
        /** @brief HSI16 oscillator is enabled by hardware when exiting Stop mode with MSI as wake-up clock. */
    constexpr std::uint32_t RCC_CR_HSIASFS_B_0x1 = 1;

    /** @brief HSE clock enable Set and cleared by software. Cleared by hardware to stop the HSE oscillator when entering Stop, Standby, or Shutdown mode. This bit cannot be reset if the HSE oscillator is used directly or indirectly as the system clock. */
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

    /** @brief PLL enable Set and cleared by software to enable the PLL. Cleared by hardware when entering Stop, Standby or Shutdown mode. This bit cannot be reset if the PLL clock is used as the system clock. */
    using RCC_CR_PLLON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL OFF (value: 0)
     *          - B_0x1: PLL ON (value: 1)
     */
        /** @brief PLL OFF */
    constexpr std::uint32_t RCC_CR_PLLON_B_0x0 = 0;
        /** @brief PLL ON */
    constexpr std::uint32_t RCC_CR_PLLON_B_0x1 = 1;

    /** @brief PLL clock ready flag Set by hardware to indicate that the PLL is locked. */
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
    /** @brief MSI clock calibration These bits are initialized at startup with the factory-programmed MSI calibration trim value. When MSITRIM is written, MSICAL is updated with the sum of MSITRIM and the factory trim value. */
    using RCC_ICSCR_MSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock trimming These bits provide an additional user-programmable trimming value that is added to the MSICAL[7:0] bits. It can be programmed to adjust to variations in voltage and temperature that influence the frequency of the MSI. */
    using RCC_ICSCR_MSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock calibration These bits are initialized at startup with the factory-programmed HSI16 calibration trim value. When HSITRIM is written, HSICAL is updated with the sum of HSITRIM and the factory trim value. */
    using RCC_ICSCR_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock trimming These bits provide an additional user-programmable trimming value that is added to the HSICAL[7:0] bits. It can be programmed to adjust to variations in voltage and temperature that influence the frequency of the HSI16. The default value is 64 when added to the HSICAL value, trim the HSI16 to 161MHz 1 11%. */
    using RCC_ICSCR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock configuration register */
    using RCC_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System clock switch This bitfield is controlled by software and hardware. The bitfield selects the clock for SYSCLK as follows: Others: Reserved The setting is forced by hardware to 000 (HSISYS selected) when the MCU exits Stop, Standby, or Shutdown mode, or when the setting is 001 (HSE selected) and HSE oscillator failure is detected. */
    using RCC_CFGR_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI (value: 0)
     *          - B_0x1: HSI16 (value: 1)
     *          - B_0x2: HSE (value: 2)
     *          - B_0x3: PLLRCLK (value: 3)
     *          - B_0x4: LSI (value: 4)
     *          - B_0x5: LSE (value: 5)
     */
        /** @brief MSI */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x0 = 0;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x1 = 1;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x2 = 2;
        /** @brief PLLRCLK */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x3 = 3;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x4 = 4;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_SW_B_0x5 = 5;

    /** @brief System clock switch status This bitfield is controlled by hardware to indicate the clock source used as system clock: Others: Reserved */
    using RCC_CFGR_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI (value: 0)
     *          - B_0x1: HSI16 (value: 1)
     *          - B_0x2: HSE (value: 2)
     *          - B_0x3: PLLRCLK (value: 3)
     *          - B_0x4: LSI (value: 4)
     *          - B_0x5: LSE (value: 5)
     */
        /** @brief MSI */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x0 = 0;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x1 = 1;
        /** @brief HSE */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x2 = 2;
        /** @brief PLLRCLK */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x3 = 3;
        /** @brief LSI */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x4 = 4;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CFGR_SWS_B_0x5 = 5;

    /** @brief AHB prescaler This bitfield is controlled by software. To produce HCLK clock, it sets the division factor of SYSCLK clock as follows: 0xxx: 1 Caution: Depending on the device voltage range, the software has to set correctly these bits to ensure that the system frequency does not exceed the maximum allowed frequency (for more details, refer to Section14.1.4: Dynamic voltage scaling management). After a write operation to these bits and before decreasing the voltage range, this register must be read to be sure that the new value has been taken into account. */
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

    /** @brief Wake-up from Stop and CSS backup clock selection Set and cleared by software to select the system clock used when exiting Stop mode. The selected clock is also used as emergency clock for the Clock Security System on HSE. Warning: STOPWUCK must not be modified when the Clock Security System is enabled by HSECSSON in RCC_CR register and the system clock is HSE (SWS=10) or a switch on HSE is requested (SW=10). */
    using RCC_CFGR_STOPWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI oscillator selected as wake-up from stop clock and CSS backup clock. (value: 0)
     *          - B_0x1: HSI16 oscillator selected as wake-up from stop clock and CSS backup clock (value: 1)
     */
        /** @brief MSI oscillator selected as wake-up from stop clock and CSS backup clock. */
    constexpr std::uint32_t RCC_CFGR_STOPWUCK_B_0x0 = 0;
        /** @brief HSI16 oscillator selected as wake-up from stop clock and CSS backup clock */
    constexpr std::uint32_t RCC_CFGR_STOPWUCK_B_0x1 = 1;

    /** @brief Microcontroller clock output 2 clock selector This bitfield is controlled by software. It sets the clock selector for MCO2 output as follows: Others: Reserved Note: This clock output may have some truncated cycles at startup or during MCO2 clock source switching. */
    using RCC_CFGR_MCO2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock, MCO2 output disabled (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: MSI (value: 2)
     *          - B_0x3: HSI16 (value: 3)
     *          - B_0x4: HSE (value: 4)
     *          - B_0x5: PLLRCLK (value: 5)
     *          - B_0x6: LSI (value: 6)
     *          - B_0x7: LSE (value: 7)
     *          - B_0x8: HSI48 (value: 8)
     *          - B_0x9: RTCCLK (value: 9)
     *          - B_0xA: RTC WAKEUP (value: 10)
     */
        /** @brief no clock, MCO2 output disabled */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x1 = 1;
        /** @brief MSI */
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
        /** @brief HSI48 */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x8 = 8;
        /** @brief RTCCLK */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0x9 = 9;
        /** @brief RTC WAKEUP */
    constexpr std::uint32_t RCC_CFGR_MCO2SEL_B_0xA = 10;

    /** @brief Microcontroller clock output 2 prescaler This bitfield is controlled by software. It sets the division factor of the clock sent to the MCO2 output as follows: ... Others: reserved It is highly recommended to set this field before the MCO2 output is enabled. */
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

    /** @brief Microcontroller clock output clock selector This bitfield is controlled by software. It sets the clock selector for MCO output as follows: Others: Reserved Note: This clock output may have some truncated cycles at startup or during MCO clock source switching. */
    using RCC_CFGR_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock, MCO output disabled (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: MSI (value: 2)
     *          - B_0x3: HSI16 (value: 3)
     *          - B_0x4: HSE (value: 4)
     *          - B_0x5: PLLRCLK (value: 5)
     *          - B_0x6: LSI (value: 6)
     *          - B_0x7: LSE (value: 7)
     *          - B_0x8: HSI48 (value: 8)
     *          - B_0x9: RTCCLK (value: 9)
     *          - B_0xA: RTC WAKEUP (value: 10)
     */
        /** @brief no clock, MCO output disabled */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x1 = 1;
        /** @brief MSI */
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
        /** @brief HSI48 */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x8 = 8;
        /** @brief RTCCLK */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0x9 = 9;
        /** @brief RTC WAKEUP */
    constexpr std::uint32_t RCC_CFGR_MCOSEL_B_0xA = 10;

    /** @brief Microcontroller clock output prescaler This bitfield is controlled by software. It sets the division factor of the clock sent to the MCO output as follows: ... Others: reserved It is highly recommended to set this field before the MCO output is enabled. */
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
    /** @brief PLL input clock source This bit is controlled by software to select PLL clock source, as follows: The bitfield can be written only when the PLL is disabled. When the PLL is not used, selecting 00 allows saving power. */
    using RCC_PLLCFGR_PLLSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock (value: 0)
     *          - B_0x1: MSI (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     *          - B_0x3: HSE (value: 3)
     */
        /** @brief No clock */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x0 = 0;
        /** @brief MSI */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x2 = 2;
        /** @brief HSE */
    constexpr std::uint32_t RCC_PLLCFGR_PLLSRC_B_0x3 = 3;

    /** @brief Division factor M of the PLL input clock divider This bit is controlled by software to divide the PLL input clock before the actual phase-locked loop, as follows: The bitfield can be written only when the PLL is disabled. Caution: The software must set these bits so that the PLL input frequency after the /M divider is between 2.66 and 161MHz. */
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

    /** @brief PLL frequency multiplication factor N This bit is controlled by software to set the division factor of the f<sub>VCO</sub> feedback divider (that determines the PLL multiplication ratio) as follows: ... ... The bitfield can be written only when the PLL is disabled. Caution: The software must set these bits so that the VCO output frequency is between 96 and 3441MHz. */
    using RCC_PLLCFGR_PLLN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Invalid (value: 0)
     *          - B_0x4: 4 (value: 4)
     *          - B_0x5: 5 (value: 5)
     *          - B_0x7E: 126 (value: 126)
     *          - B_0x7F: 127 (value: 127)
     */
        /** @brief Invalid */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x0 = 0;
        /** @brief 4 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x4 = 4;
        /** @brief 5 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x5 = 5;
        /** @brief 126 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x7E = 126;
        /** @brief 127 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLN_B_0x7F = 127;

    /** @brief PLLPCLK clock output enable This bit is controlled by software to enable/disable the PLLPCLK clock output of the PLL: Disabling the PLLPCLK clock output, when not used, allows saving power. */
    using RCC_PLLCFGR_PLLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLPEN_B_0x1 = 1;

    /** @brief PLL VCO division factor P for PLLPCLK clock output This bitfield is controlled by software. It sets the PLL VCO division factor P as follows: ... The bitfield can be written only when the PLL is disabled. Caution: The software must set this bitfield so as not to exceed 541MHz on this clock. */
    using RCC_PLLCFGR_PLLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2 (value: 1)
     *          - B_0x1F: 32 (value: 31)
     */
        /** @brief 2 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLP_B_0x1 = 1;
        /** @brief 32 */
    constexpr std::uint32_t RCC_PLLCFGR_PLLP_B_0x1F = 31;

    /** @brief PLLQCLK clock output enable This bit is controlled by software to enable/disable the PLLQCLK clock output of the PLL: Disabling the PLLQCLK clock output, when not used, allows saving power. */
    using RCC_PLLCFGR_PLLQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLQEN_B_0x1 = 1;

    /** @brief PLL VCO division factor Q for PLLQCLK clock output This bitfield is controlled by software. It sets the PLL VCO division factor Q as follows: The bitfield can be written only when the PLL is disabled. Caution: The software must set this bitfield so as not to exceed 541MHz on this clock. */
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

    /** @brief PLLRCLK clock output enable This bit is controlled by software to enable/disable the PLLRCLK clock output of the PLL: This bit cannot be written when PLLRCLK output of the PLL is selected for system clock. Disabling the PLLRCLK clock output, when not used, allows saving power. */
    using RCC_PLLCFGR_PLLREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLREN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_PLLCFGR_PLLREN_B_0x1 = 1;

    /** @brief PLL VCO division factor R for PLLRCLK clock output This bitfield is controlled by software. It sets the PLL VCO division factor R as follows: The bitfield can be written only when the PLL is disabled. The PLLRCLK clock can be selected as system clock. Caution: The software must set this bitfield so as not to exceed 122MHz on this clock. */
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

    /** @brief Clock interrupt enable register */
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

    /** @brief MSI ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the MSI oscillator stabilization. */
    using RCC_CIER_MSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI ready interrupt disabled (value: 0)
     *          - B_0x1: MSI ready interrupt enabled (value: 1)
     */
        /** @brief MSI ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_MSIRDYIE_B_0x0 = 0;
        /** @brief MSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_MSIRDYIE_B_0x1 = 1;

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

    /** @brief PLL ready interrupt enable Set and cleared by software to enable/disable interrupt caused by PLL lock: */
    using RCC_CIER_PLLRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CIER_PLLRDYIE_B_0x0 = 0;
        /** @brief Enable */
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

    /** @brief MSI ready interrupt flag Set by hardware when the MSI clock becomes stable and MSIRDYDIE is set. Cleared by software setting the MSIRDYC bit. */
    using RCC_CIFR_MSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the MSI oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the MSI oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the MSI oscillator */
    constexpr std::uint32_t RCC_CIFR_MSIRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the MSI oscillator */
    constexpr std::uint32_t RCC_CIFR_MSIRDYF_B_0x1 = 1;

    /** @brief HSI16 ready interrupt flag Set by hardware when the HSI16 clock becomes stable and HSIRDYIE is set in a response to setting the HSION (refer to Clock control register (RCC_CR)). When HSION is not set but the HSI16 oscillator is enabled by the peripheral through a clock request, this bit is not set and no interrupt is generated. Cleared by software setting the HSIRDYC bit. */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSI16 oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSI16 oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag Set by hardware when the HSE clock becomes stable and HSERDYIE is set. Cleared by software setting the HSERDYC bit. */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSE oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSE oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief PLL ready interrupt flag Set by hardware when the PLL locks and PLLRDYIE is set. Cleared by software setting the PLLRDYC bit. */
    using RCC_CIFR_PLLRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by PLL lock (value: 0)
     *          - B_0x1: Clock ready interrupt caused by PLL lock (value: 1)
     */
        /** @brief No clock ready interrupt caused by PLL lock */
    constexpr std::uint32_t RCC_CIFR_PLLRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by PLL lock */
    constexpr std::uint32_t RCC_CIFR_PLLRDYF_B_0x1 = 1;

    /** @brief HSE clock security system interrupt flag Set by hardware when a failure is detected in the HSE oscillator. Cleared by software setting the CSSC bit. */
    using RCC_CIFR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock security interrupt caused by HSE clock failure (value: 0)
     *          - B_0x1: Clock security interrupt caused by HSE clock failure (value: 1)
     */
        /** @brief No clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x0 = 0;
        /** @brief Clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x1 = 1;

    /** @brief LSE clock security system interrupt flag Set by hardware when a failure is detected in the LSE oscillator. Cleared by software by setting the LSECSSC bit. */
    using RCC_CIFR_LSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock security interrupt caused by LSE clock failure (value: 0)
     *          - B_0x1: Clock security interrupt caused by LSE clock failure (value: 1)
     */
        /** @brief No clock security interrupt caused by LSE clock failure */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x0 = 0;
        /** @brief Clock security interrupt caused by LSE clock failure */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x1 = 1;

    /** @brief HSI48 ready interrupt flag Set by hardware when the HSI48 clock becomes stable and HSI48RDYIE is set in a response to setting the HSI48ON (refer to RCC clock recovery RC register (RCC_CRRCR)). Cleared by software setting the HSI48RDYC bit. */
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

    /** @brief MSI ready interrupt clear This bit is set by software to clear the MSIRDYF flag. */
    using RCC_CICR_MSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: MSIRDYF cleared (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CICR_MSIRDYC_B_0x0 = 0;
        /** @brief MSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_MSIRDYC_B_0x1 = 1;

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

    /** @brief AHB peripheral reset register */
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

    /** @brief DMA2 and DMAMUX reset Set and cleared by software. */
    using RCC_AHBRSTR_DMA2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DMA2 and DMAMUX (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_DMA2RST_B_0x0 = 0;
        /** @brief Reset DMA2 and DMAMUX */
    constexpr std::uint32_t RCC_AHBRSTR_DMA2RST_B_0x1 = 1;

    /** @brief Flash memory interface reset Set and cleared by software. This bit can only be set when the flash memory is in power down mode. */
    using RCC_AHBRSTR_FLASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset flash memory interface (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_FLASHRST_B_0x0 = 0;
        /** @brief Reset flash memory interface */
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

    /** @brief Random number generator reset Set and cleared by software. */
    using RCC_AHBRSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset RNG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_RNGRST_B_0x0 = 0;
        /** @brief Reset RNG */
    constexpr std::uint32_t RCC_AHBRSTR_RNGRST_B_0x1 = 1;

    /** @brief Touch sensing controller reset Set and cleared by software. */
    using RCC_AHBRSTR_TSCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TSC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHBRSTR_TSCRST_B_0x0 = 0;
        /** @brief Reset TSC */
    constexpr std::uint32_t RCC_AHBRSTR_TSCRST_B_0x1 = 1;

    /** @brief I/O port reset register */
    using RCC_IOPRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief I/O port E reset This bit is set and cleared by software. */
    using RCC_IOPRSTR_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Reset I/O port E (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOERST_B_0x0 = 0;
        /** @brief Reset I/O port E */
    constexpr std::uint32_t RCC_IOPRSTR_GPIOERST_B_0x1 = 1;

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

    /** @brief APB peripheral reset register 1 */
    using RCC_APBRSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 timer reset Set and cleared by software. */
    using RCC_APBRSTR1_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_TIM2RST_B_0x0 = 0;
        /** @brief Reset TIM2 */
    constexpr std::uint32_t RCC_APBRSTR1_TIM2RST_B_0x1 = 1;

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

    /** @brief TIM6 timer reset Set and cleared by software. */
    using RCC_APBRSTR1_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM6 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_TIM6RST_B_0x0 = 0;
        /** @brief Reset TIM6 */
    constexpr std::uint32_t RCC_APBRSTR1_TIM6RST_B_0x1 = 1;

    /** @brief TIM7 timer reset Set and cleared by software. */
    using RCC_APBRSTR1_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM7 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_TIM7RST_B_0x0 = 0;
        /** @brief Reset TIM7 */
    constexpr std::uint32_t RCC_APBRSTR1_TIM7RST_B_0x1 = 1;

    /** @brief LPUART2 reset Set and cleared by software. */
    using RCC_APBRSTR1_LPUART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPUART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_LPUART2RST_B_0x0 = 0;
        /** @brief Reset LPUART2 */
    constexpr std::uint32_t RCC_APBRSTR1_LPUART2RST_B_0x1 = 1;

    /** @brief LCD reset<sup>(1)</sup> Set and cleared by software. */
    using RCC_APBRSTR1_LCDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LCD (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_LCDRST_B_0x0 = 0;
        /** @brief Reset LCD */
    constexpr std::uint32_t RCC_APBRSTR1_LCDRST_B_0x1 = 1;

    /** @brief USB reset<sup>(1)</sup> Set and cleared by software. */
    using RCC_APBRSTR1_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USB (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USBRST_B_0x0 = 0;
        /** @brief Reset USB */
    constexpr std::uint32_t RCC_APBRSTR1_USBRST_B_0x1 = 1;

    /** @brief SPI2 reset Set and cleared by software. */
    using RCC_APBRSTR1_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_SPI2RST_B_0x0 = 0;
        /** @brief Reset SPI2 */
    constexpr std::uint32_t RCC_APBRSTR1_SPI2RST_B_0x1 = 1;

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

    /** @brief USART3 reset Set and cleared by software. */
    using RCC_APBRSTR1_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USART3RST_B_0x0 = 0;
        /** @brief Reset USART3 */
    constexpr std::uint32_t RCC_APBRSTR1_USART3RST_B_0x1 = 1;

    /** @brief USART4 reset Set and cleared by software. */
    using RCC_APBRSTR1_USART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_USART4RST_B_0x0 = 0;
        /** @brief Reset USART4 */
    constexpr std::uint32_t RCC_APBRSTR1_USART4RST_B_0x1 = 1;

    /** @brief LPUART1 reset Set and cleared by software. */
    using RCC_APBRSTR1_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPUART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_LPUART1RST_B_0x0 = 0;
        /** @brief Reset LPUART1 */
    constexpr std::uint32_t RCC_APBRSTR1_LPUART1RST_B_0x1 = 1;

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

    /** @brief I2C2 reset Set and cleared by software. */
    using RCC_APBRSTR1_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_I2C2RST_B_0x0 = 0;
        /** @brief Reset I2C2 */
    constexpr std::uint32_t RCC_APBRSTR1_I2C2RST_B_0x1 = 1;

    /** @brief I2C3 reset Set and cleared by software. */
    using RCC_APBRSTR1_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_I2C3RST_B_0x0 = 0;
        /** @brief Reset I2C3 */
    constexpr std::uint32_t RCC_APBRSTR1_I2C3RST_B_0x1 = 1;

    /** @brief OPAMP reset Set and cleared by software. */
    using RCC_APBRSTR1_OPAMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the OPAMP (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_OPAMPRST_B_0x0 = 0;
        /** @brief Reset the OPAMP */
    constexpr std::uint32_t RCC_APBRSTR1_OPAMPRST_B_0x1 = 1;

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

    /** @brief DAC1 interface reset Set and cleared by software. */
    using RCC_APBRSTR1_DAC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DAC1 interface (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_DAC1RST_B_0x0 = 0;
        /** @brief Reset DAC1 interface */
    constexpr std::uint32_t RCC_APBRSTR1_DAC1RST_B_0x1 = 1;

    /** @brief Low Power Timer 2 reset Set and cleared by software. */
    using RCC_APBRSTR1_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR1_LPTIM2RST_B_0x0 = 0;
        /** @brief Reset LPTIM2 */
    constexpr std::uint32_t RCC_APBRSTR1_LPTIM2RST_B_0x1 = 1;

    /** @brief Low Power Timer 1 reset Set and cleared by software. */
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
    using RCC_APBRSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG, COMP and VREFBUF reset Set and cleared by software. */
    using RCC_APBRSTR2_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SYSCFG + COMP + VREFBUF (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_SYSCFGRST_B_0x0 = 0;
        /** @brief Reset SYSCFG + COMP + VREFBUF */
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

    /** @brief TIM15 timer reset Set and cleared by software. */
    using RCC_APBRSTR2_TIM15RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM15 timer (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APBRSTR2_TIM15RST_B_0x0 = 0;
        /** @brief Reset TIM15 timer */
    constexpr std::uint32_t RCC_APBRSTR2_TIM15RST_B_0x1 = 1;

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

    /** @brief AHB peripheral clock enable register */
    using RCC_AHBENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief DMA2 and DMAMUX clock enable Set and cleared by software. DMAMUX is enabled as long as at least one DMA peripheral is enabled. */
    using RCC_AHBENR_DMA2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_DMA2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_DMA2EN_B_0x1 = 1;

    /** @brief Flash memory interface clock enable Set and cleared by software. This bit can only be cleared when the flash memory is in power down mode. */
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

    /** @brief Random number generator clock enable Set and cleared by software. */
    using RCC_AHBENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBENR_RNGEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBENR_RNGEN_B_0x1 = 1;

    /** @brief Touch sensing controller clock enable Set and cleared by software. */
    using RCC_AHBENR_TSCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC clock disable (value: 0)
     *          - B_0x1: TSC clock enable (value: 1)
     */
        /** @brief TSC clock disable */
    constexpr std::uint32_t RCC_AHBENR_TSCEN_B_0x0 = 0;
        /** @brief TSC clock enable */
    constexpr std::uint32_t RCC_AHBENR_TSCEN_B_0x1 = 1;

    /** @brief I/O port clock enable register */
    using RCC_IOPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief I/O port E clock enable<sup>(1)</sup> This bit is set and cleared by software. */
    using RCC_IOPENR_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPENR_GPIOEEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPENR_GPIOEEN_B_0x1 = 1;

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

    /** @brief Debug configuration register */
    using RCC_DBGCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug support clock enable Set and cleared by software. */
    using RCC_DBGCFGR_DBGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_DBGCFGR_DBGEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_DBGCFGR_DBGEN_B_0x1 = 1;

    /** @brief Debug support reset Set and cleared by software. */
    using RCC_DBGCFGR_DBGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DBG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_DBGCFGR_DBGRST_B_0x0 = 0;
        /** @brief Reset DBG */
    constexpr std::uint32_t RCC_DBGCFGR_DBGRST_B_0x1 = 1;

    /** @brief APB peripheral clock enable register 1 */
    using RCC_APBENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 timer clock enable Set and cleared by software. */
    using RCC_APBENR1_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_TIM2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_TIM2EN_B_0x1 = 1;

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

    /** @brief TIM6 timer clock enable Set and cleared by software. */
    using RCC_APBENR1_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_TIM6EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 timer clock enable Set and cleared by software. */
    using RCC_APBENR1_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_TIM7EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_TIM7EN_B_0x1 = 1;

    /** @brief LPUART2 clock enable Set and cleared by software. */
    using RCC_APBENR1_LPUART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_LPUART2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_LPUART2EN_B_0x1 = 1;

    /** @brief LCD clock enable<sup>(1)</sup> Set and cleared by software. */
    using RCC_APBENR1_LCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_LCDEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_LCDEN_B_0x1 = 1;

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

    /** @brief USB clock enable<sup>(1)</sup> Set and cleared by software. */
    using RCC_APBENR1_USBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_USBEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_USBEN_B_0x1 = 1;

    /** @brief SPI2 clock enable Set and cleared by software. */
    using RCC_APBENR1_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_SPI2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_SPI2EN_B_0x1 = 1;

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

    /** @brief USART3 clock enable Set and cleared by software. */
    using RCC_APBENR1_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_USART3EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_USART3EN_B_0x1 = 1;

    /** @brief USART4 clock enable Set and cleared by software. */
    using RCC_APBENR1_USART4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_USART4EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_USART4EN_B_0x1 = 1;

    /** @brief LPUART1 clock enable Set and cleared by software. */
    using RCC_APBENR1_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_LPUART1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_LPUART1EN_B_0x1 = 1;

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

    /** @brief I2C2 clock enable Set and cleared by software. */
    using RCC_APBENR1_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_I2C2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_I2C2EN_B_0x1 = 1;

    /** @brief I2C3 clock enable Set and cleared by software. */
    using RCC_APBENR1_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_I2C3EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_I2C3EN_B_0x1 = 1;

    /** @brief OPAMP clock enable Set and cleared by software. */
    using RCC_APBENR1_OPAMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_OPAMPEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_OPAMPEN_B_0x1 = 1;

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

    /** @brief DAC1 interface clock enable Set and cleared by software. */
    using RCC_APBENR1_DAC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_DAC1EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_DAC1EN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable Set and cleared by software. */
    using RCC_APBENR1_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR1_LPTIM2EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR1_LPTIM2EN_B_0x1 = 1;

    /** @brief LPTIM1 clock enable Set and cleared by software. */
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
    using RCC_APBENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG, COMP and VREFBUF clock enable Set and cleared by software. */
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

    /** @brief TIM15 timer clock enable Set and cleared by software. */
    using RCC_APBENR2_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBENR2_TIM15EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBENR2_TIM15EN_B_0x1 = 1;

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

    /** @brief AHB peripheral clock enable in Sleep/Stop mode register */
    using RCC_AHBSMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief DMA2 and DMAMUX clock enable during Sleep mode Set and cleared by software. Clock to DMAMUX during Sleep mode is enabled as long as the clock in Sleep mode is enabled to at least one DMA peripheral. */
    using RCC_AHBSMENR_DMA2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_DMA2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_DMA2SMEN_B_0x1 = 1;

    /** @brief Flash memory interface clock enable during Sleep mode Set and cleared by software. This bit can be activated only when the flash memory is in power down mode. */
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

    /** @brief RNG clock enable during Sleep and Stop mode Set and cleared by software. */
    using RCC_AHBSMENR_RNGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_RNGSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_RNGSMEN_B_0x1 = 1;

    /** @brief TSC clock enable during Sleep and Stop mode Set and cleared by software. */
    using RCC_AHBSMENR_TSCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_AHBSMENR_TSCSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_AHBSMENR_TSCSMEN_B_0x1 = 1;

    /** @brief I/O port in Sleep mode clock enable register */
    using RCC_IOPSMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief I/O port D clock enable during Sleep mode<sup>(1)</sup> Set and cleared by software. */
    using RCC_IOPSMENR_GPIODSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIODSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIODSMEN_B_0x1 = 1;

    /** @brief I/O port E clock enable during Sleep mode Set and cleared by software. */
    using RCC_IOPSMENR_GPIOESMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOESMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_IOPSMENR_GPIOESMEN_B_0x1 = 1;

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

    /** @brief APB peripheral clock enable in Sleep/Stop mode register 1 */
    using RCC_APBSMENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 timer clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_TIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM2SMEN_B_0x1 = 1;

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

    /** @brief TIM6 timer clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_TIM6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM6SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM6SMEN_B_0x1 = 1;

    /** @brief TIM7 timer clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_TIM7SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM7SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_TIM7SMEN_B_0x1 = 1;

    /** @brief LPUART2 clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR1_LPUART2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_LPUART2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_LPUART2SMEN_B_0x1 = 1;

    /** @brief LCD clock enable during Sleep mode<sup>(1)</sup> Set and cleared by software. */
    using RCC_APBSMENR1_LCDSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_LCDSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_LCDSMEN_B_0x1 = 1;

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

    /** @brief USB clock enable during Sleep mode<sup>(1)</sup> Set and cleared by software. */
    using RCC_APBSMENR1_USBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_USBSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_USBSMEN_B_0x1 = 1;

    /** @brief SPI2 clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_SPI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_SPI2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_SPI2SMEN_B_0x1 = 1;

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

    /** @brief USART3 clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_USART3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_USART3SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_USART3SMEN_B_0x1 = 1;

    /** @brief USART4 clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_USART4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_USART4SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_USART4SMEN_B_0x1 = 1;

    /** @brief LPUART1 clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR1_LPUART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_LPUART1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_LPUART1SMEN_B_0x1 = 1;

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

    /** @brief I2C2 clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_I2C2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C2SMEN_B_0x1 = 1;

    /** @brief I2C3 clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR1_I2C3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C3SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_I2C3SMEN_B_0x1 = 1;

    /** @brief OPAMP clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR1_OPAMPSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_OPAMPSMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_OPAMPSMEN_B_0x1 = 1;

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

    /** @brief DAC1 interface clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR1_DAC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_DAC1SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_DAC1SMEN_B_0x1 = 1;

    /** @brief Low Power Timer 2 clock enable during Sleep and Stop modes Set and cleared by software. */
    using RCC_APBSMENR1_LPTIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR1_LPTIM2SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR1_LPTIM2SMEN_B_0x1 = 1;

    /** @brief Low Power Timer 1 clock enable during Sleep and Stop modes Set and cleared by software. */
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
    using RCC_APBSMENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG, COMP and VREFBUF clock enable during Sleep and Stop modes Set and cleared by software. */
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

    /** @brief TIM15 timer clock enable during Sleep mode Set and cleared by software. */
    using RCC_APBSMENR2_TIM15SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM15SMEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_APBSMENR2_TIM15SMEN_B_0x1 = 1;

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

    /** @brief Peripherals independent clock configuration register */
    using RCC_CCIPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 clock source selection This bitfield is controlled by software to select USART1 clock source as follows: */
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

    /** @brief USART2 clock source selection This bitfield is controlled by software to select USART2 clock source as follows: */
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

    /** @brief LPUART2 clock source selection This bitfield is controlled by software to select LPUART2 clock source as follows: */
    using RCC_CCIPR_LPUART2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     *          - B_0x3: LSE (value: 3)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_LPUART2SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_LPUART2SEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_LPUART2SEL_B_0x2 = 2;
        /** @brief LSE */
    constexpr std::uint32_t RCC_CCIPR_LPUART2SEL_B_0x3 = 3;

    /** @brief LPUART1 clock source selection This bitfield is controlled by software to select LPUART1 clock source as follows: */
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

    /** @brief I2C1 clock source selection This bitfield is controlled by software to select I2C1 clock source as follows: */
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

    /** @brief I2C3 clock source selection This bitfield is controlled by software to select I2C3 clock source as follows: */
    using RCC_CCIPR_I2C3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK (value: 0)
     *          - B_0x1: SYSCLK (value: 1)
     *          - B_0x2: HSI16 (value: 2)
     */
        /** @brief PCLK */
    constexpr std::uint32_t RCC_CCIPR_I2C3SEL_B_0x0 = 0;
        /** @brief SYSCLK */
    constexpr std::uint32_t RCC_CCIPR_I2C3SEL_B_0x1 = 1;
        /** @brief HSI16 */
    constexpr std::uint32_t RCC_CCIPR_I2C3SEL_B_0x2 = 2;

    /** @brief LPTIM1 clock source selection This bitfield is controlled by software to select LPTIM1 clock source as follows: */
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

    /** @brief LPTIM2 clock source selection This bitfield is controlled by software to select LPTIM2 clock source as follows: */
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

    /** @brief TIM1 clock source selection This bit is set and cleared by software. It selects TIM1 clock source as follows: */
    using RCC_CCIPR_TIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMPCLK (value: 0)
     *          - B_0x1: PLLQCLK (value: 1)
     */
        /** @brief TIMPCLK */
    constexpr std::uint32_t RCC_CCIPR_TIM1SEL_B_0x0 = 0;
        /** @brief PLLQCLK */
    constexpr std::uint32_t RCC_CCIPR_TIM1SEL_B_0x1 = 1;

    /** @brief TIM15 clock source selection This bit is set and cleared by software. It selects TIM15 clock source as follows: */
    using RCC_CCIPR_TIM15SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMPCLK (value: 0)
     *          - B_0x1: PLLQCLK (value: 1)
     */
        /** @brief TIMPCLK */
    constexpr std::uint32_t RCC_CCIPR_TIM15SEL_B_0x0 = 0;
        /** @brief PLLQCLK */
    constexpr std::uint32_t RCC_CCIPR_TIM15SEL_B_0x1 = 1;

    /** @brief 481MHz clock source selection This bitfield is controlled by software to select the 481MHz clock source used by the USB FS and the RNG: */
    using RCC_CCIPR_CLK48SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock (value: 0)
     *          - B_0x1: MSI (value: 1)
     *          - B_0x2: PLLQCLK (value: 2)
     *          - B_0x3: HSI48<sup>(1)</sup> (value: 3)
     */
        /** @brief No clock */
    constexpr std::uint32_t RCC_CCIPR_CLK48SEL_B_0x0 = 0;
        /** @brief MSI */
    constexpr std::uint32_t RCC_CCIPR_CLK48SEL_B_0x1 = 1;
        /** @brief PLLQCLK */
    constexpr std::uint32_t RCC_CCIPR_CLK48SEL_B_0x2 = 2;
        /** @brief HSI48<sup>(1)</sup> */
    constexpr std::uint32_t RCC_CCIPR_CLK48SEL_B_0x3 = 3;

    /** @brief ADCs clock source selection This bitfield is controlled by software to select the clock source for ADC: */
    using RCC_CCIPR_ADCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    using RCC_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable Set and cleared by software to enable LSE oscillator: */
    using RCC_BDCR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x1 = 1;

    /** @brief LSE oscillator ready Set and cleared by hardware to indicate when the external 321kHz oscillator is ready (stable): After the LSEON bit is cleared, LSERDY goes low after 6 external low-speed oscillator clock cycles. */
    using RCC_BDCR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready (value: 0)
     *          - B_0x1: Ready (value: 1)
     */
        /** @brief Not ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x0 = 0;
        /** @brief Ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x1 = 1;

    /** @brief LSE oscillator bypass Set and cleared by software to bypass the LSE oscillator (in debug mode). This bit can be written only when the external 321kHz oscillator is disabled (LSEON=0 and LSERDY=0). */
    using RCC_BDCR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not bypassed (value: 0)
     *          - B_0x1: Bypassed (value: 1)
     */
        /** @brief Not bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x0 = 0;
        /** @brief Bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x1 = 1;

    /** @brief LSE oscillator drive capability Set by software to select the LSE oscillator drive capability as follows: Applicable when the LSE oscillator is in Xtal mode, as opposed to bypass mode. */
    using RCC_BDCR_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low driving capability (value: 0)
     *          - B_0x1: medium-low driving capability (value: 1)
     *          - B_0x2: medium-high driving capability (value: 2)
     *          - B_0x3: high driving capability (value: 3)
     */
        /** @brief low driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x0 = 0;
        /** @brief medium-low driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x1 = 1;
        /** @brief medium-high driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x2 = 2;
        /** @brief high driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x3 = 3;

    /** @brief CSS on LSE enable Set by software to enable the clock security system on LSE (321kHz) oscillator as follows: LSECSSON must be enabled after the LSE oscillator is enabled (LSEON bit enabled) and ready (LSERDY flag set by hardware), and after the RTCSEL bit is selected. Once enabled, this bit cannot be disabled, except after a LSE failure detection (LSECSSD =1). In that case the software must disable the LSECSSON bit. */
    using RCC_BDCR_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x1 = 1;

    /** @brief CSS on LSE failure Detection Set by hardware to indicate when a failure is detected by the clock security system on the external 321kHz oscillator (LSE): */
    using RCC_BDCR_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No failure detected (value: 0)
     *          - B_0x1: Failure detected (value: 1)
     */
        /** @brief No failure detected */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x0 = 0;
        /** @brief Failure detected */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x1 = 1;

    /** @brief LSE clock enable for system usage This bit must be set by software to enable the LSE clock for a system usage. */
    using RCC_BDCR_LSESYSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled, LSE distributed to peripherals including LSCO/MCO/SYSCLK. (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t RCC_BDCR_LSESYSEN_B_0x0 = 0;
        /** @brief Enabled, LSE distributed to peripherals including LSCO/MCO/SYSCLK. */
    constexpr std::uint32_t RCC_BDCR_LSESYSEN_B_0x1 = 1;

    /** @brief RTC clock source selection Set by software to select the clock source for the RTC as follows: Once the RTC clock source is selected, it cannot be changed anymore unless the RTC domain is reset, or unless a failure is detected on LSE (LSECSSD is set). The BDRST bit can be used to reset this bitfield to 00. */
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

    /** @brief LSE clock ready for system usage This flag is set by hardware to indicate that the LSE clock is ready for being used by the system (see LSESYSEN bit). This flag is set when LSE clock is ready (LSEON1=11 and LSERDY1=11) and two LSE clock cycles after that LSESYSEN is set. Cleared by hardware to indicate that the LSE clock is not ready to be used by the system. */
    using RCC_BDCR_LSESYSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE clock not ready for system (value: 0)
     *          - B_0x1: LSE clock ready for system (value: 1)
     */
        /** @brief LSE clock not ready for system */
    constexpr std::uint32_t RCC_BDCR_LSESYSRDY_B_0x0 = 0;
        /** @brief LSE clock ready for system */
    constexpr std::uint32_t RCC_BDCR_LSESYSRDY_B_0x1 = 1;

    /** @brief RTC clock enable Set and cleared by software. The bit enables clock to RTC and TAMP. */
    using RCC_BDCR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x1 = 1;

    /** @brief RTC domain software reset Set and cleared by software to reset the RTC domain: */
    using RCC_BDCR_BDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_BDCR_BDRST_B_0x0 = 0;
        /** @brief Reset */
    constexpr std::uint32_t RCC_BDCR_BDRST_B_0x1 = 1;

    /** @brief Low-speed clock output (LSCO) enable Set and cleared by software. */
    using RCC_BDCR_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x1 = 1;

    /** @brief Low-speed clock output selection Set and cleared by software to select the low-speed output clock: */
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
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable Set and cleared by software to enable/disable the LSI oscillator: */
    using RCC_CSR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x1 = 1;

    /** @brief LSI oscillator ready Set and cleared by hardware to indicate when the LSI oscillator is ready (stable): After the LSION bit is cleared, LSIRDY goes low after 3 LSI oscillator clock cycles. This bit can be set even if LSION = 0 if the LSI is requested by the Clock Security System on LSE, by the Independent Watchdog or by the RTC. */
    using RCC_CSR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready (value: 0)
     *          - B_0x1: Ready (value: 1)
     */
        /** @brief Not ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x0 = 0;
        /** @brief Ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x1 = 1;

    /** @brief Internal low-speed oscillator pre-divided by 128 Set and reset by hardware to indicate when the low-speed internal RC oscillator has to be divided by 128. The software has to switch off the LSI before changing this bit. */
    using RCC_CSR_LSIPREDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI RC oscillator is not divided (value: 0)
     *          - B_0x1: LSI RC oscillator is divided by 128 (value: 1)
     */
        /** @brief LSI RC oscillator is not divided */
    constexpr std::uint32_t RCC_CSR_LSIPREDIV_B_0x0 = 0;
        /** @brief LSI RC oscillator is divided by 128 */
    constexpr std::uint32_t RCC_CSR_LSIPREDIV_B_0x1 = 1;

    /** @brief MSI range after Standby mode Set by software to chose the MSI frequency at startup. This range is used after exiting Standby mode until MSIRGSEL is set. After a pad or a power-on reset, the range is always 41MHz. MSISRANGE[3:0] can be written only when MSIRGSEL1=11. Others: Reserved Note: Changing the MSISRANGE[3:0] does not change the current MSI frequency. */
    using RCC_CSR_MSISRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: Range 7 around 81MHz (value: 4)
     */
        /** @brief Range 7 around 81MHz */
    constexpr std::uint32_t RCC_CSR_MSISRANGE_B_0x4 = 4;

    /** @brief Remove reset flags Set by software to clear the reset flags. */
    using RCC_CSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear reset flags (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x0 = 0;
        /** @brief Clear reset flags */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x1 = 1;

    /** @brief Option byte loader reset flag Set by hardware when a reset from the Option byte loading occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR_OBLRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from Option byte loading occurred (value: 0)
     *          - B_0x1: Reset from Option byte loading occurred (value: 1)
     */
        /** @brief No reset from Option byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x0 = 0;
        /** @brief Reset from Option byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x1 = 1;

    /** @brief Pin reset flag Set by hardware when a reset from the NRST pin occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from NRST pin occurred (value: 0)
     *          - B_0x1: Reset from NRST pin occurred (value: 1)
     */
        /** @brief No reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x0 = 0;
        /** @brief Reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x1 = 1;

    /** @brief BOR or POR/PDR flag Set by hardware when a BOR or POR/PDR occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR_PWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No BOR or POR occurred (value: 0)
     *          - B_0x1: BOR or POR occurred (value: 1)
     */
        /** @brief No BOR or POR occurred */
    constexpr std::uint32_t RCC_CSR_PWRRSTF_B_0x0 = 0;
        /** @brief BOR or POR occurred */
    constexpr std::uint32_t RCC_CSR_PWRRSTF_B_0x1 = 1;

    /** @brief Software reset flag Set by hardware when a software reset occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No software reset occurred (value: 0)
     *          - B_0x1: Software reset occurred (value: 1)
     */
        /** @brief No software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x0 = 0;
        /** @brief Software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x1 = 1;

    /** @brief Independent window watchdog reset flag Set by hardware when an independent watchdog reset domain occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No independent watchdog reset occurred (value: 0)
     *          - B_0x1: Independent watchdog reset occurred (value: 1)
     */
        /** @brief No independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x0 = 0;
        /** @brief Independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x1 = 1;

    /** @brief Window watchdog reset flag Set by hardware when a window watchdog reset occurs. Cleared by setting the RMVF bit. */
    using RCC_CSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No window watchdog reset occurred (value: 0)
     *          - B_0x1: Window watchdog reset occurred (value: 1)
     */
        /** @brief No window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x0 = 0;
        /** @brief Window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Low-power reset flag Set by hardware when a reset occurs due to illegal Stop, Standby, or Shutdown mode entry. Cleared by setting the RMVF bit. This operates only if nRST_STOP, nRST_STDBY or nRST_SHDW option bits are cleared. */
    using RCC_CSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal mode reset occurred (value: 0)
     *          - B_0x1: Illegal mode reset occurred (value: 1)
     */
        /** @brief No illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x0 = 0;
        /** @brief Illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC clock recovery RC register */
    using RCC_CRRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 RC oscillator enable<sup>(1)</sup> */
    using RCC_CRRCR_HSI48ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t RCC_CRRCR_HSI48ON_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t RCC_CRRCR_HSI48ON_B_0x1 = 1;

    /** @brief HSI48 clock ready flag<sup>(1)</sup> The flag is set when the HSI48 clock is ready for use. */
    using RCC_CRRCR_HSI48RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 clock calibration These bits are initialized at startup with the factory-programmed HSI48 calibration trim value. */
    using RCC_CRRCR_HSI48CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
