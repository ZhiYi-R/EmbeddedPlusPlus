/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA52_RCC_HPP
#define EMBEDDED_PP_STM32WBA52_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Reset and clock control */
namespace STM32WBA52::RCC {

    /** @brief RCC clock control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock enable Set and cleared by software. Cleared by hardware when entering Stop and Standby modes. Set by hardware to force the HSI16 oscillator on when exiting Stop and Standby modes. Set by hardware to force the HSI16 oscillator on in case of clock security failure of the HSE32 crystal oscillator. This bit is set by hardware if the HSI16 is used directly or indirectly as system clock. Access to the bit can be secured by RCC HSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator off (value: 0)
     *          - B_0x1: HSI16 oscillator on (value: 1)
     */
        /** @brief HSI16 oscillator off */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI16 oscillator on */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI16 enable for some peripheral kernels Set and cleared by software to force HSI16 oscillator on even in Stop modes. Keeping the HSI16 oscillator on in Stop modes allows the communication speed not to be reduced by the HSI16 oscillator startup time. This bit has no effect on register bit HSION value. Cleared by hardware when entering Standby modes. Refer to Peripherals clock gating and autonomous mode for more details. Access to the bit can be secured by RCC HSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect on HSI16 oscillator (value: 0)
     *          - B_0x1: HSI16 oscillator forced on even in Stop mode (value: 1)
     */
        /** @brief No effect on HSI16 oscillator */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI16 oscillator forced on even in Stop mode */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x1 = 1;

    /** @brief HSI16 clock ready flag Set by hardware to indicate that HSI16 oscillator is stable. This bit is set only when HSI16 is enabled by software by setting HSION. Access to the bit can be secured by RCC HSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: Once the HSION bit is cleared, HSIRDY goes low after six HSI16 clock cycles. */
    using RCC_CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator not ready (value: 0)
     *          - B_0x1: HSI16 oscillator ready (value: 1)
     */
        /** @brief HSI16 oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x0 = 0;
        /** @brief HSI16 oscillator ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x1 = 1;

    /** @brief HSE32 clock enable Set and cleared by software. Cleared by hardware to stop the HSE32 clock for the CPU when entering Stop and Standby modes and on a HSECSS failure. When the HSE32 is used as 2.4 GHz RADIO kernel clock, enabled by RADIOEN and RADIOSMEN and the 2.4 GHz RADIO is active, HSEON is not be cleared when entering low power mode. In this case only Stop 0 mode is entered as low power mode. This bit cannot be reset if the HSE32 oscillator is used directly or indirectly as the system clock. Access to the bit can be secured by RCC HSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 oscillator not requested by the CPU. (value: 0)
     *          - B_0x1: HSE32 oscillator ON (value: 1)
     */
        /** @brief HSE32 oscillator not requested by the CPU. */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief HSE32 oscillator ON */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x1 = 1;

    /** @brief HSE32 clock ready flag Set by hardware to indicate that the HSE32 oscillator is stable. This bit is set both when HSE32 is enabled by software by setting HSEON and when requested as kernel clock by the 2.4 GHz RADIO. Access to the bit can be secured by RCC HSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 oscillator not ready (value: 0)
     *          - B_0x1: HSE32 oscillator ready to be used by the CPU (HSERDY remains set when HSE32 is disabled by HSECSS failure). (value: 1)
     */
        /** @brief HSE32 oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x0 = 0;
        /** @brief HSE32 oscillator ready to be used by the CPU (HSERDY remains set when HSE32 is disabled by HSECSS failure). */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x1 = 1;

    /** @brief HSE32 clock security system enable Set by software to enable the HSE32 clock security system. When HSECSSON is set, the clock detector is enabled by hardware when the HSE32 oscillator is ready and disabled by hardware if a HSE32 clock failure is detected. This bit is set only and is cleared by reset. Access to the bit can be secured by RCC HSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CR_HSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 clock security system off (clock detector off) (value: 0)
     *          - B_0x1: HSE32 clock security system on (clock detector on if the HSE32 oscillator is stable, off if not). (value: 1)
     */
        /** @brief HSE32 clock security system off (clock detector off) */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x0 = 0;
        /** @brief HSE32 clock security system on (clock detector on if the HSE32 oscillator is stable, off if not). */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x1 = 1;

    /** @brief HSE32 clock for SYSCLK prescaler Set and cleared by software to control the division factor of the HSE32 clock for SYSCLK. Access to the bit can be secured by RCC HSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CR_HSEPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 not divided, SYSCLK = HSE32 (value: 0)
     *          - B_0x1: HSE32 divided, SYSCLK = HSE32/2 (value: 1)
     */
        /** @brief HSE32 not divided, SYSCLK = HSE32 */
    constexpr std::uint32_t RCC_CR_HSEPRE_B_0x0 = 0;
        /** @brief HSE32 divided, SYSCLK = HSE32/2 */
    constexpr std::uint32_t RCC_CR_HSEPRE_B_0x1 = 1;

    /** @brief PLL1 enable Set and cleared by software to enable the main PLL. Cleared by hardware when entering Stop or Standby modes and when PLL1 on HSE32 is selected as sysclk, on a HSECSS failure. This bit cannot be reset if the PLL1 clock is used as the system clock. Access to the bit can be secured by RCC PLL1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CR_PLL1ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 off (value: 0)
     *          - B_0x1: PLL1 on (value: 1)
     */
        /** @brief PLL1 off */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x0 = 0;
        /** @brief PLL1 on */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x1 = 1;

    /** @brief PLL1 clock ready flag Set by hardware to indicate that the PLL1 is locked. Access to the bit can be secured by RCC PLL1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief HSI16 clock calibration These bits are initialized at startup with the factory-programmed HSI16 calibration value. When HSITRIM[4:0] is written, HSICAL[11:0] is updated with the sum of HSITRIM[4:0] and the initial factory trim value. */
    using RCC_ICSCR3_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock trimming These bits provide an additional user-programmable trimming value that is added to the HSICAL[11:0] bits. It can be programmed to adjust to voltage and temperature variations that influence the frequency of the HSI16. */
    using RCC_ICSCR3_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock configuration register 1 */
    using RCC_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock switch Set and cleared by software to select system clock source (SYSCLK). Cleared by hardware when entering Stop and Standby modes When selecting HSE32 directly or indirectly as system clock and HSE32 oscillator clock security fails, cleared by hardware. */
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

    /** @brief system clock switch status Set and cleared by hardware to indicate which clock source is used as system clock. */
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

    /** @brief microcontroller clock output Set and cleared by software. others: reserved Note: This clock output may have some truncated cycles at startup or during MCO clock source switching. */
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

    /** @brief microcontroller clock output prescaler Set and cleared by software. It is highly recommended to change this prescaler before MCO output is enabled. others: not allowed */
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
    /** @brief AHB1, AHB2 and AHB4 prescaler Set and cleared by software to control the division factor of the AHB1, AHB2 and AHB4 clock (hclk1). The software must limit the incremental frequency step by setting these bits correctly to ensure that the hclk1 maximum incremental frequency step does not exceed the maximum allowed incremental frequency step (for more details, refer to Table99: SYSCLK and bus maximum frequency). After a write operation to these bits and before decreasing the voltage range, this register must be read to be sure that the new value is taken into account. 0xx: hclk1 = SYSCLK not divided */
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

    /** @brief APB1 prescaler Set and cleared by software to control the division factor of the APB1 clock (pclk1). 0xx: pclk1 = hclk1 not divided */
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

    /** @brief APB2 prescaler Set and cleared by software to control the division factor of the APB2 clock (pclk2). 0xx: pclk2 = hclk1 not divided */
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
    /** @brief APB7 prescaler Set and cleared by software to control the division factor of the APB7 clock (pclk7). 0xx: hclk1 not divided */
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
    /** @brief PLL1 entry clock source Set and cleared by software to select PLL1 clock source. These bits can be written only when the PLL1 is disabled. Cleared by hardware when entering Stop or Standby modes. Note: In order to save power, when no PLL1 clock is used, the value of PLL1SRC must be 0. */
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

