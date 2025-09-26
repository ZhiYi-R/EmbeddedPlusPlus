/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U585_RCC_HPP
#define EMBEDDED_PP_STM32U585_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Reset and clock control */
namespace STM32U585::RCC {

    /** @brief RCC clock control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIS clock enable */
    using RCC_CR_MSISON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS (MSI system) oscillator off (value: 0)
     *          - B_0x1: MSIS (MSI system) oscillator on (value: 1)
     */
        /** @brief MSIS (MSI system) oscillator off */
    constexpr std::uint32_t RCC_CR_MSISON_B_0x0 = 0;
        /** @brief MSIS (MSI system) oscillator on */
    constexpr std::uint32_t RCC_CR_MSISON_B_0x1 = 1;

    /** @brief MSI enable for some peripheral kernels */
    using RCC_CR_MSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect on MSI oscillator (value: 0)
     *          - B_0x1: MSI oscillator forced ON even in Stop mode (value: 1)
     */
        /** @brief No effect on MSI oscillator */
    constexpr std::uint32_t RCC_CR_MSIKERON_B_0x0 = 0;
        /** @brief MSI oscillator forced ON even in Stop mode */
    constexpr std::uint32_t RCC_CR_MSIKERON_B_0x1 = 1;

    /** @brief MSIS clock ready flag */
    using RCC_CR_MSISRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS (MSI system) oscillator not ready (value: 0)
     *          - B_0x1: MSIS (MSI system) oscillator ready (value: 1)
     */
        /** @brief MSIS (MSI system) oscillator not ready */
    constexpr std::uint32_t RCC_CR_MSISRDY_B_0x0 = 0;
        /** @brief MSIS (MSI system) oscillator ready */
    constexpr std::uint32_t RCC_CR_MSISRDY_B_0x1 = 1;

    /** @brief MSI clock PLL-mode enable */
    using RCC_CR_MSIPLLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI PLL-mode OFF (value: 0)
     *          - B_0x1: MSI PLL-mode ON (value: 1)
     */
        /** @brief MSI PLL-mode OFF */
    constexpr std::uint32_t RCC_CR_MSIPLLEN_B_0x0 = 0;
        /** @brief MSI PLL-mode ON */
    constexpr std::uint32_t RCC_CR_MSIPLLEN_B_0x1 = 1;

    /** @brief MSIK clock enable */
    using RCC_CR_MSIKON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK (MSI kernel) oscillator disabled (value: 0)
     *          - B_0x1: MSIK (MSI kernel) oscillator enabled (value: 1)
     */
        /** @brief MSIK (MSI kernel) oscillator disabled */
    constexpr std::uint32_t RCC_CR_MSIKON_B_0x0 = 0;
        /** @brief MSIK (MSI kernel) oscillator enabled */
    constexpr std::uint32_t RCC_CR_MSIKON_B_0x1 = 1;

    /** @brief MSIK clock ready flag */
    using RCC_CR_MSIKRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK (MSI kernel) oscillator not ready (value: 0)
     *          - B_0x1: MSIK (MSI kernel) oscillator ready (value: 1)
     */
        /** @brief MSIK (MSI kernel) oscillator not ready */
    constexpr std::uint32_t RCC_CR_MSIKRDY_B_0x0 = 0;
        /** @brief MSIK (MSI kernel) oscillator ready */
    constexpr std::uint32_t RCC_CR_MSIKRDY_B_0x1 = 1;

    /** @brief MSI clock with PLL mode selection */
    using RCC_CR_MSIPLLSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL mode applied to MSIK (MSI kernel) clock output (value: 0)
     *          - B_0x1: PLL mode applied to MSIS (MSI system) clock output (value: 1)
     */
        /** @brief PLL mode applied to MSIK (MSI kernel) clock output */
    constexpr std::uint32_t RCC_CR_MSIPLLSEL_B_0x0 = 0;
        /** @brief PLL mode applied to MSIS (MSI system) clock output */
    constexpr std::uint32_t RCC_CR_MSIPLLSEL_B_0x1 = 1;

    /** @brief MSI PLL mode fast startup */
    using RCC_CR_MSIPLLFAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI PLL normal start-up (value: 0)
     *          - B_0x1: MSI PLL fast start-up (value: 1)
     */
        /** @brief MSI PLL normal start-up */
    constexpr std::uint32_t RCC_CR_MSIPLLFAST_B_0x0 = 0;
        /** @brief MSI PLL fast start-up */
    constexpr std::uint32_t RCC_CR_MSIPLLFAST_B_0x1 = 1;

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

    /** @brief HSI48 clock enable */
    using RCC_CR_HSI48ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 oscillator off (value: 0)
     *          - B_0x1: HSI48 oscillator on (value: 1)
     */
        /** @brief HSI48 oscillator off */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x0 = 0;
        /** @brief HSI48 oscillator on */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x1 = 1;

    /** @brief HSI48 clock ready flag */
    using RCC_CR_HSI48RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 oscillator not ready (value: 0)
     *          - B_0x1: HSI48 oscillator ready (value: 1)
     */
        /** @brief HSI48 oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSI48RDY_B_0x0 = 0;
        /** @brief HSI48 oscillator ready */
    constexpr std::uint32_t RCC_CR_HSI48RDY_B_0x1 = 1;

    /** @brief SHSI clock enable */
    using RCC_CR_SHSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SHSI oscillator off (value: 0)
     *          - B_0x1: SHSI oscillator on (value: 1)
     */
        /** @brief SHSI oscillator off */
    constexpr std::uint32_t RCC_CR_SHSION_B_0x0 = 0;
        /** @brief SHSI oscillator on */
    constexpr std::uint32_t RCC_CR_SHSION_B_0x1 = 1;

    /** @brief SHSI clock ready flag */
    using RCC_CR_SHSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SHSI oscillator not ready (value: 0)
     *          - B_0x1: SHSI oscillator ready (value: 1)
     */
        /** @brief SHSI oscillator not ready */
    constexpr std::uint32_t RCC_CR_SHSIRDY_B_0x0 = 0;
        /** @brief SHSI oscillator ready */
    constexpr std::uint32_t RCC_CR_SHSIRDY_B_0x1 = 1;

    /** @brief HSE clock enable */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator off (value: 0)
     *          - B_0x1: HSE oscillator on (value: 1)
     */
        /** @brief HSE oscillator off */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief HSE oscillator on */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x1 = 1;

    /** @brief HSE clock ready flag */
    using RCC_CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator not ready (value: 0)
     *          - B_0x1: HSE oscillator ready (value: 1)
     */
        /** @brief HSE oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x0 = 0;
        /** @brief HSE oscillator ready */
    constexpr std::uint32_t RCC_CR_HSERDY_B_0x1 = 1;

    /** @brief HSE crystal oscillator bypass */
    using RCC_CR_HSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE crystal oscillator not bypassed (value: 0)
     *          - B_0x1: HSE crystal oscillator bypassed with external clock (value: 1)
     */
        /** @brief HSE crystal oscillator not bypassed */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x0 = 0;
        /** @brief HSE crystal oscillator bypassed with external clock */
    constexpr std::uint32_t RCC_CR_HSEBYP_B_0x1 = 1;

    /** @brief Clock security system enable */
    using RCC_CR_CSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock security system OFF (clock detector OFF) (value: 0)
     *          - B_0x1: clock security system ON (clock detector ON if the HSE oscillator is stable, OFF if not). (value: 1)
     */
        /** @brief clock security system OFF (clock detector OFF) */
    constexpr std::uint32_t RCC_CR_CSSON_B_0x0 = 0;
        /** @brief clock security system ON (clock detector ON if the HSE oscillator is stable, OFF if not). */
    constexpr std::uint32_t RCC_CR_CSSON_B_0x1 = 1;

    /** @brief HSE external clock bypass mode */
    using RCC_CR_HSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: external HSE clock analog mode (value: 0)
     *          - B_0x1: external HSE clock digital mode (through I/O Schmitt trigger) (value: 1)
     */
        /** @brief external HSE clock analog mode */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x0 = 0;
        /** @brief external HSE clock digital mode (through I/O Schmitt trigger) */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x1 = 1;

    /** @brief PLL1 enable */
    using RCC_CR_PLL1ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 OFF (value: 0)
     *          - B_0x1: PLL1 ON (value: 1)
     */
        /** @brief PLL1 OFF */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x0 = 0;
        /** @brief PLL1 ON */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x1 = 1;

    /** @brief PLL1 clock ready flag */
    using RCC_CR_PLL1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 unlocked (value: 0)
     *          - B_0x1: PLL1 locked (value: 1)
     */
        /** @brief PLL1 unlocked */
    constexpr std::uint32_t RCC_CR_PLL1RDY_B_0x0 = 0;
        /** @brief PLL1 locked */
    constexpr std::uint32_t RCC_CR_PLL1RDY_B_0x1 = 1;

    /** @brief PLL2 enable */
    using RCC_CR_PLL2ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 OFF (value: 0)
     *          - B_0x1: PLL2 ON (value: 1)
     */
        /** @brief PLL2 OFF */
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
     *          - B_0x0: PLL3 OFF (value: 0)
     *          - B_0x1: PLL3 ON (value: 1)
     */
        /** @brief PLL3 OFF */
    constexpr std::uint32_t RCC_CR_PLL3ON_B_0x0 = 0;
        /** @brief PLL3 ON */
    constexpr std::uint32_t RCC_CR_PLL3ON_B_0x1 = 1;

    /** @brief PLL3 clock ready flag */
    using RCC_CR_PLL3RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 unlocked (value: 0)
     *          - B_0x1: PLL3 locked (value: 1)
     */
        /** @brief PLL3 unlocked */
    constexpr std::uint32_t RCC_CR_PLL3RDY_B_0x0 = 0;
        /** @brief PLL3 locked */
    constexpr std::uint32_t RCC_CR_PLL3RDY_B_0x1 = 1;

    /** @brief RCC internal clock sources calibration register 1 */
    using RCC_ICSCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC3 clock calibration for MSI ranges 12 to 15 */
    using RCC_ICSCR1_MSICAL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC2 clock calibration for MSI ranges 8 to 11 */
    using RCC_ICSCR1_MSICAL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC1 clock calibration for MSI ranges 4 to 7 */
    using RCC_ICSCR1_MSICAL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC0 clock calibration for MSI ranges 0 to 3 */
    using RCC_ICSCR1_MSICAL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI bias mode selection */
    using RCC_ICSCR1_MSIBIAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI bias continuous mode (clock accuracy fast settling time) (value: 0)
     *          - B_0x1: MSI bias sampling mode when the regulator is in range 4, or when the device is in Stop 1 or Stop 2 (ultra-low-power mode) (value: 1)
     */
        /** @brief MSI bias continuous mode (clock accuracy fast settling time) */
    constexpr std::uint32_t RCC_ICSCR1_MSIBIAS_B_0x0 = 0;
        /** @brief MSI bias sampling mode when the regulator is in range 4, or when the device is in Stop 1 or Stop 2 (ultra-low-power mode) */
    constexpr std::uint32_t RCC_ICSCR1_MSIBIAS_B_0x1 = 1;

    /** @brief MSI clock range selection */
    using RCC_ICSCR1_MSIRGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS/MSIK ranges provided by MSISSRANGE[3:0] and MSIKSRANGE[3:0] in RCC_CSR (value: 0)
     *          - B_0x1: MSIS/MSIK ranges provided by MSISRANGE[3:0] and MSIKRANGE[3:0] in RCC_ICSCR1 (value: 1)
     */
        /** @brief MSIS/MSIK ranges provided by MSISSRANGE[3:0] and MSIKSRANGE[3:0] in RCC_CSR */
    constexpr std::uint32_t RCC_ICSCR1_MSIRGSEL_B_0x0 = 0;
        /** @brief MSIS/MSIK ranges provided by MSISRANGE[3:0] and MSIKRANGE[3:0] in RCC_ICSCR1 */
    constexpr std::uint32_t RCC_ICSCR1_MSIRGSEL_B_0x1 = 1;

    /** @brief MSIK clock ranges */
    using RCC_ICSCR1_MSIKRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: range 0 around 48 MHz (value: 0)
     *          - B_0x1: range 1 around 24 MHz (value: 1)
     *          - B_0x2: range 2 around 16 MHz (value: 2)
     *          - B_0x3: range 3 around 12 MHz (value: 3)
     *          - B_0x4: range 4 around 4 MHz (reset value) (value: 4)
     *          - B_0x5: range 5 around 2 MHz (value: 5)
     *          - B_0x6: range 6 around 1.33 MHz (value: 6)
     *          - B_0x7: range 7 around 1 MHz (value: 7)
     *          - B_0x8: range 8 around 3.072 MHz (value: 8)
     *          - B_0x9: range 9 around 1.536 MHz (value: 9)
     *          - B_0xA: range 10 around 1.024 MHz (value: 10)
     *          - B_0xB: range 11 around 768 kHz (value: 11)
     *          - B_0xC: range 12 around 400 kHz (value: 12)
     *          - B_0xD: range 13 around 200 kHz (value: 13)
     *          - B_0xE: range 14 around 133 kHz (value: 14)
     *          - B_0xF: range 15 around 100 kHz (value: 15)
     */
        /** @brief range 0 around 48 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x0 = 0;
        /** @brief range 1 around 24 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x1 = 1;
        /** @brief range 2 around 16 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x2 = 2;
        /** @brief range 3 around 12 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x3 = 3;
        /** @brief range 4 around 4 MHz (reset value) */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x4 = 4;
        /** @brief range 5 around 2 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x5 = 5;
        /** @brief range 6 around 1.33 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x6 = 6;
        /** @brief range 7 around 1 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x7 = 7;
        /** @brief range 8 around 3.072 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x8 = 8;
        /** @brief range 9 around 1.536 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0x9 = 9;
        /** @brief range 10 around 1.024 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0xA = 10;
        /** @brief range 11 around 768 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0xB = 11;
        /** @brief range 12 around 400 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0xC = 12;
        /** @brief range 13 around 200 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0xD = 13;
        /** @brief range 14 around 133 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0xE = 14;
        /** @brief range 15 around 100 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSIKRANGE_B_0xF = 15;

    /** @brief MSIS clock ranges */
    using RCC_ICSCR1_MSISRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: range 0 around 48 MHz (value: 0)
     *          - B_0x1: range 1 around 24 MHz (value: 1)
     *          - B_0x2: range 2 around 16 MHz (value: 2)
     *          - B_0x3: range 3 around 12 MHz (value: 3)
     *          - B_0x4: range 4 around 4 MHz (reset value) (value: 4)
     *          - B_0x5: range 5 around 2 MHz (value: 5)
     *          - B_0x6: range 6 around 1.33 MHz (value: 6)
     *          - B_0x7: range 7 around 1 MHz (value: 7)
     *          - B_0x8: range 8 around 3.072 MHz (value: 8)
     *          - B_0x9: range 9 around 1.536 MHz (value: 9)
     *          - B_0xA: range 10 around 1.024 MHz (value: 10)
     *          - B_0xB: range 11 around 768 kHz (value: 11)
     *          - B_0xC: range 12 around 400 kHz (value: 12)
     *          - B_0xD: range 13 around 200 kHz (value: 13)
     *          - B_0xE: range 14 around 133 kHz (value: 14)
     *          - B_0xF: range 15 around 100 kHz (value: 15)
     */
        /** @brief range 0 around 48 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x0 = 0;
        /** @brief range 1 around 24 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x1 = 1;
        /** @brief range 2 around 16 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x2 = 2;
        /** @brief range 3 around 12 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x3 = 3;
        /** @brief range 4 around 4 MHz (reset value) */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x4 = 4;
        /** @brief range 5 around 2 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x5 = 5;
        /** @brief range 6 around 1.33 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x6 = 6;
        /** @brief range 7 around 1 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x7 = 7;
        /** @brief range 8 around 3.072 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x8 = 8;
        /** @brief range 9 around 1.536 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0x9 = 9;
        /** @brief range 10 around 1.024 MHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0xA = 10;
        /** @brief range 11 around 768 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0xB = 11;
        /** @brief range 12 around 400 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0xC = 12;
        /** @brief range 13 around 200 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0xD = 13;
        /** @brief range 14 around 133 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0xE = 14;
        /** @brief range 15 around 100 kHz */
    constexpr std::uint32_t RCC_ICSCR1_MSISRANGE_B_0xF = 15;

    /** @brief RCC internal clock sources calibration register 2 */
    using RCC_ICSCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock trimming for ranges 12 to 15 */
    using RCC_ICSCR2_MSITRIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock trimming for ranges 8 to 11 */
    using RCC_ICSCR2_MSITRIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock trimming for ranges 4 to 7 */
    using RCC_ICSCR2_MSITRIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock trimming for ranges 0 to 3 */
    using RCC_ICSCR2_MSITRIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC internal clock sources calibration register 3 */
    using RCC_ICSCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock calibration */
    using RCC_ICSCR3_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock trimming */
    using RCC_ICSCR3_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock recovery RC register */
    using RCC_CRRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 clock calibration */
    using RCC_CRRCR_HSI48CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock configuration register 1 */
    using RCC_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock switch */
    using RCC_CFGR1_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS selected as system clock (value: 0)
     *          - B_0x1: HSI16 selected as system clock (value: 1)
     *          - B_0x2: HSE selected as system clock (value: 2)
     *          - B_0x3: PLL pll1_r_ck selected as system clock (value: 3)
     */
        /** @brief MSIS selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x0 = 0;
        /** @brief HSI16 selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x1 = 1;
        /** @brief HSE selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x2 = 2;
        /** @brief PLL pll1_r_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x3 = 3;

    /** @brief system clock switch status */
    using RCC_CFGR1_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS oscillator used as system clock (value: 0)
     *          - B_0x1: HSI16 oscillator used as system clock (value: 1)
     *          - B_0x2: HSE used as system clock (value: 2)
     *          - B_0x3: PLL pll1_r_ck used as system clock (value: 3)
     */
        /** @brief MSIS oscillator used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x0 = 0;
        /** @brief HSI16 oscillator used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x1 = 1;
        /** @brief HSE used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x2 = 2;
        /** @brief PLL pll1_r_ck used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x3 = 3;

    /** @brief wake-up from Stop and CSS backup clock selection */
    using RCC_CFGR1_STOPWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS oscillator selected as wake-up from stop clock and CSS backup clock (value: 0)
     *          - B_0x1: HSI16 oscillator selected as wake-up from stop clock and CSS backup clock (value: 1)
     */
        /** @brief MSIS oscillator selected as wake-up from stop clock and CSS backup clock */
    constexpr std::uint32_t RCC_CFGR1_STOPWUCK_B_0x0 = 0;
        /** @brief HSI16 oscillator selected as wake-up from stop clock and CSS backup clock */
    constexpr std::uint32_t RCC_CFGR1_STOPWUCK_B_0x1 = 1;

    /** @brief wake-up from Stop kernel clock automatic enable selection */
    using RCC_CFGR1_STOPKERWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK oscillator automatically enabled when exiting Stop mode (value: 0)
     *          - B_0x1: HSI16 oscillator automatically enabled when exiting Stop mode (value: 1)
     */
        /** @brief MSIK oscillator automatically enabled when exiting Stop mode */
    constexpr std::uint32_t RCC_CFGR1_STOPKERWUCK_B_0x0 = 0;
        /** @brief HSI16 oscillator automatically enabled when exiting Stop mode */
    constexpr std::uint32_t RCC_CFGR1_STOPKERWUCK_B_0x1 = 1;