    /** @brief PLL1 input frequency range Set and reset by software to select the proper reference frequency range used for PLL1. This bit must be written before enabling the PLL1. 00-01-10: PLL1 input (ref1_ck) clock range frequency between 4 and 8 MHz */
    using RCC_PLL1CFGR_PLL1RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: PLL1 input (ref1_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL1 input (ref1_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RGE_B_0x3 = 3;

    /** @brief PLL1 fractional latch enable Set and reset by software to latch the content of PLL1FRACN into the modulator. In order to latch the PLL1FRACN value into the modulator, PLL1FRACEN must be set to 0, then set to 1: the transition 0 to 1 transfers the content of PLL1FRACN into the modulator (see PLL1 initialization phase for details). */
    using RCC_PLL1CFGR_PLL1FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler for PLL1 Set and cleared by software to configure the prescaler of the PLL1. The VCO1 input frequency is PLL1 input clock frequency/PLL1M. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ... */
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

    /** @brief PLL1 DIVP divider output enable Set and reset by software to enable the pll1pclk output of the PLL1. To save power, PLL1PEN and PLL1P bits must be set to 0 when the pll1pclk is not used. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). */
    using RCC_PLL1CFGR_PLL1PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1pclk output disabled (value: 0)
     *          - B_0x1: pll1pclk output enabled (value: 1)
     */
        /** @brief pll1pclk output disabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x0 = 0;
        /** @brief pll1pclk output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x1 = 1;

    /** @brief PLL1 DIVQ divider output enable Set and reset by software to enable the pll1qclk output of the PLL1. To save power, PLL1QEN and PLL1Q bits must be set to 0 when the pll1qclk is not used. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). */
    using RCC_PLL1CFGR_PLL1QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1qclk output disabled (value: 0)
     *          - B_0x1: pll1qclk output enabled (value: 1)
     */
        /** @brief pll1qclk output disabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x0 = 0;
        /** @brief pll1qclk output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x1 = 1;

    /** @brief PLL1 DIVR divider output enable Set and cleared by software to enable the pll1rclk output of the PLL1. To save power, PLL1REN and PLL1R bits must be set to 0 when the pll1rclk is not used. This bit can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). */
    using RCC_PLL1CFGR_PLL1REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1rclk output disabled (value: 0)
     *          - B_0x1: pll1rclk output enabled (value: 1)
     */
        /** @brief pll1rclk output disabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1REN_B_0x0 = 0;
        /** @brief pll1rclk output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1REN_B_0x1 = 1;

    /** @brief pll1rclk clock for SYSCLK prescaler division enable Set and cleared by software to control the division of the pll1rclk clock for SYSCLK. */
    using RCC_PLL1CFGR_PLL1RCLKPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1rclk not divided, sysclkpre = pll1rclk (value: 0)
     *          - B_0x1: pll1rclk divided, sysclkpre = pll1rclk divided (value: 1)
     */
        /** @brief pll1rclk not divided, sysclkpre = pll1rclk */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRE_B_0x0 = 0;
        /** @brief pll1rclk divided, sysclkpre = pll1rclk divided */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRE_B_0x1 = 1;

    /** @brief pll1rclk clock for SYSCLK prescaler division step selection Set and cleared by software to control the division step of the pll1rclk clock for SYSCLK. */
    using RCC_PLL1CFGR_PLL1RCLKPRESTEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1rclk 2-step division (value: 0)
     *          - B_0x1: pll1rclk 3-step division (value: 1)
     */
        /** @brief pll1rclk 2-step division */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRESTEP_B_0x0 = 0;
        /** @brief pll1rclk 3-step division */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RCLKPRESTEP_B_0x1 = 1;

    /** @brief pll1rclkpre not divided ready. Set by hardware after PLL1RCLKPRE has been set from divided to not divide, to indicate that the pll1rclk not divided is available on sysclkpre. */
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
    /** @brief Multiplication factor for PLL1 VCO Set and reset by software to control the multiplication factor of the VCO. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ... ... others: reserved VCO output frequency = Fsubref1_ck/sub x multiplication factor for PLL1 VCO, when fractional value 0 has been loaded into PLL1FRACN, with: Multiplication factor for PLL1 VCO between 4 and 512 input frequency Fsubref1_ck/sub between 4 and 16MHz */
    using RCC_PLL1DIVR_PLL1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x003: multiplication factor for PLL1 VCO= 4 (value: 3)
     *          - B_0x004: multiplication factor for PLL1 VCO = 5 (value: 4)
     *          - B_0x005: multiplication factor for PLL1 VCO = 6 (value: 5)
     *          - B_0x080: multiplication factor for PLL1 VCO = 129 (default after reset) (value: 128)
     *          - B_0x1FF: multiplication factor for PLL1 VCO = 512 (value: 511)
     */
        /** @brief multiplication factor for PLL1 VCO= 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x003 = 3;
        /** @brief multiplication factor for PLL1 VCO = 5 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x004 = 4;
        /** @brief multiplication factor for PLL1 VCO = 6 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x005 = 5;
        /** @brief multiplication factor for PLL1 VCO = 129 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x080 = 128;
        /** @brief multiplication factor for PLL1 VCO = 512 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1N_B_0x1FF = 511;

    /** @brief PLL1 DIVP division factor Set and reset by software to control the frequency of the pll1pclk clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). Note that odd division factors are not allowed. ... */
    using RCC_PLL1DIVR_PLL1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not allowed (value: 0)
     *          - B_0x1: pll1pclk = VCO output frequency / 2 (default after reset) (value: 1)
     *          - B_0x2: not allowed (value: 2)
     *          - B_0x3: pll1pclk = VCO output frequency / 4 (value: 3)
     *          - B_0x7F: pll1pclk = VCO output frequency / 128 (value: 127)
     */
        /** @brief Not allowed */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x0 = 0;
        /** @brief pll1pclk = VCO output frequency / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x1 = 1;
        /** @brief not allowed */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x2 = 2;
        /** @brief pll1pclk = VCO output frequency / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x3 = 3;
        /** @brief pll1pclk = VCO output frequency / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x7F = 127;

    /** @brief PLL1 DIVQ division factor Set and reset by software to control the frequency of the PLl1QCLK clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ... */
    using RCC_PLL1DIVR_PLL1Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLl1QCLK = VCO output frequency (value: 0)
     *          - B_0x1: PLl1QCLK = VCO output frequency / 2 (default after reset) (value: 1)
     *          - B_0x2: PLl1QCLK = VCO output frequency / 3 (value: 2)
     *          - B_0x3: PLl1QCLK = VCO output frequency / 4 (value: 3)
     *          - B_0x7F: PLl1QCLK = VCO output frequency / 128 (value: 127)
     */
        /** @brief PLl1QCLK = VCO output frequency */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x0 = 0;
        /** @brief PLl1QCLK = VCO output frequency / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x1 = 1;
        /** @brief PLl1QCLK = VCO output frequency / 3 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x2 = 2;
        /** @brief PLl1QCLK = VCO output frequency / 4 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x3 = 3;
        /** @brief PLl1QCLK = VCO output frequency / 128 */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1Q_B_0x7F = 127;

    /** @brief PLL1 DIVR division factor Set and reset by software to control the frequency of the pll1rclk clock. These bits can be written only when the PLL1 is disabled (PLL1ON = 0 and PLL1RDY = 0). ... */
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
    /** @brief Fractional part of the multiplication factor for PLL1 VCO Set and reset by software to control the fractional part of the multiplication factor of the VCO. These bits can be written at any time, allowing dynamic fine-tuning of the PLL1 VCO. VCO output frequency = Fsubref1_ck/sub x [multiplication factor for PLL1 VCO + (PLL1FRACN / 2sup13/sup)], with: Multiplication factor for PLL1 VCO must be between 4 and 512. PLL1FRACN can be between 0 and 2sup13/sup- 1. The input frequency Fsubref1_ck/sub must be between 4 and 16 MHz. To change the used fractional value on-the-fly even if the PLL1 is enabled, the application must proceed as follows: Set the bit PLL1FRACEN to 0. Write the new fractional value into PLL1FRACN. Set the bit PLL1FRACEN to 1. */
    using RCC_PLL1FRACR_PLL1FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI1 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the LSI1 oscillator stabilization. Access to the bit can be secured by RCC LSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIER_LSI1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI1 ready interrupt disabled (value: 0)
     *          - B_0x1: LSI1 ready interrupt enabled (value: 1)
     */
        /** @brief LSI1 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_LSI1RDYIE_B_0x0 = 0;
        /** @brief LSI1 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSI1RDYIE_B_0x1 = 1;

    /** @brief LSE ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the LSE oscillator stabilization. Access to the bit can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE ready interrupt disabled (value: 0)
     *          - B_0x1: LSE ready interrupt enabled (value: 1)
     */
        /** @brief LSE ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x0 = 0;
        /** @brief LSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x1 = 1;

    /** @brief HSI16 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the HSI16 oscillator stabilization. Access to the bit can be secured by RCC HSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 ready interrupt disabled (value: 0)
     *          - B_0x1: HSI16 ready interrupt enabled (value: 1)
     */
        /** @brief HSI16 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief HSI16 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE32 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by the HSE32 oscillator stabilization. Access to the bit can be secured by RCC HSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE32 ready interrupt disabled (value: 0)
     *          - B_0x1: HSE32 ready interrupt enabled (value: 1)
     */
        /** @brief HSE32 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE32 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

    /** @brief PLL1 ready interrupt enable Set and cleared by software to enable/disable interrupt caused by PLL1 lock. Access to the bit can be secured by RCC PLL1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIER_PLL1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 lock interrupt disabled (value: 0)
     *          - B_0x1: PLL1 lock interrupt enabled (value: 1)
     */
        /** @brief PLL1 lock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x0 = 0;
        /** @brief PLL1 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x1 = 1;

    /** @brief RCC clock interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI1 ready interrupt flag Set by hardware when the LSI1 clock becomes stable and LSI1RDYIE is set. Cleared by software setting the LSI1RDYC bit. Access to the bit can be secured by RCC LSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIFR_LSI1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSI1 oscillator (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSI1 oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSI1 oscillator */
    constexpr std::uint32_t RCC_CIFR_LSI1RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSI1 oscillator */
    constexpr std::uint32_t RCC_CIFR_LSI1RDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag Set by hardware when the LSE clock becomes stable and LSERDYIE is set. Cleared by software setting the LSERDYC bit. Access to the bit can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSE oscillator (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSE oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief HSI16 ready interrupt flag Set by hardware when the HSI16 clock becomes stable and HSIRDYIE is set in a response to setting the HSION (see RCC_CR). When HSION is not set but the HSI16 oscillator is enabled by the peripheral through a clock request, this bit is not set and no interrupt is generated. Access to the bit can be secured by RCC HSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Cleared by software setting the HSIRDYC bit. */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSI16 oscillator (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSI16 oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE32 ready interrupt flag Set by hardware when the HSE32 clock becomes stable and HSERDYIE is set. Cleared by software setting the HSERDYC bit. Access to the bit can be secured by RCC HSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSE32 oscillator (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSE32 oscillator (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSE32 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSE32 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief PLL1 ready interrupt flag Set by hardware when the PLL1 locks and PLL1RDYIE is set. Cleared by software setting the PLL1RDYC bit. Access to the bit can be secured by RCC PLL1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIFR_PLL1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by PLL1 lock (value: 0)
     *          - B_0x1: clock ready interrupt caused by PLL1 lock (value: 1)
     */
        /** @brief no clock ready interrupt caused by PLL1 lock */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by PLL1 lock */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x1 = 1;

    /** @brief HSE32 clock security system interrupt flag Set by hardware when a clock security failure is detected in the HSE32 oscillator. Cleared by software setting the HSECSSC bit. Access to the bit can be secured by RCC HSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CIFR_HSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock security interrupt caused by HSE32 clock failure (value: 0)
     *          - B_0x1: clock security interrupt caused by HSE32 clock failure (value: 1)
     */
        /** @brief no clock security interrupt caused by HSE32 clock failure */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x0 = 0;
        /** @brief clock security interrupt caused by HSE32 clock failure */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x1 = 1;

    /** @brief RCC clock interrupt clear register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI1 ready interrupt clear Writing this bit to 1 clears the LSI1RDYF flag. Writing 0 has no effect. Access to the bit can be secured by RCC LSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CICR_LSI1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE ready interrupt clear Writing this bit to 1 clears the LSERDYF flag. Writing 0 has no effect. Access to the bit can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 ready interrupt clear Writing this bit to 1 clears the HSIRDYF flag. Writing 0 has no effect. Access to the bit can be secured by RCC HSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE32 ready interrupt clear Writing this bit to 1 clears the HSERDYF flag. Writing 0 has no effect. Access to the bit can be secured by RCC HSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 ready interrupt clear Writing this bit to 1 clears the PLL1RDYF flag. Writing 0 has no effect. Access to the bit can be secured by RCC PLL1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CICR_PLL1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High speed external clock security system interrupt clear Writing this bit to 1 clears the HSECSSF flag. Writing 0 has no effect. Access to the bit can be secured by RCC HSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CICR_HSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 peripheral reset register */
    using RCC_AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 reset Set and cleared by software. Access can be secured by GPDMA1 SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1RSTR_GPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset GPDMA1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x0 = 0;
        /** @brief Reset GPDMA1 */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x1 = 1;

    /** @brief CRC reset Set and cleared by software. Access can be secured by GTZC_TZSC CRCSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1RSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CRC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x0 = 0;
        /** @brief Reset CRC */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x1 = 1;

    /** @brief TSC reset Set and cleared by software. Access can be secured by GTZC_TZSC TSCSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief IO port A reset Set and cleared by software. Access can be secured by GPIOA SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2RSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port A (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x0 = 0;
        /** @brief Reset IO port A */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOARST_B_0x1 = 1;

    /** @brief IO port B reset Set and cleared by software. Access can be secured by GPIOB SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2RSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port B (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x0 = 0;
        /** @brief Reset IO port B */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOBRST_B_0x1 = 1;

    /** @brief IO port C reset Set and cleared by software. Access can be secured by GPIOC SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2RSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port C (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x0 = 0;
        /** @brief Reset IO port C */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOCRST_B_0x1 = 1;

    /** @brief IO port H reset Set and cleared by software. Access can be secured by GPIOH SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2RSTR_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset IO port H (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOHRST_B_0x0 = 0;
        /** @brief Reset IO port H */
    constexpr std::uint32_t RCC_AHB2RSTR_GPIOHRST_B_0x1 = 1;

    /** @brief AES hardware accelerator reset Set and cleared by software. Access can be secured by GTZC_TZSC AESSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2RSTR_AESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset AES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_AESRST_B_0x0 = 0;
        /** @brief Reset AES */
    constexpr std::uint32_t RCC_AHB2RSTR_AESRST_B_0x1 = 1;

    /** @brief Hash reset Set and cleared by software. Access can be secured by GTZC_TZSC HASHSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2RSTR_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset HASH (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x0 = 0;
        /** @brief Reset HASH */
    constexpr std::uint32_t RCC_AHB2RSTR_HASHRST_B_0x1 = 1;

    /** @brief Random number generator reset Set and cleared by software. Access can be secured by GTZC_TZSC RNGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2RSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset RNG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x0 = 0;
        /** @brief Reset RNG */
    constexpr std::uint32_t RCC_AHB2RSTR_RNGRST_B_0x1 = 1;

    /** @brief SAES hardware accelerator reset Set and cleared by software. Access can be secured by GTZC_TZSC SAESSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2RSTR_SAESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SAES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_SAESRST_B_0x0 = 0;
        /** @brief Reset SAES */
    constexpr std::uint32_t RCC_AHB2RSTR_SAESRST_B_0x1 = 1;

    /** @brief HSEM hardware accelerator reset Set and cleared by software. Can only be accessed secure when one or more features in the HSEM is secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2RSTR_HSEMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset HSEM (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR_HSEMRST_B_0x0 = 0;
        /** @brief Reset HSEM */
    constexpr std::uint32_t RCC_AHB2RSTR_HSEMRST_B_0x1 = 1;

    /** @brief PKA reset Set and cleared by software. Access can be secured by GTZC_TZSC PKASEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief ADC4 reset Set and cleared by software. Access can be secred by GTZC_TZSC ADC4SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief 2.4 GHz RADIO reset Set and cleared by software. Access can be secured by GTZC_TZSC RADIOSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB5RSTR_RADIORST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset 2.4 GHz RADIO (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB5RSTR_RADIORST_B_0x0 = 0;
        /** @brief Reset 2.4 GHz RADIO */
    constexpr std::uint32_t RCC_AHB5RSTR_RADIORST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 1 */
    using RCC_APB1RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 reset Set and cleared by software. Access can be secured by GTZC_TZSC TIM2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1RSTR1_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x0 = 0;
        /** @brief Reset TIM2 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 reset Set and cleared by software. Access can be secured by GTZC_TZSC TIM3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1RSTR1_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x0 = 0;
        /** @brief Reset TIM3 */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x1 = 1;

    /** @brief USART2 reset Set and cleared by software. Access can be secured by GTZC_TZSC UART2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1RSTR1_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x0 = 0;
        /** @brief Reset USART2 */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x1 = 1;

    /** @brief I2C1 reset Set and cleared by software. Access can be secured by GTZC_TZSC I2C1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1RSTR1_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x0 = 0;
        /** @brief Reset I2C1 */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 2 */
    using RCC_APB1RSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 reset Set and cleared by software. Access can be secured by GTZC_TZSC LPTIM2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief TIM1 reset Set and cleared by software. Access can be secured by GTZC_TZSC TIM1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief Reset TIM1 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief SPI1 reset Set and cleared by software. Access can be secured by GTZC_TZSC SPI1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief Reset SPI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief USART1 reset Set and cleared by software. Access can be secured by GTZC_TZSC USART1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief Reset USART1 */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief TIM16 reset Set and cleared by software. Access can be secured by GTZC_TZSC TIM16SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM16 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x0 = 0;
        /** @brief Reset TIM16 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x1 = 1;

    /** @brief TIM17 reset Set and cleared by software. Access can be secured by GTZC_TZSC TIM17SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2RSTR_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM17 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x0 = 0;
        /** @brief Reset TIM17 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x1 = 1;

    /** @brief RCC APB7 peripheral reset register */
    using RCC_APB7RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG reset Set and cleared by software. Access can be secured by SYSCFG SYSCFGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7RSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SYSCFG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_SYSCFGRST_B_0x0 = 0;
        /** @brief Reset SYSCFG */
    constexpr std::uint32_t RCC_APB7RSTR_SYSCFGRST_B_0x1 = 1;

    /** @brief SPI3 reset Set and cleared by software. Access can be secured by GTZC_TZSC SPI3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7RSTR_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_SPI3RST_B_0x0 = 0;
        /** @brief Reset SPI3 */
    constexpr std::uint32_t RCC_APB7RSTR_SPI3RST_B_0x1 = 1;

    /** @brief LPUART1 reset Set and cleared by software. Access can be secured by GTZC_TZSC LPUART1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7RSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPUART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_LPUART1RST_B_0x0 = 0;
        /** @brief Reset LPUART1 */
    constexpr std::uint32_t RCC_APB7RSTR_LPUART1RST_B_0x1 = 1;

    /** @brief I2C3 reset Set and cleared by software. Access can be secured by GTZC_TZSC I2C3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7RSTR_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_I2C3RST_B_0x0 = 0;
        /** @brief Reset I2C3 */
    constexpr std::uint32_t RCC_APB7RSTR_I2C3RST_B_0x1 = 1;

    /** @brief LPTIM1 reset Set and cleared by software. Access can be secured by GTZC_TZSC LPTIM1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7RSTR_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB7RSTR_LPTIM1RST_B_0x0 = 0;
        /** @brief Reset LPTIM1 */
    constexpr std::uint32_t RCC_APB7RSTR_LPTIM1RST_B_0x1 = 1;

    /** @brief RCC AHB1 peripheral clock enable register */
    using RCC_AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 bus clock enable Set and cleared by software. Access can be secured by GPDMA1 SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1ENR_GPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 bus clock disabled (value: 0)
     *          - B_0x1: GPDMA1 bus clock enabled (value: 1)
     */
        /** @brief GPDMA1 bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x0 = 0;
        /** @brief GPDMA1 bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x1 = 1;

    /** @brief FLASH bus clock enable Set and cleared by software. This bit can be disabled only when the Flash memory is in power down mode. Can only be accessed secured when the Flash security state is secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1ENR_FLASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH bus clock disabled (value: 0)
     *          - B_0x1: FLASH bus clock enabled (value: 1)
     */
        /** @brief FLASH bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_FLASHEN_B_0x0 = 0;
        /** @brief FLASH bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_FLASHEN_B_0x1 = 1;

    /** @brief CRC bus clock enable Set and cleared by software. Access can be secured by GTZC_TZSC CRCSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC bus clock disabled (value: 0)
     *          - B_0x1: CRC bus clock enabled (value: 1)
     */
        /** @brief CRC bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x0 = 0;
        /** @brief CRC bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x1 = 1;

    /** @brief Touch sensing controller bus clock enable Set and cleared by software. Access can be secured by GTZC_TZSC TSCSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1ENR_TSCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC bus clock disabled (value: 0)
     *          - B_0x1: TSC bus clock enabled (value: 1)
     */
        /** @brief TSC bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_TSCEN_B_0x0 = 0;
        /** @brief TSC bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_TSCEN_B_0x1 = 1;

    /** @brief RAMCFG bus clock enable Set and cleared by software. Access can be secured by GTZC_TZSC RAMCFGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1ENR_RAMCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG bus clock disabled (value: 0)
     *          - B_0x1: RAMCFG bus clock enabled (value: 1)
     */
        /** @brief RAMCFG bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x0 = 0;
        /** @brief RAMCFG bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x1 = 1;

    /** @brief GTZC1 bus clock enable Set and reset by software. Can only be accessed secure when device is secure (TZEN = 1). When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1ENR_GTZC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 bus clock disabled (value: 0)
     *          - B_0x1: GTZC1 bus clock enabled (value: 1)
     */
        /** @brief GTZC1 bus clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_GTZC1EN_B_0x0 = 0;
        /** @brief GTZC1 bus clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GTZC1EN_B_0x1 = 1;

    /** @brief SRAM1 bus clock enable Set and reset by software. Access can be secured by GTZC_MPCBB1 SECx, INVSECSTATE. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief IO port A bus clock enable Set and cleared by software. Access can be secured by GPIOA SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port A bus clock disabled (value: 0)
     *          - B_0x1: IO port A bus clock enabled (value: 1)
     */
        /** @brief IO port A bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x0 = 0;
        /** @brief IO port A bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOAEN_B_0x1 = 1;

    /** @brief IO port B bus clock enable Set and cleared by software. Access can be secured by GPIOB SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port B bus clock disabled (value: 0)
     *          - B_0x1: IO port B bus clock enabled (value: 1)
     */
        /** @brief IO port B bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x0 = 0;
        /** @brief IO port B bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOBEN_B_0x1 = 1;

    /** @brief IO port C bus clock enable Set and cleared by software. Access can be secured by GPIOC SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port C bus clock disabled (value: 0)
     *          - B_0x1: IO port C bus clock enabled (value: 1)
     */
        /** @brief IO port C bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x0 = 0;
        /** @brief IO port C bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOCEN_B_0x1 = 1;

    /** @brief IO port H bus clock enable Set and cleared by software. Access can be secured by GPIOH SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port H bus clock disabled (value: 0)
     *          - B_0x1: IO port H bus clock enabled (value: 1)
     */
        /** @brief IO port H bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOHEN_B_0x0 = 0;
        /** @brief IO port H bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_GPIOHEN_B_0x1 = 1;

    /** @brief AES bus clock enable Set and cleared by software. Access can be secured by GTZC_TZSC AESSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_AESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES bus clock disabled (value: 0)
     *          - B_0x1: AES bus clock enabled (value: 1)
     */
        /** @brief AES bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_AESEN_B_0x0 = 0;
        /** @brief AES bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_AESEN_B_0x1 = 1;

    /** @brief HASH bus clock enable Set and cleared by software. Access can be secured by GTZC_TZSC HASHSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_HASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH bus clock disabled (value: 0)
     *          - B_0x1: HASH bus clock enabled (value: 1)
     */
        /** @brief HASH bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x0 = 0;
        /** @brief HASH bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_HASHEN_B_0x1 = 1;

    /** @brief RNG bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC RNGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG bus and kernel clocks disabled (value: 0)
     *          - B_0x1: RNG bus and kernel clocks enabled (value: 1)
     */
        /** @brief RNG bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x0 = 0;
        /** @brief RNG bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_AHB2ENR_RNGEN_B_0x1 = 1;

    /** @brief SAES bus clock enable Set and cleared by software. Access can be secured by GTZC_TZSC SAESSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_SAESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES bus clock disabled (value: 0)
     *          - B_0x1: SAES bus clock enabled (value: 1)
     */
        /** @brief SAES bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_SAESEN_B_0x0 = 0;
        /** @brief SAES bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_SAESEN_B_0x1 = 1;

    /** @brief HSEM bus clock enable Set and cleared by software. Can only be accessed secure when one or more features in the HSEM is secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_HSEMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSEM bus clock disabled (value: 0)
     *          - B_0x1: HSEM bus clock enabled (value: 1)
     */
        /** @brief HSEM bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_HSEMEN_B_0x0 = 0;
        /** @brief HSEM bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_HSEMEN_B_0x1 = 1;

    /** @brief PKA bus clock enable Set and cleared by software. Access can be secured by GTZC_TZSC PKASEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2ENR_PKAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA bus clock disabled (value: 0)
     *          - B_0x1: PKA bus clock enabled (value: 1)
     */
        /** @brief PKA bus clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR_PKAEN_B_0x0 = 0;
        /** @brief PKA bus clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR_PKAEN_B_0x1 = 1;

    /** @brief SRAM2 bus clock enable Set and cleared by software. Access can be secured by GTZC_MPCBB2 SECx, INVSECSTATE. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief PWR bus clock enable Set and cleared by software. Can only be accessed secure when one or more features in the PWR is/are secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB4ENR_PWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR bus clock disabled (value: 0)
     *          - B_0x1: PWR bus clock enabled (value: 1)
     */
        /** @brief PWR bus clock disabled */
    constexpr std::uint32_t RCC_AHB4ENR_PWREN_B_0x0 = 0;
        /** @brief PWR bus clock enabled */
    constexpr std::uint32_t RCC_AHB4ENR_PWREN_B_0x1 = 1;

    /** @brief ADC4 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC ADC4SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief 2.4 GHz RADIO bus clock enable Set and cleared by software. Access can be secured by GTZC_TZSC RADIOSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Before accessing the 2.4 GHz RADIO sleep timers registers the RADIOCLKRDY bit must be checked. Note: When RADIOSMEN and STRADIOCLKON are both cleared, RADIOCLKRDY bit must be re-checked when exiting low-power modes (Sleep and Stop). */
    using RCC_AHB5ENR_RADIOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.4 GHz RADIO bus clock disabled (The 2.4 GHz RADIO bus clock may still be enabled by STRADIOCLKON) (value: 0)
     *          - B_0x1: 2.4 GHz RADIO bus clock enabled (value: 1)
     */
        /** @brief 2.4 GHz RADIO bus clock disabled (The 2.4 GHz RADIO bus clock may still be enabled by STRADIOCLKON) */
    constexpr std::uint32_t RCC_AHB5ENR_RADIOEN_B_0x0 = 0;
        /** @brief 2.4 GHz RADIO bus clock enabled */
    constexpr std::uint32_t RCC_AHB5ENR_RADIOEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable register 1 */
    using RCC_APB1ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC TIM2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1ENR1_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM2 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM2 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC TIM2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1ENR1_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM3 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM3 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x1 = 1;

    /** @brief WWDG bus clock enable Set by software to enable the window watchdog bus clock. Reset by hardware system reset. This bit can also be set by hardware if the WWDG_SW option bit is reset. Access can be secured by GTZC_TZSC WWDGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1ENR1_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG bus clock disabled (value: 0)
     *          - B_0x1: WWDG bus clock enabled (value: 1)
     */
        /** @brief WWDG bus clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x0 = 0;
        /** @brief WWDG bus clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x1 = 1;

    /** @brief USART2 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC USART2SEC When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV.. */
    using RCC_APB1ENR1_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: USART2 bus and kernel clocks enabled (value: 1)
     */
        /** @brief USART2 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x0 = 0;
        /** @brief USART2 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x1 = 1;

    /** @brief I2C1 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC I2C1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1ENR1_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: I2C1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief I2C1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1EN_B_0x0 = 0;
        /** @brief I2C1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1EN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable register 2 */
    using RCC_APB1ENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC LPTIM2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief TIM1 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC TIM1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief SPI1 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC SPI1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: SPI1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief SPI1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief USART1bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC USART1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: USART1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief USART1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief TIM16 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC TIM16SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM16 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM16 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x0 = 0;
        /** @brief TIM16 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x1 = 1;

    /** @brief TIM17 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC TIM17SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2ENR_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: TIM17 bus and kernel clocks enabled (value: 1)
     */
        /** @brief TIM17 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x0 = 0;
        /** @brief TIM17 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x1 = 1;

    /** @brief RCC APB7 peripheral clock enable register */
    using RCC_APB7ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG bus clock enable Set and cleared by software. Access can be secured by SYSCFG SYSCFGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7ENR_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG bus clock disabled (value: 0)
     *          - B_0x1: SYSCFG bus clock enabled (value: 1)
     */
        /** @brief SYSCFG bus clock disabled */
    constexpr std::uint32_t RCC_APB7ENR_SYSCFGEN_B_0x0 = 0;
        /** @brief SYSCFG bus clock enabled */
    constexpr std::uint32_t RCC_APB7ENR_SYSCFGEN_B_0x1 = 1;

    /** @brief SPI3 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC SPI3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7ENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: SPI3 bus and kernel clocks enabled (value: 1)
     */
        /** @brief SPI3 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB7ENR_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB7ENR_SPI3EN_B_0x1 = 1;

    /** @brief LPUART1 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC LPUART1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7ENR_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: LPUART1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief LPUART1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB7ENR_LPUART1EN_B_0x0 = 0;
        /** @brief LPUART1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB7ENR_LPUART1EN_B_0x1 = 1;

    /** @brief I2C3 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC I2C3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7ENR_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: I2C3 bus and kernel clocks enabled (value: 1)
     */
        /** @brief I2C3 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB7ENR_I2C3EN_B_0x0 = 0;
        /** @brief I2C3 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB7ENR_I2C3EN_B_0x1 = 1;

    /** @brief LPTIM1 bus and kernel clocks enable Set and cleared by software. Access can be secured by GTZC_TZSC LPTIM1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7ENR_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 bus and kernel clocks disabled (value: 0)
     *          - B_0x1: LPTIM1 bus and kernel clocks enabled (value: 1)
     */
        /** @brief LPTIM1 bus and kernel clocks disabled */
    constexpr std::uint32_t RCC_APB7ENR_LPTIM1EN_B_0x0 = 0;
        /** @brief LPTIM1 bus and kernel clocks enabled */
    constexpr std::uint32_t RCC_APB7ENR_LPTIM1EN_B_0x1 = 1;

    /** @brief RTC and TAMP bus clock enable Set and cleared by software. Can only be accessed secure when one or more features in the RTC or TAMP is/are secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief GPDMA1 bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GPDMA1 SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using RCC_AHB1SMENR_GPDMA1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GPDMA1 bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GPDMA1 bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GPDMA1SMEN_B_0x0 = 0;
        /** @brief GPDMA1 bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GPDMA1SMEN_B_0x1 = 1;

    /** @brief FLASH bus clock enable during Sleep and Stop modes Set and cleared by software. Can only be accessed secured when the Flash security state is secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1SMENR_FLASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FLASH bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FLASH bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FLASHSMEN_B_0x0 = 0;
        /** @brief FLASH bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FLASHSMEN_B_0x1 = 1;

    /** @brief CRC bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC CRCSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1SMENR_CRCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: CRC bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief CRC bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CRCSMEN_B_0x0 = 0;
        /** @brief CRC bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CRCSMEN_B_0x1 = 1;

    /** @brief TSC bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC TSCSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV.. */
    using RCC_AHB1SMENR_TSCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TSC bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TSC bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_TSCSMEN_B_0x0 = 0;
        /** @brief TSC bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_TSCSMEN_B_0x1 = 1;

    /** @brief RAMCFG bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC RAMCFGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1SMENR_RAMCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RAMCFG bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RAMCFG bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_RAMCFGSMEN_B_0x0 = 0;
        /** @brief RAMCFG bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_RAMCFGSMEN_B_0x1 = 1;

    /** @brief GTZC1 bus clock enable during Sleep and Stop modes Set and cleared by software. Can only be accessed secure when one device is secure (TZEN = 1). When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB1SMENR_GTZC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GTZC1 bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GTZC1 bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GTZC1SMEN_B_0x0 = 0;
        /** @brief GTZC1 bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GTZC1SMEN_B_0x1 = 1;

    /** @brief ICACHE bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC ICACHE_REGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV.. */
    using RCC_AHB1SMENR_ICACHESMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ICACHE bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief ICACHE bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_ICACHESMEN_B_0x0 = 0;
        /** @brief ICACHE bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_ICACHESMEN_B_0x1 = 1;

    /** @brief SRAM1 bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_MPCBB1 SECx, INVSECSTATE. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief IO port A bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GPIOA SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2SMENR_GPIOASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port A bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port A bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port A bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOASMEN_B_0x0 = 0;
        /** @brief IO port A bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOASMEN_B_0x1 = 1;

    /** @brief IO port B bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GPIOB SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2SMENR_GPIOBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port B bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port B bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port B bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOBSMEN_B_0x0 = 0;
        /** @brief IO port B bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOBSMEN_B_0x1 = 1;

    /** @brief IO port C bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GPIOC SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2SMENR_GPIOCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port C bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port C bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port C bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOCSMEN_B_0x0 = 0;
        /** @brief IO port C bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOCSMEN_B_0x1 = 1;

    /** @brief IO port H bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GPIOH SECx. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2SMENR_GPIOHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO port H bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: IO port H bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief IO port H bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOHSMEN_B_0x0 = 0;
        /** @brief IO port H bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_GPIOHSMEN_B_0x1 = 1;

    /** @brief AES bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC AESSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2SMENR_AESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: AES bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief AES bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_AESSMEN_B_0x0 = 0;
        /** @brief AES bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_AESSMEN_B_0x1 = 1;

    /** @brief HASH bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC HASHSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2SMENR_HASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: HASH bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief HASH bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_HASHSMEN_B_0x0 = 0;
        /** @brief HASH bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_HASHSMEN_B_0x1 = 1;

    /** @brief Random number generator (RNG) bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC RNGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2SMENR_RNGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RNG bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RNG bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_RNGSMEN_B_0x0 = 0;
        /** @brief RNG bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_RNGSMEN_B_0x1 = 1;

    /** @brief SAES accelerator bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC SAESSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2SMENR_SAESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAES bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SAES bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_SAESSMEN_B_0x0 = 0;
        /** @brief SAES bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_SAESSMEN_B_0x1 = 1;

    /** @brief PKA bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC PKASEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB2SMENR_PKASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: PKA bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief PKA bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_PKASMEN_B_0x0 = 0;
        /** @brief PKA bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR_PKASMEN_B_0x1 = 1;

    /** @brief SRAM2 bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_MPCBB2 SECx, INVSECSTATE. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief PWR bus clock enable during Sleep and Stop modes Set and cleared by software. Can only be accessed secure when one or more features in the PWR is/are secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB4SMENR_PWRSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: PWR bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief PWR bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB4SMENR_PWRSMEN_B_0x0 = 0;
        /** @brief PWR bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB4SMENR_PWRSMEN_B_0x1 = 1;

    /** @brief ADC4 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC ADC4SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
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
    /** @brief 2.4 GHz RADIO bus clock enable during Sleep and Stop modes when the 2.4 GHz RADIO is active. Set and cleared by software. Access can be secured by GTZC_TZSC RADIOSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_AHB5SMENR_RADIOSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.4 GHz RADIO bus clock disabled by the clock gating during Sleep and Stop modes (The 2.4 GHz RADIO bus clock may still be enabled by STRADIOCLKON) (value: 0)
     *          - B_0x1: 2.4 GHz RADIO bus clock enabled by the clock gating during Sleep and Stop modes when the 2.4 GHz RADIO is active (value: 1)
     */
        /** @brief 2.4 GHz RADIO bus clock disabled by the clock gating during Sleep and Stop modes (The 2.4 GHz RADIO bus clock may still be enabled by STRADIOCLKON) */
    constexpr std::uint32_t RCC_AHB5SMENR_RADIOSMEN_B_0x0 = 0;
        /** @brief 2.4 GHz RADIO bus clock enabled by the clock gating during Sleep and Stop modes when the 2.4 GHz RADIO is active */
    constexpr std::uint32_t RCC_AHB5SMENR_RADIOSMEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clocks enable in Sleep and Stop modes	register 1 */
    using RCC_APB1SMENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC TIM2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1SMENR1_TIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM2SMEN_B_0x0 = 0;
        /** @brief TIM2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM2SMEN_B_0x1 = 1;

    /** @brief TIM3 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC TIM3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1SMENR1_TIM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM3SMEN_B_0x0 = 0;
        /** @brief TIM3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM3SMEN_B_0x1 = 1;

    /** @brief Window watchdog bus clock enable during Sleep and Stop modes Set and cleared by software. This bit is forced to 1 by hardware when the hardware WWDG option is activated. Access can be secured by GTZC_TZSC WWDGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB1SMENR1_WWDGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG bus clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: WWDG bus clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief WWDG bus clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SMENR1_WWDGSMEN_B_0x0 = 0;
        /** @brief WWDG bus clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SMENR1_WWDGSMEN_B_0x1 = 1;

    /** @brief USART2 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC USART2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using RCC_APB1SMENR1_USART2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART2 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART2SMEN_B_0x0 = 0;
        /** @brief USART2 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART2SMEN_B_0x1 = 1;

    /** @brief I2C1 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC I2C1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using RCC_APB1SMENR1_I2C1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C1SMEN_B_0x0 = 0;
        /** @brief I2C1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C1SMEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clocks enable in Sleep and Stop modes 	register 2 */
    using RCC_APB1SMENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC LPTIM2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
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
    /** @brief TIM1 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC TIM1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2SMENR_TIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM1SMEN_B_0x0 = 0;
        /** @brief TIM1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM1SMEN_B_0x1 = 1;

    /** @brief SPI1 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC SPI1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using RCC_APB2SMENR_SPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SPI1SMEN_B_0x0 = 0;
        /** @brief SPI1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SPI1SMEN_B_0x1 = 1;

    /** @brief USART1 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC USART1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using RCC_APB2SMENR_USART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USART1SMEN_B_0x0 = 0;
        /** @brief USART1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USART1SMEN_B_0x1 = 1;

    /** @brief TIM16 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC TIM16SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2SMENR_TIM16SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM16 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM16 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM16SMEN_B_0x0 = 0;
        /** @brief TIM16 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM16SMEN_B_0x1 = 1;

    /** @brief TIM17 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC TIM17SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB2SMENR_TIM17SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM17 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM17 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM17SMEN_B_0x0 = 0;
        /** @brief TIM17 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM17SMEN_B_0x1 = 1;

    /** @brief RCC APB7 peripheral clock enable in Sleep and Stop modes register */
    using RCC_APB7SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG bus clock enable during Sleep and Stop modes Set and cleared by software. Access can be secured by SYSCFG SYSCFGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_APB7SMENR_SYSCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG bus clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SYSCFG bus clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SYSCFG bus clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_SYSCFGSMEN_B_0x0 = 0;
        /** @brief SYSCFG bus clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_SYSCFGSMEN_B_0x1 = 1;

    /** @brief SPI3 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC SPI3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using RCC_APB7SMENR_SPI3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_SPI3SMEN_B_0x0 = 0;
        /** @brief SPI3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_SPI3SMEN_B_0x1 = 1;

    /** @brief LPUART1 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC LPUART1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using RCC_APB7SMENR_LPUART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPUART1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPUART1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_LPUART1SMEN_B_0x0 = 0;
        /** @brief LPUART1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_LPUART1SMEN_B_0x1 = 1;

    /** @brief I2C3 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC I2C3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using RCC_APB7SMENR_I2C3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C3 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_I2C3SMEN_B_0x0 = 0;
        /** @brief I2C3 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_I2C3SMEN_B_0x1 = 1;

    /** @brief LPTIM1 bus and kernel clocks enable during Sleep and Stop modes Set and cleared by software. Access can be secured by GTZC_TZSC LPTIM1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
    using RCC_APB7SMENR_LPTIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPTIM1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPTIM1 bus and kernel clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_LPTIM1SMEN_B_0x0 = 0;
        /** @brief LPTIM1 bus and kernel clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB7SMENR_LPTIM1SMEN_B_0x1 = 1;

    /** @brief RTC and TAMP APB clock enable during Sleep and Stop modes Set and cleared by software. Can only be accessed secure when one or more features in the RTC or TAMP is/are secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: This bit must be set to allow the peripheral to wake up from Stop modes. */
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
    /** @brief USART1 kernel clock source selection This bits are used to select the USART1 kernel clock source. Access can be secured by GTZC_TZSC USART1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The USART1 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or LSE. */
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

    /** @brief USART2 kernel clock source selection This bits are used to select the USART2 kernel clock source. Access can be secured by GTZC_TZSC USART2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The USART2 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16 or LSE. */
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

    /** @brief I2C1 kernel clock source selection These bits are used to select the I2C1 kernel clock source. Access can be secured by GTZC_TZSC I2C1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The I2C1 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16. */
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

    /** @brief Low-power timer 2 kernel clock source selection These bits are used to select the LPTIM2 kernel clock source. Access can be secured by GTZC_TZSC LPTIM2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The LPTIM2 is functional in Stop 0 and Stop 1 mode only when the kernel clock is LSI, LSE or HSI16 if HSIKERON = 1. */
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

    /** @brief SPI1 kernel clock source selection These bits are used to select the SPI1 kernel clock source. Access can be secured by GTZC_TZSC SPI1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The SPI1 is functional in Stop 0 and Stop 1 mode only when the kernel clock is HSI16. */
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

    /** @brief SysTick clock source selection These bits are used to select the SysTick clock source. Access can be secured by RCC SYSCLKSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: When LSE or LSI is selected, the AHB frequency must be at least four times higher than the LSI or LSE frequency. In addition, a jitter up to one hclk1 cycle is introduced, due to the LSE or LSI sampling with hclk1 in the SysTick circuitry. */
    using RCC_CCIPR1_SYSTICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk1 divided by 8 selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: LSE selected (value: 2)
     */
        /** @brief hclk1 divided by 8 selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x1 = 1;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x2 = 2;

    /** @brief Clocks sources for TIM16,TIM17 and LPTIM2 internal input capture When the TIMICSEL bit is set, the TIM16, TIM17 and LPTIM2 internal input capture can be connected to HSI16/256. When TIMICSEL is cleared, the HSI16, clock sources cannot be selected as TIM16, TIM17 or LPTIM2 internal input capture. Access can be secured by GTZC_TZSC TIM16SEC, TIM17SEC, or LPTIM2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The clock division must be disabled (TIMICSEL configured to 0) before selecting or changing a clock sources division. */
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
    /** @brief RNGSEL kernel clock source selection These bits allow to select the RNG kernel clock source. Access can be secured by GTZC_TZSC RNGSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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

    /** @brief RCC peripherals independent clock configuration register 3 */
    using RCC_CCIPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 kernel clock source selection These bits are used to select the LPUART1 kernel clock source. Access can be secured by GTZC_TZSC LPUART1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The LPUART1 is functional in Stop modes only when the kernel clock is HSI16 or LSE. */
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

    /** @brief SPI3 kernel clock source selection These bits are used to select the SPI3 kernel clock source. Access can be secured by GTZC_TZSC SPI3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The SPI3 is functional in Stop modes only when the kernel clock is HSI16. */
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

    /** @brief I2C3 kernel clock source selection These bits are used to select the I2C3 kernel clock source. Access can be secured by GTZC_TZSC I2C3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The I2C3 is functional in Stop modes only when the kernel clock is HSI16 */
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

    /** @brief LPTIM1 kernel clock source selection These bits are used to select the LPTIM1 kernel clock source. Access can be secured by GTZC_TZSC LPTIM1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The LPTIM1 is functional in Stop modes only when the kernel clock is LSI, LSE, HSI16 with HSIKERON = 1. */
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

    /** @brief ADC4 kernel clock source selection These bits are used to select the ADC4 kernel clock source. Access can be secured by GTZC_TZSC ADC4SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. others: reserved Note: The ADC4 is functional in Stop modes only when the kernel clock is HSI16. */
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

    /** @brief RCC backup domain control register */
    using RCC_BDCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable Set and cleared by software. Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator off (value: 0)
     *          - B_0x1: LSE oscillator on (value: 1)
     */
        /** @brief LSE oscillator off */
    constexpr std::uint32_t RCC_BDCR1_LSEON_B_0x0 = 0;
        /** @brief LSE oscillator on */
    constexpr std::uint32_t RCC_BDCR1_LSEON_B_0x1 = 1;

    /** @brief LSE oscillator ready Set and cleared by hardware to indicate when the external 32kHz oscillator is stable. After the LSEON bit is cleared, LSERDY goes low after six external low-speed oscillator clock cycles. Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not ready (value: 0)
     *          - B_0x1: LSE oscillator ready (value: 1)
     */
        /** @brief LSE oscillator not ready */
    constexpr std::uint32_t RCC_BDCR1_LSERDY_B_0x0 = 0;
        /** @brief LSE oscillator ready */
    constexpr std::uint32_t RCC_BDCR1_LSERDY_B_0x1 = 1;

    /** @brief LSE oscillator bypass Set and cleared by software to bypass oscillator in debug mode. This bit can be written only when the external 32kHz oscillator is disabled (LSEON = 0 and LSERDY = 0). Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator 'Xtal' mode (value: 0)
     *          - B_0x1: LSE oscillator bypassed (value: 1)
     */
        /** @brief LSE oscillator 'Xtal' mode */
    constexpr std::uint32_t RCC_BDCR1_LSEBYP_B_0x0 = 0;
        /** @brief LSE oscillator bypassed */
    constexpr std::uint32_t RCC_BDCR1_LSEBYP_B_0x1 = 1;

    /** @brief LSE oscillator drive capability Set by software to modulate the drive capability of the LSE oscillator. LSEDRV must be programmed to a different value than 0 before enabling the LSE oscillator in 'Xtal' mode. Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: The oscillator is in 'Xtal mode' when it is not in bypass mode. */
    using RCC_BDCR1_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 'Xtal mode' medium-low driving capability (value: 1)
     *          - B_0x2: 'Xtal mode' medium-high driving capability (value: 2)
     *          - B_0x3: 'Xtal mode' higher driving capability (value: 3)
     */
        /** @brief 'Xtal mode' medium-low driving capability */
    constexpr std::uint32_t RCC_BDCR1_LSEDRV_B_0x1 = 1;
        /** @brief 'Xtal mode' medium-high driving capability */
    constexpr std::uint32_t RCC_BDCR1_LSEDRV_B_0x2 = 2;
        /** @brief 'Xtal mode' higher driving capability */
    constexpr std::uint32_t RCC_BDCR1_LSEDRV_B_0x3 = 3;

    /** @brief Low speed external clock security enable Set by software to enable the LSECSS. LSECSSON must be enabled after the LSE oscillator is enabled (LSEON bit enabled) and ready (LSERDY flag set by hardware) and after the RTCSEL bit is selected. Once enabled, this bit cannot be disabled, except after a LSE failure detection (LSECSSD=1). In that case, the software must disable the LSECSSON bit. Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSECSS disabled off (value: 0)
     *          - B_0x1: LSECSS enabled on (value: 1)
     */
        /** @brief LSECSS disabled off */
    constexpr std::uint32_t RCC_BDCR1_LSECSSON_B_0x0 = 0;
        /** @brief LSECSS enabled on */
    constexpr std::uint32_t RCC_BDCR1_LSECSSON_B_0x1 = 1;

    /** @brief Low speed external clock security, LSE failure Detection Set by hardware to indicate when a failure is detected by the LSECCS on the external 32kHz oscillator. Reset when LSCSSON bit is cleared. Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no failure detected on LSE (value: 0)
     *          - B_0x1: failure detected on LSE (value: 1)
     */
        /** @brief no failure detected on LSE */
    constexpr std::uint32_t RCC_BDCR1_LSECSSD_B_0x0 = 0;
        /** @brief failure detected on LSE */
    constexpr std::uint32_t RCC_BDCR1_LSECSSD_B_0x1 = 1;

    /** @brief LSE system clock (LSESYS) enable Set by software to enable the LSE system clock generated by RCC. The lsesys clock is used for peripherals (USART, LPUART, LPTIM, RNG, 2.4 GHz RADIO) and functions (LSCO, MCO, TIM triggers, LPTIM trigger) excluding the RTC, TAMP and LSECSS. Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSESYSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSESYS clock disabled (value: 0)
     *          - B_0x1: LSESYS clock enabled (value: 1)
     */
        /** @brief LSESYS clock disabled */
    constexpr std::uint32_t RCC_BDCR1_LSESYSEN_B_0x0 = 0;
        /** @brief LSESYS clock enabled */
    constexpr std::uint32_t RCC_BDCR1_LSESYSEN_B_0x1 = 1;

    /** @brief RTC and TAMP kernel clock source enable and selection Set by software to enable and select the clock source for the RTC. Can only be accessed secure when one or more features in the RTC or TAMP is/are secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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

    /** @brief LSE system clock (LSESYS) ready Set and cleared by hardware to indicate when the LSE system clock is stable.When the LSESYSEN bit is set, the LSESYSRDY flag is set after two LSE clock cycles. The LSE clock must be already enabled and stable (LSEON and LSERDY are set). When the LSEON bit is cleared, LSERDY goes low after six external low-speed oscillator clock cycles. Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSESYSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSESYS clock not ready (value: 0)
     *          - B_0x1: LSESYS clock ready (value: 1)
     */
        /** @brief LSESYS clock not ready */
    constexpr std::uint32_t RCC_BDCR1_LSESYSRDY_B_0x0 = 0;
        /** @brief LSESYS clock ready */
    constexpr std::uint32_t RCC_BDCR1_LSESYSRDY_B_0x1 = 1;

    /** @brief LSE clock glitch filter enable Set and cleared by hardware to enable the LSE glitch filter. This bit can be written only when the LSE is disabled (LSEON = 0 and LSERDY = 0). Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSEGFON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE glitch filter disabled (value: 0)
     *          - B_0x1: LSE glitch filter enabled (value: 1)
     */
        /** @brief LSE glitch filter disabled */
    constexpr std::uint32_t RCC_BDCR1_LSEGFON_B_0x0 = 0;
        /** @brief LSE glitch filter enabled */
    constexpr std::uint32_t RCC_BDCR1_LSEGFON_B_0x1 = 1;

    /** @brief LSE trimming These bits are initialized at startup and after OBL_LAUNCH with SBF cleared with the factory-programmed LSE calibration value. Set and cleared by software. These bits must be modified only once after a BOR reset or an OBL_LAUNCH and before enabling LSE with LSEON (when both LSEON = 0 and LSERDY= 0). Access can be secured by RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. Note: OBL_LAUNCH of this field occurs only when SBF is cleared and must then only be started by software when LSE oscillator is disabled, LSEON = 0 and LSERDY = 0. */
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

    /** @brief Backup domain software reset Set and cleared by software. Can only be accessed secure when one or more features in the RTC or TAMP is secure. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_BDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset not activated (value: 0)
     *          - B_0x1: Reset the entire Backup domain (value: 1)
     */
        /** @brief Reset not activated */
    constexpr std::uint32_t RCC_BDCR1_BDRST_B_0x0 = 0;
        /** @brief Reset the entire Backup domain */
    constexpr std::uint32_t RCC_BDCR1_BDRST_B_0x1 = 1;

    /** @brief 2.4 GHz RADIO sleep timer kernel clock enable and selection Set and cleared by software. Access can be secured by GTZC_TZSC RADIOSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_RADIOSTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock selected, 2.4 GHz RADIO sleep timer kernel clock disabled (value: 0)
     *          - B_0x1: LSE oscillator clock selected (value: 1)
     *          - B_0x3: HSE32 oscillator clock divided by 1000 selected (value: 3)
     */
        /** @brief no clock selected, 2.4 GHz RADIO sleep timer kernel clock disabled */
    constexpr std::uint32_t RCC_BDCR1_RADIOSTSEL_B_0x0 = 0;
        /** @brief LSE oscillator clock selected */
    constexpr std::uint32_t RCC_BDCR1_RADIOSTSEL_B_0x1 = 1;
        /** @brief HSE32 oscillator clock divided by 1000 selected */
    constexpr std::uint32_t RCC_BDCR1_RADIOSTSEL_B_0x3 = 3;

    /** @brief Low-speed clock output (LSCO) enable Set and cleared by software. Access can be secured by RCC LSISEC and/or RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSCO disabled (value: 0)
     *          - B_0x1: LSCO enabled (value: 1)
     */
        /** @brief LSCO disabled */
    constexpr std::uint32_t RCC_BDCR1_LSCOEN_B_0x0 = 0;
        /** @brief LSCO enabled */
    constexpr std::uint32_t RCC_BDCR1_LSCOEN_B_0x1 = 1;

    /** @brief Low-speed clock output selection Set and cleared by software. Access can be secured by RCC LSISEC and/or RCC LSESEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI clock selected (value: 0)
     *          - B_0x1: LSE clock selected (value: 1)
     */
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_BDCR1_LSCOSEL_B_0x0 = 0;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_BDCR1_LSCOSEL_B_0x1 = 1;

    /** @brief LSI1 oscillator enable Set and cleared by software. Access can be secured by RCC LSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSI1ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI1 oscillator off (value: 0)
     *          - B_0x1: LSI1 oscillator on (value: 1)
     */
        /** @brief LSI1 oscillator off */
    constexpr std::uint32_t RCC_BDCR1_LSI1ON_B_0x0 = 0;
        /** @brief LSI1 oscillator on */
    constexpr std::uint32_t RCC_BDCR1_LSI1ON_B_0x1 = 1;

    /** @brief LSI1 oscillator ready Set and cleared by hardware to indicate when the LSI1 oscillator is stable. After the LSI1ON bit is cleared, LSI1RDY goes low after three internal low-speed oscillator clock cycles. This bit is set when the LSI1 is used by IWDG or RTC, even if LSI1ON = 0. Access can be secured by RCC LSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_BDCR1_LSI1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI1 oscillator not ready (value: 0)
     *          - B_0x1: LSI1 oscillator ready (value: 1)
     */
        /** @brief LSI1 oscillator not ready */
    constexpr std::uint32_t RCC_BDCR1_LSI1RDY_B_0x0 = 0;
        /** @brief LSI1 oscillator ready */
    constexpr std::uint32_t RCC_BDCR1_LSI1RDY_B_0x1 = 1;

    /** @brief LSI1 Low-speed clock divider configuration Set and cleared by software to enable the LSI1 division. This bit can be written only when the LSI1 is disabled (LSI1ON = 0 and LSI1RDY = 0). The LSI1PREDIV cannot be changed if the LSI1 is used by the IWDG or by the RTC. Access can be secured by RCC LSISEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
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
    /** @brief LSI2 oscillator ready */
    using RCC_BDCR1_LSI2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC control/status register */
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remove reset flag Set by software to clear the reset flags. Access can be secured by RCC RMVFSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with RCC SPRIV or when non-secure with RCC NSPRIV. */
    using RCC_CSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear the reset flags (once set by software bit is cleared automatically by hardware) (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x0 = 0;
        /** @brief Clear the reset flags (once set by software bit is cleared automatically by hardware) */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x1 = 1;

    /** @brief Option byte loader reset flag Set by hardware when a reset from the option byte loading occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_OBLRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from option byte loading occurred (value: 0)
     *          - B_0x1: Reset from option byte loading occurred (value: 1)
     */
        /** @brief No reset from option byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x0 = 0;
        /** @brief Reset from option byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x1 = 1;

    /** @brief NRST pin reset flag Set by hardware when a reset from the NRST pin occurs. Cleared by writing to the RMVF bit. */
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
     *          - B_0x0: no BOR occurred (value: 0)
     *          - B_0x1: BOR occurred (value: 1)
     */
        /** @brief no BOR occurred */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR occurred */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x1 = 1;

    /** @brief Software reset flag Set by hardware when a software reset occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software reset occurred (value: 0)
     *          - B_0x1: software reset occurred (value: 1)
     */
        /** @brief no software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x0 = 0;
        /** @brief software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x1 = 1;

    /** @brief Independent watchdog reset flag Set by hardware when an independent watchdog reset domain occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no independent watchdog reset occurred (value: 0)
     *          - B_0x1: independent watchdog reset occurred (value: 1)
     */
        /** @brief no independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x0 = 0;
        /** @brief independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x1 = 1;

    /** @brief Window watchdog reset flag Set by hardware when a window watchdog reset occurs. Cleared by writing to the RMVF bit. */
    using RCC_CSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no window watchdog reset occurred (value: 0)
     *          - B_0x1: window watchdog reset occurred (value: 1)
     */
        /** @brief no window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x0 = 0;
        /** @brief window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Low-power reset flag Set by hardware when a reset occurs due to illegal Stop and Standby modes entry. Cleared by writing to the RMVF bit. */
    using RCC_CSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no illegal mode reset occurred (value: 0)
     *          - B_0x1: illegal mode reset occurred (value: 1)
     */
        /** @brief no illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x0 = 0;
        /** @brief illegal mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC secure configuration register */
    using RCC_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 clock configuration and status bits security Set and reset by software. */
    using RCC_SECCFGR_HSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x1 = 1;

    /** @brief HSE32 clock configuration bits, status bits and HSECSS security Set and reset by software. */
    using RCC_SECCFGR_HSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x1 = 1;

    /** @brief LSI clock configuration and status bits security Set and reset by software. */
    using RCC_SECCFGR_LSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x1 = 1;

    /** @brief LSE clock configuration and status bits security Set and reset by software. */
    using RCC_SECCFGR_LSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_LSESEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_LSESEC_B_0x1 = 1;

    /** @brief SYSCLK selection, clock output on MCO configuration security Set and reset by software. */
    using RCC_SECCFGR_SYSCLKSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_SYSCLKSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_SYSCLKSEC_B_0x1 = 1;

    /** @brief AHBx/APBx prescaler configuration bits security Set and reset by software. */
    using RCC_SECCFGR_PRESCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_PRESCSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_PRESCSEC_B_0x1 = 1;

    /** @brief PLL1 clock configuration and status bits security Set and reset by software. */
    using RCC_SECCFGR_PLL1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non secure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Non secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL1SEC_B_0x1 = 1;

    /** @brief Remove reset flag security Set and reset by software. */
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
    /** @brief RCC secure functions privilege configuration Set and reset by software. This bit can be written only by a secure privileged access. */
    using RCC_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to RCC secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to RCC secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to RCC secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t RCC_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to RCC secure functions can be done by privileged access only. */
    constexpr std::uint32_t RCC_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief RCC non-secure functions privilege configuration Set and reset by software. This bit can be written only by privileged access, secure or non-secure. */
    using RCC_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to RCC non-secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to RCC non-secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to RCC non-secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to RCC non-secure functions can be done by privileged access only. */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x1 = 1;

    /** @brief RCC clock configuration register 2 */
    using RCC_CFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB5 prescaler when SWS select PLL1 Set and cleared by software to control the division factor of the AHB5 clock (hclk5). Must not be changed when SYSCLK source indicated by SWS is PLL1. When SYSCLK source indicated by SWS is not PLL1: HPRE5 is not taken into account. When SYSCLK source indicated by SWS is PLL1: HPRE5 is taken into account, from the moment the system clock switch occurs Depending on the device voltage range, the software must set these bits correctly to ensure that the AHB5 frequency does not exceed the maximum allowed frequency (for more details, refer to Table99: SYSCLK and bus maximum frequency). After a write operation to these bits and before decreasing the voltage range, this register must be read to be sure that the new value is taken into account. 0xx: hclk5 = SYSCLK not divided */
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

    /** @brief AHB5 divider when SWS select HSI16 or HSE32 Set and reset by software. Set to 1 by hardware when entering Stop 1 mode. When SYSCLK source indicated by SWS is HSI16 or HSE32: HDIV5 is taken into account When SYSCLK source indicated by SWS is PLL1: HDIV5 is taken not taken into account Depending on the device voltage range, the software must set this bit correctly to ensure that the AHB5 frequency does not exceed the maximum allowed frequency (for more details, refer to Table99). After a write operation to this bit and before decreasing the voltage range, this register must be read to be sure that the new value is taken into account. */
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
    /** @brief 2.4 GHz RADIO baseband kernel clock (aclk) enable Set and cleared by software. Note: The HSE32 oscillator needs to be enabled by either HSEON or STRADIOCLKON. */
    using RCC_RADIOENR_BBCLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.4 GHz RADIO baseband kernel clock disabled (value: 0)
     *          - B_0x1: 2.4 GHz RADIO baseband kernel clock enabled (value: 1)
     */
        /** @brief 2.4 GHz RADIO baseband kernel clock disabled */
    constexpr std::uint32_t RCC_RADIOENR_BBCLKEN_B_0x0 = 0;
        /** @brief 2.4 GHz RADIO baseband kernel clock enabled */
    constexpr std::uint32_t RCC_RADIOENR_BBCLKEN_B_0x1 = 1;

    /** @brief 2.4 GHz RADIO bus clock enable and HSE32 oscillator enable by 2.4 GHz RADIO sleep timer wakeup event Set by hardware on a 2.4 GHz RADIO sleep timer wakeup event. Cleared by software writing zero to this bit. Note: Before accessing the 2.4 GHz RADIO registers the RADIOCLKRDY bit must be checked. */
    using RCC_RADIOENR_STRADIOCLKON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.4 GHz RADIO bus clock and HSE32 oscillator not requested by 2.4 GHz RADIO sleep timer wakeup event. (value: 0)
     *          - B_0x1: 2.4 GHz RADIO bus clock and HSE32 oscillator enabled by 2.4 GHz RADIO sleep timer wakeup event (value: 1)
     */
        /** @brief 2.4 GHz RADIO bus clock and HSE32 oscillator not requested by 2.4 GHz RADIO sleep timer wakeup event. */
    constexpr std::uint32_t RCC_RADIOENR_STRADIOCLKON_B_0x0 = 0;
        /** @brief 2.4 GHz RADIO bus clock and HSE32 oscillator enabled by 2.4 GHz RADIO sleep timer wakeup event */
    constexpr std::uint32_t RCC_RADIOENR_STRADIOCLKON_B_0x1 = 1;

    /** @brief 2.4 GHz RADIO bus clock ready. Set and cleared by hardware to indicate that the 2.4 GHz RADIO bus clock is ready and the 2.4 GHz RADIO registers can be accessed. Note: Once both RADIOEN and STRADIOCLKON are cleared, RADIOCLKRDY goes low after three hclk5 clock cycles. */
    using RCC_RADIOENR_RADIOCLKRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.4 GHz RADIO bus clock not ready (value: 0)
     *          - B_0x1: 2.4 GHz RADIO bus clock ready (value: 1)
     */
        /** @brief 2.4 GHz RADIO bus clock not ready */
    constexpr std::uint32_t RCC_RADIOENR_RADIOCLKRDY_B_0x0 = 0;
        /** @brief 2.4 GHz RADIO bus clock ready */
    constexpr std::uint32_t RCC_RADIOENR_RADIOCLKRDY_B_0x1 = 1;

    /** @brief RCC external clock sources calibration register 1 */
    using RCC_ECSCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE32 clock trimming These bits provide user-programmable capacitor trimming value. It can be programmed to adjust the HSE32 oscillator frequency. */
    using RCC_ECSCR1_HSETRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