    /** @brief microcontroller clock output */
    using RCC_CFGR1_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO output disabled, no clock on MCO (value: 0)
     *          - B_0x1: SYSCLK system clock selected (value: 1)
     *          - B_0x2: MSIS clock selected (value: 2)
     *          - B_0x3: HSI16 clock selected (value: 3)
     *          - B_0x4: HSE clock selected (value: 4)
     *          - B_0x5: Main PLL clock pll1_r_ck selected (value: 5)
     *          - B_0x6: LSI clock selected (value: 6)
     *          - B_0x7: LSE clock selected (value: 7)
     *          - B_0x8: Internal HSI48 clock selected (value: 8)
     *          - B_0x9: MSIK clock selected (value: 9)
     */
        /** @brief MCO output disabled, no clock on MCO */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x0 = 0;
        /** @brief SYSCLK system clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x1 = 1;
        /** @brief MSIS clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x2 = 2;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x3 = 3;
        /** @brief HSE clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x4 = 4;
        /** @brief Main PLL clock pll1_r_ck selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x5 = 5;
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x6 = 6;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x7 = 7;
        /** @brief Internal HSI48 clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x8 = 8;
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x9 = 9;

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
    /** @brief AHB prescaler */
    using RCC_CFGR2_HPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x8 = 8;
        /** @brief SYSCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x9 = 9;
        /** @brief SYSCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xA = 10;
        /** @brief SYSCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xB = 11;
        /** @brief SYSCLK divided by 64 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xC = 12;
        /** @brief SYSCLK divided by 128 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xD = 13;
        /** @brief SYSCLK divided by 256 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xE = 14;
        /** @brief SYSCLK divided by 512 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xF = 15;

    /** @brief APB1 prescaler */
    using RCC_CFGR2_PPRE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: PCLK1 divided by 2 (value: 4)
     *          - B_0x5: PCLK1 divided by 4 (value: 5)
     *          - B_0x6: PCLK1 divided by 8 (value: 6)
     *          - B_0x7: PCLK1 divided by 16 (value: 7)
     */
        /** @brief PCLK1 divided by 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x4 = 4;
        /** @brief PCLK1 divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x5 = 5;
        /** @brief PCLK1 divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x6 = 6;
        /** @brief PCLK1 divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x7 = 7;

    /** @brief APB2 prescaler */
    using RCC_CFGR2_PPRE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: PCLK2 divided by 2 (value: 4)
     *          - B_0x5: PCLK2 divided by 4 (value: 5)
     *          - B_0x6: PCLK2 divided by 8 (value: 6)
     *          - B_0x7: PCLK2 divided by 16 (value: 7)
     */
        /** @brief PCLK2 divided by 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x4 = 4;
        /** @brief PCLK2 divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x5 = 5;
        /** @brief PCLK2 divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x6 = 6;
        /** @brief PCLK2 divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x7 = 7;

    /** @brief DSI PHY prescaler */
    using RCC_CFGR2_DPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: DCLK divided by 2 (value: 4)
     *          - B_0x5: DCLK divided by 4 (value: 5)
     *          - B_0x6: DCLK divided by 8 (value: 6)
     *          - B_0x7: DCLK divided by 16 (value: 7)
     */
        /** @brief DCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR2_DPRE_B_0x4 = 4;
        /** @brief DCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_DPRE_B_0x5 = 5;
        /** @brief DCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_DPRE_B_0x6 = 6;
        /** @brief DCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_DPRE_B_0x7 = 7;

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

    /** @brief AHB2_1 clock disable */
    using RCC_CFGR2_AHB2DIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2_1 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: AHB2_1 clock disabled (value: 1)
     */
        /** @brief AHB2_1 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_AHB2DIS1_B_0x0 = 0;
        /** @brief AHB2_1 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_AHB2DIS1_B_0x1 = 1;

    /** @brief AHB2_2 clock disable */
    using RCC_CFGR2_AHB2DIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2_2 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: AHB2_2 clock disabled (value: 1)
     */
        /** @brief AHB2_2 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_AHB2DIS2_B_0x0 = 0;
        /** @brief AHB2_2 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_AHB2DIS2_B_0x1 = 1;

    /** @brief APB1 clock disable */
    using RCC_CFGR2_APB1DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: APB1 clock disabled (value: 1)
     */
        /** @brief APB1 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_APB1DIS_B_0x0 = 0;
        /** @brief APB1 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_APB1DIS_B_0x1 = 1;

    /** @brief APB2 clock disable */
    using RCC_CFGR2_APB2DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: APB2 clock disabled (value: 1)
     */
        /** @brief APB2 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR2_APB2DIS_B_0x0 = 0;
        /** @brief APB2 clock disabled */
    constexpr std::uint32_t RCC_CFGR2_APB2DIS_B_0x1 = 1;

    /** @brief RCC clock configuration register 3 */
    using RCC_CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB3 prescaler */
    using RCC_CFGR3_PPRE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: HCLK divided by 2 (value: 4)
     *          - B_0x5: HCLK divided by 4 (value: 5)
     *          - B_0x6: HCLK divided by 8 (value: 6)
     *          - B_0x7: HCLK divided by 16 (value: 7)
     */
        /** @brief HCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x4 = 4;
        /** @brief HCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x5 = 5;
        /** @brief HCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x6 = 6;
        /** @brief HCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x7 = 7;

    /** @brief AHB3 clock disable */
    using RCC_CFGR3_AHB3DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB3 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: AHB3 clock disabled (value: 1)
     */
        /** @brief AHB3 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR3_AHB3DIS_B_0x0 = 0;
        /** @brief AHB3 clock disabled */
    constexpr std::uint32_t RCC_CFGR3_AHB3DIS_B_0x1 = 1;

    /** @brief APB3 clock disable */
    using RCC_CFGR3_APB3DIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 clock enabled, distributed to peripherals according to their dedicated clock enable control bits (value: 0)
     *          - B_0x1: APB3 clock disabled (value: 1)
     */
        /** @brief APB3 clock enabled, distributed to peripherals according to their dedicated clock enable control bits */
    constexpr std::uint32_t RCC_CFGR3_APB3DIS_B_0x0 = 0;
        /** @brief APB3 clock disabled */
    constexpr std::uint32_t RCC_CFGR3_APB3DIS_B_0x1 = 1;

    /** @brief RCC PLL1 configuration register */
    using RCC_PLL1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 entry clock source */
    using RCC_PLL1CFGR_PLL1SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock sent to PLL1 (value: 0)
     *          - B_0x1: MSIS clock selected as PLL1 clock entry (value: 1)
     *          - B_0x2: HSI16 clock selected as PLL1 clock entry (value: 2)
     *          - B_0x3: HSE clock selected as PLL1 clock entry (value: 3)
     */
        /** @brief No clock sent to PLL1 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x0 = 0;
        /** @brief MSIS clock selected as PLL1 clock entry */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x1 = 1;
        /** @brief HSI16 clock selected as PLL1 clock entry */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x2 = 2;
        /** @brief HSE clock selected as PLL1 clock entry */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1SRC_B_0x3 = 3;

    /** @brief PLL1 input frequency range */
    using RCC_PLL1CFGR_PLL1RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: PLL1 input (ref1_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL1 input (ref1_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1RGE_B_0x3 = 3;

    /** @brief PLL1 fractional latch enable */
    using RCC_PLL1CFGR_PLL1FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler for PLL1 */
    using RCC_PLL1CFGR_PLL1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: division by 1 (bypass) (value: 0)
     *          - B_0x1: division by 2 (value: 1)
     *          - B_0x2: division by 3 (value: 2)
     *          - B_0xF: division by 16 (value: 15)
     */
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x0 = 0;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x1 = 1;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0x2 = 2;
        /** @brief division by 16 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1M_B_0xF = 15;

    /** @brief Prescaler for EPOD booster input clock */
    using RCC_PLL1CFGR_PLL1MBOOST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: division by 1 (bypass) (value: 0)
     *          - B_0x1: division by 2 (value: 1)
     *          - B_0x2: division by 4 (value: 2)
     *          - B_0x3: division by 6 (value: 3)
     *          - B_0x4: division by 8 (value: 4)
     *          - B_0x5: division by 10 (value: 5)
     *          - B_0x6: division by 12 (value: 6)
     *          - B_0x7: division by 14 (value: 7)
     *          - B_0x8: division by 16 (value: 8)
     */
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1MBOOST_B_0x0 = 0;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1MBOOST_B_0x1 = 1;
        /** @brief division by 4 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1MBOOST_B_0x2 = 2;
        /** @brief division by 6 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1MBOOST_B_0x3 = 3;
        /** @brief division by 8 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1MBOOST_B_0x4 = 4;
        /** @brief division by 10 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1MBOOST_B_0x5 = 5;
        /** @brief division by 12 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1MBOOST_B_0x6 = 6;
        /** @brief division by 14 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1MBOOST_B_0x7 = 7;
        /** @brief division by 16 */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1MBOOST_B_0x8 = 8;

    /** @brief PLL1 DIVP divider output enable */
    using RCC_PLL1CFGR_PLL1PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_p_ck output disabled (value: 0)
     *          - B_0x1: pll1_p_ck output enabled (value: 1)
     */
        /** @brief pll1_p_ck output disabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x0 = 0;
        /** @brief pll1_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1PEN_B_0x1 = 1;

    /** @brief PLL1 DIVQ divider output enable */
    using RCC_PLL1CFGR_PLL1QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_q_ck output disabled (value: 0)
     *          - B_0x1: pll1_q_ck output enabled (value: 1)
     */
        /** @brief pll1_q_ck output disabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x0 = 0;
        /** @brief pll1_q_ck output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1QEN_B_0x1 = 1;

    /** @brief PLL1 DIVR divider output enable */
    using RCC_PLL1CFGR_PLL1REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_r_ck output disabled (value: 0)
     *          - B_0x1: pll1_r_ck output enabled (value: 1)
     */
        /** @brief pll1_r_ck output disabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1REN_B_0x0 = 0;
        /** @brief pll1_r_ck output enabled */
    constexpr std::uint32_t RCC_PLL1CFGR_PLL1REN_B_0x1 = 1;

    /** @brief RCC PLL2 configuration register */
    using RCC_PLL2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 entry clock source */
    using RCC_PLL2CFGR_PLL2SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock sent to PLL2 (value: 0)
     *          - B_0x1: MSIS clock selected as PLL2 clock entry (value: 1)
     *          - B_0x2: HSI16 clock selected as PLL2 clock entry (value: 2)
     *          - B_0x3: HSE clock selected as PLL2 clock entry (value: 3)
     */
        /** @brief No clock sent to PLL2 */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x0 = 0;
        /** @brief MSIS clock selected as PLL2 clock entry */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x1 = 1;
        /** @brief HSI16 clock selected as PLL2 clock entry */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x2 = 2;
        /** @brief HSE clock selected as PLL2 clock entry */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2SRC_B_0x3 = 3;

    /** @brief PLL2 input frequency range */
    using RCC_PLL2CFGR_PLL2RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: PLL2 input (ref2_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL2 input (ref2_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2RGE_B_0x3 = 3;

    /** @brief PLL2 fractional latch enable */
    using RCC_PLL2CFGR_PLL2FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler for PLL2 */
    using RCC_PLL2CFGR_PLL2M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: division by 1 (bypass) (value: 0)
     *          - B_0x1: division by 2 (value: 1)
     *          - B_0x2: division by 3 (value: 2)
     *          - B_0xF: division by 16 (value: 15)
     */
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0x0 = 0;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0x1 = 1;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0x2 = 2;
        /** @brief division by 16 */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2M_B_0xF = 15;

    /** @brief PLL2 DIVP divider output enable */
    using RCC_PLL2CFGR_PLL2PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_p_ck output disabled (value: 0)
     *          - B_0x1: pll2_p_ck output enabled (value: 1)
     */
        /** @brief pll2_p_ck output disabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2PEN_B_0x0 = 0;
        /** @brief pll2_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2PEN_B_0x1 = 1;

    /** @brief PLL2 DIVQ divider output enable */
    using RCC_PLL2CFGR_PLL2QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_q_ck output disabled (value: 0)
     *          - B_0x1: pll2_q_ck output enabled (value: 1)
     */
        /** @brief pll2_q_ck output disabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2QEN_B_0x0 = 0;
        /** @brief pll2_q_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2QEN_B_0x1 = 1;

    /** @brief PLL2 DIVR divider output enable */
    using RCC_PLL2CFGR_PLL2REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll2_r_ck output disabled (value: 0)
     *          - B_0x1: pll2_r_ck output enabled (value: 1)
     */
        /** @brief pll2_r_ck output disabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2REN_B_0x0 = 0;
        /** @brief pll2_r_ck output enabled */
    constexpr std::uint32_t RCC_PLL2CFGR_PLL2REN_B_0x1 = 1;

    /** @brief RCC PLL3 configuration register */
    using RCC_PLL3CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 entry clock source */
    using RCC_PLL3CFGR_PLL3SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock sent to PLL3 (value: 0)
     *          - B_0x1: MSIS clock selected as PLL3 clock entry (value: 1)
     *          - B_0x2: HSI16 clock selected as PLL3 clock entry (value: 2)
     *          - B_0x3: HSE clock selected as PLL3 clock entry (value: 3)
     */
        /** @brief No clock sent to PLL3 */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3SRC_B_0x0 = 0;
        /** @brief MSIS clock selected as PLL3 clock entry */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3SRC_B_0x1 = 1;
        /** @brief HSI16 clock selected as PLL3 clock entry */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3SRC_B_0x2 = 2;
        /** @brief HSE clock selected as PLL3 clock entry */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3SRC_B_0x3 = 3;

    /** @brief PLL3 input frequency range */
    using RCC_PLL3CFGR_PLL3RGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: PLL3 input (ref3_ck) clock range frequency between 8 and 16 MHz (value: 3)
     */
        /** @brief PLL3 input (ref3_ck) clock range frequency between 8 and 16 MHz */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3RGE_B_0x3 = 3;

    /** @brief PLL3 fractional latch enable */
    using RCC_PLL3CFGR_PLL3FRACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler for PLL3 */
    using RCC_PLL3CFGR_PLL3M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: division by 1 (bypass) (value: 0)
     *          - B_0x1: division by 2 (value: 1)
     *          - B_0x2: division by 3 (value: 2)
     *          - B_0xF: division by 16 (value: 15)
     */
        /** @brief division by 1 (bypass) */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0x0 = 0;
        /** @brief division by 2 */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0x1 = 1;
        /** @brief division by 3 */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0x2 = 2;
        /** @brief division by 16 */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3M_B_0xF = 15;

    /** @brief PLL3 DIVP divider output enable */
    using RCC_PLL3CFGR_PLL3PEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_p_ck output disabled (value: 0)
     *          - B_0x1: pll3_p_ck output enabled (value: 1)
     */
        /** @brief pll3_p_ck output disabled */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3PEN_B_0x0 = 0;
        /** @brief pll3_p_ck output enabled */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3PEN_B_0x1 = 1;

    /** @brief PLL3 DIVQ divider output enable */
    using RCC_PLL3CFGR_PLL3QEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_q_ck output disabled (value: 0)
     *          - B_0x1: pll3_q_ck output enabled (value: 1)
     */
        /** @brief pll3_q_ck output disabled */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3QEN_B_0x0 = 0;
        /** @brief pll3_q_ck output enabled */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3QEN_B_0x1 = 1;

    /** @brief PLL3 DIVR divider output enable */
    using RCC_PLL3CFGR_PLL3REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll3_r_ck output disabled (value: 0)
     *          - B_0x1: pll3_r_ck output enabled (value: 1)
     */
        /** @brief pll3_r_ck output disabled */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3REN_B_0x0 = 0;
        /** @brief pll3_r_ck output enabled */
    constexpr std::uint32_t RCC_PLL3CFGR_PLL3REN_B_0x1 = 1;

    /** @brief RCC PLL1 dividers register */
    using RCC_PLL1DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL1 VCO */
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
     *          - B_0x2: pll1_p_ck = vco1_ck (value: 2)
     *          - B_0x3: pll1_p_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_p_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief Not allowed */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x0 = 0;
        /** @brief pll1_p_ck = vco1_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_PLL1DIVR_PLL1P_B_0x1 = 1;
        /** @brief pll1_p_ck = vco1_ck */
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
     *          - B_0x0: Not allowed (value: 0)
     *          - B_0x1: pll1_r_ck = vco1_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: pll1_r_ck = vco1_ck / 3 (value: 2)
     *          - B_0x3: pll1_r_ck = vco1_ck / 4 (value: 3)
     *          - B_0x7F: pll1_r_ck = vco1_ck / 128 (value: 127)
     */
        /** @brief Not allowed */
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
    /** @brief Fractional part of the multiplication factor for PLL1 VCO */
    using RCC_PLL1FRACR_PLL1FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL2 dividers configuration register */
    using RCC_PLL2DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL2 VCO */
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
    /** @brief Fractional part of the multiplication factor for PLL2 VCO */
    using RCC_PLL2FRACR_PLL2FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL3 dividers configuration register */
    using RCC_PLL3DIVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplication factor for PLL3 VCO */
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
    /** @brief Fractional part of the multiplication factor for PLL3 VCO */
    using RCC_PLL3FRACR_PLL3FRACN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt enable */
    using RCC_CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI ready interrupt disabled (value: 0)
     *          - B_0x1: LSI ready interrupt enabled (value: 1)
     */
        /** @brief LSI ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x0 = 0;
        /** @brief LSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x1 = 1;

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

    /** @brief MSIS ready interrupt enable */
    using RCC_CIER_MSISRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS ready interrupt disabled (value: 0)
     *          - B_0x1: MSIS ready interrupt enabled (value: 1)
     */
        /** @brief MSIS ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_MSISRDYIE_B_0x0 = 0;
        /** @brief MSIS ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_MSISRDYIE_B_0x1 = 1;

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

    /** @brief HSE ready interrupt enable */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE ready interrupt disabled (value: 0)
     *          - B_0x1: HSE ready interrupt enabled (value: 1)
     */
        /** @brief HSE ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

    /** @brief HSI48 ready interrupt enable */
    using RCC_CIER_HSI48RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 ready interrupt disabled (value: 0)
     *          - B_0x1: HSI48 ready interrupt enabled (value: 1)
     */
        /** @brief HSI48 ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x0 = 0;
        /** @brief HSI48 ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSI48RDYIE_B_0x1 = 1;

    /** @brief PLL ready interrupt enable */
    using RCC_CIER_PLL1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 lock interrupt disabled (value: 0)
     *          - B_0x1: PLL1 lock interrupt enabled (value: 1)
     */
        /** @brief PLL1 lock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x0 = 0;
        /** @brief PLL1 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x1 = 1;

    /** @brief PLL2 ready interrupt enable */
    using RCC_CIER_PLL2RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 lock interrupt disabled (value: 0)
     *          - B_0x1: PLL2 lock interrupt enabled (value: 1)
     */
        /** @brief PLL2 lock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_PLL2RDYIE_B_0x0 = 0;
        /** @brief PLL2 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL2RDYIE_B_0x1 = 1;

    /** @brief PLL3 ready interrupt enable */
    using RCC_CIER_PLL3RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 lock interrupt disabled (value: 0)
     *          - B_0x1: PLL3 lock interrupt enabled (value: 1)
     */
        /** @brief PLL3 lock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_PLL3RDYIE_B_0x0 = 0;
        /** @brief PLL3 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL3RDYIE_B_0x1 = 1;

    /** @brief MSIK ready interrupt enable */
    using RCC_CIER_MSIKRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK ready interrupt disabled (value: 0)
     *          - B_0x1: MSIK ready interrupt enabled (value: 1)
     */
        /** @brief MSIK ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_MSIKRDYIE_B_0x0 = 0;
        /** @brief MSIK ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_MSIKRDYIE_B_0x1 = 1;

    /** @brief SHSI ready interrupt enable */
    using RCC_CIER_SHSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SHSI ready interrupt disabled (value: 0)
     *          - B_0x1: SHSI ready interrupt enabled (value: 1)
     */
        /** @brief SHSI ready interrupt disabled */
    constexpr std::uint32_t RCC_CIER_SHSIRDYIE_B_0x0 = 0;
        /** @brief SHSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_SHSIRDYIE_B_0x1 = 1;

    /** @brief RCC clock interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt flag */
    using RCC_CIFR_LSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the LSI oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the LSI oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the LSI oscillator */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the LSI oscillator */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the LSE oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the LSE oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief MSIS ready interrupt flag */
    using RCC_CIFR_MSISRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the MSIS oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the MSIS oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the MSIS oscillator */
    constexpr std::uint32_t RCC_CIFR_MSISRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the MSIS oscillator */
    constexpr std::uint32_t RCC_CIFR_MSISRDYF_B_0x1 = 1;

    /** @brief HSI16 ready interrupt flag */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSI16 oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSI16 oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSI16 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSE oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSE oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief HSI48 ready interrupt flag */
    using RCC_CIFR_HSI48RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSI48 oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSI48 oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSI48 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSI48 oscillator */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x1 = 1;

    /** @brief PLL1 ready interrupt flag */
    using RCC_CIFR_PLL1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by PLL1 lock (value: 0)
     *          - B_0x1: Clock ready interrupt caused by PLL1 lock (value: 1)
     */
        /** @brief No clock ready interrupt caused by PLL1 lock */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by PLL1 lock */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x1 = 1;

    /** @brief PLL2 ready interrupt flag */
    using RCC_CIFR_PLL2RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by PLL2 lock (value: 0)
     *          - B_0x1: Clock ready interrupt caused by PLL2 lock (value: 1)
     */
        /** @brief No clock ready interrupt caused by PLL2 lock */
    constexpr std::uint32_t RCC_CIFR_PLL2RDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by PLL2 lock */
    constexpr std::uint32_t RCC_CIFR_PLL2RDYF_B_0x1 = 1;

    /** @brief PLL3 ready interrupt flag */
    using RCC_CIFR_PLL3RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by PLL3 lock (value: 0)
     *          - B_0x1: Clock ready interrupt caused by PLL3 lock (value: 1)
     */
        /** @brief No clock ready interrupt caused by PLL3 lock */
    constexpr std::uint32_t RCC_CIFR_PLL3RDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by PLL3 lock */
    constexpr std::uint32_t RCC_CIFR_PLL3RDYF_B_0x1 = 1;

    /** @brief Clock security system interrupt flag */
    using RCC_CIFR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock security interrupt caused by HSE clock failure (value: 0)
     *          - B_0x1: Clock security interrupt caused by HSE clock failure (value: 1)
     */
        /** @brief No clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x0 = 0;
        /** @brief Clock security interrupt caused by HSE clock failure */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x1 = 1;

    /** @brief MSIK ready interrupt flag */
    using RCC_CIFR_MSIKRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the MSIK oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the MSIK oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the MSIK oscillator */
    constexpr std::uint32_t RCC_CIFR_MSIKRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the MSIK oscillator */
    constexpr std::uint32_t RCC_CIFR_MSIKRDYF_B_0x1 = 1;

    /** @brief SHSI ready interrupt flag */
    using RCC_CIFR_SHSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the SHSI oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the SHSI oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the SHSI oscillator */
    constexpr std::uint32_t RCC_CIFR_SHSIRDYF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the SHSI oscillator */
    constexpr std::uint32_t RCC_CIFR_SHSIRDYF_B_0x1 = 1;

    /** @brief RCC clock interrupt clear register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt clear */
    using RCC_CICR_LSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE ready interrupt clear */
    using RCC_CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIS ready interrupt clear */
    using RCC_CICR_MSISRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI16 ready interrupt clear */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE ready interrupt clear */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI48 ready interrupt clear */
    using RCC_CICR_HSI48RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 ready interrupt clear */
    using RCC_CICR_PLL1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 ready interrupt clear */
    using RCC_CICR_PLL2RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 ready interrupt clear */
    using RCC_CICR_PLL3RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock security system interrupt clear */
    using RCC_CICR_CSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK oscillator ready interrupt clear */
    using RCC_CICR_MSIKRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHSI oscillator ready interrupt clear */
    using RCC_CICR_SHSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 peripheral reset register */
    using RCC_AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 reset */
    using RCC_AHB1RSTR_GPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the GPDMA1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x0 = 0;
        /** @brief Reset the GPDMA1. */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x1 = 1;

    /** @brief CORDIC reset */
    using RCC_AHB1RSTR_CORDICRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the CORDIC. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_CORDICRST_B_0x0 = 0;
        /** @brief Reset the CORDIC. */
    constexpr std::uint32_t RCC_AHB1RSTR_CORDICRST_B_0x1 = 1;

    /** @brief FMAC reset */
    using RCC_AHB1RSTR_FMACRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the FMAC. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_FMACRST_B_0x0 = 0;
        /** @brief Reset the FMAC. */
    constexpr std::uint32_t RCC_AHB1RSTR_FMACRST_B_0x1 = 1;

    /** @brief MDF1 reset */
    using RCC_AHB1RSTR_MDF1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the MDF1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_MDF1RST_B_0x0 = 0;
        /** @brief Reset the MDF1. */
    constexpr std::uint32_t RCC_AHB1RSTR_MDF1RST_B_0x1 = 1;

    /** @brief CRC reset */
    using RCC_AHB1RSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the CRC. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x0 = 0;
        /** @brief Reset the CRC. */
    constexpr std::uint32_t RCC_AHB1RSTR_CRCRST_B_0x1 = 1;

    /** @brief JPEG reset */
    using RCC_AHB1RSTR_JPEGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the JPEG. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_JPEGRST_B_0x0 = 0;
        /** @brief Reset the JPEG. */
    constexpr std::uint32_t RCC_AHB1RSTR_JPEGRST_B_0x1 = 1;

    /** @brief TSC reset */
    using RCC_AHB1RSTR_TSCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TSC. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_TSCRST_B_0x0 = 0;
        /** @brief Reset the TSC. */
    constexpr std::uint32_t RCC_AHB1RSTR_TSCRST_B_0x1 = 1;

    /** @brief RAMCFG reset */
    using RCC_AHB1RSTR_RAMCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the RAMCFG. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_RAMCFGRST_B_0x0 = 0;
        /** @brief Reset the RAMCFG. */
    constexpr std::uint32_t RCC_AHB1RSTR_RAMCFGRST_B_0x1 = 1;

    /** @brief DMA2D reset */
    using RCC_AHB1RSTR_DMA2DRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the DMA2D. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA2DRST_B_0x0 = 0;
        /** @brief Reset the DMA2D. */
    constexpr std::uint32_t RCC_AHB1RSTR_DMA2DRST_B_0x1 = 1;

    /** @brief GFXMMU reset */
    using RCC_AHB1RSTR_GFXMMURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the GFXMMU. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_GFXMMURST_B_0x0 = 0;
        /** @brief Reset the GFXMMU. */
    constexpr std::uint32_t RCC_AHB1RSTR_GFXMMURST_B_0x1 = 1;

    /** @brief GPU2D reset */
    using RCC_AHB1RSTR_GPU2DRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the GPU2D. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR_GPU2DRST_B_0x0 = 0;
        /** @brief Reset the GPU2D. */
    constexpr std::uint32_t RCC_AHB1RSTR_GPU2DRST_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral reset register 1 */
    using RCC_AHB2RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port A reset */
    using RCC_AHB2RSTR1_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I/O port A. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOARST_B_0x0 = 0;
        /** @brief Reset the I/O port A. */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOARST_B_0x1 = 1;

    /** @brief I/O port B reset */
    using RCC_AHB2RSTR1_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I/O port B. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOBRST_B_0x0 = 0;
        /** @brief Reset the I/O port B. */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOBRST_B_0x1 = 1;

    /** @brief I/O port C reset */
    using RCC_AHB2RSTR1_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I/O port C. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOCRST_B_0x0 = 0;
        /** @brief Reset the I/O port C. */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOCRST_B_0x1 = 1;

    /** @brief I/O port D reset */
    using RCC_AHB2RSTR1_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I/O port D. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIODRST_B_0x0 = 0;
        /** @brief Reset the I/O port D. */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIODRST_B_0x1 = 1;

    /** @brief I/O port E reset */
    using RCC_AHB2RSTR1_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I/O port E. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOERST_B_0x0 = 0;
        /** @brief Reset the I/O port E. */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOERST_B_0x1 = 1;

    /** @brief I/O port F reset */
    using RCC_AHB2RSTR1_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I/O port F (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOFRST_B_0x0 = 0;
        /** @brief Reset I/O port F */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOFRST_B_0x1 = 1;

    /** @brief I/O port G reset */
    using RCC_AHB2RSTR1_GPIOGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I/O port G. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOGRST_B_0x0 = 0;
        /** @brief Reset the I/O port G. */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOGRST_B_0x1 = 1;

    /** @brief I/O port H reset */
    using RCC_AHB2RSTR1_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I/O port H. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOHRST_B_0x0 = 0;
        /** @brief Reset the I/O port H. */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOHRST_B_0x1 = 1;

    /** @brief I/O port I reset */
    using RCC_AHB2RSTR1_GPIOIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I/O port .I (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOIRST_B_0x0 = 0;
        /** @brief Reset the I/O port .I */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOIRST_B_0x1 = 1;

    /** @brief I/O port J reset */
    using RCC_AHB2RSTR1_GPIOJRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I/O port J. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOJRST_B_0x0 = 0;
        /** @brief Reset the I/O port J. */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOJRST_B_0x1 = 1;

    /** @brief ADC1 and ADC2 reset */
    using RCC_AHB2RSTR1_ADC12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the ADC1 and ADC2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_ADC12RST_B_0x0 = 0;
        /** @brief Reset the ADC1 and ADC2. */
    constexpr std::uint32_t RCC_AHB2RSTR1_ADC12RST_B_0x1 = 1;

    /** @brief DCMI and PSSI reset */
    using RCC_AHB2RSTR1_DCMI_PSSIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the DCMI and PSSI. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_DCMI_PSSIRST_B_0x0 = 0;
        /** @brief Reset the DCMI and PSSI. */
    constexpr std::uint32_t RCC_AHB2RSTR1_DCMI_PSSIRST_B_0x1 = 1;

    /** @brief OTG_FS or OTG_HS reset */
    using RCC_AHB2RSTR1_OTGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the OTG_FS or OTG_HS. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_OTGRST_B_0x0 = 0;
        /** @brief Reset the OTG_FS or OTG_HS. */
    constexpr std::uint32_t RCC_AHB2RSTR1_OTGRST_B_0x1 = 1;

    /** @brief AES hardware accelerator reset */
    using RCC_AHB2RSTR1_AESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the AES. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_AESRST_B_0x0 = 0;
        /** @brief Reset the AES. */
    constexpr std::uint32_t RCC_AHB2RSTR1_AESRST_B_0x1 = 1;

    /** @brief HASH reset */
    using RCC_AHB2RSTR1_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the HASH. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_HASHRST_B_0x0 = 0;
        /** @brief Reset the HASH. */
    constexpr std::uint32_t RCC_AHB2RSTR1_HASHRST_B_0x1 = 1;

    /** @brief RNG reset */
    using RCC_AHB2RSTR1_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the RNG. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_RNGRST_B_0x0 = 0;
        /** @brief Reset the RNG. */
    constexpr std::uint32_t RCC_AHB2RSTR1_RNGRST_B_0x1 = 1;

    /** @brief PKA reset */
    using RCC_AHB2RSTR1_PKARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the PKA. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_PKARST_B_0x0 = 0;
        /** @brief Reset the PKA. */
    constexpr std::uint32_t RCC_AHB2RSTR1_PKARST_B_0x1 = 1;

    /** @brief SAES hardware accelerator reset */
    using RCC_AHB2RSTR1_SAESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the SAES. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_SAESRST_B_0x0 = 0;
        /** @brief Reset the SAES. */
    constexpr std::uint32_t RCC_AHB2RSTR1_SAESRST_B_0x1 = 1;

    /** @brief OCTOSPIM reset */
    using RCC_AHB2RSTR1_OCTOSPIMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the OCTOSPIM. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_OCTOSPIMRST_B_0x0 = 0;
        /** @brief Reset the OCTOSPIM. */
    constexpr std::uint32_t RCC_AHB2RSTR1_OCTOSPIMRST_B_0x1 = 1;

    /** @brief OTFDEC1 reset */
    using RCC_AHB2RSTR1_OTFDEC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the OTFDEC1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_OTFDEC1RST_B_0x0 = 0;
        /** @brief Reset the OTFDEC1. */
    constexpr std::uint32_t RCC_AHB2RSTR1_OTFDEC1RST_B_0x1 = 1;

    /** @brief OTFDEC2 reset */
    using RCC_AHB2RSTR1_OTFDEC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the OTFDEC2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_OTFDEC2RST_B_0x0 = 0;
        /** @brief Reset the OTFDEC2. */
    constexpr std::uint32_t RCC_AHB2RSTR1_OTFDEC2RST_B_0x1 = 1;

    /** @brief SDMMC1 reset */
    using RCC_AHB2RSTR1_SDMMC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the SDMMC1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_SDMMC1RST_B_0x0 = 0;
        /** @brief Reset the SDMMC1. */
    constexpr std::uint32_t RCC_AHB2RSTR1_SDMMC1RST_B_0x1 = 1;

    /** @brief SDMMC2 reset */
    using RCC_AHB2RSTR1_SDMMC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the SDMMC2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_SDMMC2RST_B_0x0 = 0;
        /** @brief Reset the SDMMC2. */
    constexpr std::uint32_t RCC_AHB2RSTR1_SDMMC2RST_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral reset register 2 */
    using RCC_AHB2RSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flexible memory controller reset */
    using RCC_AHB2RSTR2_FSMCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the FSMC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR2_FSMCRST_B_0x0 = 0;
        /** @brief Reset the FSMC */
    constexpr std::uint32_t RCC_AHB2RSTR2_FSMCRST_B_0x1 = 1;

    /** @brief OCTOSPI1 reset */
    using RCC_AHB2RSTR2_OCTOSPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the OCTOSPI1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR2_OCTOSPI1RST_B_0x0 = 0;
        /** @brief Reset the OCTOSPI1. */
    constexpr std::uint32_t RCC_AHB2RSTR2_OCTOSPI1RST_B_0x1 = 1;

    /** @brief OCTOSPI2 reset */
    using RCC_AHB2RSTR2_OCTOSPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the OCTOSPI2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR2_OCTOSPI2RST_B_0x0 = 0;
        /** @brief Reset the OCTOSPI2. */
    constexpr std::uint32_t RCC_AHB2RSTR2_OCTOSPI2RST_B_0x1 = 1;

    /** @brief HSPI1 reset */
    using RCC_AHB2RSTR2_HSPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the HSPI1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR2_HSPI1RST_B_0x0 = 0;
        /** @brief Reset the HSPI1. */
    constexpr std::uint32_t RCC_AHB2RSTR2_HSPI1RST_B_0x1 = 1;

    /** @brief RCC AHB3 peripheral reset register */
    using RCC_AHB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPGPIO1 reset */
    using RCC_AHB3RSTR_LPGPIO1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the LPGPIO1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB3RSTR_LPGPIO1RST_B_0x0 = 0;
        /** @brief Reset the LPGPIO1. */
    constexpr std::uint32_t RCC_AHB3RSTR_LPGPIO1RST_B_0x1 = 1;

    /** @brief ADC4 reset */
    using RCC_AHB3RSTR_ADC4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the ADC4 interface. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB3RSTR_ADC4RST_B_0x0 = 0;
        /** @brief Reset the ADC4 interface. */
    constexpr std::uint32_t RCC_AHB3RSTR_ADC4RST_B_0x1 = 1;

    /** @brief DAC1 reset */
    using RCC_AHB3RSTR_DAC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the DAC1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB3RSTR_DAC1RST_B_0x0 = 0;
        /** @brief Reset the DAC1. */
    constexpr std::uint32_t RCC_AHB3RSTR_DAC1RST_B_0x1 = 1;

    /** @brief LPDMA1 reset */
    using RCC_AHB3RSTR_LPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the LPDMA1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB3RSTR_LPDMA1RST_B_0x0 = 0;
        /** @brief Reset the LPDMA1. */
    constexpr std::uint32_t RCC_AHB3RSTR_LPDMA1RST_B_0x1 = 1;

    /** @brief ADF1 reset */
    using RCC_AHB3RSTR_ADF1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the ADF1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB3RSTR_ADF1RST_B_0x0 = 0;
        /** @brief Reset the ADF1. */
    constexpr std::uint32_t RCC_AHB3RSTR_ADF1RST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 1 */
    using RCC_APB1RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 reset */
    using RCC_APB1RSTR1_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x0 = 0;
        /** @brief Reset the TIM2. */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 reset */
    using RCC_APB1RSTR1_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM3. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x0 = 0;
        /** @brief Reset the TIM3. */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x1 = 1;

    /** @brief TIM4 reset */
    using RCC_APB1RSTR1_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM4. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x0 = 0;
        /** @brief Reset the TIM4. */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x1 = 1;

    /** @brief TIM5 reset */
    using RCC_APB1RSTR1_TIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM5. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM5RST_B_0x0 = 0;
        /** @brief Reset the TIM5. */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM5RST_B_0x1 = 1;

    /** @brief TIM6 reset */
    using RCC_APB1RSTR1_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM6. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM6RST_B_0x0 = 0;
        /** @brief Reset the TIM6. */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM6RST_B_0x1 = 1;

    /** @brief TIM7 reset */
    using RCC_APB1RSTR1_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM7. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM7RST_B_0x0 = 0;
        /** @brief Reset the TIM7. */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM7RST_B_0x1 = 1;

    /** @brief SPI2 reset */
    using RCC_APB1RSTR1_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the SPI2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x0 = 0;
        /** @brief Reset the SPI2. */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x1 = 1;

    /** @brief USART2 reset */
    using RCC_APB1RSTR1_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the USART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x0 = 0;
        /** @brief Reset the USART2 */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x1 = 1;

    /** @brief USART3 reset */
    using RCC_APB1RSTR1_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the USART3. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x0 = 0;
        /** @brief Reset the USART3. */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x1 = 1;

    /** @brief UART4 reset */
    using RCC_APB1RSTR1_UART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the UART4. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_UART4RST_B_0x0 = 0;
        /** @brief Reset the UART4. */
    constexpr std::uint32_t RCC_APB1RSTR1_UART4RST_B_0x1 = 1;

    /** @brief UART5 reset */
    using RCC_APB1RSTR1_UART5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the UART5. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_UART5RST_B_0x0 = 0;
        /** @brief Reset the UART5. */
    constexpr std::uint32_t RCC_APB1RSTR1_UART5RST_B_0x1 = 1;

    /** @brief I2C1 reset */
    using RCC_APB1RSTR1_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I2C1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x0 = 0;
        /** @brief Reset the I2C1. */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x1 = 1;

    /** @brief I2C2 reset */
    using RCC_APB1RSTR1_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I2C2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x0 = 0;
        /** @brief Reset the I2C2. */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x1 = 1;

    /** @brief CRS reset */
    using RCC_APB1RSTR1_CRSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the CRS. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_CRSRST_B_0x0 = 0;
        /** @brief Reset the CRS. */
    constexpr std::uint32_t RCC_APB1RSTR1_CRSRST_B_0x1 = 1;

    /** @brief USART6 reset */
    using RCC_APB1RSTR1_USART6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the USART6. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART6RST_B_0x0 = 0;
        /** @brief Reset the USART6. */
    constexpr std::uint32_t RCC_APB1RSTR1_USART6RST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 2 */
    using RCC_APB1RSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 reset */
    using RCC_APB1RSTR2_I2C4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I2C4. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C4RST_B_0x0 = 0;
        /** @brief Reset the I2C4. */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C4RST_B_0x1 = 1;

    /** @brief LPTIM2 reset */
    using RCC_APB1RSTR2_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the LPTIM2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_LPTIM2RST_B_0x0 = 0;
        /** @brief Reset the LPTIM2. */
    constexpr std::uint32_t RCC_APB1RSTR2_LPTIM2RST_B_0x1 = 1;

    /** @brief I2C5 reset */
    using RCC_APB1RSTR2_I2C5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I2C5. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C5RST_B_0x0 = 0;
        /** @brief Reset the I2C5. */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C5RST_B_0x1 = 1;

    /** @brief I2C6 reset */
    using RCC_APB1RSTR2_I2C6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I2C6. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C6RST_B_0x0 = 0;
        /** @brief Reset the I2C6. */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C6RST_B_0x1 = 1;

    /** @brief FDCAN1 reset */
    using RCC_APB1RSTR2_FDCAN1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the FDCAN1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_FDCAN1RST_B_0x0 = 0;
        /** @brief Reset the FDCAN1. */
    constexpr std::uint32_t RCC_APB1RSTR2_FDCAN1RST_B_0x1 = 1;

    /** @brief UCPD1 reset */
    using RCC_APB1RSTR2_UCPD1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the UCPD1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_UCPD1RST_B_0x0 = 0;
        /** @brief Reset the UCPD1. */
    constexpr std::uint32_t RCC_APB1RSTR2_UCPD1RST_B_0x1 = 1;

    /** @brief RCC APB2 peripheral reset register */
    using RCC_APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 reset */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief Reset the TIM1. */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief SPI1 reset */
    using RCC_APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the SPI1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief Reset the SPI1. */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief TIM8 reset */
    using RCC_APB2RSTR_TIM8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM8. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x0 = 0;
        /** @brief Reset the TIM8. */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x1 = 1;

    /** @brief USART1 reset */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the USART1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief Reset the USART1. */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief TIM15 reset */
    using RCC_APB2RSTR_TIM15RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM15. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x0 = 0;
        /** @brief Reset the TIM15. */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x1 = 1;

    /** @brief TIM16 reset */
    using RCC_APB2RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM16. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x0 = 0;
        /** @brief Reset the TIM16. */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x1 = 1;

    /** @brief TIM17 reset */
    using RCC_APB2RSTR_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the TIM17. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x0 = 0;
        /** @brief Reset the TIM17. */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x1 = 1;

    /** @brief SAI1 reset */
    using RCC_APB2RSTR_SAI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the SAI1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x0 = 0;
        /** @brief Reset the SAI1. */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x1 = 1;

    /** @brief SAI2 reset */
    using RCC_APB2RSTR_SAI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the SAI2. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x0 = 0;
        /** @brief Reset the SAI2. */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x1 = 1;

    /** @brief USB reset */
    using RCC_APB2RSTR_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the USB. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_USBRST_B_0x0 = 0;
        /** @brief Reset the USB. */
    constexpr std::uint32_t RCC_APB2RSTR_USBRST_B_0x1 = 1;

    /** @brief GFXTIM reset */
    using RCC_APB2RSTR_GFXTIMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the GFXTIM. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_GFXTIMRST_B_0x0 = 0;
        /** @brief Reset the GFXTIM. */
    constexpr std::uint32_t RCC_APB2RSTR_GFXTIMRST_B_0x1 = 1;

    /** @brief LTDC reset */
    using RCC_APB2RSTR_LTDCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the LTDC. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_LTDCRST_B_0x0 = 0;
        /** @brief Reset the LTDC. */
    constexpr std::uint32_t RCC_APB2RSTR_LTDCRST_B_0x1 = 1;

    /** @brief DSI reset */
    using RCC_APB2RSTR_DSIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the DSI. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_DSIRST_B_0x0 = 0;
        /** @brief Reset the DSI. */
    constexpr std::uint32_t RCC_APB2RSTR_DSIRST_B_0x1 = 1;

    /** @brief RCC APB3 peripheral reset register */
    using RCC_APB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG reset */
    using RCC_APB3RSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the SYSCFG. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_SYSCFGRST_B_0x0 = 0;
        /** @brief Reset the SYSCFG. */
    constexpr std::uint32_t RCC_APB3RSTR_SYSCFGRST_B_0x1 = 1;

    /** @brief SPI3 reset */
    using RCC_APB3RSTR_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the SPI3. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_SPI3RST_B_0x0 = 0;
        /** @brief Reset the SPI3. */
    constexpr std::uint32_t RCC_APB3RSTR_SPI3RST_B_0x1 = 1;

    /** @brief LPUART1 reset */
    using RCC_APB3RSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the LPUART1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_LPUART1RST_B_0x0 = 0;
        /** @brief Reset the LPUART1. */
    constexpr std::uint32_t RCC_APB3RSTR_LPUART1RST_B_0x1 = 1;

    /** @brief I2C3 reset */
    using RCC_APB3RSTR_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I2C3. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_I2C3RST_B_0x0 = 0;
        /** @brief Reset the I2C3. */
    constexpr std::uint32_t RCC_APB3RSTR_I2C3RST_B_0x1 = 1;

    /** @brief LPTIM1 reset */
    using RCC_APB3RSTR_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the LPTIM1. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM1RST_B_0x0 = 0;
        /** @brief Reset the LPTIM1. */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM1RST_B_0x1 = 1;

    /** @brief LPTIM3 reset */
    using RCC_APB3RSTR_LPTIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the LPTIM3. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM3RST_B_0x0 = 0;
        /** @brief Reset the LPTIM3. */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM3RST_B_0x1 = 1;

    /** @brief LPTIM4 reset */
    using RCC_APB3RSTR_LPTIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the LPTIM4. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM4RST_B_0x0 = 0;
        /** @brief Reset the LPTIM4. */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM4RST_B_0x1 = 1;

    /** @brief OPAMP reset */
    using RCC_APB3RSTR_OPAMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the OPAMP. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_OPAMPRST_B_0x0 = 0;
        /** @brief Reset the OPAMP. */
    constexpr std::uint32_t RCC_APB3RSTR_OPAMPRST_B_0x1 = 1;

    /** @brief COMP reset */
    using RCC_APB3RSTR_COMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the COMP. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_COMPRST_B_0x0 = 0;
        /** @brief Reset the COMP. */
    constexpr std::uint32_t RCC_APB3RSTR_COMPRST_B_0x1 = 1;

    /** @brief VREFBUF reset */
    using RCC_APB3RSTR_VREFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the VREFBUF. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_VREFRST_B_0x0 = 0;
        /** @brief Reset the VREFBUF. */
    constexpr std::uint32_t RCC_APB3RSTR_VREFRST_B_0x1 = 1;

    /** @brief RCC AHB1 peripheral clock enable register */
    using RCC_AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable */
    using RCC_AHB1ENR_GPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 clock disabled (value: 0)
     *          - B_0x1: GPDMA1 clock enabled (value: 1)
     */
        /** @brief GPDMA1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x0 = 0;
        /** @brief GPDMA1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x1 = 1;

    /** @brief CORDIC clock enable */
    using RCC_AHB1ENR_CORDICEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CORDIC clock disabled (value: 0)
     *          - B_0x1: CORDIC clock enabled (value: 1)
     */
        /** @brief CORDIC clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_CORDICEN_B_0x0 = 0;
        /** @brief CORDIC clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_CORDICEN_B_0x1 = 1;

    /** @brief FMAC clock enable */
    using RCC_AHB1ENR_FMACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMAC clock disabled (value: 0)
     *          - B_0x1: FMAC clock enabled (value: 1)
     */
        /** @brief FMAC clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_FMACEN_B_0x0 = 0;
        /** @brief FMAC clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_FMACEN_B_0x1 = 1;

    /** @brief MDF1 clock enable */
    using RCC_AHB1ENR_MDF1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF1 clock disabled (value: 0)
     *          - B_0x1: MDF1 clock enabled (value: 1)
     */
        /** @brief MDF1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_MDF1EN_B_0x0 = 0;
        /** @brief MDF1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_MDF1EN_B_0x1 = 1;

    /** @brief FLASH clock enable */
    using RCC_AHB1ENR_FLASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH clock disabled (value: 0)
     *          - B_0x1: FLASH clock enabled (value: 1)
     */
        /** @brief FLASH clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_FLASHEN_B_0x0 = 0;
        /** @brief FLASH clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_FLASHEN_B_0x1 = 1;

    /** @brief CRC clock enable */
    using RCC_AHB1ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC clock disabled (value: 0)
     *          - B_0x1: CRC clock enabled (value: 1)
     */
        /** @brief CRC clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x0 = 0;
        /** @brief CRC clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_CRCEN_B_0x1 = 1;

    /** @brief JPEG clock enable */
    using RCC_AHB1ENR_JPEGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JPEG clock disabled (value: 0)
     *          - B_0x1: JPEG clock enabled (value: 1)
     */
        /** @brief JPEG clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_JPEGEN_B_0x0 = 0;
        /** @brief JPEG clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_JPEGEN_B_0x1 = 1;

    /** @brief Touch sensing controller clock enable */
    using RCC_AHB1ENR_TSCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC clock disabled (value: 0)
     *          - B_0x1: TSC clock enabled (value: 1)
     */
        /** @brief TSC clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_TSCEN_B_0x0 = 0;
        /** @brief TSC clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_TSCEN_B_0x1 = 1;

    /** @brief RAMCFG clock enable */
    using RCC_AHB1ENR_RAMCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG clock disabled (value: 0)
     *          - B_0x1: RAMCFG clock enabled (value: 1)
     */
        /** @brief RAMCFG clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x0 = 0;
        /** @brief RAMCFG clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_RAMCFGEN_B_0x1 = 1;

    /** @brief DMA2D clock enable */
    using RCC_AHB1ENR_DMA2DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D clock disabled (value: 0)
     *          - B_0x1: DMA2D clock enabled (value: 1)
     */
        /** @brief DMA2D clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_DMA2DEN_B_0x0 = 0;
        /** @brief DMA2D clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_DMA2DEN_B_0x1 = 1;

    /** @brief GFXMMU clock enable */
    using RCC_AHB1ENR_GFXMMUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU clock disabled (value: 0)
     *          - B_0x1: GFXMMU clock enabled (value: 1)
     */
        /** @brief GFXMMU clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_GFXMMUEN_B_0x0 = 0;
        /** @brief GFXMMU clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GFXMMUEN_B_0x1 = 1;

    /** @brief GPU2D clock enable */
    using RCC_AHB1ENR_GPU2DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPU2D clock disabled (value: 0)
     *          - B_0x1: GPU2D clock enabled (value: 1)
     */
        /** @brief GPU2D clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPU2DEN_B_0x0 = 0;
        /** @brief GPU2D clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPU2DEN_B_0x1 = 1;

    /** @brief DCACHE2 clock enable */
    using RCC_AHB1ENR_DCACHE2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE2 clock disabled (value: 0)
     *          - B_0x1: DCACHE2 clock enabled (value: 1)
     */
        /** @brief DCACHE2 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_DCACHE2EN_B_0x0 = 0;
        /** @brief DCACHE2 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_DCACHE2EN_B_0x1 = 1;

    /** @brief GTZC1 clock enable */
    using RCC_AHB1ENR_GTZC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 clock disabled (value: 0)
     *          - B_0x1: GTZC1 clock enabled (value: 1)
     */
        /** @brief GTZC1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_GTZC1EN_B_0x0 = 0;
        /** @brief GTZC1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GTZC1EN_B_0x1 = 1;

    /** @brief BKPSRAM clock enable */
    using RCC_AHB1ENR_BKPSRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPSRAM clock disabled (value: 0)
     *          - B_0x1: BKPSRAM clock enabled (value: 1)
     */
        /** @brief BKPSRAM clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_BKPSRAMEN_B_0x0 = 0;
        /** @brief BKPSRAM clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_BKPSRAMEN_B_0x1 = 1;

    /** @brief DCACHE1 clock enable */
    using RCC_AHB1ENR_DCACHE1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE1 clock disabled (value: 0)
     *          - B_0x1: DCACHE1 clock enabled (value: 1)
     */
        /** @brief DCACHE1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_DCACHE1EN_B_0x0 = 0;
        /** @brief DCACHE1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_DCACHE1EN_B_0x1 = 1;

    /** @brief SRAM1 clock enable */
    using RCC_AHB1ENR_SRAM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 clock disabled (value: 0)
     *          - B_0x1: SRAM1 clock enabled (value: 1)
     */
        /** @brief SRAM1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR_SRAM1EN_B_0x0 = 0;
        /** @brief SRAM1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR_SRAM1EN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock enable register 1 */
    using RCC_AHB2ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port A clock enable */
    using RCC_AHB2ENR1_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port A clock disabled (value: 0)
     *          - B_0x1: I/O port A clock enabled (value: 1)
     */
        /** @brief I/O port A clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOAEN_B_0x0 = 0;
        /** @brief I/O port A clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOAEN_B_0x1 = 1;

    /** @brief I/O port B clock enable */
    using RCC_AHB2ENR1_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port B clock disabled (value: 0)
     *          - B_0x1: I/O port B clock enabled (value: 1)
     */
        /** @brief I/O port B clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOBEN_B_0x0 = 0;
        /** @brief I/O port B clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOBEN_B_0x1 = 1;

    /** @brief I/O port C clock enable */
    using RCC_AHB2ENR1_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port C clock disabled (value: 0)
     *          - B_0x1: I/O port C clock enabled (value: 1)
     */
        /** @brief I/O port C clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOCEN_B_0x0 = 0;
        /** @brief I/O port C clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOCEN_B_0x1 = 1;

    /** @brief I/O port D clock enable */
    using RCC_AHB2ENR1_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port D clock disabled (value: 0)
     *          - B_0x1: I/O port D clock enabled (value: 1)
     */
        /** @brief I/O port D clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIODEN_B_0x0 = 0;
        /** @brief I/O port D clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIODEN_B_0x1 = 1;

    /** @brief I/O port E clock enable */
    using RCC_AHB2ENR1_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port E clock disabled (value: 0)
     *          - B_0x1: I/O port E clock enabled (value: 1)
     */
        /** @brief I/O port E clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOEEN_B_0x0 = 0;
        /** @brief I/O port E clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOEEN_B_0x1 = 1;

    /** @brief I/O port F clock enable */
    using RCC_AHB2ENR1_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port F clock disabled (value: 0)
     *          - B_0x1: I/O port F clock enabled (value: 1)
     */
        /** @brief I/O port F clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOFEN_B_0x0 = 0;
        /** @brief I/O port F clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOFEN_B_0x1 = 1;

    /** @brief I/O port G clock enable */
    using RCC_AHB2ENR1_GPIOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port G clock disabled (value: 0)
     *          - B_0x1: I/O port G clock enabled (value: 1)
     */
        /** @brief I/O port G clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOGEN_B_0x0 = 0;
        /** @brief I/O port G clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOGEN_B_0x1 = 1;

    /** @brief I/O port H clock enable */
    using RCC_AHB2ENR1_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port H clock disabled (value: 0)
     *          - B_0x1: I/O port H clock enabled (value: 1)
     */
        /** @brief I/O port H clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOHEN_B_0x0 = 0;
        /** @brief I/O port H clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOHEN_B_0x1 = 1;

    /** @brief I/O port I clock enable */
    using RCC_AHB2ENR1_GPIOIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port I clock disabled (value: 0)
     *          - B_0x1: I/O port I clock enabled (value: 1)
     */
        /** @brief I/O port I clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOIEN_B_0x0 = 0;
        /** @brief I/O port I clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOIEN_B_0x1 = 1;

    /** @brief I/O port J clock enable */
    using RCC_AHB2ENR1_GPIOJEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port J clock disabled (value: 0)
     *          - B_0x1: I/O port J clock enabled (value: 1)
     */
        /** @brief I/O port J clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOJEN_B_0x0 = 0;
        /** @brief I/O port J clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOJEN_B_0x1 = 1;

    /** @brief ADC1 and ADC2 clock enable */
    using RCC_AHB2ENR1_ADC12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and ADC2 clock disabled (value: 0)
     *          - B_0x1: ADC1 and ADC2 clock enabled (value: 1)
     */
        /** @brief ADC1 and ADC2 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_ADC12EN_B_0x0 = 0;
        /** @brief ADC1 and ADC2 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_ADC12EN_B_0x1 = 1;

    /** @brief DCMI and PSSI clock enable */
    using RCC_AHB2ENR1_DCMI_PSSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI and PSSI clock disabled (value: 0)
     *          - B_0x1: DCMI and PSSI clock enabled (value: 1)
     */
        /** @brief DCMI and PSSI clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_DCMI_PSSIEN_B_0x0 = 0;
        /** @brief DCMI and PSSI clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_DCMI_PSSIEN_B_0x1 = 1;

    /** @brief OTG_FS or OTG_HS clock enable */
    using RCC_AHB2ENR1_OTGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG_FS or OTG_HS clock disabled (value: 0)
     *          - B_0x1: OTG_FS or OTG_HS clock enabled (value: 1)
     */
        /** @brief OTG_FS or OTG_HS clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OTGEN_B_0x0 = 0;
        /** @brief OTG_FS or OTG_HS clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OTGEN_B_0x1 = 1;

    /** @brief OTG_HS PHY clock enable */
    using RCC_AHB2ENR1_OTGHSPHYEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG_HS PHY clock disabled (value: 0)
     *          - B_0x1: OTG_HS PHY clock enabled (value: 1)
     */
        /** @brief OTG_HS PHY clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OTGHSPHYEN_B_0x0 = 0;
        /** @brief OTG_HS PHY clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OTGHSPHYEN_B_0x1 = 1;

    /** @brief AES clock enable */
    using RCC_AHB2ENR1_AESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES clock disabled (value: 0)
     *          - B_0x1: AES clock enabled (value: 1)
     */
        /** @brief AES clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_AESEN_B_0x0 = 0;
        /** @brief AES clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_AESEN_B_0x1 = 1;

    /** @brief HASH clock enable */
    using RCC_AHB2ENR1_HASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH clock disabled (value: 0)
     *          - B_0x1: HASH clock enabled (value: 1)
     */
        /** @brief HASH clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_HASHEN_B_0x0 = 0;
        /** @brief HASH clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_HASHEN_B_0x1 = 1;

    /** @brief RNG clock enable */
    using RCC_AHB2ENR1_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG clock disabled (value: 0)
     *          - B_0x1: RNG clock enabled (value: 1)
     */
        /** @brief RNG clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_RNGEN_B_0x0 = 0;
        /** @brief RNG clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_RNGEN_B_0x1 = 1;

    /** @brief PKA clock enable */
    using RCC_AHB2ENR1_PKAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA clock disabled (value: 0)
     *          - B_0x1: PKA clock enabled (value: 1)
     */
        /** @brief PKA clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_PKAEN_B_0x0 = 0;
        /** @brief PKA clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_PKAEN_B_0x1 = 1;

    /** @brief SAES clock enable */
    using RCC_AHB2ENR1_SAESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES clock disabled (value: 0)
     *          - B_0x1: SAES clock enabled (value: 1)
     */
        /** @brief SAES clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SAESEN_B_0x0 = 0;
        /** @brief SAES clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SAESEN_B_0x1 = 1;

    /** @brief OCTOSPIM clock enable */
    using RCC_AHB2ENR1_OCTOSPIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPIM clock disabled (value: 0)
     *          - B_0x1: OCTOSPIM clock enabled (value: 1)
     */
        /** @brief OCTOSPIM clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OCTOSPIMEN_B_0x0 = 0;
        /** @brief OCTOSPIM clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OCTOSPIMEN_B_0x1 = 1;

    /** @brief OTFDEC1 clock enable */
    using RCC_AHB2ENR1_OTFDEC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC1 clock disabled (value: 0)
     *          - B_0x1: OTFDEC1 clock enabled (value: 1)
     */
        /** @brief OTFDEC1 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OTFDEC1EN_B_0x0 = 0;
        /** @brief OTFDEC1 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OTFDEC1EN_B_0x1 = 1;

    /** @brief OTFDEC2 clock enable */
    using RCC_AHB2ENR1_OTFDEC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC2 clock disabled (value: 0)
     *          - B_0x1: OTFDEC2 clock enabled (value: 1)
     */
        /** @brief OTFDEC2 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OTFDEC2EN_B_0x0 = 0;
        /** @brief OTFDEC2 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_OTFDEC2EN_B_0x1 = 1;

    /** @brief SDMMC1 clock enable */
    using RCC_AHB2ENR1_SDMMC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 clock disabled (value: 0)
     *          - B_0x1: SDMMC1 clock enabled (value: 1)
     */
        /** @brief SDMMC1 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SDMMC1EN_B_0x0 = 0;
        /** @brief SDMMC1 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SDMMC1EN_B_0x1 = 1;

    /** @brief SDMMC2 clock enable */
    using RCC_AHB2ENR1_SDMMC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 clock disabled (value: 0)
     *          - B_0x1: SDMMC2 clock enabled (value: 1)
     */
        /** @brief SDMMC2 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SDMMC2EN_B_0x0 = 0;
        /** @brief SDMMC2 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SDMMC2EN_B_0x1 = 1;

    /** @brief SRAM2 clock enable */
    using RCC_AHB2ENR1_SRAM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clock disabled (value: 0)
     *          - B_0x1: SRAM2 clock enabled (value: 1)
     */
        /** @brief SRAM2 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SRAM2EN_B_0x0 = 0;
        /** @brief SRAM2 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SRAM2EN_B_0x1 = 1;

    /** @brief SRAM3 clock enable */
    using RCC_AHB2ENR1_SRAM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 clock disabled (value: 0)
     *          - B_0x1: SRAM3 clock enabled (value: 1)
     */
        /** @brief SRAM3 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SRAM3EN_B_0x0 = 0;
        /** @brief SRAM3 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_SRAM3EN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock enable register 2 */
    using RCC_AHB2ENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FSMC clock enable */
    using RCC_AHB2ENR2_FSMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FSMC clock disabled (value: 0)
     *          - B_0x1: FSMC clock enabled (value: 1)
     */
        /** @brief FSMC clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR2_FSMCEN_B_0x0 = 0;
        /** @brief FSMC clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR2_FSMCEN_B_0x1 = 1;

    /** @brief OCTOSPI1 clock enable */
    using RCC_AHB2ENR2_OCTOSPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI1 clock disabled (value: 0)
     *          - B_0x1: OCTOSPI1 clock enabled (value: 1)
     */
        /** @brief OCTOSPI1 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR2_OCTOSPI1EN_B_0x0 = 0;
        /** @brief OCTOSPI1 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR2_OCTOSPI1EN_B_0x1 = 1;

    /** @brief OCTOSPI2 clock enable */
    using RCC_AHB2ENR2_OCTOSPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI2 clock disabled (value: 0)
     *          - B_0x1: OCTOSPI2 clock enabled (value: 1)
     */
        /** @brief OCTOSPI2 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR2_OCTOSPI2EN_B_0x0 = 0;
        /** @brief OCTOSPI2 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR2_OCTOSPI2EN_B_0x1 = 1;

    /** @brief HSPI1 clock enable */
    using RCC_AHB2ENR2_HSPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSPI1 clock disabled (value: 0)
     *          - B_0x1: HSPI1 clock enabled (value: 1)
     */
        /** @brief HSPI1 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR2_HSPI1EN_B_0x0 = 0;
        /** @brief HSPI1 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR2_HSPI1EN_B_0x1 = 1;

    /** @brief SRAM6 clock enable */
    using RCC_AHB2ENR2_SRAM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM6 clock disabled (value: 0)
     *          - B_0x1: SRAM6 clock enabled (value: 1)
     */
        /** @brief SRAM6 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR2_SRAM6EN_B_0x0 = 0;
        /** @brief SRAM6 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR2_SRAM6EN_B_0x1 = 1;

    /** @brief SRAM5 clock enable */
    using RCC_AHB2ENR2_SRAM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM5 clock disabled (value: 0)
     *          - B_0x1: SRAM5 clock enabled (value: 1)
     */
        /** @brief SRAM5 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR2_SRAM5EN_B_0x0 = 0;
        /** @brief SRAM5 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR2_SRAM5EN_B_0x1 = 1;

    /** @brief RCC AHB3 peripheral clock enable register */
    using RCC_AHB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPGPIO1 enable */
    using RCC_AHB3ENR_LPGPIO1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPGPIO1 clock disabled (value: 0)
     *          - B_0x1: LPGPIO1 clock enabled (value: 1)
     */
        /** @brief LPGPIO1 clock disabled */
    constexpr std::uint32_t RCC_AHB3ENR_LPGPIO1EN_B_0x0 = 0;
        /** @brief LPGPIO1 clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_LPGPIO1EN_B_0x1 = 1;

    /** @brief PWR clock enable */
    using RCC_AHB3ENR_PWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR clock disabled (value: 0)
     *          - B_0x1: PWR clock enabled (value: 1)
     */
        /** @brief PWR clock disabled */
    constexpr std::uint32_t RCC_AHB3ENR_PWREN_B_0x0 = 0;
        /** @brief PWR clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_PWREN_B_0x1 = 1;

    /** @brief ADC4 clock enable */
    using RCC_AHB3ENR_ADC4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC4 clock disabled (value: 0)
     *          - B_0x1: ADC4 clock enabled (value: 1)
     */
        /** @brief ADC4 clock disabled */
    constexpr std::uint32_t RCC_AHB3ENR_ADC4EN_B_0x0 = 0;
        /** @brief ADC4 clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_ADC4EN_B_0x1 = 1;

    /** @brief DAC1 clock enable */
    using RCC_AHB3ENR_DAC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 clock disabled (value: 0)
     *          - B_0x1: DAC1 clock enabled (value: 1)
     */
        /** @brief DAC1 clock disabled */
    constexpr std::uint32_t RCC_AHB3ENR_DAC1EN_B_0x0 = 0;
        /** @brief DAC1 clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_DAC1EN_B_0x1 = 1;

    /** @brief LPDMA1 clock enable */
    using RCC_AHB3ENR_LPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA1 clock disabled (value: 0)
     *          - B_0x1: LPDMA1 clock enabled (value: 1)
     */
        /** @brief LPDMA1 clock disabled */
    constexpr std::uint32_t RCC_AHB3ENR_LPDMA1EN_B_0x0 = 0;
        /** @brief LPDMA1 clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_LPDMA1EN_B_0x1 = 1;

    /** @brief ADF1 clock enable */
    using RCC_AHB3ENR_ADF1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF1 clock disabled (value: 0)
     *          - B_0x1: ADF1 clock enabled (value: 1)
     */
        /** @brief ADF1 clock disabled */
    constexpr std::uint32_t RCC_AHB3ENR_ADF1EN_B_0x0 = 0;
        /** @brief ADF1 clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_ADF1EN_B_0x1 = 1;

    /** @brief GTZC2 clock enable */
    using RCC_AHB3ENR_GTZC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC2 clock disabled (value: 0)
     *          - B_0x1: GTZC2 clock enabled (value: 1)
     */
        /** @brief GTZC2 clock disabled */
    constexpr std::uint32_t RCC_AHB3ENR_GTZC2EN_B_0x0 = 0;
        /** @brief GTZC2 clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_GTZC2EN_B_0x1 = 1;

    /** @brief SRAM4 clock enable */
    using RCC_AHB3ENR_SRAM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 clock disabled (value: 0)
     *          - B_0x1: SRAM4 clock enabled (value: 1)
     */
        /** @brief SRAM4 clock disabled */
    constexpr std::uint32_t RCC_AHB3ENR_SRAM4EN_B_0x0 = 0;
        /** @brief SRAM4 clock enabled */
    constexpr std::uint32_t RCC_AHB3ENR_SRAM4EN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable register 1 */
    using RCC_APB1ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 clock enable */
    using RCC_APB1ENR1_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 clock disabled (value: 0)
     *          - B_0x1: TIM2 clock enabled (value: 1)
     */
        /** @brief TIM2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 clock enable */
    using RCC_APB1ENR1_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 clock disabled (value: 0)
     *          - B_0x1: TIM3 clock enabled (value: 1)
     */
        /** @brief TIM3 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x1 = 1;

    /** @brief TIM4 clock enable */
    using RCC_APB1ENR1_TIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 clock disabled (value: 0)
     *          - B_0x1: TIM4 clock enabled (value: 1)
     */
        /** @brief TIM4 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x0 = 0;
        /** @brief TIM4 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x1 = 1;

    /** @brief TIM5 clock enable */
    using RCC_APB1ENR1_TIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 clock disabled (value: 0)
     *          - B_0x1: TIM5 clock enabled (value: 1)
     */
        /** @brief TIM5 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM5EN_B_0x0 = 0;
        /** @brief TIM5 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM5EN_B_0x1 = 1;

    /** @brief TIM6 clock enable */
    using RCC_APB1ENR1_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 clock disabled (value: 0)
     *          - B_0x1: TIM6 clock enabled (value: 1)
     */
        /** @brief TIM6 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM6EN_B_0x0 = 0;
        /** @brief TIM6 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 clock enable */
    using RCC_APB1ENR1_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 clock disabled (value: 0)
     *          - B_0x1: TIM7 clock enabled (value: 1)
     */
        /** @brief TIM7 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM7EN_B_0x0 = 0;
        /** @brief TIM7 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM7EN_B_0x1 = 1;

    /** @brief WWDG clock enable */
    using RCC_APB1ENR1_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG clock disabled (value: 0)
     *          - B_0x1: WWDG clock enabled (value: 1)
     */
        /** @brief WWDG clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x0 = 0;
        /** @brief WWDG clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_WWDGEN_B_0x1 = 1;

    /** @brief SPI2 clock enable */
    using RCC_APB1ENR1_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 clock disabled (value: 0)
     *          - B_0x1: SPI2 clock enabled (value: 1)
     */
        /** @brief SPI2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI2EN_B_0x0 = 0;
        /** @brief SPI2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI2EN_B_0x1 = 1;

    /** @brief USART2 clock enable */
    using RCC_APB1ENR1_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 clock disabled (value: 0)
     *          - B_0x1: USART2 clock enabled (value: 1)
     */
        /** @brief USART2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x0 = 0;
        /** @brief USART2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART2EN_B_0x1 = 1;

    /** @brief USART3 clock enable */
    using RCC_APB1ENR1_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 clock disabled (value: 0)
     *          - B_0x1: USART3 clock enabled (value: 1)
     */
        /** @brief USART3 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART3EN_B_0x0 = 0;
        /** @brief USART3 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART3EN_B_0x1 = 1;

    /** @brief UART4 clock enable */
    using RCC_APB1ENR1_UART4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 clock disabled (value: 0)
     *          - B_0x1: UART4 clock enabled (value: 1)
     */
        /** @brief UART4 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART4EN_B_0x0 = 0;
        /** @brief UART4 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART4EN_B_0x1 = 1;

    /** @brief UART5 clock enable */
    using RCC_APB1ENR1_UART5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 clock disabled (value: 0)
     *          - B_0x1: UART5 clock enabled (value: 1)
     */
        /** @brief UART5 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART5EN_B_0x0 = 0;
        /** @brief UART5 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_UART5EN_B_0x1 = 1;

    /** @brief I2C1 clock enable */
    using RCC_APB1ENR1_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 clock disabled (value: 0)
     *          - B_0x1: I2C1 clock enabled (value: 1)
     */
        /** @brief I2C1 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1EN_B_0x0 = 0;
        /** @brief I2C1 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 clock enable */
    using RCC_APB1ENR1_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 clock disabled (value: 0)
     *          - B_0x1: I2C2 clock enabled (value: 1)
     */
        /** @brief I2C2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C2EN_B_0x0 = 0;
        /** @brief I2C2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I2C2EN_B_0x1 = 1;

    /** @brief CRS clock enable */
    using RCC_APB1ENR1_CRSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS clock disabled (value: 0)
     *          - B_0x1: CRS clock enabled (value: 1)
     */
        /** @brief CRS clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_CRSEN_B_0x0 = 0;
        /** @brief CRS clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_CRSEN_B_0x1 = 1;

    /** @brief USART6 clock enable */
    using RCC_APB1ENR1_USART6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 clock disabled (value: 0)
     *          - B_0x1: USART6 clock enabled (value: 1)
     */
        /** @brief USART6 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART6EN_B_0x0 = 0;
        /** @brief USART6 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_USART6EN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable register 2 */
    using RCC_APB1ENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 clock enable */
    using RCC_APB1ENR2_I2C4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 clock disabled (value: 0)
     *          - B_0x1: I2C4 clock enabled (value: 1)
     */
        /** @brief I2C4 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C4EN_B_0x0 = 0;
        /** @brief I2C4 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C4EN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable */
    using RCC_APB1ENR2_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 clock disabled (value: 0)
     *          - B_0x1: LPTIM2 clock enabled (value: 1)
     */
        /** @brief LPTIM2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR2_LPTIM2EN_B_0x0 = 0;
        /** @brief LPTIM2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_LPTIM2EN_B_0x1 = 1;

    /** @brief I2C5 clock enable */
    using RCC_APB1ENR2_I2C5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C5 clock disabled (value: 0)
     *          - B_0x1: I2C5 clock enabled (value: 1)
     */
        /** @brief I2C5 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C5EN_B_0x0 = 0;
        /** @brief I2C5 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C5EN_B_0x1 = 1;

    /** @brief I2C6 clock enable */
    using RCC_APB1ENR2_I2C6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C6 clock disabled (value: 0)
     *          - B_0x1: I2C6 clock enabled (value: 1)
     */
        /** @brief I2C6 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C6EN_B_0x0 = 0;
        /** @brief I2C6 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_I2C6EN_B_0x1 = 1;

    /** @brief FDCAN1 clock enable */
    using RCC_APB1ENR2_FDCAN1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 clock disabled (value: 0)
     *          - B_0x1: FDCAN1 clock enabled (value: 1)
     */
        /** @brief FDCAN1 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR2_FDCAN1EN_B_0x0 = 0;
        /** @brief FDCAN1 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_FDCAN1EN_B_0x1 = 1;

    /** @brief UCPD1 clock enable */
    using RCC_APB1ENR2_UCPD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD1 clock disabled (value: 0)
     *          - B_0x1: UCPD1 clock enabled (value: 1)
     */
        /** @brief UCPD1 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR2_UCPD1EN_B_0x0 = 0;
        /** @brief UCPD1 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_UCPD1EN_B_0x1 = 1;

    /** @brief RCC APB2 peripheral clock enable register */
    using RCC_APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 clock enable */
    using RCC_APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 clock disabled (value: 0)
     *          - B_0x1: TIM1 clock enabled (value: 1)
     */
        /** @brief TIM1 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief SPI1 clock enable */
    using RCC_APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 clock disabled (value: 0)
     *          - B_0x1: SPI1 clock enabled (value: 1)
     */
        /** @brief SPI1 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI1 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief TIM8 clock enable */
    using RCC_APB2ENR_TIM8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 clock disabled (value: 0)
     *          - B_0x1: TIM8 clock enabled (value: 1)
     */
        /** @brief TIM8 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x0 = 0;
        /** @brief TIM8 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x1 = 1;

    /** @brief USART1clock enable */
    using RCC_APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 clock disabled (value: 0)
     *          - B_0x1: USART1 clock enabled (value: 1)
     */
        /** @brief USART1 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief TIM15 clock enable */
    using RCC_APB2ENR_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 clock disabled (value: 0)
     *          - B_0x1: TIM15 clock enabled (value: 1)
     */
        /** @brief TIM15 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x0 = 0;
        /** @brief TIM15 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x1 = 1;

    /** @brief TIM16 clock enable */
    using RCC_APB2ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 clock disabled (value: 0)
     *          - B_0x1: TIM16 clock enabled (value: 1)
     */
        /** @brief TIM16 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x0 = 0;
        /** @brief TIM16 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x1 = 1;

    /** @brief TIM17 clock enable */
    using RCC_APB2ENR_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 clock disabled (value: 0)
     *          - B_0x1: TIM17 clock enabled (value: 1)
     */
        /** @brief TIM17 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x0 = 0;
        /** @brief TIM17 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x1 = 1;

    /** @brief SAI1 clock enable */
    using RCC_APB2ENR_SAI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 clock disabled (value: 0)
     *          - B_0x1: SAI1 clock enabled (value: 1)
     */
        /** @brief SAI1 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x0 = 0;
        /** @brief SAI1 clock enabled */
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
     *          - B_0x0: USB clock disabled (value: 0)
     *          - B_0x1: USB clock enabled (value: 1)
     */
        /** @brief USB clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_USBEN_B_0x0 = 0;
        /** @brief USB clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_USBEN_B_0x1 = 1;

    /** @brief GFXTIM clock enable */
    using RCC_APB2ENR_GFXTIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXTIM clock disabled (value: 0)
     *          - B_0x1: GFXTIM clock enabled (value: 1)
     */
        /** @brief GFXTIM clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_GFXTIMEN_B_0x0 = 0;
        /** @brief GFXTIM clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_GFXTIMEN_B_0x1 = 1;

    /** @brief LTDC clock enable */
    using RCC_APB2ENR_LTDCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC clock disabled (value: 0)
     *          - B_0x1: LTDC clock enabled (value: 1)
     */
        /** @brief LTDC clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_LTDCEN_B_0x0 = 0;
        /** @brief LTDC clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_LTDCEN_B_0x1 = 1;

    /** @brief DSI clock enable */
    using RCC_APB2ENR_DSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI clock disabled (value: 0)
     *          - B_0x1: DSI clock enabled (value: 1)
     */
        /** @brief DSI clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_DSIEN_B_0x0 = 0;
        /** @brief DSI clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_DSIEN_B_0x1 = 1;

    /** @brief RCC APB3 peripheral clock enable register */
    using RCC_APB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG clock enable */
    using RCC_APB3ENR_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG clock disabled (value: 0)
     *          - B_0x1: SYSCFG clock enabled (value: 1)
     */
        /** @brief SYSCFG clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_SYSCFGEN_B_0x0 = 0;
        /** @brief SYSCFG clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_SYSCFGEN_B_0x1 = 1;

    /** @brief SPI3 clock enable */
    using RCC_APB3ENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 clock disabled (value: 0)
     *          - B_0x1: SPI3 clock enabled (value: 1)
     */
        /** @brief SPI3 clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_SPI3EN_B_0x1 = 1;

    /** @brief LPUART1 clock enable */
    using RCC_APB3ENR_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 clock disabled (value: 0)
     *          - B_0x1: LPUART1 clock enabled (value: 1)
     */
        /** @brief LPUART1 clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_LPUART1EN_B_0x0 = 0;
        /** @brief LPUART1 clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPUART1EN_B_0x1 = 1;

    /** @brief I2C3 clock enable */
    using RCC_APB3ENR_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 clock disabled (value: 0)
     *          - B_0x1: I2C3 clock enabled (value: 1)
     */
        /** @brief I2C3 clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_I2C3EN_B_0x0 = 0;
        /** @brief I2C3 clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_I2C3EN_B_0x1 = 1;

    /** @brief LPTIM1 clock enable */
    using RCC_APB3ENR_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 clock disabled (value: 0)
     *          - B_0x1: LPTIM1 clock enabled (value: 1)
     */
        /** @brief LPTIM1 clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM1EN_B_0x0 = 0;
        /** @brief LPTIM1 clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM1EN_B_0x1 = 1;

    /** @brief LPTIM3 clock enable */
    using RCC_APB3ENR_LPTIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 clock disabled (value: 0)
     *          - B_0x1: LPTIM3 clock enabled (value: 1)
     */
        /** @brief LPTIM3 clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM3EN_B_0x0 = 0;
        /** @brief LPTIM3 clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM3EN_B_0x1 = 1;

    /** @brief LPTIM4 clock enable */
    using RCC_APB3ENR_LPTIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 clock disabled (value: 0)
     *          - B_0x1: LPTIM4 clock enabled (value: 1)
     */
        /** @brief LPTIM4 clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM4EN_B_0x0 = 0;
        /** @brief LPTIM4 clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM4EN_B_0x1 = 1;

    /** @brief OPAMP clock enable */
    using RCC_APB3ENR_OPAMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP clock disabled (value: 0)
     *          - B_0x1: OPAMP clock enabled (value: 1)
     */
        /** @brief OPAMP clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_OPAMPEN_B_0x0 = 0;
        /** @brief OPAMP clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_OPAMPEN_B_0x1 = 1;

    /** @brief COMP clock enable */
    using RCC_APB3ENR_COMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP clock disabled (value: 0)
     *          - B_0x1: COMP clock enabled (value: 1)
     */
        /** @brief COMP clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_COMPEN_B_0x0 = 0;
        /** @brief COMP clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_COMPEN_B_0x1 = 1;

    /** @brief VREFBUF clock enable */
    using RCC_APB3ENR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF clock disabled (value: 0)
     *          - B_0x1: VREFBUF clock enabled (value: 1)
     */
        /** @brief VREFBUF clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_VREFEN_B_0x0 = 0;
        /** @brief VREFBUF clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_VREFEN_B_0x1 = 1;

    /** @brief RTC and TAMP APB clock enable */
    using RCC_APB3ENR_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC and TAMP APB clock disabled (value: 0)
     *          - B_0x1: RTC and TAMP APB clock enabled (value: 1)
     */
        /** @brief RTC and TAMP APB clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_RTCAPBEN_B_0x0 = 0;
        /** @brief RTC and TAMP APB clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_RTCAPBEN_B_0x1 = 1;

    /** @brief RCC AHB1 peripheral clock enable in Sleep and Stop modes register */
    using RCC_AHB1SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clocks enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_GPDMA1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GPDMA1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GPDMA1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GPDMA1SMEN_B_0x0 = 0;
        /** @brief GPDMA1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GPDMA1SMEN_B_0x1 = 1;

    /** @brief CORDIC clocks enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_CORDICSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CORDIC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: CORDIC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief CORDIC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CORDICSMEN_B_0x0 = 0;
        /** @brief CORDIC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CORDICSMEN_B_0x1 = 1;

    /** @brief FMAC clocks enable during Sleep and Stop modes. */
    using RCC_AHB1SMENR_FMACSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMAC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FMAC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FMAC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FMACSMEN_B_0x0 = 0;
        /** @brief FMAC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FMACSMEN_B_0x1 = 1;

    /** @brief MDF1 clocks enable during Sleep and Stop modes. */
    using RCC_AHB1SMENR_MDF1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: MDF1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief MDF1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_MDF1SMEN_B_0x0 = 0;
        /** @brief MDF1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_MDF1SMEN_B_0x1 = 1;

    /** @brief FLASH clocks enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_FLASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FLASH clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FLASH clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FLASHSMEN_B_0x0 = 0;
        /** @brief FLASH clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_FLASHSMEN_B_0x1 = 1;

    /** @brief CRC clocks enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_CRCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: CRC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief CRC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CRCSMEN_B_0x0 = 0;
        /** @brief CRC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_CRCSMEN_B_0x1 = 1;

    /** @brief JPEG clocks enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_JPEGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JPEG clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: JPEG clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief JPEG clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_JPEGSMEN_B_0x0 = 0;
        /** @brief JPEG clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_JPEGSMEN_B_0x1 = 1;

    /** @brief TSC clocks enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_TSCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TSC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TSC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_TSCSMEN_B_0x0 = 0;
        /** @brief TSC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_TSCSMEN_B_0x1 = 1;

    /** @brief RAMCFG clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_RAMCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RAMCFG clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RAMCFG clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_RAMCFGSMEN_B_0x0 = 0;
        /** @brief RAMCFG clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_RAMCFGSMEN_B_0x1 = 1;

    /** @brief DMA2D clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_DMA2DSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DMA2D clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DMA2D clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DMA2DSMEN_B_0x0 = 0;
        /** @brief DMA2D clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DMA2DSMEN_B_0x1 = 1;

    /** @brief GFXMMU clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_GFXMMUSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GFXMMU clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GFXMMU clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GFXMMUSMEN_B_0x0 = 0;
        /** @brief GFXMMU clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GFXMMUSMEN_B_0x1 = 1;

    /** @brief GPU2D clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_GPU2DSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPU2D clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GPU2D clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GPU2D clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GPU2DSMEN_B_0x0 = 0;
        /** @brief GPU2D clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GPU2DSMEN_B_0x1 = 1;

    /** @brief DCACHE2 clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_DCACHE2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DCACHE2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DCACHE2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DCACHE2SMEN_B_0x0 = 0;
        /** @brief DCACHE2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DCACHE2SMEN_B_0x1 = 1;

    /** @brief GTZC1 clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_GTZC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GTZC1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GTZC1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GTZC1SMEN_B_0x0 = 0;
        /** @brief GTZC1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_GTZC1SMEN_B_0x1 = 1;

    /** @brief BKPSRAM clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_BKPSRAMSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPSRAM clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: BKPSRAM clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief BKPSRAM clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_BKPSRAMSMEN_B_0x0 = 0;
        /** @brief BKPSRAM clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_BKPSRAMSMEN_B_0x1 = 1;

    /** @brief ICACHE clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_ICACHESMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ICACHE clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief ICACHE clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_ICACHESMEN_B_0x0 = 0;
        /** @brief ICACHE clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_ICACHESMEN_B_0x1 = 1;

    /** @brief DCACHE1 clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_DCACHE1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DCACHE1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DCACHE1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DCACHE1SMEN_B_0x0 = 0;
        /** @brief DCACHE1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_DCACHE1SMEN_B_0x1 = 1;

    /** @brief SRAM1 clock enable during Sleep and Stop modes */
    using RCC_AHB1SMENR_SRAM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_SRAM1SMEN_B_0x0 = 0;
        /** @brief SRAM1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB1SMENR_SRAM1SMEN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock enable in Sleep and	Stop modes register 1 */
    using RCC_AHB2SMENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port A clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIOASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port A clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port A clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port A clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOASMEN_B_0x0 = 0;
        /** @brief I/O port A clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOASMEN_B_0x1 = 1;

    /** @brief I/O port B clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIOBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port B clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port B clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port B clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOBSMEN_B_0x0 = 0;
        /** @brief I/O port B clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOBSMEN_B_0x1 = 1;

    /** @brief I/O port C clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIOCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port C clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port C clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port C clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOCSMEN_B_0x0 = 0;
        /** @brief I/O port C clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOCSMEN_B_0x1 = 1;

    /** @brief I/O port D clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIODSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port D clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port D clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port D clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIODSMEN_B_0x0 = 0;
        /** @brief I/O port D clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIODSMEN_B_0x1 = 1;

    /** @brief I/O port E clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIOESMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port E clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port E clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port E clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOESMEN_B_0x0 = 0;
        /** @brief I/O port E clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOESMEN_B_0x1 = 1;

    /** @brief I/O port F clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIOFSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port F clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port F clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port F clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOFSMEN_B_0x0 = 0;
        /** @brief I/O port F clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOFSMEN_B_0x1 = 1;

    /** @brief I/O port G clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIOGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port G clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port G clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port G clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOGSMEN_B_0x0 = 0;
        /** @brief I/O port G clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOGSMEN_B_0x1 = 1;

    /** @brief I/O port H clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIOHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port H clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port H clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port H clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOHSMEN_B_0x0 = 0;
        /** @brief I/O port H clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOHSMEN_B_0x1 = 1;

    /** @brief I/O port I clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIOISMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port I clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port I clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port I clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOISMEN_B_0x0 = 0;
        /** @brief I/O port I clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOISMEN_B_0x1 = 1;

    /** @brief I/O port J clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_GPIOJSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port J clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I/O port J clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I/O port J clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOJSMEN_B_0x0 = 0;
        /** @brief I/O port J clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_GPIOJSMEN_B_0x1 = 1;

    /** @brief ADC1 and ADC2 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_ADC12SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC1 and ADC2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ADC1 and ADC2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief ADC1 and ADC2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_ADC12SMEN_B_0x0 = 0;
        /** @brief ADC1 and ADC2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_ADC12SMEN_B_0x1 = 1;

    /** @brief DCMI and PSSI clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_DCMI_PSSISMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI and PSSI clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DCMI and PSSI clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DCMI and PSSI clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_DCMI_PSSISMEN_B_0x0 = 0;
        /** @brief DCMI and PSSI clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_DCMI_PSSISMEN_B_0x1 = 1;

    /** @brief OTG_FS and OTG_HS clocks enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_OTGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG_FS and OTG_HS clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OTG_FS and OTG_HS clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OTG_FS and OTG_HS clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OTGSMEN_B_0x0 = 0;
        /** @brief OTG_FS and OTG_HS clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OTGSMEN_B_0x1 = 1;

    /** @brief OTG_HS PHY clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_OTGHSPHYSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG_HS PHY clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OTG_HS PHY clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OTG_HS PHY clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OTGHSPHYSMEN_B_0x0 = 0;
        /** @brief OTG_HS PHY clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OTGHSPHYSMEN_B_0x1 = 1;

    /** @brief AES clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_AESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: AES clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief AES clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_AESSMEN_B_0x0 = 0;
        /** @brief AES clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_AESSMEN_B_0x1 = 1;

    /** @brief HASH clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_HASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: HASH clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief HASH clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_HASHSMEN_B_0x0 = 0;
        /** @brief HASH clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_HASHSMEN_B_0x1 = 1;

    /** @brief RNG clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_RNGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RNG clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RNG clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_RNGSMEN_B_0x0 = 0;
        /** @brief RNG clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_RNGSMEN_B_0x1 = 1;

    /** @brief PKA clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_PKASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: PKA clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief PKA clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_PKASMEN_B_0x0 = 0;
        /** @brief PKA clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_PKASMEN_B_0x1 = 1;

    /** @brief SAES accelerator clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_SAESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAES clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SAES clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SAESSMEN_B_0x0 = 0;
        /** @brief SAES clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SAESSMEN_B_0x1 = 1;

    /** @brief OCTOSPIM clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_OCTOSPIMSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPIM clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OCTOSPIM clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OCTOSPIM clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OCTOSPIMSMEN_B_0x0 = 0;
        /** @brief OCTOSPIM clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OCTOSPIMSMEN_B_0x1 = 1;

    /** @brief OTFDEC1 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_OTFDEC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OTFDEC1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OTFDEC1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OTFDEC1SMEN_B_0x0 = 0;
        /** @brief OTFDEC1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OTFDEC1SMEN_B_0x1 = 1;

    /** @brief OTFDEC2 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_OTFDEC2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTFDEC2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OTFDEC2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OTFDEC2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OTFDEC2SMEN_B_0x0 = 0;
        /** @brief OTFDEC2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_OTFDEC2SMEN_B_0x1 = 1;

    /** @brief SDMMC1 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_SDMMC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SDMMC1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SDMMC1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SDMMC1SMEN_B_0x0 = 0;
        /** @brief SDMMC1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SDMMC1SMEN_B_0x1 = 1;

    /** @brief SDMMC2 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_SDMMC2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SDMMC2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SDMMC2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SDMMC2SMEN_B_0x0 = 0;
        /** @brief SDMMC2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SDMMC2SMEN_B_0x1 = 1;

    /** @brief SRAM2 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_SRAM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SRAM2SMEN_B_0x0 = 0;
        /** @brief SRAM2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SRAM2SMEN_B_0x1 = 1;

    /** @brief SRAM3 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR1_SRAM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM3 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM3 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SRAM3SMEN_B_0x0 = 0;
        /** @brief SRAM3 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR1_SRAM3SMEN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock enable in Sleep and	Stop modes register 2 */
    using RCC_AHB2SMENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FSMC clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR2_FSMCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FSMC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FSMC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FSMC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_FSMCSMEN_B_0x0 = 0;
        /** @brief FSMC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_FSMCSMEN_B_0x1 = 1;

    /** @brief OCTOSPI1 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR2_OCTOSPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OCTOSPI1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OCTOSPI1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_OCTOSPI1SMEN_B_0x0 = 0;
        /** @brief OCTOSPI1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_OCTOSPI1SMEN_B_0x1 = 1;

    /** @brief OCTOSPI2 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR2_OCTOSPI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OCTOSPI2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OCTOSPI2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_OCTOSPI2SMEN_B_0x0 = 0;
        /** @brief OCTOSPI2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_OCTOSPI2SMEN_B_0x1 = 1;

    /** @brief HSPI1 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR2_HSPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSPI1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: HSP1I clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief HSPI1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_HSPI1SMEN_B_0x0 = 0;
        /** @brief HSP1I clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_HSPI1SMEN_B_0x1 = 1;

    /** @brief SRAM6 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR2_SRAM6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM6 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM6 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM6 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_SRAM6SMEN_B_0x0 = 0;
        /** @brief SRAM6 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_SRAM6SMEN_B_0x1 = 1;

    /** @brief SRAM5 clock enable during Sleep and Stop modes */
    using RCC_AHB2SMENR2_SRAM5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM5 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM5 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM5 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_SRAM5SMEN_B_0x0 = 0;
        /** @brief SRAM5 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB2SMENR2_SRAM5SMEN_B_0x1 = 1;

    /** @brief RCC AHB3 peripheral clock enable in Sleep and Stop modes register */
    using RCC_AHB3SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPGPIO1 enable during Sleep and Stop modes */
    using RCC_AHB3SMENR_LPGPIO1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPGPIO1 clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPGPIO1 clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPGPIO1 clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_LPGPIO1SMEN_B_0x0 = 0;
        /** @brief LPGPIO1 clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_LPGPIO1SMEN_B_0x1 = 1;

    /** @brief PWR clock enable during Sleep and Stop modes */
    using RCC_AHB3SMENR_PWRSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: PWR clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief PWR clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_PWRSMEN_B_0x0 = 0;
        /** @brief PWR clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_PWRSMEN_B_0x1 = 1;

    /** @brief ADC4 clock enable during Sleep and Stop modes */
    using RCC_AHB3SMENR_ADC4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC4 clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ADC4 clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief ADC4 clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_ADC4SMEN_B_0x0 = 0;
        /** @brief ADC4 clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_ADC4SMEN_B_0x1 = 1;

    /** @brief DAC1 clock enable during Sleep and Stop modes */
    using RCC_AHB3SMENR_DAC1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DAC1 clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DAC1 clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_DAC1SMEN_B_0x0 = 0;
        /** @brief DAC1 clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_DAC1SMEN_B_0x1 = 1;

    /** @brief LPDMA1 clock enable during Sleep and Stop modes */
    using RCC_AHB3SMENR_LPDMA1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA1 clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPDMA1 clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPDMA1 clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_LPDMA1SMEN_B_0x0 = 0;
        /** @brief LPDMA1 clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_LPDMA1SMEN_B_0x1 = 1;

    /** @brief ADF1 clock enable during Sleep and Stop modes */
    using RCC_AHB3SMENR_ADF1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF1 clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: ADF1 clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief ADF1 clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_ADF1SMEN_B_0x0 = 0;
        /** @brief ADF1 clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_ADF1SMEN_B_0x1 = 1;

    /** @brief GTZC2 clock enable during Sleep and Stop modes */
    using RCC_AHB3SMENR_GTZC2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC2 clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GTZC2 clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GTZC2 clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_GTZC2SMEN_B_0x0 = 0;
        /** @brief GTZC2 clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_GTZC2SMEN_B_0x1 = 1;

    /** @brief SRAM4 clock enable during Sleep and Stop modes */
    using RCC_AHB3SMENR_SRAM4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SRAM4 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SRAM4 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_SRAM4SMEN_B_0x0 = 0;
        /** @brief SRAM4 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_AHB3SMENR_SRAM4SMEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable in Sleep and Stop modes	register 1 */
    using RCC_APB1SMENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_TIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM2SMEN_B_0x0 = 0;
        /** @brief TIM2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM2SMEN_B_0x1 = 1;

    /** @brief TIM3 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_TIM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM3 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM3 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM3SMEN_B_0x0 = 0;
        /** @brief TIM3 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM3SMEN_B_0x1 = 1;

    /** @brief TIM4 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_TIM4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM4 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM4 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM4SMEN_B_0x0 = 0;
        /** @brief TIM4 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM4SMEN_B_0x1 = 1;

    /** @brief TIM5 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_TIM5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM5 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM5 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM5SMEN_B_0x0 = 0;
        /** @brief TIM5 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM5SMEN_B_0x1 = 1;

    /** @brief TIM6 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_TIM6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM6 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM6 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM6SMEN_B_0x0 = 0;
        /** @brief TIM6 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM6SMEN_B_0x1 = 1;

    /** @brief TIM7 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_TIM7SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM7 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM7 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM7SMEN_B_0x0 = 0;
        /** @brief TIM7 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_TIM7SMEN_B_0x1 = 1;

    /** @brief Window watchdog clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_WWDGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Window watchdog clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: Window watchdog clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief Window watchdog clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_WWDGSMEN_B_0x0 = 0;
        /** @brief Window watchdog clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_WWDGSMEN_B_0x1 = 1;

    /** @brief SPI2 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_SPI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_SPI2SMEN_B_0x0 = 0;
        /** @brief SPI2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_SPI2SMEN_B_0x1 = 1;

    /** @brief USART2 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_USART2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART2SMEN_B_0x0 = 0;
        /** @brief USART2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART2SMEN_B_0x1 = 1;

    /** @brief USART3 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_USART3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART3 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART3 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART3SMEN_B_0x0 = 0;
        /** @brief USART3 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART3SMEN_B_0x1 = 1;

    /** @brief UART4 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_UART4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: UART4 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief UART4 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_UART4SMEN_B_0x0 = 0;
        /** @brief UART4 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_UART4SMEN_B_0x1 = 1;

    /** @brief UART5 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_UART5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: UART5 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief UART5 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_UART5SMEN_B_0x0 = 0;
        /** @brief UART5 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_UART5SMEN_B_0x1 = 1;

    /** @brief I2C1 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_I2C1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C1SMEN_B_0x0 = 0;
        /** @brief I2C1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C1SMEN_B_0x1 = 1;

    /** @brief I2C2 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_I2C2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C2SMEN_B_0x0 = 0;
        /** @brief I2C2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_I2C2SMEN_B_0x1 = 1;

    /** @brief CRS clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_CRSSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: CRS clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief CRS clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_CRSSMEN_B_0x0 = 0;
        /** @brief CRS clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_CRSSMEN_B_0x1 = 1;

    /** @brief USART6 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR1_USART6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART6 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART6 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART6SMEN_B_0x0 = 0;
        /** @brief USART6 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR1_USART6SMEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clocks enable in Sleep and	Stop modes register 2 */
    using RCC_APB1SMENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR2_I2C4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C4 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C4 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C4SMEN_B_0x0 = 0;
        /** @brief I2C4 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C4SMEN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR2_LPTIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPTIM2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPTIM2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_LPTIM2SMEN_B_0x0 = 0;
        /** @brief LPTIM2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_LPTIM2SMEN_B_0x1 = 1;

    /** @brief I2C5 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR2_I2C5SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C5 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C5 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C5 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C5SMEN_B_0x0 = 0;
        /** @brief I2C5 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C5SMEN_B_0x1 = 1;

    /** @brief I2C6 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR2_I2C6SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C6 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C6 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C6 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C6SMEN_B_0x0 = 0;
        /** @brief I2C6 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_I2C6SMEN_B_0x1 = 1;

    /** @brief FDCAN1 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR2_FDCAN1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: FDCAN1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief FDCAN1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_FDCAN1SMEN_B_0x0 = 0;
        /** @brief FDCAN1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_FDCAN1SMEN_B_0x1 = 1;

    /** @brief UCPD1 clock enable during Sleep and Stop modes */
    using RCC_APB1SMENR2_UCPD1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: UCPD1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief UCPD1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_UCPD1SMEN_B_0x0 = 0;
        /** @brief UCPD1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB1SMENR2_UCPD1SMEN_B_0x1 = 1;

    /** @brief RCC APB2 peripheral clocks enable in Sleep and Stop modes register */
    using RCC_APB2SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_TIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM1SMEN_B_0x0 = 0;
        /** @brief TIM1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM1SMEN_B_0x1 = 1;

    /** @brief SPI1 clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_SPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SPI1SMEN_B_0x0 = 0;
        /** @brief SPI1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SPI1SMEN_B_0x1 = 1;

    /** @brief TIM8 clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_TIM8SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM8 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM8 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM8SMEN_B_0x0 = 0;
        /** @brief TIM8 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM8SMEN_B_0x1 = 1;

    /** @brief USART1 clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_USART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USART1clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USART1clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USART1SMEN_B_0x0 = 0;
        /** @brief USART1clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USART1SMEN_B_0x1 = 1;

    /** @brief TIM15 clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_TIM15SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM15 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM15 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM15SMEN_B_0x0 = 0;
        /** @brief TIM15 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM15SMEN_B_0x1 = 1;

    /** @brief TIM16 clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_TIM16SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM16 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM16 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM16SMEN_B_0x0 = 0;
        /** @brief TIM16 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM16SMEN_B_0x1 = 1;

    /** @brief TIM17 clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_TIM17SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: TIM17 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief TIM17 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM17SMEN_B_0x0 = 0;
        /** @brief TIM17 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_TIM17SMEN_B_0x1 = 1;

    /** @brief SAI1 clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_SAI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAI1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SAI1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SAI1SMEN_B_0x0 = 0;
        /** @brief SAI1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SAI1SMEN_B_0x1 = 1;

    /** @brief SAI2 clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_SAI2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SAI2 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SAI2 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SAI2SMEN_B_0x0 = 0;
        /** @brief SAI2 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_SAI2SMEN_B_0x1 = 1;

    /** @brief USB clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_USBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: USB clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief USB clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USBSMEN_B_0x0 = 0;
        /** @brief USB clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_USBSMEN_B_0x1 = 1;

    /** @brief GFXTIM clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_GFXTIMSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXTIM clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: GFXTIM clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief GFXTIM clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_GFXTIMSMEN_B_0x0 = 0;
        /** @brief GFXTIM clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_GFXTIMSMEN_B_0x1 = 1;

    /** @brief LTDC clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_LTDCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LTDC clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LTDC clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_LTDCSMEN_B_0x0 = 0;
        /** @brief LTDC clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_LTDCSMEN_B_0x1 = 1;

    /** @brief DSI clock enable during Sleep and Stop modes */
    using RCC_APB2SMENR_DSISMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: DSI clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief DSI clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_DSISMEN_B_0x0 = 0;
        /** @brief DSI clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB2SMENR_DSISMEN_B_0x1 = 1;

    /** @brief RCC APB3 peripheral clock enable in Sleep and Stop modes register */
    using RCC_APB3SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_SYSCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SYSCFG clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SYSCFG clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_SYSCFGSMEN_B_0x0 = 0;
        /** @brief SYSCFG clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_SYSCFGSMEN_B_0x1 = 1;

    /** @brief SPI3 clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_SPI3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: SPI3 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief SPI3 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_SPI3SMEN_B_0x0 = 0;
        /** @brief SPI3 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_SPI3SMEN_B_0x1 = 1;

    /** @brief LPUART1 clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_LPUART1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPUART1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPUART1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_LPUART1SMEN_B_0x0 = 0;
        /** @brief LPUART1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_LPUART1SMEN_B_0x1 = 1;

    /** @brief I2C3 clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_I2C3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: I2C3 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief I2C3 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_I2C3SMEN_B_0x0 = 0;
        /** @brief I2C3 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_I2C3SMEN_B_0x1 = 1;

    /** @brief LPTIM1 clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_LPTIM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPTIM1 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPTIM1 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_LPTIM1SMEN_B_0x0 = 0;
        /** @brief LPTIM1 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_LPTIM1SMEN_B_0x1 = 1;

    /** @brief LPTIM3 clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_LPTIM3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPTIM3 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPTIM3 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_LPTIM3SMEN_B_0x0 = 0;
        /** @brief LPTIM3 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_LPTIM3SMEN_B_0x1 = 1;

    /** @brief LPTIM4 clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_LPTIM4SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: LPTIM4 clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief LPTIM4 clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_LPTIM4SMEN_B_0x0 = 0;
        /** @brief LPTIM4 clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_LPTIM4SMEN_B_0x1 = 1;

    /** @brief OPAMP clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_OPAMPSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: OPAMP clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief OPAMP clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_OPAMPSMEN_B_0x0 = 0;
        /** @brief OPAMP clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_OPAMPSMEN_B_0x1 = 1;

    /** @brief COMP clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_COMPSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: COMP clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief COMP clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_COMPSMEN_B_0x0 = 0;
        /** @brief COMP clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_COMPSMEN_B_0x1 = 1;

    /** @brief VREFBUF clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_VREFSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF clocks disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: VREFBUF clocks enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief VREFBUF clocks disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_VREFSMEN_B_0x0 = 0;
        /** @brief VREFBUF clocks enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_VREFSMEN_B_0x1 = 1;

    /** @brief RTC and TAMP APB clock enable during Sleep and Stop modes */
    using RCC_APB3SMENR_RTCAPBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC and TAMP APB clock disabled by the clock gating during Sleep and Stop modes (value: 0)
     *          - B_0x1: RTC and TAMP APB clock enabled by the clock gating during Sleep and Stop modes (value: 1)
     */
        /** @brief RTC and TAMP APB clock disabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_RTCAPBSMEN_B_0x0 = 0;
        /** @brief RTC and TAMP APB clock enabled by the clock gating during Sleep and Stop modes */
    constexpr std::uint32_t RCC_APB3SMENR_RTCAPBSMEN_B_0x1 = 1;

    /** @brief RCC SmartRun domain peripheral autonomous mode register */
    using RCC_SRDAMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 autonomous mode enable in Stop 0,1, 2 mode */
    using RCC_SRDAMR_SPI3AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: SPI3 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief SPI3 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_SPI3AMEN_B_0x0 = 0;
        /** @brief SPI3 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_SPI3AMEN_B_0x1 = 1;

    /** @brief LPUART1 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_LPUART1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: LPUART1 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief LPUART1 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPUART1AMEN_B_0x0 = 0;
        /** @brief LPUART1 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPUART1AMEN_B_0x1 = 1;

    /** @brief I2C3 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_I2C3AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: I2C3 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief I2C3 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_I2C3AMEN_B_0x0 = 0;
        /** @brief I2C3 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_I2C3AMEN_B_0x1 = 1;

    /** @brief LPTIM1 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_LPTIM1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: LPTIM1 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief LPTIM1 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM1AMEN_B_0x0 = 0;
        /** @brief LPTIM1 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM1AMEN_B_0x1 = 1;

    /** @brief LPTIM3 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_LPTIM3AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: LPTIM3 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief LPTIM3 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM3AMEN_B_0x0 = 0;
        /** @brief LPTIM3 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM3AMEN_B_0x1 = 1;

    /** @brief LPTIM4 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_LPTIM4AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: LPTIM4 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief LPTIM4 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM4AMEN_B_0x0 = 0;
        /** @brief LPTIM4 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPTIM4AMEN_B_0x1 = 1;

    /** @brief OPAMP autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_OPAMPAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: OPAMP autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief OPAMP autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_OPAMPAMEN_B_0x0 = 0;
        /** @brief OPAMP autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_OPAMPAMEN_B_0x1 = 1;

    /** @brief COMP autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_COMPAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: COMP autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief COMP autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_COMPAMEN_B_0x0 = 0;
        /** @brief COMP autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_COMPAMEN_B_0x1 = 1;

    /** @brief VREFBUF autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_VREFAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: VREFBUF autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief VREFBUF autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_VREFAMEN_B_0x0 = 0;
        /** @brief VREFBUF autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_VREFAMEN_B_0x1 = 1;

    /** @brief RTC and TAMP autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_RTCAPBAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC and TAMP autonomous mode disabled during Stop 0/1/2mode (value: 0)
     *          - B_0x1: RTC and TAMP autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief RTC and TAMP autonomous mode disabled during Stop 0/1/2mode */
    constexpr std::uint32_t RCC_SRDAMR_RTCAPBAMEN_B_0x0 = 0;
        /** @brief RTC and TAMP autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_RTCAPBAMEN_B_0x1 = 1;

    /** @brief ADC4 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_ADC4AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC4 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: ADC4 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief ADC4 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_ADC4AMEN_B_0x0 = 0;
        /** @brief ADC4 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_ADC4AMEN_B_0x1 = 1;

    /** @brief LPGPIO1 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_LPGPIO1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPGPIO1 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: LPGPIO1 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief LPGPIO1 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPGPIO1AMEN_B_0x0 = 0;
        /** @brief LPGPIO1 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPGPIO1AMEN_B_0x1 = 1;

    /** @brief DAC1 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_DAC1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: DAC1 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief DAC1 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_DAC1AMEN_B_0x0 = 0;
        /** @brief DAC1 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_DAC1AMEN_B_0x1 = 1;

    /** @brief LPDMA1 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_LPDMA1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA1 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: LPDMA1 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief LPDMA1 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPDMA1AMEN_B_0x0 = 0;
        /** @brief LPDMA1 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_LPDMA1AMEN_B_0x1 = 1;

    /** @brief ADF1 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_ADF1AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF1 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: ADF1 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief ADF1 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_ADF1AMEN_B_0x0 = 0;
        /** @brief ADF1 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_ADF1AMEN_B_0x1 = 1;

    /** @brief SRAM4 autonomous mode enable in Stop 0/1/2 mode */
    using RCC_SRDAMR_SRAM4AMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 autonomous mode disabled during Stop 0/1/2 mode (value: 0)
     *          - B_0x1: SRAM4 autonomous mode enabled during Stop 0/1/2 mode (value: 1)
     */
        /** @brief SRAM4 autonomous mode disabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_SRAM4AMEN_B_0x0 = 0;
        /** @brief SRAM4 autonomous mode enabled during Stop 0/1/2 mode */
    constexpr std::uint32_t RCC_SRDAMR_SRAM4AMEN_B_0x1 = 1;

    /** @brief RCC peripherals independent clock configuration register 1 */
    using RCC_CCIPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 kernel clock source selection */
    using RCC_CCIPR1_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK2 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief PCLK2 selected */
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
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief PCLK1 selected */
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
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x3 = 3;

    /** @brief UART4 kernel clock source selection */
    using RCC_CCIPR1_UART4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x3 = 3;

    /** @brief UART5 kernel clock source selection */
    using RCC_CCIPR1_UART5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x3 = 3;

    /** @brief I2C1 kernel clock source selection */
    using RCC_CCIPR1_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C1SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C1SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C1SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C1SEL_B_0x3 = 3;

    /** @brief I2C2 kernel clock source selection */
    using RCC_CCIPR1_I2C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C2SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C2SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C2SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C2SEL_B_0x3 = 3;

    /** @brief I2C4 kernel clock source selection */
    using RCC_CCIPR1_I2C4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C4SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C4SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C4SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C4SEL_B_0x3 = 3;

    /** @brief SPI2 kernel clock source selection */
    using RCC_CCIPR1_SPI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI2SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI2SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI2SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI2SEL_B_0x3 = 3;

    /** @brief Low-power timer 2 kernel clock source selection */
    using RCC_CCIPR1_LPTIM2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief PCLK1 selected */
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
     *          - B_0x0: PCLK2 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK2 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI1SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI1SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI1SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI1SEL_B_0x3 = 3;

    /** @brief SysTick clock source selection */
    using RCC_CCIPR1_SYSTICKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HCLK/8 selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: LSE selected (value: 2)
     */
        /** @brief HCLK/8 selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x1 = 1;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR1_SYSTICKSEL_B_0x2 = 2;

    /** @brief FDCAN1 kernel clock source selection */
    using RCC_CCIPR1_FDCAN1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE clock selected (value: 0)
     *          - B_0x1: PLL1Q (pll1_q_ck) selected (value: 1)
     *          - B_0x2: PLL2 P (pll2_p_ck) selected (value: 2)
     */
        /** @brief HSE clock selected */
    constexpr std::uint32_t RCC_CCIPR1_FDCAN1SEL_B_0x0 = 0;
        /** @brief PLL1Q (pll1_q_ck) selected */
    constexpr std::uint32_t RCC_CCIPR1_FDCAN1SEL_B_0x1 = 1;
        /** @brief PLL2 P (pll2_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR1_FDCAN1SEL_B_0x2 = 2;

    /** @brief Intermediate clock source selection */
    using RCC_CCIPR1_ICLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 clock selected (value: 0)
     *          - B_0x1: PLL2 Q (pll2_q_ck) selected (value: 1)
     *          - B_0x2: PLL1 Q (pll1_q_ck) selected (value: 2)
     *          - B_0x3: MSIK clock selected (value: 3)
     */
        /** @brief HSI48 clock selected */
    constexpr std::uint32_t RCC_CCIPR1_ICLKSEL_B_0x0 = 0;
        /** @brief PLL2 Q (pll2_q_ck) selected */
    constexpr std::uint32_t RCC_CCIPR1_ICLKSEL_B_0x1 = 1;
        /** @brief PLL1 Q (pll1_q_ck) selected */
    constexpr std::uint32_t RCC_CCIPR1_ICLKSEL_B_0x2 = 2;
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CCIPR1_ICLKSEL_B_0x3 = 3;

    /** @brief Clock sources for TIM16,TIM17, and LPTIM2 internal input capture */
    using RCC_CCIPR1_TIMICSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: HSI/256, MSIS/1024 and MSIS/4 generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture (value: 4)
     *          - B_0x5: HSI/256, MSIS/1024 and MSIK/4 generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture (value: 5)
     *          - B_0x6: HSI/256, MSIK/1024 and MSIS/4 generated and can be selected by TIM16, TIM17 ,and LPTIM2 as internal input capture (value: 6)
     *          - B_0x7: HSI/256, MSIK/1024 and MSIK/4 generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture (value: 7)
     */
        /** @brief HSI/256, MSIS/1024 and MSIS/4 generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x4 = 4;
        /** @brief HSI/256, MSIS/1024 and MSIK/4 generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x5 = 5;
        /** @brief HSI/256, MSIK/1024 and MSIS/4 generated and can be selected by TIM16, TIM17 ,and LPTIM2 as internal input capture */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x6 = 6;
        /** @brief HSI/256, MSIK/1024 and MSIK/4 generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x7 = 7;

    /** @brief RCC peripherals independent clock configuration register 2 */
    using RCC_CCIPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF1 kernel clock source selection */
    using RCC_CCIPR2_MDF1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HCLK selected (value: 0)
     *          - B_0x1: PLL1 P (pll1_p_ck) selected (value: 1)
     *          - B_0x2: PLL3 Q (pll3_q_ck) selected (value: 2)
     *          - B_0x3: input pin AUDIOCLK selected (value: 3)
     *          - B_0x4: MSIK clock selected (value: 4)
     */
        /** @brief HCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_MDF1SEL_B_0x0 = 0;
        /** @brief PLL1 P (pll1_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_MDF1SEL_B_0x1 = 1;
        /** @brief PLL3 Q (pll3_q_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_MDF1SEL_B_0x2 = 2;
        /** @brief input pin AUDIOCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_MDF1SEL_B_0x3 = 3;
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CCIPR2_MDF1SEL_B_0x4 = 4;

    /** @brief SAI1 kernel clock source selection */
    using RCC_CCIPR2_SAI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 P (pll2_p_ck) selected (value: 0)
     *          - B_0x1: PLL3 P (pll3_p_ck) selected (value: 1)
     *          - B_0x2: PLL1 P (pll1_p_ck) selected (value: 2)
     *          - B_0x3: input pin AUDIOCLK selected (value: 3)
     *          - B_0x4: HSI16 clock selected (value: 4)
     */
        /** @brief PLL2 P (pll2_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x0 = 0;
        /** @brief PLL3 P (pll3_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x1 = 1;
        /** @brief PLL1 P (pll1_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x2 = 2;
        /** @brief input pin AUDIOCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x3 = 3;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x4 = 4;

    /** @brief SAI2 kernel clock source selection */
    using RCC_CCIPR2_SAI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 P (pll2_p_ck) selected (value: 0)
     *          - B_0x1: PLL3 P (pll3_p_ck) selected (value: 1)
     *          - B_0x2: PLL1 P (pll1_p_ck) selected (value: 2)
     *          - B_0x3: input pin AUDIOCLK selected (value: 3)
     *          - B_0x4: HSI16 clock selected (value: 4)
     */
        /** @brief PLL2 P (pll2_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI2SEL_B_0x0 = 0;
        /** @brief PLL3 P (pll3_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI2SEL_B_0x1 = 1;
        /** @brief PLL1 P (pll1_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI2SEL_B_0x2 = 2;
        /** @brief input pin AUDIOCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI2SEL_B_0x3 = 3;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI2SEL_B_0x4 = 4;

    /** @brief SAES kernel clock source selection */
    using RCC_CCIPR2_SAESSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SHSI selected (value: 0)
     *          - B_0x1: SHSI / 2 selected, can be used in range 4 (value: 1)
     */
        /** @brief SHSI selected */
    constexpr std::uint32_t RCC_CCIPR2_SAESSEL_B_0x0 = 0;
        /** @brief SHSI / 2 selected, can be used in range 4 */
    constexpr std::uint32_t RCC_CCIPR2_SAESSEL_B_0x1 = 1;

    /** @brief RNG kernel clock source selection */
    using RCC_CCIPR2_RNGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 selected (value: 0)
     *          - B_0x1: HSI48 / 2 selected, can be used in range 4 (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     */
        /** @brief HSI48 selected */
    constexpr std::uint32_t RCC_CCIPR2_RNGSEL_B_0x0 = 0;
        /** @brief HSI48 / 2 selected, can be used in range 4 */
    constexpr std::uint32_t RCC_CCIPR2_RNGSEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR2_RNGSEL_B_0x2 = 2;

    /** @brief SDMMC1 and SDMMC2 kernel clock source selection */
    using RCC_CCIPR2_SDMMCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICLK clock selected (value: 0)
     *          - B_0x1: PLL1 P (pll1_p_ck) selected, in case higher than 48MHz is needed (for SDR50 mode) (value: 1)
     */
        /** @brief ICLK clock selected */
    constexpr std::uint32_t RCC_CCIPR2_SDMMCSEL_B_0x0 = 0;
        /** @brief PLL1 P (pll1_p_ck) selected, in case higher than 48MHz is needed (for SDR50 mode) */
    constexpr std::uint32_t RCC_CCIPR2_SDMMCSEL_B_0x1 = 1;

    /** @brief DSI kernel clock source selection */
    using RCC_CCIPR2_DSISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 P (pll3_p_ck) selected (value: 0)
     *          - B_0x1: DSI PHY PLL output selected (value: 1)
     */
        /** @brief PLL3 P (pll3_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_DSISEL_B_0x0 = 0;
        /** @brief DSI PHY PLL output selected */
    constexpr std::uint32_t RCC_CCIPR2_DSISEL_B_0x1 = 1;

    /** @brief USART6 kernel clock source selection */
    using RCC_CCIPR2_USART6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR2_USART6SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_USART6SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR2_USART6SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR2_USART6SEL_B_0x3 = 3;

    /** @brief LTDC kernel clock source selection */
    using RCC_CCIPR2_LTDCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 R (pll3_r_ck) selected (value: 0)
     *          - B_0x1: PLL2 R (pll2_r_ck) selected (value: 1)
     */
        /** @brief PLL3 R (pll3_r_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_LTDCSEL_B_0x0 = 0;
        /** @brief PLL2 R (pll2_r_ck) selected */
    constexpr std::uint32_t RCC_CCIPR2_LTDCSEL_B_0x1 = 1;

    /** @brief OCTOSPI1 and OCTOSPI2 kernel clock source selection */
    using RCC_CCIPR2_OCTOSPISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCLK selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     *          - B_0x2: PLL1 Q (pll1_q_ck) selected, can be up to 200 MHz (value: 2)
     *          - B_0x3: PLL2 Q (pll2_q_ck) selected, can be up to 200 MHz (value: 3)
     */
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_OCTOSPISEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_OCTOSPISEL_B_0x1 = 1;
        /** @brief PLL1 Q (pll1_q_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t RCC_CCIPR2_OCTOSPISEL_B_0x2 = 2;
        /** @brief PLL2 Q (pll2_q_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t RCC_CCIPR2_OCTOSPISEL_B_0x3 = 3;

    /** @brief HSPI1 kernel clock source selection */
    using RCC_CCIPR2_HSPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCLK selected (value: 0)
     *          - B_0x1: PLL1 Q (pll1_q_ck) selected, can be up to 200 MHz (value: 1)
     *          - B_0x2: PLL2 Q (pll2_q_ck) selected, can be up to 200 MHz (value: 2)
     *          - B_0x3: PLL3 R (pll3_r_ck) selected, can be up to 200 MHz (value: 3)
     */
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_HSPI1SEL_B_0x0 = 0;
        /** @brief PLL1 Q (pll1_q_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t RCC_CCIPR2_HSPI1SEL_B_0x1 = 1;
        /** @brief PLL2 Q (pll2_q_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t RCC_CCIPR2_HSPI1SEL_B_0x2 = 2;
        /** @brief PLL3 R (pll3_r_ck) selected, can be up to 200 MHz */
    constexpr std::uint32_t RCC_CCIPR2_HSPI1SEL_B_0x3 = 3;

    /** @brief I2C5 kernel clock source selection */
    using RCC_CCIPR2_I2C5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C5SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C5SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C5SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C5SEL_B_0x3 = 3;

    /** @brief I2C6 kernel clock source selection */
    using RCC_CCIPR2_I2C6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C6SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C6SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C6SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C6SEL_B_0x3 = 3;

    /** @brief OTG_HS PHY kernel clock source selection */
    using RCC_CCIPR2_OTGHSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE selected (value: 0)
     *          - B_0x1: PLL1 P (pll1_q_ck) selected, (value: 1)
     *          - B_0x2: HSE/2 selected (value: 2)
     *          - B_0x3: PLL1 P divided by 2 (pll1_p_ck/2) selected (value: 3)
     */
        /** @brief HSE selected */
    constexpr std::uint32_t RCC_CCIPR2_OTGHSSEL_B_0x0 = 0;
        /** @brief PLL1 P (pll1_q_ck) selected, */
    constexpr std::uint32_t RCC_CCIPR2_OTGHSSEL_B_0x1 = 1;
        /** @brief HSE/2 selected */
    constexpr std::uint32_t RCC_CCIPR2_OTGHSSEL_B_0x2 = 2;
        /** @brief PLL1 P divided by 2 (pll1_p_ck/2) selected */
    constexpr std::uint32_t RCC_CCIPR2_OTGHSSEL_B_0x3 = 3;

    /** @brief RCC peripherals independent clock configuration register 3 */
    using RCC_CCIPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 kernel clock source selection */
    using RCC_CCIPR3_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK3 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     *          - B_0x4: MSIK selected (value: 4)
     */
        /** @brief PCLK3 selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x3 = 3;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x4 = 4;

    /** @brief SPI3 kernel clock source selection */
    using RCC_CCIPR3_SPI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK3 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK3 selected */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR3_SPI3SEL_B_0x3 = 3;

    /** @brief I2C3 kernel clock source selection */
    using RCC_CCIPR3_I2C3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK3 selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK3 selected */
    constexpr std::uint32_t RCC_CCIPR3_I2C3SEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_I2C3SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR3_I2C3SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR3_I2C3SEL_B_0x3 = 3;

    /** @brief LPTIM3 and LPTIM4 kernel clock source selection */
    using RCC_CCIPR3_LPTIM34SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK clock selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: HSI selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM34SEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM34SEL_B_0x1 = 1;
        /** @brief HSI selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM34SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM34SEL_B_0x3 = 3;

    /** @brief LPTIM1 kernel clock source selection */
    using RCC_CCIPR3_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK clock selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM1SEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM1SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM1SEL_B_0x2 = 2;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM1SEL_B_0x3 = 3;

    /** @brief ADC1, ADC2, ADC4 and DAC1 kernel clock source selection */
    using RCC_CCIPR3_ADCDACSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HCLK clock selected (value: 0)
     *          - B_0x1: SYSCLK selected (value: 1)
     *          - B_0x2: PLL2 R (pll2_r_ck) selected (value: 2)
     *          - B_0x3: HSE clock selected (value: 3)
     *          - B_0x4: HSI16 clock selected (value: 4)
     *          - B_0x5: MSIK clock selected (value: 5)
     */
        /** @brief HCLK clock selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCDACSEL_B_0x0 = 0;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCDACSEL_B_0x1 = 1;
        /** @brief PLL2 R (pll2_r_ck) selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCDACSEL_B_0x2 = 2;
        /** @brief HSE clock selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCDACSEL_B_0x3 = 3;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCDACSEL_B_0x4 = 4;
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CCIPR3_ADCDACSEL_B_0x5 = 5;

    /** @brief DAC1 sample-and-hold clock source selection */
    using RCC_CCIPR3_DAC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     */
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR3_DAC1SEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR3_DAC1SEL_B_0x1 = 1;

    /** @brief ADF1 kernel clock source selection */
    using RCC_CCIPR3_ADF1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HCLK selected (value: 0)
     *          - B_0x1: PLL1 P (pll1_p_ck) selected (value: 1)
     *          - B_0x2: PLL3 Q (pll3_q_ck) selected (value: 2)
     *          - B_0x3: input pin AUDIOCLK selected (value: 3)
     *          - B_0x4: MSIK clock selected (value: 4)
     */
        /** @brief HCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_ADF1SEL_B_0x0 = 0;
        /** @brief PLL1 P (pll1_p_ck) selected */
    constexpr std::uint32_t RCC_CCIPR3_ADF1SEL_B_0x1 = 1;
        /** @brief PLL3 Q (pll3_q_ck) selected */
    constexpr std::uint32_t RCC_CCIPR3_ADF1SEL_B_0x2 = 2;
        /** @brief input pin AUDIOCLK selected */
    constexpr std::uint32_t RCC_CCIPR3_ADF1SEL_B_0x3 = 3;
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CCIPR3_ADF1SEL_B_0x4 = 4;

    /** @brief RCC backup domain control register */
    using RCC_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable */
    using RCC_BDCR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator off (value: 0)
     *          - B_0x1: LSE oscillator on (value: 1)
     */
        /** @brief LSE oscillator off */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x0 = 0;
        /** @brief LSE oscillator on */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x1 = 1;

    /** @brief LSE oscillator ready */
    using RCC_BDCR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not ready (value: 0)
     *          - B_0x1: LSE oscillator ready (value: 1)
     */
        /** @brief LSE oscillator not ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x0 = 0;
        /** @brief LSE oscillator ready */
    constexpr std::uint32_t RCC_BDCR_LSERDY_B_0x1 = 1;

    /** @brief LSE oscillator bypass */
    using RCC_BDCR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not bypassed (value: 0)
     *          - B_0x1: LSE oscillator bypassed (value: 1)
     */
        /** @brief LSE oscillator not bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x0 = 0;
        /** @brief LSE oscillator bypassed */
    constexpr std::uint32_t RCC_BDCR_LSEBYP_B_0x1 = 1;

    /** @brief LSE oscillator drive capability */
    using RCC_BDCR_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Xtal mode' lower driving capability (value: 0)
     *          - B_0x1: Xtal mode' medium-low driving capability (value: 1)
     *          - B_0x2: Xtal mode' medium-high driving capability (value: 2)
     *          - B_0x3: Xtal mode' higher driving capability (value: 3)
     */
        /** @brief Xtal mode' lower driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x0 = 0;
        /** @brief Xtal mode' medium-low driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x1 = 1;
        /** @brief Xtal mode' medium-high driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x2 = 2;
        /** @brief Xtal mode' higher driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x3 = 3;

    /** @brief CSS on LSE enable */
    using RCC_BDCR_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSS on LSE OFF (value: 0)
     *          - B_0x1: CSS on LSE ON (value: 1)
     */
        /** @brief CSS on LSE OFF */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x0 = 0;
        /** @brief CSS on LSE ON */
    constexpr std::uint32_t RCC_BDCR_LSECSSON_B_0x1 = 1;

    /** @brief CSS on LSE failure detection */
    using RCC_BDCR_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No failure detected on LSE (value: 0)
     *          - B_0x1: Failure detected on LSE (value: 1)
     */
        /** @brief No failure detected on LSE */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x0 = 0;
        /** @brief Failure detected on LSE */
    constexpr std::uint32_t RCC_BDCR_LSECSSD_B_0x1 = 1;

    /** @brief LSE system clock (LSESYS) enable */
    using RCC_BDCR_LSESYSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE can be used only for RTC, TAMP, and CSS on LSE. (value: 0)
     *          - B_0x1: LSE can be used by any other peripheral or function. (value: 1)
     */
        /** @brief LSE can be used only for RTC, TAMP, and CSS on LSE. */
    constexpr std::uint32_t RCC_BDCR_LSESYSEN_B_0x0 = 0;
        /** @brief LSE can be used by any other peripheral or function. */
    constexpr std::uint32_t RCC_BDCR_LSESYSEN_B_0x1 = 1;

    /** @brief RTC and TAMP clock source selection */
    using RCC_BDCR_RTCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock selected (value: 0)
     *          - B_0x1: LSE oscillator clock selected (value: 1)
     *          - B_0x2: LSI oscillator clock selected (value: 2)
     *          - B_0x3: HSE oscillator clock divided by 32 selected (value: 3)
     */
        /** @brief No clock selected */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x0 = 0;
        /** @brief LSE oscillator clock selected */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x1 = 1;
        /** @brief LSI oscillator clock selected */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x2 = 2;
        /** @brief HSE oscillator clock divided by 32 selected */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x3 = 3;

    /** @brief LSE system clock (LSESYS) ready */
    using RCC_BDCR_LSESYSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSESYS clock not ready (value: 0)
     *          - B_0x1: LSESYS clock ready (value: 1)
     */
        /** @brief LSESYS clock not ready */
    constexpr std::uint32_t RCC_BDCR_LSESYSRDY_B_0x0 = 0;
        /** @brief LSESYS clock ready */
    constexpr std::uint32_t RCC_BDCR_LSESYSRDY_B_0x1 = 1;

    /** @brief LSE clock glitch filter enable */
    using RCC_BDCR_LSEGFON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE glitch filter disabled (value: 0)
     *          - B_0x1: LSE glitch filter enabled (value: 1)
     */
        /** @brief LSE glitch filter disabled */
    constexpr std::uint32_t RCC_BDCR_LSEGFON_B_0x0 = 0;
        /** @brief LSE glitch filter enabled */
    constexpr std::uint32_t RCC_BDCR_LSEGFON_B_0x1 = 1;

    /** @brief RTC and TAMP clock enable */
    using RCC_BDCR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC and TAMP clock disabled (value: 0)
     *          - B_0x1: RTC and TAMP clock enabled (value: 1)
     */
        /** @brief RTC and TAMP clock disabled */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x0 = 0;
        /** @brief RTC and TAMP clock enabled */
    constexpr std::uint32_t RCC_BDCR_RTCEN_B_0x1 = 1;

    /** @brief Backup domain software reset */
    using RCC_BDCR_BDRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset not activated (value: 0)
     *          - B_0x1: Reset the entire backup domain. (value: 1)
     */
        /** @brief Reset not activated */
    constexpr std::uint32_t RCC_BDCR_BDRST_B_0x0 = 0;
        /** @brief Reset the entire backup domain. */
    constexpr std::uint32_t RCC_BDCR_BDRST_B_0x1 = 1;

    /** @brief Low-speed clock output (LSCO) enable */
    using RCC_BDCR_LSCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSCO disabled (value: 0)
     *          - B_0x1: LSCO enabled (value: 1)
     */
        /** @brief LSCO disabled */
    constexpr std::uint32_t RCC_BDCR_LSCOEN_B_0x0 = 0;
        /** @brief LSCO enabled */
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
     *          - B_0x0: LSI oscillator OFF (value: 0)
     *          - B_0x1: LSI oscillator ON (value: 1)
     */
        /** @brief LSI oscillator OFF */
    constexpr std::uint32_t RCC_BDCR_LSION_B_0x0 = 0;
        /** @brief LSI oscillator ON */
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

    /** @brief Low-speed clock divider configuration */
    using RCC_BDCR_LSIPREDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI not divided (value: 0)
     *          - B_0x1: LSI divided by 128 (value: 1)
     */
        /** @brief LSI not divided */
    constexpr std::uint32_t RCC_BDCR_LSIPREDIV_B_0x0 = 0;
        /** @brief LSI divided by 128 */
    constexpr std::uint32_t RCC_BDCR_LSIPREDIV_B_0x1 = 1;

    /** @brief RCC control/status register */
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK range after Standby mode */
    using RCC_CSR_MSIKSRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: range 4 around 4M Hz (reset value) (value: 4)
     *          - B_0x5: range 5 around 2 MHz (value: 5)
     *          - B_0x6: range 6 around 1.33 MHz (value: 6)
     *          - B_0x7: range 7 around 1 MHz (value: 7)
     *          - B_0x8: range 8 around 3.072 MHz (value: 8)
     */
        /** @brief range 4 around 4M Hz (reset value) */
    constexpr std::uint32_t RCC_CSR_MSIKSRANGE_B_0x4 = 4;
        /** @brief range 5 around 2 MHz */
    constexpr std::uint32_t RCC_CSR_MSIKSRANGE_B_0x5 = 5;
        /** @brief range 6 around 1.33 MHz */
    constexpr std::uint32_t RCC_CSR_MSIKSRANGE_B_0x6 = 6;
        /** @brief range 7 around 1 MHz */
    constexpr std::uint32_t RCC_CSR_MSIKSRANGE_B_0x7 = 7;
        /** @brief range 8 around 3.072 MHz */
    constexpr std::uint32_t RCC_CSR_MSIKSRANGE_B_0x8 = 8;

    /** @brief MSIS range after Standby mode */
    using RCC_CSR_MSISSRANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: range 4 around 4M Hz (reset value) (value: 4)
     *          - B_0x5: range 5 around 2 MHz (value: 5)
     *          - B_0x6: range 6 around 1.33 MHz (value: 6)
     *          - B_0x7: range 7 around 1 MHz (value: 7)
     *          - B_0x8: range 8 around 3.072 MHz (value: 8)
     */
        /** @brief range 4 around 4M Hz (reset value) */
    constexpr std::uint32_t RCC_CSR_MSISSRANGE_B_0x4 = 4;
        /** @brief range 5 around 2 MHz */
    constexpr std::uint32_t RCC_CSR_MSISSRANGE_B_0x5 = 5;
        /** @brief range 6 around 1.33 MHz */
    constexpr std::uint32_t RCC_CSR_MSISSRANGE_B_0x6 = 6;
        /** @brief range 7 around 1 MHz */
    constexpr std::uint32_t RCC_CSR_MSISSRANGE_B_0x7 = 7;
        /** @brief range 8 around 3.072 MHz */
    constexpr std::uint32_t RCC_CSR_MSISSRANGE_B_0x8 = 8;

    /** @brief Remove reset flag */
    using RCC_CSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear the reset flags. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x0 = 0;
        /** @brief Clear the reset flags. */
    constexpr std::uint32_t RCC_CSR_RMVF_B_0x1 = 1;

    /** @brief Option-byte loader reset flag */
    using RCC_CSR_OBLRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from option-byte loading occurred (value: 0)
     *          - B_0x1: Reset from option-byte loading occurred (value: 1)
     */
        /** @brief No reset from option-byte loading occurred */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x0 = 0;
        /** @brief Reset from option-byte loading occurred */
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

    /** @brief Brownout reset or an exit from Shutdown mode reset flag */
    using RCC_CSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No BOR/exit from Shutdown mode reset occurred (value: 0)
     *          - B_0x1: BOR/exit from Shutdown mode reset occurred (value: 1)
     */
        /** @brief No BOR/exit from Shutdown mode reset occurred */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR/exit from Shutdown mode reset occurred */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x1 = 1;

    /** @brief Software reset flag */
    using RCC_CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No software reset occurred (value: 0)
     *          - B_0x1: Software reset occurred (value: 1)
     */
        /** @brief No software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x0 = 0;
        /** @brief Software reset occurred */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x1 = 1;

    /** @brief Independent watchdog reset flag */
    using RCC_CSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No independent watchdog reset occurred (value: 0)
     *          - B_0x1: Independent watchdog reset occurred (value: 1)
     */
        /** @brief No independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x0 = 0;
        /** @brief Independent watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x1 = 1;

    /** @brief Window watchdog reset flag */
    using RCC_CSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No window watchdog reset occurred (value: 0)
     *          - B_0x1: Window watchdog reset occurred (value: 1)
     */
        /** @brief No window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x0 = 0;
        /** @brief Window watchdog reset occurred */
    constexpr std::uint32_t RCC_CSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Low-power reset flag */
    using RCC_CSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal low-power mode reset occurred (value: 0)
     *          - B_0x1: Illegal low-power mode reset occurred (value: 1)
     */
        /** @brief No illegal low-power mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x0 = 0;
        /** @brief Illegal low-power mode reset occurred */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC secure configuration register */
    using RCC_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock configuration and status bit security */
    using RCC_SECCFGR_HSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x1 = 1;

    /** @brief HSE clock configuration bits, status bit and HSE_CSS security */
    using RCC_SECCFGR_HSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x1 = 1;

    /** @brief MSI clock configuration and status bit security */
    using RCC_SECCFGR_MSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_MSISEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_MSISEC_B_0x1 = 1;

    /** @brief LSI clock configuration and status bit security */
    using RCC_SECCFGR_LSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x1 = 1;

    /** @brief LSE clock configuration and status bit security */
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

    /** @brief PLL1 clock configuration and status bit security */
    using RCC_SECCFGR_PLL1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL1SEC_B_0x1 = 1;

    /** @brief PLL2 clock configuration and status bit security */
    using RCC_SECCFGR_PLL2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL2SEC_B_0x1 = 1;

    /** @brief PLL3 clock configuration and status bit security */
    using RCC_SECCFGR_PLL3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL3SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_PLL3SEC_B_0x1 = 1;

    /** @brief Intermediate clock source selection security */
    using RCC_SECCFGR_ICLKSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non secure */
    constexpr std::uint32_t RCC_SECCFGR_ICLKSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t RCC_SECCFGR_ICLKSEC_B_0x1 = 1;

    /** @brief HSI48 clock configuration and status bit security */
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

    /** @brief RCC privilege configuration register */
    using RCC_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC secure function privilege configuration */
    using RCC_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to RCC secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to RCC secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to RCC secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t RCC_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to RCC secure functions can be done by privileged access only. */
    constexpr std::uint32_t RCC_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief RCC non-secure function privilege configuration */
    using RCC_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to RCC non-secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to RCC non-secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to RCC non-secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to RCC non-secure functions can be done by privileged access only. */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x1 = 1;

}

#endif
