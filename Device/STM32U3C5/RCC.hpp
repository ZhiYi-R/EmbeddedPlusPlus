/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_RCC_HPP
#define EMBEDDED_PP_STM32U3C5_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RCC register block */
namespace STM32U3C5::RCC {

    /** @brief RCC clock control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIS clock enable */
    using RCC_CR_MSISON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS (MSI system) oscillator OFF (value: 0)
     *          - B_0x1: MSIS (MSI system) oscillator ON (value: 1)
     */
        /** @brief MSIS (MSI system) oscillator OFF */
    constexpr std::uint32_t RCC_CR_MSISON_B_0x0 = 0;
        /** @brief MSIS (MSI system) oscillator ON */
    constexpr std::uint32_t RCC_CR_MSISON_B_0x1 = 1;

    /** @brief MSI enable for some peripheral kernels */
    using RCC_CR_MSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect on MSI oscillator (value: 0)
     *          - B_0x1: MSI oscillator forced ON even in Stop mode. (value: 1)
     */
        /** @brief No effect on MSI oscillator */
    constexpr std::uint32_t RCC_CR_MSIKERON_B_0x0 = 0;
        /** @brief MSI oscillator forced ON even in Stop mode. */
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

    /** @brief MSIK clock enable */
    using RCC_CR_MSIKON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK (MSI kernel) oscillator disabled (value: 0)
     *          - B_0x1: MSIK (MSI kernel) oscillator enabled (value: 1)
     */
        /** @brief MSIK (MSI kernel) oscillator disabled */
    constexpr std::uint32_t RCC_CR_MSIKON_B_0x0 = 0;
        /** @brief MSIK (MSI kernel) oscillator enabled */
    constexpr std::uint32_t RCC_CR_MSIKON_B_0x1 = 1;

    /** @brief MSIK clock ready flag */
    using RCC_CR_MSIKRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK (MSI kernel) oscillator not ready (value: 0)
     *          - B_0x1: MSIK (MSI kernel) oscillator ready (value: 1)
     */
        /** @brief MSIK (MSI kernel) oscillator not ready */
    constexpr std::uint32_t RCC_CR_MSIKRDY_B_0x0 = 0;
        /** @brief MSIK (MSI kernel) oscillator ready */
    constexpr std::uint32_t RCC_CR_MSIKRDY_B_0x1 = 1;

    /** @brief MSIRC1 PLL mode enable */
    using RCC_CR_MSIPLL1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC1 PLL mode disabled (value: 0)
     *          - B_0x1: MSIRC1 PLL mode enabled (value: 1)
     */
        /** @brief MSIRC1 PLL mode disabled */
    constexpr std::uint32_t RCC_CR_MSIPLL1EN_B_0x0 = 0;
        /** @brief MSIRC1 PLL mode enabled */
    constexpr std::uint32_t RCC_CR_MSIPLL1EN_B_0x1 = 1;

    /** @brief MSIRC0 PLL mode enable */
    using RCC_CR_MSIPLL0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC0 PLL mode disabled (value: 0)
     *          - B_0x1: MSIRC0 PLL mode enabled (value: 1)
     */
        /** @brief MSIRC0 PLL mode disabled */
    constexpr std::uint32_t RCC_CR_MSIPLL0EN_B_0x0 = 0;
        /** @brief MSIRC0 PLL mode enabled */
    constexpr std::uint32_t RCC_CR_MSIPLL0EN_B_0x1 = 1;

    /** @brief MSIRC1 PLL mode fast startup */
    using RCC_CR_MSIPLL1FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC1 PLL normal startup (value: 0)
     *          - B_0x1: MSIRC1 PLL fast startup (value: 1)
     */
        /** @brief MSIRC1 PLL normal startup */
    constexpr std::uint32_t RCC_CR_MSIPLL1FAST_B_0x0 = 0;
        /** @brief MSIRC1 PLL fast startup */
    constexpr std::uint32_t RCC_CR_MSIPLL1FAST_B_0x1 = 1;

    /** @brief MSIRC0 PLL mode fast startup */
    using RCC_CR_MSIPLL0FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC0 PLL normal startup (value: 0)
     *          - B_0x1: MSIRC0 PLL fast startup (value: 1)
     */
        /** @brief MSIRC0 PLL normal startup */
    constexpr std::uint32_t RCC_CR_MSIPLL0FAST_B_0x0 = 0;
        /** @brief MSIRC0 PLL fast startup */
    constexpr std::uint32_t RCC_CR_MSIPLL0FAST_B_0x1 = 1;

    /** @brief MSIRC1 PLL mode ready flag */
    using RCC_CR_MSIPLL1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC1 PLL mode is not ready (value: 0)
     *          - B_0x1: MSIRC1 PLL mode is ready (value: 1)
     */
        /** @brief MSIRC1 PLL mode is not ready */
    constexpr std::uint32_t RCC_CR_MSIPLL1RDY_B_0x0 = 0;
        /** @brief MSIRC1 PLL mode is ready */
    constexpr std::uint32_t RCC_CR_MSIPLL1RDY_B_0x1 = 1;

    /** @brief MSIRC0 PLL mode ready flag */
    using RCC_CR_MSIPLL0RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC0 PLL mode is not ready (value: 0)
     *          - B_0x1: MSIRC0 PLL mode is ready (value: 1)
     */
        /** @brief MSIRC0 PLL mode is not ready */
    constexpr std::uint32_t RCC_CR_MSIPLL0RDY_B_0x0 = 0;
        /** @brief MSIRC0 PLL mode is ready */
    constexpr std::uint32_t RCC_CR_MSIPLL0RDY_B_0x1 = 1;

    /** @brief HSI16 clock enable */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator OFF (value: 0)
     *          - B_0x1: HSI16 oscillator ON (value: 1)
     */
        /** @brief HSI16 oscillator OFF */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI16 oscillator ON */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSI16 enable for some peripheral kernels */
    using RCC_CR_HSIKERON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect on HSI16 oscillator (value: 0)
     *          - B_0x1: HSI16 oscillator forced ON even in Stop mode (value: 1)
     */
        /** @brief No effect on HSI16 oscillator */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x0 = 0;
        /** @brief HSI16 oscillator forced ON even in Stop mode */
    constexpr std::uint32_t RCC_CR_HSIKERON_B_0x1 = 1;

    /** @brief HSI16 clock ready flag */
    using RCC_CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI16 oscillator not ready (value: 0)
     *          - B_0x1: HSI16 oscillator ready (value: 1)
     */
        /** @brief HSI16 oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x0 = 0;
        /** @brief HSI16 oscillator ready */
    constexpr std::uint32_t RCC_CR_HSIRDY_B_0x1 = 1;

    /** @brief HSI48 clock enable */
    using RCC_CR_HSI48ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 oscillator OFF (value: 0)
     *          - B_0x1: HSI48 oscillator ON (value: 1)
     */
        /** @brief HSI48 oscillator OFF */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x0 = 0;
        /** @brief HSI48 oscillator ON */
    constexpr std::uint32_t RCC_CR_HSI48ON_B_0x1 = 1;

    /** @brief HSI48 clock ready flag */
    using RCC_CR_HSI48RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 oscillator not ready (value: 0)
     *          - B_0x1: HSI48 oscillator ready (value: 1)
     */
        /** @brief HSI48 oscillator not ready */
    constexpr std::uint32_t RCC_CR_HSI48RDY_B_0x0 = 0;
        /** @brief HSI48 oscillator ready */
    constexpr std::uint32_t RCC_CR_HSI48RDY_B_0x1 = 1;

    /** @brief HSE clock enable */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator OFF (value: 0)
     *          - B_0x1: HSE oscillator ON (value: 1)
     */
        /** @brief HSE oscillator OFF */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief HSE oscillator ON */
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
    using RCC_CR_HSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock security system OFF (clock detector OFF) (value: 0)
     *          - B_0x1: Clock security system ON (clock detector ON if the HSE oscillator is stable, OFF if not). (value: 1)
     */
        /** @brief Clock security system OFF (clock detector OFF) */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x0 = 0;
        /** @brief Clock security system ON (clock detector ON if the HSE oscillator is stable, OFF if not). */
    constexpr std::uint32_t RCC_CR_HSECSSON_B_0x1 = 1;

    /** @brief HSE external clock bypass mode */
    using RCC_CR_HSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External HSE clock analog mode (value: 0)
     *          - B_0x1: External HSE clock digital mode (through I/O Schmitt trigger) (value: 1)
     */
        /** @brief External HSE clock analog mode */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x0 = 0;
        /** @brief External HSE clock digital mode (through I/O Schmitt trigger) */
    constexpr std::uint32_t RCC_CR_HSEEXT_B_0x1 = 1;

    /** @brief RCC internal clock source calibration register 1 */
    using RCC_ICSCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC1 clock calibration for MSI ranges 4 to 7 */
    using RCC_ICSCR1_MSICAL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC0 clock calibration for MSI ranges 0 to 3 */
    using RCC_ICSCR1_MSICAL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRCx (x = 0, 1) PLL mode HSE input division */
    using RCC_ICSCR1_MSIHSINDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE (16 MHz) is used as MSI input clock when PLL mode with high-speed clock is selected. (value: 0)
     *          - B_0x1: HSE (32 MHz)/2 is used as MSI input clock when PLL mode with high-speed clock is selected. (value: 1)
     */
        /** @brief HSE (16 MHz) is used as MSI input clock when PLL mode with high-speed clock is selected. */
    constexpr std::uint32_t RCC_ICSCR1_MSIHSINDIV_B_0x0 = 0;
        /** @brief HSE (32 MHz)/2 is used as MSI input clock when PLL mode with high-speed clock is selected. */
    constexpr std::uint32_t RCC_ICSCR1_MSIHSINDIV_B_0x1 = 1;

    /** @brief MSIRC1 PLL mode input clock selection */
    using RCC_ICSCR1_MSIPLL1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE is used as MSIRC1 input clock when PLL mode is selected. (value: 0)
     *          - B_0x1: HSE or HSE/2 is used as MSIRC1 input clock when PLL mode is selected. (value: 1)
     */
        /** @brief LSE is used as MSIRC1 input clock when PLL mode is selected. */
    constexpr std::uint32_t RCC_ICSCR1_MSIPLL1SEL_B_0x0 = 0;
        /** @brief HSE or HSE/2 is used as MSIRC1 input clock when PLL mode is selected. */
    constexpr std::uint32_t RCC_ICSCR1_MSIPLL1SEL_B_0x1 = 1;

    /** @brief MSIRC0 PLL mode input clock selection */
    using RCC_ICSCR1_MSIPLL0SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE is used as MSIRC0 input clock when PLL mode is selected. (value: 0)
     *          - B_0x1: HSE or HSE/2 is used as MSIRC0 input clock when PLL mode is selected. (value: 1)
     */
        /** @brief LSE is used as MSIRC0 input clock when PLL mode is selected. */
    constexpr std::uint32_t RCC_ICSCR1_MSIPLL0SEL_B_0x0 = 0;
        /** @brief HSE or HSE/2 is used as MSIRC0 input clock when PLL mode is selected. */
    constexpr std::uint32_t RCC_ICSCR1_MSIPLL0SEL_B_0x1 = 1;

    /** @brief MSI bias mode selection */
    using RCC_ICSCR1_MSIBIAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI bias continuous mode (clock accuracy fast settling time) (value: 0)
     *          - B_0x1: MSI bias sampling mode when the device is in Stop 1 or Stop 2 mode, or when the regulator is in range 2 (value: 1)
     */
        /** @brief MSI bias continuous mode (clock accuracy fast settling time) */
    constexpr std::uint32_t RCC_ICSCR1_MSIBIAS_B_0x0 = 0;
        /** @brief MSI bias sampling mode when the device is in Stop 1 or Stop 2 mode, or when the regulator is in range 2 */
    constexpr std::uint32_t RCC_ICSCR1_MSIBIAS_B_0x1 = 1;

    /** @brief MSI clock range selection */
    using RCC_ICSCR1_MSIRGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS/MSIK ranges provided by MSISDIVS[1:0] and MSIKDIVS[1:0] in RCC_CSR (value: 0)
     *          - B_0x1: MSIS/MSIK ranges provided by MSISDIV[1:0] and MSIKDIV[1:0] in RCC_ICSCR1 (value: 1)
     */
        /** @brief MSIS/MSIK ranges provided by MSISDIVS[1:0] and MSIKDIVS[1:0] in RCC_CSR */
    constexpr std::uint32_t RCC_ICSCR1_MSIRGSEL_B_0x0 = 0;
        /** @brief MSIS/MSIK ranges provided by MSISDIV[1:0] and MSIKDIV[1:0] in RCC_ICSCR1 */
    constexpr std::uint32_t RCC_ICSCR1_MSIRGSEL_B_0x1 = 1;

    /** @brief MSIRC1 PLL mode with LSE multiplication factor */
    using RCC_ICSCR1_MSIPLL1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK oscillator division */
    using RCC_ICSCR1_MSIKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_MSIKSEL_BIT_IN_RCC_ICSCR1__EQUAL_0: MSIRC0/1 is selected for MSIK (range 0 around 96 MHz). (value: 0)
     *          - B_0x1_MSIKSEL_BIT_IN_RCC_ICSCR1__EQUAL_0: MSIRC0/2 is selected for MSIK (range 1 around 48 MHz). (value: 1)
     *          - B_0x2_MSIKSEL_BIT_IN_RCC_ICSCR1__EQUAL_0: MSIRC0/4 is selected for MSIK (range 2 around 24 MHz). (value: 2)
     *          - B_0x3_MSIKSEL_BIT_IN_RCC_ICSCR1__EQUAL_0: MSIRC0/8 is selected for MSIK (range 3 around 12 MHz). (value: 3)
     */
        /** @brief MSIRC0/1 is selected for MSIK (range 0 around 96 MHz). */
    constexpr std::uint32_t RCC_ICSCR1_MSIKDIV_B_0x0_MSIKSEL_BIT_IN_RCC_ICSCR1__EQUAL_0 = 0;
        /** @brief MSIRC0/2 is selected for MSIK (range 1 around 48 MHz). */
    constexpr std::uint32_t RCC_ICSCR1_MSIKDIV_B_0x1_MSIKSEL_BIT_IN_RCC_ICSCR1__EQUAL_0 = 1;
        /** @brief MSIRC0/4 is selected for MSIK (range 2 around 24 MHz). */
    constexpr std::uint32_t RCC_ICSCR1_MSIKDIV_B_0x2_MSIKSEL_BIT_IN_RCC_ICSCR1__EQUAL_0 = 2;
        /** @brief MSIRC0/8 is selected for MSIK (range 3 around 12 MHz). */
    constexpr std::uint32_t RCC_ICSCR1_MSIKDIV_B_0x3_MSIKSEL_BIT_IN_RCC_ICSCR1__EQUAL_0 = 3;

    /** @brief MSIK clock source selection */
    using RCC_ICSCR1_MSIKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC0 (96 MHz) is selected as source to generate MSIK. (value: 0)
     *          - B_0x1: MSIRC1 (24 MHz) is selected as source to generate MSIK. (value: 1)
     */
        /** @brief MSIRC0 (96 MHz) is selected as source to generate MSIK. */
    constexpr std::uint32_t RCC_ICSCR1_MSIKSEL_B_0x0 = 0;
        /** @brief MSIRC1 (24 MHz) is selected as source to generate MSIK. */
    constexpr std::uint32_t RCC_ICSCR1_MSIKSEL_B_0x1 = 1;

    /** @brief MSIS oscillator division */
    using RCC_ICSCR1_MSISDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_MSISSEL_BIT_IN_RCC_ICSCR1__EQUAL_0: MSIRC0/1 is selected for MSIS (range 0 around 96 MHz). (value: 0)
     *          - B_0x1_MSISSEL_BIT_IN_RCC_ICSCR1__EQUAL_0: MSIRC0/2 is selected for MSIS (range 1 around 48 MHz). (value: 1)
     *          - B_0x2_MSISSEL_BIT_IN_RCC_ICSCR1__EQUAL_0: MSIRC0/4 is selected for MSIS (range 2 around 24 MHz). (value: 2)
     *          - B_0x3_MSISSEL_BIT_IN_RCC_ICSCR1__EQUAL_0: MSIRC0/8 is selected for MSIS (range 3 around 12 MHz). (value: 3)
     */
        /** @brief MSIRC0/1 is selected for MSIS (range 0 around 96 MHz). */
    constexpr std::uint32_t RCC_ICSCR1_MSISDIV_B_0x0_MSISSEL_BIT_IN_RCC_ICSCR1__EQUAL_0 = 0;
        /** @brief MSIRC0/2 is selected for MSIS (range 1 around 48 MHz). */
    constexpr std::uint32_t RCC_ICSCR1_MSISDIV_B_0x1_MSISSEL_BIT_IN_RCC_ICSCR1__EQUAL_0 = 1;
        /** @brief MSIRC0/4 is selected for MSIS (range 2 around 24 MHz). */
    constexpr std::uint32_t RCC_ICSCR1_MSISDIV_B_0x2_MSISSEL_BIT_IN_RCC_ICSCR1__EQUAL_0 = 2;
        /** @brief MSIRC0/8 is selected for MSIS (range 3 around 12 MHz). */
    constexpr std::uint32_t RCC_ICSCR1_MSISDIV_B_0x3_MSISSEL_BIT_IN_RCC_ICSCR1__EQUAL_0 = 3;

    /** @brief MSIS clock source selection */
    using RCC_ICSCR1_MSISSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC0 (96 MHz) is selected as source to generate MSIS. (value: 0)
     *          - B_0x1: MSIRC1 (24 MHz) is selected as source to generate MSIS. (value: 1)
     */
        /** @brief MSIRC0 (96 MHz) is selected as source to generate MSIS. */
    constexpr std::uint32_t RCC_ICSCR1_MSISSEL_B_0x0 = 0;
        /** @brief MSIRC1 (24 MHz) is selected as source to generate MSIS. */
    constexpr std::uint32_t RCC_ICSCR1_MSISSEL_B_0x1 = 1;

    /** @brief RCC internal clock source calibration register 2 */
    using RCC_ICSCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC1 clock trimming for ranges 4 to 7 */
    using RCC_ICSCR2_MSITRIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC0 clock trimming for ranges 0 to 3 */
    using RCC_ICSCR2_MSITRIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC internal clock source calibration register 3 */
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
    /** @brief System clock switch */
    using RCC_CFGR1_SW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS selected as system clock (value: 0)
     *          - B_0x1: HSI16 selected as system clock (value: 1)
     *          - B_0x2: HSE selected as system clock (value: 2)
     */
        /** @brief MSIS selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x0 = 0;
        /** @brief HSI16 selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x1 = 1;
        /** @brief HSE selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SW_B_0x2 = 2;

    /** @brief System clock switch status */
    using RCC_CFGR1_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS oscillator used as system clock (value: 0)
     *          - B_0x1: HSI16 oscillator used as system clock (value: 1)
     *          - B_0x2: HSE used as system clock (value: 2)
     */
        /** @brief MSIS oscillator used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x0 = 0;
        /** @brief HSI16 oscillator used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x1 = 1;
        /** @brief HSE used as system clock */
    constexpr std::uint32_t RCC_CFGR1_SWS_B_0x2 = 2;

    /** @brief Wake-up from Stop and CSS backup clock selection */
    using RCC_CFGR1_STOPWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIS oscillator selected as wake-up from stop clock and CSS backup clock (value: 0)
     *          - B_0x1: HSI16 oscillator selected as wake-up from stop clock and CSS backup clock (value: 1)
     */
        /** @brief MSIS oscillator selected as wake-up from stop clock and CSS backup clock */
    constexpr std::uint32_t RCC_CFGR1_STOPWUCK_B_0x0 = 0;
        /** @brief HSI16 oscillator selected as wake-up from stop clock and CSS backup clock */
    constexpr std::uint32_t RCC_CFGR1_STOPWUCK_B_0x1 = 1;

    /** @brief Wake-up from Stop kernel clock automatic enable selection */
    using RCC_CFGR1_STOPKERWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK oscillator automatically enabled when exiting Stop mode or when a CSS on HSE event occurs (value: 0)
     *          - B_0x1: HSI16 oscillator automatically enabled when exiting Stop mode or when a CSS on HSE event occurs (value: 1)
     */
        /** @brief MSIK oscillator automatically enabled when exiting Stop mode or when a CSS on HSE event occurs */
    constexpr std::uint32_t RCC_CFGR1_STOPKERWUCK_B_0x0 = 0;
        /** @brief HSI16 oscillator automatically enabled when exiting Stop mode or when a CSS on HSE event occurs */
    constexpr std::uint32_t RCC_CFGR1_STOPKERWUCK_B_0x1 = 1;

    /** @brief Microcontroller clock output 2 */
    using RCC_CFGR1_MCO2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO2 output disabled, no clock on MCO2 (value: 0)
     *          - B_0x1: SYSCLK system clock selected (value: 1)
     *          - B_0x2: MSIS clock selected (value: 2)
     *          - B_0x3: HSI16 clock selected (value: 3)
     *          - B_0x4: HSE clock selected (value: 4)
     *          - B_0x5: LSI clock selected (value: 5)
     *          - B_0x6: LSE clock selected (value: 6)
     *          - B_0x7: HSI48 clock selected (value: 7)
     *          - B_0x8: MSIK clock selected (value: 8)
     */
        /** @brief MCO2 output disabled, no clock on MCO2 */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x0 = 0;
        /** @brief SYSCLK system clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x1 = 1;
        /** @brief MSIS clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x2 = 2;
        /** @brief HSI16 clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x3 = 3;
        /** @brief HSE clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x4 = 4;
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x5 = 5;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x6 = 6;
        /** @brief HSI48 clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x7 = 7;
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCO2SEL_B_0x8 = 8;

    /** @brief Microcontroller clock output 2 prescaler */
    using RCC_CFGR1_MCO2PRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO2 divided by 1 (value: 0)
     *          - B_0x1: MCO2 divided by 2 (value: 1)
     *          - B_0x2: MCO2 divided by 4 (value: 2)
     *          - B_0x3: MCO2 divided by 8 (value: 3)
     *          - B_0x4: MCO2 divided by 16 (value: 4)
     *          - B_0x5: MCO2 divided by 32 (value: 5)
     *          - B_0x6: MCO2 divided by 64 (value: 6)
     *          - B_0x7: MCO2 divided by 128 (value: 7)
     */
        /** @brief MCO2 divided by 1 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x0 = 0;
        /** @brief MCO2 divided by 2 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x1 = 1;
        /** @brief MCO2 divided by 4 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x2 = 2;
        /** @brief MCO2 divided by 8 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x3 = 3;
        /** @brief MCO2 divided by 16 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x4 = 4;
        /** @brief MCO2 divided by 32 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x5 = 5;
        /** @brief MCO2 divided by 64 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x6 = 6;
        /** @brief MCO2 divided by 128 */
    constexpr std::uint32_t RCC_CFGR1_MCO2PRE_B_0x7 = 7;

    /** @brief Microcontroller clock output */
    using RCC_CFGR1_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO output disabled, no clock on MCO (value: 0)
     *          - B_0x1: SYSCLK system clock selected (value: 1)
     *          - B_0x2: MSIS clock selected (value: 2)
     *          - B_0x3: HSI16 clock selected (value: 3)
     *          - B_0x4: HSE clock selected (value: 4)
     *          - B_0x5: LSI clock selected (value: 5)
     *          - B_0x6: LSE clock selected (value: 6)
     *          - B_0x7: HSI48 clock selected (value: 7)
     *          - B_0x8: MSIK clock selected (value: 8)
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
        /** @brief LSI clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x5 = 5;
        /** @brief LSE clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x6 = 6;
        /** @brief HSI48 clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x7 = 7;
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CFGR1_MCOSEL_B_0x8 = 8;

    /** @brief Microcontroller clock output prescaler */
    using RCC_CFGR1_MCOPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO divided by 1 (value: 0)
     *          - B_0x1: MCO divided by 2 (value: 1)
     *          - B_0x2: MCO divided by 4 (value: 2)
     *          - B_0x3: MCO divided by 8 (value: 3)
     *          - B_0x4: MCO divided by 16 (value: 4)
     *          - B_0x5: MCO divided by 32 (value: 5)
     *          - B_0x6: MCO divided by 64 (value: 6)
     *          - B_0x7: MCO divided by 128 (value: 7)
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
        /** @brief MCO divided by 32 */
    constexpr std::uint32_t RCC_CFGR1_MCOPRE_B_0x5 = 5;
        /** @brief MCO divided by 64 */
    constexpr std::uint32_t RCC_CFGR1_MCOPRE_B_0x6 = 6;
        /** @brief MCO divided by 128 */
    constexpr std::uint32_t RCC_CFGR1_MCOPRE_B_0x7 = 7;

    /** @brief RCC clock configuration register 2 */
    using RCC_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB prescaler */
    using RCC_CFGR2_HPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HCLK = SYSCLK not divided (value: 0)
     *          - B_0x1: HCLK = SYSCLK not divided (value: 1)
     *          - B_0x2: HCLK = SYSCLK not divided (value: 2)
     *          - B_0x3: HCLK = SYSCLK not divided (value: 3)
     *          - B_0x4: HCLK = SYSCLK not divided (value: 4)
     *          - B_0x5: HCLK = SYSCLK not divided (value: 5)
     *          - B_0x6: HCLK = SYSCLK not divided (value: 6)
     *          - B_0x7: HCLK = SYSCLK not divided (value: 7)
     *          - B_0x8: HCLK = SYSCLK divided by 2 (value: 8)
     *          - B_0x9: HCLK = SYSCLK divided by 4 (value: 9)
     *          - B_0xA: HCLK = SYSCLK divided by 8 (value: 10)
     *          - B_0xB: HCLK = SYSCLK divided by 16 (value: 11)
     *          - B_0xC: HCLK = SYSCLK divided by 64 (value: 12)
     *          - B_0xD: HCLK = SYSCLK divided by 128 (value: 13)
     *          - B_0xE: HCLK = SYSCLK divided by 256 (value: 14)
     *          - B_0xF: HCLK = SYSCLK divided by 512 (value: 15)
     */
        /** @brief HCLK = SYSCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x0 = 0;
        /** @brief HCLK = SYSCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x1 = 1;
        /** @brief HCLK = SYSCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x2 = 2;
        /** @brief HCLK = SYSCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x3 = 3;
        /** @brief HCLK = SYSCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x4 = 4;
        /** @brief HCLK = SYSCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x5 = 5;
        /** @brief HCLK = SYSCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x6 = 6;
        /** @brief HCLK = SYSCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x7 = 7;
        /** @brief HCLK = SYSCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x8 = 8;
        /** @brief HCLK = SYSCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x9 = 9;
        /** @brief HCLK = SYSCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xA = 10;
        /** @brief HCLK = SYSCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xB = 11;
        /** @brief HCLK = SYSCLK divided by 64 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xC = 12;
        /** @brief HCLK = SYSCLK divided by 128 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xD = 13;
        /** @brief HCLK = SYSCLK divided by 256 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xE = 14;
        /** @brief HCLK = SYSCLK divided by 512 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0xF = 15;

    /** @brief APB1 prescaler */
    using RCC_CFGR2_PPRE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 = HCLK not divided (value: 0)
     *          - B_0x1: PCLK1 = HCLK not divided (value: 1)
     *          - B_0x2: PCLK1 = HCLK not divided (value: 2)
     *          - B_0x3: PCLK1 = HCLK not divided (value: 3)
     *          - B_0x4: PCLK1 = HCLK divided by 2 (value: 4)
     *          - B_0x5: PCLK1 = HCLK divided by 4 (value: 5)
     *          - B_0x6: PCLK1 = HCLK divided by 8 (value: 6)
     *          - B_0x7: PCLK1 = HCLK divided by 16 (value: 7)
     */
        /** @brief PCLK1 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x0 = 0;
        /** @brief PCLK1 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x1 = 1;
        /** @brief PCLK1 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x2 = 2;
        /** @brief PCLK1 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x3 = 3;
        /** @brief PCLK1 = HCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x4 = 4;
        /** @brief PCLK1 = HCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x5 = 5;
        /** @brief PCLK1 = HCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x6 = 6;
        /** @brief PCLK1 = HCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x7 = 7;

    /** @brief APB2 prescaler */
    using RCC_CFGR2_PPRE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK2 = HCLK not divided (value: 0)
     *          - B_0x1: PCLK2 = HCLK not divided (value: 1)
     *          - B_0x2: PCLK2 = HCLK not divided (value: 2)
     *          - B_0x3: PCLK2 = HCLK not divided (value: 3)
     *          - B_0x4: PCLK2 = HCLK divided by 2 (value: 4)
     *          - B_0x5: PCLK2 = HCLK divided by 4 (value: 5)
     *          - B_0x6: PCLK2 = HCLK divided by 8 (value: 6)
     *          - B_0x7: PCLK2 = HCLK divided by 16 (value: 7)
     */
        /** @brief PCLK2 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x0 = 0;
        /** @brief PCLK2 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x1 = 1;
        /** @brief PCLK2 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x2 = 2;
        /** @brief PCLK2 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x3 = 3;
        /** @brief PCLK2 = HCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x4 = 4;
        /** @brief PCLK2 = HCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x5 = 5;
        /** @brief PCLK2 = HCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x6 = 6;
        /** @brief PCLK2 = HCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x7 = 7;

    /** @brief RCC clock configuration register 3 */
    using RCC_CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB3 prescaler */
    using RCC_CFGR3_PPRE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK3 = HCLK not divided (value: 0)
     *          - B_0x1: PCLK3 = HCLK not divided (value: 1)
     *          - B_0x2: PCLK3 = HCLK not divided (value: 2)
     *          - B_0x3: PCLK3 = HCLK not divided (value: 3)
     *          - B_0x4: PCLK3 = HCLK divided by 2 (value: 4)
     *          - B_0x5: PCLK3 = HCLK divided by 4 (value: 5)
     *          - B_0x6: PCLK3 = HCLK divided by 8 (value: 6)
     *          - B_0x7: PCLK3 = HCLK divided by 16 (value: 7)
     */
        /** @brief PCLK3 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x0 = 0;
        /** @brief PCLK3 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x1 = 1;
        /** @brief PCLK3 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x2 = 2;
        /** @brief PCLK3 = HCLK not divided */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x3 = 3;
        /** @brief PCLK3 = HCLK divided by 2 */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x4 = 4;
        /** @brief PCLK3 = HCLK divided by 4 */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x5 = 5;
        /** @brief PCLK3 = HCLK divided by 8 */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x6 = 6;
        /** @brief PCLK3 = HCLK divided by 16 */
    constexpr std::uint32_t RCC_CFGR3_PPRE3_B_0x7 = 7;

    /** @brief RCC clock configuration register 4 */
    using RCC_CFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPOD booster input clock source selection */
    using RCC_CFGR4_BOOSTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock (value: 0)
     *          - B_0x1: MSIS selected as EPOD booster clock source (value: 1)
     *          - B_0x2: HSI16 selected as EPOD booster clock source (value: 2)
     *          - B_0x3: HSE selected as EPOD booster clock source (value: 3)
     */
        /** @brief No clock */
    constexpr std::uint32_t RCC_CFGR4_BOOSTSEL_B_0x0 = 0;
        /** @brief MSIS selected as EPOD booster clock source */
    constexpr std::uint32_t RCC_CFGR4_BOOSTSEL_B_0x1 = 1;
        /** @brief HSI16 selected as EPOD booster clock source */
    constexpr std::uint32_t RCC_CFGR4_BOOSTSEL_B_0x2 = 2;
        /** @brief HSE selected as EPOD booster clock source */
    constexpr std::uint32_t RCC_CFGR4_BOOSTSEL_B_0x3 = 3;

    /** @brief EPOD booster input clock prescaler */
    using RCC_CFGR4_BOOSTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Divided by 1 (bypass) (value: 0)
     *          - B_0x1: Divided by 2 (value: 1)
     *          - B_0x2: Divided by 4 (value: 2)
     *          - B_0x3: Divided by 6 (value: 3)
     *          - B_0x4: Divided by 8 (value: 4)
     *          - B_0x5: Divided by 10 (value: 5)
     *          - B_0x6: Divided by 12 (value: 6)
     *          - B_0x7: Divided by 14 (value: 7)
     *          - B_0x8: Divided by 16 (value: 8)
     */
        /** @brief Divided by 1 (bypass) */
    constexpr std::uint32_t RCC_CFGR4_BOOSTDIV_B_0x0 = 0;
        /** @brief Divided by 2 */
    constexpr std::uint32_t RCC_CFGR4_BOOSTDIV_B_0x1 = 1;
        /** @brief Divided by 4 */
    constexpr std::uint32_t RCC_CFGR4_BOOSTDIV_B_0x2 = 2;
        /** @brief Divided by 6 */
    constexpr std::uint32_t RCC_CFGR4_BOOSTDIV_B_0x3 = 3;
        /** @brief Divided by 8 */
    constexpr std::uint32_t RCC_CFGR4_BOOSTDIV_B_0x4 = 4;
        /** @brief Divided by 10 */
    constexpr std::uint32_t RCC_CFGR4_BOOSTDIV_B_0x5 = 5;
        /** @brief Divided by 12 */
    constexpr std::uint32_t RCC_CFGR4_BOOSTDIV_B_0x6 = 6;
        /** @brief Divided by 14 */
    constexpr std::uint32_t RCC_CFGR4_BOOSTDIV_B_0x7 = 7;
        /** @brief Divided by 16 */
    constexpr std::uint32_t RCC_CFGR4_BOOSTDIV_B_0x8 = 8;

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

    /** @brief MSIRC1 PLL mode ready interrupt enable */
    using RCC_CIER_MSIPLL1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC1 PLL mode lock interrupt disabled (value: 0)
     *          - B_0x1: MSIRC1 PLL mode lock interrupt enabled (value: 1)
     */
        /** @brief MSIRC1 PLL mode lock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_MSIPLL1RDYIE_B_0x0 = 0;
        /** @brief MSIRC1 PLL mode lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_MSIPLL1RDYIE_B_0x1 = 1;

    /** @brief MSIRC0 PLL mode ready interrupt enable */
    using RCC_CIER_MSIPLL0RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRC0 PLL mode lock interrupt disabled (value: 0)
     *          - B_0x1: MSIRC0 PLL mode lock interrupt enabled (value: 1)
     */
        /** @brief MSIRC0 PLL mode lock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_MSIPLL0RDYIE_B_0x0 = 0;
        /** @brief MSIRC0 PLL mode lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_MSIPLL0RDYIE_B_0x1 = 1;

    /** @brief MSI PLL mode with LSE unlock interrupt enable */
    using RCC_CIER_MSIPLLUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI PLL mode with LSE unlock interrupt disabled (value: 0)
     *          - B_0x1: MSI PLL mode with LSE unlock interrupt enabled (value: 1)
     */
        /** @brief MSI PLL mode with LSE unlock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_MSIPLLUIE_B_0x0 = 0;
        /** @brief MSI PLL mode with LSE unlock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_MSIPLLUIE_B_0x1 = 1;

    /** @brief MSI PLL mode with HSE unlock interrupt enable */
    using RCC_CIER_MSIPLLHSUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI PLL mode with HSE unlock interrupt disabled (value: 0)
     *          - B_0x1: MSI PLL mode with HSE unlock interrupt enabled (value: 1)
     */
        /** @brief MSI PLL mode with HSE unlock interrupt disabled */
    constexpr std::uint32_t RCC_CIER_MSIPLLHSUIE_B_0x0 = 0;
        /** @brief MSI PLL mode with HSE unlock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_MSIPLLHSUIE_B_0x1 = 1;

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

    /** @brief LSE clock security system interrupt enable */
    using RCC_CIER_LSECSSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE CSS interrupt disabled (value: 0)
     *          - B_0x1: LSE CSS interrupt enabled (value: 1)
     */
        /** @brief LSE CSS interrupt disabled */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x0 = 0;
        /** @brief LSE CSS interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x1 = 1;

    /** @brief RCC clock interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt flag */
    using RCC_CIFR_LSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No LSI ready interrupt (value: 0)
     *          - B_0x1: LSI ready interrupt (value: 1)
     */
        /** @brief No LSI ready interrupt */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x0 = 0;
        /** @brief LSI ready interrupt */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No LSE ready interrupt (value: 0)
     *          - B_0x1: LSE ready interrupt (value: 1)
     */
        /** @brief No LSE ready interrupt */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief LSE ready interrupt */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief MSIS ready interrupt flag */
    using RCC_CIFR_MSISRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MSIS ready interrupt (value: 0)
     *          - B_0x1: MSIS ready interrupt (value: 1)
     */
        /** @brief No MSIS ready interrupt */
    constexpr std::uint32_t RCC_CIFR_MSISRDYF_B_0x0 = 0;
        /** @brief MSIS ready interrupt */
    constexpr std::uint32_t RCC_CIFR_MSISRDYF_B_0x1 = 1;

    /** @brief HSI16 ready interrupt flag */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No HSI16 ready interrupt (value: 0)
     *          - B_0x1: HSI16 ready interrupt (value: 1)
     */
        /** @brief No HSI16 ready interrupt */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief HSI16 ready interrupt */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No HSE ready interrupt (value: 0)
     *          - B_0x1: HSE ready interrupt (value: 1)
     */
        /** @brief No HSE ready interrupt */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief HSE ready interrupt */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief HSI48 ready interrupt flag */
    using RCC_CIFR_HSI48RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No HSI48 ready interrupt (value: 0)
     *          - B_0x1: HSI48 ready interrupt (value: 1)
     */
        /** @brief No HSI48 ready interrupt */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x0 = 0;
        /** @brief HSI48 ready interrupt */
    constexpr std::uint32_t RCC_CIFR_HSI48RDYF_B_0x1 = 1;

    /** @brief MSIRC1 PLL mode ready interrupt enable */
    using RCC_CIFR_MSIPLL1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MSIRC1 PLL mode ready interrupt (value: 0)
     *          - B_0x1: MSIRC1 PLL mode ready interrupt (value: 1)
     */
        /** @brief No MSIRC1 PLL mode ready interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIPLL1RDYF_B_0x0 = 0;
        /** @brief MSIRC1 PLL mode ready interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIPLL1RDYF_B_0x1 = 1;

    /** @brief MSIRC0 PLL mode ready interrupt flag */
    using RCC_CIFR_MSIPLL0RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MSIRC0 PLL mode ready interrupt (value: 0)
     *          - B_0x1: MSIRC0 PLL mode ready interrupt (value: 1)
     */
        /** @brief No MSIRC0 PLL mode ready interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIPLL0RDYF_B_0x0 = 0;
        /** @brief MSIRC0 PLL mode ready interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIPLL0RDYF_B_0x1 = 1;

    /** @brief MSI PLL mode with LSE unlock interrupt flag */
    using RCC_CIFR_MSIPLLUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MSI PLL mode with LSE unlock interrupt (value: 0)
     *          - B_0x1: MSI PLL mode with LSE unlock interrupt (value: 1)
     */
        /** @brief No MSI PLL mode with LSE unlock interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIPLLUF_B_0x0 = 0;
        /** @brief MSI PLL mode with LSE unlock interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIPLLUF_B_0x1 = 1;

    /** @brief MSI PLL mode with HSE unlock interrupt flag */
    using RCC_CIFR_MSIPLLHSUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MSI PLL mode with HSE unlock interrupt (value: 0)
     *          - B_0x1: MSI PLL mode with HSE unlock interrupt (value: 1)
     */
        /** @brief No MSI PLL mode with HSE unlock interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIPLLHSUF_B_0x0 = 0;
        /** @brief MSI PLL mode with HSE unlock interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIPLLHSUF_B_0x1 = 1;

    /** @brief Clock security system interrupt flag */
    using RCC_CIFR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No HSE clock security interrupt (value: 0)
     *          - B_0x1: HSE clock security interrupt (value: 1)
     */
        /** @brief No HSE clock security interrupt */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x0 = 0;
        /** @brief HSE clock security interrupt */
    constexpr std::uint32_t RCC_CIFR_CSSF_B_0x1 = 1;

    /** @brief MSIK ready interrupt flag */
    using RCC_CIFR_MSIKRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No MSIK oscillator clock ready interrupt (value: 0)
     *          - B_0x1: MSIK oscillator clock ready interrupt (value: 1)
     */
        /** @brief No MSIK oscillator clock ready interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIKRDYF_B_0x0 = 0;
        /** @brief MSIK oscillator clock ready interrupt */
    constexpr std::uint32_t RCC_CIFR_MSIKRDYF_B_0x1 = 1;

    /** @brief LSE clock security system interrupt flag */
    using RCC_CIFR_LSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No LSE clock security interrupt (value: 0)
     *          - B_0x1: LSE clock security interrupt (value: 1)
     */
        /** @brief No LSE clock security interrupt */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x0 = 0;
        /** @brief LSE clock security interrupt */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x1 = 1;

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
    /** @brief MSIRC1 PLL mode ready interrupt clear */
    using RCC_CICR_MSIPLL1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIRC0 PLL mode ready interrupt clear */
    using RCC_CICR_MSIPLL0RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI PLL mode with LSE unlock interrupt clear */
    using RCC_CICR_MSIPLLUC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI PLL mode with HSE unlock interrupt clear */
    using RCC_CICR_MSIPLLHSUC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock security system interrupt clear */
    using RCC_CICR_CSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSIK oscillator ready interrupt clear */
    using RCC_CICR_MSIKRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE CSS interrupt clear */
    using RCC_CICR_LSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 peripheral reset register 1 */
    using RCC_AHB1RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 reset */
    using RCC_AHB1RSTR1_GPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset GPDMA1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR1_GPDMA1RST_B_0x0 = 0;
        /** @brief Reset GPDMA1 */
    constexpr std::uint32_t RCC_AHB1RSTR1_GPDMA1RST_B_0x1 = 1;

    /** @brief ADF1 reset */
    using RCC_AHB1RSTR1_ADF1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset ADF1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR1_ADF1RST_B_0x0 = 0;
        /** @brief Reset ADF1 */
    constexpr std::uint32_t RCC_AHB1RSTR1_ADF1RST_B_0x1 = 1;

    /** @brief HSP1 reset */
    using RCC_AHB1RSTR1_HSP1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset HSP1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR1_HSP1RST_B_0x0 = 0;
        /** @brief Reset HSP1 */
    constexpr std::uint32_t RCC_AHB1RSTR1_HSP1RST_B_0x1 = 1;

    /** @brief CRC reset */
    using RCC_AHB1RSTR1_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CRC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR1_CRCRST_B_0x0 = 0;
        /** @brief Reset CRC */
    constexpr std::uint32_t RCC_AHB1RSTR1_CRCRST_B_0x1 = 1;

    /** @brief TSC reset */
    using RCC_AHB1RSTR1_TSCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TSC (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR1_TSCRST_B_0x0 = 0;
        /** @brief Reset TSC */
    constexpr std::uint32_t RCC_AHB1RSTR1_TSCRST_B_0x1 = 1;

    /** @brief RAMCFG reset */
    using RCC_AHB1RSTR1_RAMCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset RAMCFG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB1RSTR1_RAMCFGRST_B_0x0 = 0;
        /** @brief Reset RAMCFG */
    constexpr std::uint32_t RCC_AHB1RSTR1_RAMCFGRST_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral reset register 1 */
    using RCC_AHB2RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port i reset (i = H to A) */
    using RCC_AHB2RSTR1_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I/O port i (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOARST_B_0x0 = 0;
        /** @brief Reset I/O port i */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOARST_B_0x1 = 1;

    /** @brief I/O port i reset (i = H to A) */
    using RCC_AHB2RSTR1_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I/O port i (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOBRST_B_0x0 = 0;
        /** @brief Reset I/O port i */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOBRST_B_0x1 = 1;

    /** @brief I/O port i reset (i = H to A) */
    using RCC_AHB2RSTR1_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I/O port i (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOCRST_B_0x0 = 0;
        /** @brief Reset I/O port i */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOCRST_B_0x1 = 1;

    /** @brief I/O port i reset (i = H to A) */
    using RCC_AHB2RSTR1_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I/O port i (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIODRST_B_0x0 = 0;
        /** @brief Reset I/O port i */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIODRST_B_0x1 = 1;

    /** @brief I/O port i reset (i = H to A) */
    using RCC_AHB2RSTR1_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I/O port i (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOERST_B_0x0 = 0;
        /** @brief Reset I/O port i */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOERST_B_0x1 = 1;

    /** @brief I/O port i reset (i = H to A) */
    using RCC_AHB2RSTR1_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I/O port i (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOFRST_B_0x0 = 0;
        /** @brief Reset I/O port i */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOFRST_B_0x1 = 1;

    /** @brief I/O port i reset (i = H to A) */
    using RCC_AHB2RSTR1_GPIOGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I/O port i (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOGRST_B_0x0 = 0;
        /** @brief Reset I/O port i */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOGRST_B_0x1 = 1;

    /** @brief I/O port i reset (i = H to A) */
    using RCC_AHB2RSTR1_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I/O port i (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOHRST_B_0x0 = 0;
        /** @brief Reset I/O port i */
    constexpr std::uint32_t RCC_AHB2RSTR1_GPIOHRST_B_0x1 = 1;

    /** @brief ADC12 reset */
    using RCC_AHB2RSTR1_ADC12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset ADC12 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_ADC12RST_B_0x0 = 0;
        /** @brief Reset ADC12 */
    constexpr std::uint32_t RCC_AHB2RSTR1_ADC12RST_B_0x1 = 1;

    /** @brief DAC1 reset */
    using RCC_AHB2RSTR1_DAC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset DAC1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_DAC1RST_B_0x0 = 0;
        /** @brief Reset DAC1 */
    constexpr std::uint32_t RCC_AHB2RSTR1_DAC1RST_B_0x1 = 1;

    /** @brief AES hardware accelerator reset */
    using RCC_AHB2RSTR1_AESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset AES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_AESRST_B_0x0 = 0;
        /** @brief Reset AES */
    constexpr std::uint32_t RCC_AHB2RSTR1_AESRST_B_0x1 = 1;

    /** @brief HASH reset */
    using RCC_AHB2RSTR1_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset HASH (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_HASHRST_B_0x0 = 0;
        /** @brief Reset HASH */
    constexpr std::uint32_t RCC_AHB2RSTR1_HASHRST_B_0x1 = 1;

    /** @brief Random number generator reset */
    using RCC_AHB2RSTR1_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset RNG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_RNGRST_B_0x0 = 0;
        /** @brief Reset RNG */
    constexpr std::uint32_t RCC_AHB2RSTR1_RNGRST_B_0x1 = 1;

    /** @brief PKA reset */
    using RCC_AHB2RSTR1_PKARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset PKA (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_PKARST_B_0x0 = 0;
        /** @brief Reset PKA */
    constexpr std::uint32_t RCC_AHB2RSTR1_PKARST_B_0x1 = 1;

    /** @brief SAES hardware accelerator reset */
    using RCC_AHB2RSTR1_SAESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SAES (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_SAESRST_B_0x0 = 0;
        /** @brief Reset SAES */
    constexpr std::uint32_t RCC_AHB2RSTR1_SAESRST_B_0x1 = 1;

    /** @brief CCB reset */
    using RCC_AHB2RSTR1_CCBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset CCB (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_CCBRST_B_0x0 = 0;
        /** @brief Reset CCB */
    constexpr std::uint32_t RCC_AHB2RSTR1_CCBRST_B_0x1 = 1;

    /** @brief SDMMC1 reset */
    using RCC_AHB2RSTR1_SDMMC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SDMMC1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR1_SDMMC1RST_B_0x0 = 0;
        /** @brief Reset SDMMC1 */
    constexpr std::uint32_t RCC_AHB2RSTR1_SDMMC1RST_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral reset register 2 */
    using RCC_AHB2RSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI1 reset */
    using RCC_AHB2RSTR2_OCTOSPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset OCTOSPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_AHB2RSTR2_OCTOSPI1RST_B_0x0 = 0;
        /** @brief Reset OCTOSPI1 */
    constexpr std::uint32_t RCC_AHB2RSTR2_OCTOSPI1RST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 1 */
    using RCC_APB1RSTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMj reset */
    using RCC_APB1RSTR1_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIMj (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x0 = 0;
        /** @brief Reset TIMj */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM2RST_B_0x1 = 1;

    /** @brief TIMj reset */
    using RCC_APB1RSTR1_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIMj (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x0 = 0;
        /** @brief Reset TIMj */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM3RST_B_0x1 = 1;

    /** @brief TIMj reset */
    using RCC_APB1RSTR1_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIMj (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x0 = 0;
        /** @brief Reset TIMj */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM4RST_B_0x1 = 1;

    /** @brief TIMj reset */
    using RCC_APB1RSTR1_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIMj (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM6RST_B_0x0 = 0;
        /** @brief Reset TIMj */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM6RST_B_0x1 = 1;

    /** @brief TIMj reset */
    using RCC_APB1RSTR1_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIMj (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM7RST_B_0x0 = 0;
        /** @brief Reset TIMj */
    constexpr std::uint32_t RCC_APB1RSTR1_TIM7RST_B_0x1 = 1;

    /** @brief SPI3 reset */
    using RCC_APB1RSTR1_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI3RST_B_0x0 = 0;
        /** @brief Reset SPI3 */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI3RST_B_0x1 = 1;

    /** @brief SPI4 reset */
    using RCC_APB1RSTR1_SPI4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI4RST_B_0x0 = 0;
        /** @brief Reset SPI4 */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI4RST_B_0x1 = 1;

    /** @brief SPI2 reset */
    using RCC_APB1RSTR1_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x0 = 0;
        /** @brief Reset SPI2 */
    constexpr std::uint32_t RCC_APB1RSTR1_SPI2RST_B_0x1 = 1;

    /** @brief USART2 reset */
    using RCC_APB1RSTR1_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x0 = 0;
        /** @brief Reset USART2 */
    constexpr std::uint32_t RCC_APB1RSTR1_USART2RST_B_0x1 = 1;

    /** @brief USART3 reset */
    using RCC_APB1RSTR1_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x0 = 0;
        /** @brief Reset USART3 */
    constexpr std::uint32_t RCC_APB1RSTR1_USART3RST_B_0x1 = 1;

    /** @brief UART4 reset */
    using RCC_APB1RSTR1_UART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UART4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_UART4RST_B_0x0 = 0;
        /** @brief Reset UART4 */
    constexpr std::uint32_t RCC_APB1RSTR1_UART4RST_B_0x1 = 1;

    /** @brief UART5 reset */
    using RCC_APB1RSTR1_UART5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset UART5 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_UART5RST_B_0x0 = 0;
        /** @brief Reset UART5 */
    constexpr std::uint32_t RCC_APB1RSTR1_UART5RST_B_0x1 = 1;

    /** @brief I2C1 reset */
    using RCC_APB1RSTR1_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I2C1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x0 = 0;
        /** @brief Reset the I2C1 */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C1RST_B_0x1 = 1;

    /** @brief I2C2 reset */
    using RCC_APB1RSTR1_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I2C2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x0 = 0;
        /** @brief Reset the I2C2 */
    constexpr std::uint32_t RCC_APB1RSTR1_I2C2RST_B_0x1 = 1;

    /** @brief I3C1 reset */
    using RCC_APB1RSTR1_I3C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the I3C1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_I3C1RST_B_0x0 = 0;
        /** @brief Reset the I3C1 */
    constexpr std::uint32_t RCC_APB1RSTR1_I3C1RST_B_0x1 = 1;

    /** @brief CRS reset */
    using RCC_APB1RSTR1_CRSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the CRS (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_CRSRST_B_0x0 = 0;
        /** @brief Reset the CRS */
    constexpr std::uint32_t RCC_APB1RSTR1_CRSRST_B_0x1 = 1;

    /** @brief OPAMP reset */
    using RCC_APB1RSTR1_OPAMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset OPAMP (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_OPAMPRST_B_0x0 = 0;
        /** @brief Reset OPAMP */
    constexpr std::uint32_t RCC_APB1RSTR1_OPAMPRST_B_0x1 = 1;

    /** @brief VREFBUF reset */
    using RCC_APB1RSTR1_VREFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset VREFBUF (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR1_VREFRST_B_0x0 = 0;
        /** @brief Reset VREFBUF */
    constexpr std::uint32_t RCC_APB1RSTR1_VREFRST_B_0x1 = 1;

    /** @brief RCC APB1 peripheral reset register 2 */
    using RCC_APB1RSTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 reset */
    using RCC_APB1RSTR2_I2C4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C4 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C4RST_B_0x0 = 0;
        /** @brief Reset I2C4 */
    constexpr std::uint32_t RCC_APB1RSTR2_I2C4RST_B_0x1 = 1;

    /** @brief LPTIM2 reset */
    using RCC_APB1RSTR2_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_LPTIM2RST_B_0x0 = 0;
        /** @brief Reset LPTIM2 */
    constexpr std::uint32_t RCC_APB1RSTR2_LPTIM2RST_B_0x1 = 1;

    /** @brief FDCAN1 and FDCAN2 reset */
    using RCC_APB1RSTR2_FDCANRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset FDCAN1 and FDCAN2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB1RSTR2_FDCANRST_B_0x0 = 0;
        /** @brief Reset FDCAN1 and FDCAN2 */
    constexpr std::uint32_t RCC_APB1RSTR2_FDCANRST_B_0x1 = 1;

    /** @brief RCC APB2 peripheral reset register */
    using RCC_APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 reset */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief Reset TIM1 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief SPI1 reset */
    using RCC_APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SPI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief Reset SPI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief TIM8 reset */
    using RCC_APB2RSTR_TIM8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM8 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x0 = 0;
        /** @brief Reset TIM8 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x1 = 1;

    /** @brief USART1 reset */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief Reset USART1 */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief TIM12 reset */
    using RCC_APB2RSTR_TIM12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIM12 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM12RST_B_0x0 = 0;
        /** @brief Reset TIM12 */
    constexpr std::uint32_t RCC_APB2RSTR_TIM12RST_B_0x1 = 1;

    /** @brief TIMi reset */
    using RCC_APB2RSTR_TIM15RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIMi (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x0 = 0;
        /** @brief Reset TIMi */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x1 = 1;

    /** @brief TIMi reset */
    using RCC_APB2RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIMi (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x0 = 0;
        /** @brief Reset TIMi */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x1 = 1;

    /** @brief TIMi reset */
    using RCC_APB2RSTR_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset TIMi (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x0 = 0;
        /** @brief Reset TIMi */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x1 = 1;

    /** @brief SAI1 reset */
    using RCC_APB2RSTR_SAI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SAI1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x0 = 0;
        /** @brief Reset SAI1 */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x1 = 1;

    /** @brief USB1 reset */
    using RCC_APB2RSTR_USB1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset USB1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_USB1RST_B_0x0 = 0;
        /** @brief Reset USB1 */
    constexpr std::uint32_t RCC_APB2RSTR_USB1RST_B_0x1 = 1;

    /** @brief I3C2 reset */
    using RCC_APB2RSTR_I3C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I3C2 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB2RSTR_I3C2RST_B_0x0 = 0;
        /** @brief Reset I3C2 */
    constexpr std::uint32_t RCC_APB2RSTR_I3C2RST_B_0x1 = 1;

    /** @brief RCC APB3 peripheral reset register */
    using RCC_APB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG reset */
    using RCC_APB3RSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset SYSCFG (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_SYSCFGRST_B_0x0 = 0;
        /** @brief Reset SYSCFG */
    constexpr std::uint32_t RCC_APB3RSTR_SYSCFGRST_B_0x1 = 1;

    /** @brief LPUART1 reset */
    using RCC_APB3RSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPUART1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_LPUART1RST_B_0x0 = 0;
        /** @brief Reset LPUART1 */
    constexpr std::uint32_t RCC_APB3RSTR_LPUART1RST_B_0x1 = 1;

    /** @brief I2C3 reset */
    using RCC_APB3RSTR_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset I2C3 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_I2C3RST_B_0x0 = 0;
        /** @brief Reset I2C3 */
    constexpr std::uint32_t RCC_APB3RSTR_I2C3RST_B_0x1 = 1;

    /** @brief LPTIM1 reset */
    using RCC_APB3RSTR_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIM1 (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM1RST_B_0x0 = 0;
        /** @brief Reset LPTIM1 */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM1RST_B_0x1 = 1;

    /** @brief LPTIMi reset */
    using RCC_APB3RSTR_LPTIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIMi (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM3RST_B_0x0 = 0;
        /** @brief Reset LPTIMi */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM3RST_B_0x1 = 1;

    /** @brief LPTIMi reset */
    using RCC_APB3RSTR_LPTIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset LPTIMi (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM4RST_B_0x0 = 0;
        /** @brief Reset LPTIMi */
    constexpr std::uint32_t RCC_APB3RSTR_LPTIM4RST_B_0x1 = 1;

    /** @brief COMP reset */
    using RCC_APB3RSTR_COMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset COMP (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_APB3RSTR_COMPRST_B_0x0 = 0;
        /** @brief Reset COMP */
    constexpr std::uint32_t RCC_APB3RSTR_COMPRST_B_0x1 = 1;

    /** @brief RCC AHB1 peripheral clock enable register 1 */
    using RCC_AHB1ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable */
    using RCC_AHB1ENR1_GPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 clock disabled (value: 0)
     *          - B_0x1: GPDMA1 clock enabled (value: 1)
     */
        /** @brief GPDMA1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_GPDMA1EN_B_0x0 = 0;
        /** @brief GPDMA1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_GPDMA1EN_B_0x1 = 1;

    /** @brief ADF1 clock enable */
    using RCC_AHB1ENR1_ADF1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF1 clock disabled (value: 0)
     *          - B_0x1: ADF1 clock enabled (value: 1)
     */
        /** @brief ADF1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_ADF1EN_B_0x0 = 0;
        /** @brief ADF1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_ADF1EN_B_0x1 = 1;

    /** @brief HSP1 clock enable */
    using RCC_AHB1ENR1_HSP1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSP1 clock disabled (value: 0)
     *          - B_0x1: HSP1 clock enabled (value: 1)
     */
        /** @brief HSP1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_HSP1EN_B_0x0 = 0;
        /** @brief HSP1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_HSP1EN_B_0x1 = 1;

    /** @brief FLASH clock enable */
    using RCC_AHB1ENR1_FLASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH clock disabled (value: 0)
     *          - B_0x1: FLASH clock enabled (value: 1)
     */
        /** @brief FLASH clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_FLASHEN_B_0x0 = 0;
        /** @brief FLASH clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_FLASHEN_B_0x1 = 1;

    /** @brief CRC clock enable */
    using RCC_AHB1ENR1_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC clock disabled (value: 0)
     *          - B_0x1: CRC clock enabled (value: 1)
     */
        /** @brief CRC clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_CRCEN_B_0x0 = 0;
        /** @brief CRC clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_CRCEN_B_0x1 = 1;

    /** @brief Touch sensing controller clock enable */
    using RCC_AHB1ENR1_TSCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC clock disabled (value: 0)
     *          - B_0x1: TSC clock enabled (value: 1)
     */
        /** @brief TSC clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_TSCEN_B_0x0 = 0;
        /** @brief TSC clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_TSCEN_B_0x1 = 1;

    /** @brief RAMCFG clock enable */
    using RCC_AHB1ENR1_RAMCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG clock disabled (value: 0)
     *          - B_0x1: RAMCFG clock enabled (value: 1)
     */
        /** @brief RAMCFG clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_RAMCFGEN_B_0x0 = 0;
        /** @brief RAMCFG clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_RAMCFGEN_B_0x1 = 1;

    /** @brief GTZC1 clock enable */
    using RCC_AHB1ENR1_GTZC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 clock disabled (value: 0)
     *          - B_0x1: GTZC1 clock enabled (value: 1)
     */
        /** @brief GTZC1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_GTZC1EN_B_0x0 = 0;
        /** @brief GTZC1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_GTZC1EN_B_0x1 = 1;

    /** @brief SRAM4 clock enable */
    using RCC_AHB1ENR1_SRAM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 clock disabled (value: 0)
     *          - B_0x1: SRAM4 clock enabled (value: 1)
     */
        /** @brief SRAM4 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_SRAM4EN_B_0x0 = 0;
        /** @brief SRAM4 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_SRAM4EN_B_0x1 = 1;

    /** @brief SRAM1 clock enable */
    using RCC_AHB1ENR1_SRAM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 clock disabled (value: 0)
     *          - B_0x1: SRAM1 clock enabled (value: 1)
     */
        /** @brief SRAM1 clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR1_SRAM1EN_B_0x0 = 0;
        /** @brief SRAM1 clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR1_SRAM1EN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock enable register 1 */
    using RCC_AHB2ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port i clock enable (i = H to A) */
    using RCC_AHB2ENR1_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled (value: 0)
     *          - B_0x1: I/O port i clock enabled (value: 1)
     */
        /** @brief I/O port i clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOAEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOAEN_B_0x1 = 1;

    /** @brief I/O port i clock enable (i = H to A) */
    using RCC_AHB2ENR1_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled (value: 0)
     *          - B_0x1: I/O port i clock enabled (value: 1)
     */
        /** @brief I/O port i clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOBEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOBEN_B_0x1 = 1;

    /** @brief I/O port i clock enable (i = H to A) */
    using RCC_AHB2ENR1_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled (value: 0)
     *          - B_0x1: I/O port i clock enabled (value: 1)
     */
        /** @brief I/O port i clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOCEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOCEN_B_0x1 = 1;

    /** @brief I/O port i clock enable (i = H to A) */
    using RCC_AHB2ENR1_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled (value: 0)
     *          - B_0x1: I/O port i clock enabled (value: 1)
     */
        /** @brief I/O port i clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIODEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIODEN_B_0x1 = 1;

    /** @brief I/O port i clock enable (i = H to A) */
    using RCC_AHB2ENR1_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled (value: 0)
     *          - B_0x1: I/O port i clock enabled (value: 1)
     */
        /** @brief I/O port i clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOEEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOEEN_B_0x1 = 1;

    /** @brief I/O port i clock enable (i = H to A) */
    using RCC_AHB2ENR1_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled (value: 0)
     *          - B_0x1: I/O port i clock enabled (value: 1)
     */
        /** @brief I/O port i clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOFEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOFEN_B_0x1 = 1;

    /** @brief I/O port i clock enable (i = H to A) */
    using RCC_AHB2ENR1_GPIOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled (value: 0)
     *          - B_0x1: I/O port i clock enabled (value: 1)
     */
        /** @brief I/O port i clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOGEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOGEN_B_0x1 = 1;

    /** @brief I/O port i clock enable (i = H to A) */
    using RCC_AHB2ENR1_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled (value: 0)
     *          - B_0x1: I/O port i clock enabled (value: 1)
     */
        /** @brief I/O port i clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOHEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_GPIOHEN_B_0x1 = 1;

    /** @brief ADC12 clock enable */
    using RCC_AHB2ENR1_ADC12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC12 clock disabled (value: 0)
     *          - B_0x1: ADC12 clock enabled (value: 1)
     */
        /** @brief ADC12 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_ADC12EN_B_0x0 = 0;
        /** @brief ADC12 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_ADC12EN_B_0x1 = 1;

    /** @brief DAC1 clock enable */
    using RCC_AHB2ENR1_DAC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 clock disabled (value: 0)
     *          - B_0x1: DAC1 clock enabled (value: 1)
     */
        /** @brief DAC1 clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_DAC1EN_B_0x0 = 0;
        /** @brief DAC1 clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_DAC1EN_B_0x1 = 1;

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

    /** @brief CCB clock enable */
    using RCC_AHB2ENR1_CCBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCB clock disabled (value: 0)
     *          - B_0x1: CCB clock enabled (value: 1)
     */
        /** @brief CCB clock disabled */
    constexpr std::uint32_t RCC_AHB2ENR1_CCBEN_B_0x0 = 0;
        /** @brief CCB clock enabled */
    constexpr std::uint32_t RCC_AHB2ENR1_CCBEN_B_0x1 = 1;

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

    /** @brief RCC AHB1 peripheral clock enable register 2 */
    using RCC_AHB1ENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR clock enable */
    using RCC_AHB1ENR2_PWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR clock disabled (value: 0)
     *          - B_0x1: PWR clock enabled (value: 1)
     */
        /** @brief PWR clock disabled */
    constexpr std::uint32_t RCC_AHB1ENR2_PWREN_B_0x0 = 0;
        /** @brief PWR clock enabled */
    constexpr std::uint32_t RCC_AHB1ENR2_PWREN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable register 1 */
    using RCC_APB1ENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMj clock enable */
    using RCC_APB1ENR1_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled (value: 0)
     *          - B_0x1: TIMj clock enabled (value: 1)
     */
        /** @brief TIMj clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x0 = 0;
        /** @brief TIMj clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM2EN_B_0x1 = 1;

    /** @brief TIMj clock enable */
    using RCC_APB1ENR1_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled (value: 0)
     *          - B_0x1: TIMj clock enabled (value: 1)
     */
        /** @brief TIMj clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x0 = 0;
        /** @brief TIMj clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM3EN_B_0x1 = 1;

    /** @brief TIMj clock enable */
    using RCC_APB1ENR1_TIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled (value: 0)
     *          - B_0x1: TIMj clock enabled (value: 1)
     */
        /** @brief TIMj clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x0 = 0;
        /** @brief TIMj clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM4EN_B_0x1 = 1;

    /** @brief TIMj clock enable */
    using RCC_APB1ENR1_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled (value: 0)
     *          - B_0x1: TIMj clock enabled (value: 1)
     */
        /** @brief TIMj clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM6EN_B_0x0 = 0;
        /** @brief TIMj clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM6EN_B_0x1 = 1;

    /** @brief TIMj clock enable */
    using RCC_APB1ENR1_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled (value: 0)
     *          - B_0x1: TIMj clock enabled (value: 1)
     */
        /** @brief TIMj clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM7EN_B_0x0 = 0;
        /** @brief TIMj clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_TIM7EN_B_0x1 = 1;

    /** @brief SPI3 clock enable */
    using RCC_APB1ENR1_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 clock disabled (value: 0)
     *          - B_0x1: SPI3 clock enabled (value: 1)
     */
        /** @brief SPI3 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI3EN_B_0x1 = 1;

    /** @brief SPI4 clock enable */
    using RCC_APB1ENR1_SPI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 clock disabled (value: 0)
     *          - B_0x1: SPI4 clock enabled (value: 1)
     */
        /** @brief SPI4 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI4EN_B_0x0 = 0;
        /** @brief SPI4 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_SPI4EN_B_0x1 = 1;

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

    /** @brief I3C1 clock enable */
    using RCC_APB1ENR1_I3C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 clock disabled (value: 0)
     *          - B_0x1: I3C1 clock enabled (value: 1)
     */
        /** @brief I3C1 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_I3C1EN_B_0x0 = 0;
        /** @brief I3C1 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_I3C1EN_B_0x1 = 1;

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

    /** @brief OPAMP clock enable */
    using RCC_APB1ENR1_OPAMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP clock disabled (value: 0)
     *          - B_0x1: OPAMP clock enabled (value: 1)
     */
        /** @brief OPAMP clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_OPAMPEN_B_0x0 = 0;
        /** @brief OPAMP clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_OPAMPEN_B_0x1 = 1;

    /** @brief VREFBUF clock enable */
    using RCC_APB1ENR1_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF clock disabled (value: 0)
     *          - B_0x1: VREFBUF clock enabled (value: 1)
     */
        /** @brief VREFBUF clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_VREFEN_B_0x0 = 0;
        /** @brief VREFBUF clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_VREFEN_B_0x1 = 1;

    /** @brief RTC and TAMP APB clock enable */
    using RCC_APB1ENR1_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC and TAMP APB clock disabled (value: 0)
     *          - B_0x1: RTC and TAMP APB clock enabled (value: 1)
     */
        /** @brief RTC and TAMP APB clock disabled */
    constexpr std::uint32_t RCC_APB1ENR1_RTCAPBEN_B_0x0 = 0;
        /** @brief RTC and TAMP APB clock enabled */
    constexpr std::uint32_t RCC_APB1ENR1_RTCAPBEN_B_0x1 = 1;

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

    /** @brief FDCAN1 and FDCAN2 clock enable */
    using RCC_APB1ENR2_FDCANEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 and FDCAN2 clock disabled (value: 0)
     *          - B_0x1: FDCAN1 and FDCAN2 clock enabled (value: 1)
     */
        /** @brief FDCAN1 and FDCAN2 clock disabled */
    constexpr std::uint32_t RCC_APB1ENR2_FDCANEN_B_0x0 = 0;
        /** @brief FDCAN1 and FDCAN2 clock enabled */
    constexpr std::uint32_t RCC_APB1ENR2_FDCANEN_B_0x1 = 1;

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

    /** @brief TIM12 clock enable */
    using RCC_APB2ENR_TIM12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 clock disabled (value: 0)
     *          - B_0x1: TIM12 clock enabled (value: 1)
     */
        /** @brief TIM12 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM12EN_B_0x0 = 0;
        /** @brief TIM12 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM12EN_B_0x1 = 1;

    /** @brief TIMi clock enable */
    using RCC_APB2ENR_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMi clock disabled (value: 0)
     *          - B_0x1: TIMi clock enabled (value: 1)
     */
        /** @brief TIMi clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x0 = 0;
        /** @brief TIMi clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x1 = 1;

    /** @brief TIMi clock enable */
    using RCC_APB2ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMi clock disabled (value: 0)
     *          - B_0x1: TIMi clock enabled (value: 1)
     */
        /** @brief TIMi clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x0 = 0;
        /** @brief TIMi clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x1 = 1;

    /** @brief TIMi clock enable */
    using RCC_APB2ENR_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMi clock disabled (value: 0)
     *          - B_0x1: TIMi clock enabled (value: 1)
     */
        /** @brief TIMi clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x0 = 0;
        /** @brief TIMi clock enabled */
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

    /** @brief USB1 clock enable */
    using RCC_APB2ENR_USB1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB1 clock disabled (value: 0)
     *          - B_0x1: USB1 clock enabled (value: 1)
     */
        /** @brief USB1 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_USB1EN_B_0x0 = 0;
        /** @brief USB1 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_USB1EN_B_0x1 = 1;

    /** @brief I3C2 clock enable */
    using RCC_APB2ENR_I3C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2 clock disabled (value: 0)
     *          - B_0x1: I3C2 clock enabled (value: 1)
     */
        /** @brief I3C2 clock disabled */
    constexpr std::uint32_t RCC_APB2ENR_I3C2EN_B_0x0 = 0;
        /** @brief I3C2 clock enabled */
    constexpr std::uint32_t RCC_APB2ENR_I3C2EN_B_0x1 = 1;

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

    /** @brief LPTIMi clock enable */
    using RCC_APB3ENR_LPTIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIMi clock disabled (value: 0)
     *          - B_0x1: LPTIMi clock enabled (value: 1)
     */
        /** @brief LPTIMi clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM3EN_B_0x0 = 0;
        /** @brief LPTIMi clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM3EN_B_0x1 = 1;

    /** @brief LPTIMi clock enable */
    using RCC_APB3ENR_LPTIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIMi clock disabled (value: 0)
     *          - B_0x1: LPTIMi clock enabled (value: 1)
     */
        /** @brief LPTIMi clock disabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM4EN_B_0x0 = 0;
        /** @brief LPTIMi clock enabled */
    constexpr std::uint32_t RCC_APB3ENR_LPTIM4EN_B_0x1 = 1;

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

    /** @brief RCC AHB1 peripheral clock enable in Sleep mode register */
    using RCC_AHB1SLPENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable during Sleep mode */
    using RCC_AHB1SLPENR1_GPDMA1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: GPDMA1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief GPDMA1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_GPDMA1SLPEN_B_0x0 = 0;
        /** @brief GPDMA1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_GPDMA1SLPEN_B_0x1 = 1;

    /** @brief ADF1 clock enable during Sleep mode. */
    using RCC_AHB1SLPENR1_ADF1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: ADF1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief ADF1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_ADF1SLPEN_B_0x0 = 0;
        /** @brief ADF1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_ADF1SLPEN_B_0x1 = 1;

    /** @brief HSP1 clock enable during Sleep mode. */
    using RCC_AHB1SLPENR1_HSP1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSP1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: HSP1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief HSP1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_HSP1SLPEN_B_0x0 = 0;
        /** @brief HSP1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_HSP1SLPEN_B_0x1 = 1;

    /** @brief FLASH clock enable during Sleep mode */
    using RCC_AHB1SLPENR1_FLASHSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: FLASH clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief FLASH clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_FLASHSLPEN_B_0x0 = 0;
        /** @brief FLASH clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_FLASHSLPEN_B_0x1 = 1;

    /** @brief CRC clock enable during Sleep mode */
    using RCC_AHB1SLPENR1_CRCSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: CRC clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief CRC clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_CRCSLPEN_B_0x0 = 0;
        /** @brief CRC clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_CRCSLPEN_B_0x1 = 1;

    /** @brief TSC clock enable during Sleep mode */
    using RCC_AHB1SLPENR1_TSCSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TSC clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: TSC clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief TSC clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_TSCSLPEN_B_0x0 = 0;
        /** @brief TSC clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_TSCSLPEN_B_0x1 = 1;

    /** @brief RAMCFG clock enable during Sleep mode */
    using RCC_AHB1SLPENR1_RAMCFGSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: RAMCFG clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief RAMCFG clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_RAMCFGSLPEN_B_0x0 = 0;
        /** @brief RAMCFG clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_RAMCFGSLPEN_B_0x1 = 1;

    /** @brief GTZC1 clock enable during Sleep mode */
    using RCC_AHB1SLPENR1_GTZC1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: GTZC1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief GTZC1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_GTZC1SLPEN_B_0x0 = 0;
        /** @brief GTZC1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_GTZC1SLPEN_B_0x1 = 1;

    /** @brief ICACHE clock enable during Sleep mode */
    using RCC_AHB1SLPENR1_ICACHESLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: ICACHE clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief ICACHE clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_ICACHESLPEN_B_0x0 = 0;
        /** @brief ICACHE clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_ICACHESLPEN_B_0x1 = 1;

    /** @brief SRAM4 clock enable during Sleep mode */
    using RCC_AHB1SLPENR1_SRAM4SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SRAM4 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SRAM4 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_SRAM4SLPEN_B_0x0 = 0;
        /** @brief SRAM4 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_SRAM4SLPEN_B_0x1 = 1;

    /** @brief SRAM1 clock enable during Sleep mode */
    using RCC_AHB1SLPENR1_SRAM1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SRAM1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SRAM1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_SRAM1SLPEN_B_0x0 = 0;
        /** @brief SRAM1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR1_SRAM1SLPEN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock enable in Sleep mode register 1 */
    using RCC_AHB2SLPENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port i clock enable during Sleep mode (i = A to H) */
    using RCC_AHB2SLPENR1_GPIOASLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOASLPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOASLPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Sleep mode (i = A to H) */
    using RCC_AHB2SLPENR1_GPIOBSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOBSLPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOBSLPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Sleep mode (i = A to H) */
    using RCC_AHB2SLPENR1_GPIOCSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOCSLPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOCSLPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Sleep mode (i = A to H) */
    using RCC_AHB2SLPENR1_GPIODSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIODSLPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIODSLPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Sleep mode (i = A to H) */
    using RCC_AHB2SLPENR1_GPIOESLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOESLPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOESLPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Sleep mode (i = A to H) */
    using RCC_AHB2SLPENR1_GPIOFSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOFSLPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOFSLPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Sleep mode (i = A to H) */
    using RCC_AHB2SLPENR1_GPIOGSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOGSLPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOGSLPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Sleep mode (i = A to H) */
    using RCC_AHB2SLPENR1_GPIOHSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOHSLPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_GPIOHSLPEN_B_0x1 = 1;

    /** @brief ADC12 clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_ADC12SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC12 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: ADC12 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief ADC12 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_ADC12SLPEN_B_0x0 = 0;
        /** @brief ADC12 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_ADC12SLPEN_B_0x1 = 1;

    /** @brief DAC1 clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_DAC1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: DAC1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief DAC1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_DAC1SLPEN_B_0x0 = 0;
        /** @brief DAC1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_DAC1SLPEN_B_0x1 = 1;

    /** @brief AES clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_AESSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: AES clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief AES clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_AESSLPEN_B_0x0 = 0;
        /** @brief AES clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_AESSLPEN_B_0x1 = 1;

    /** @brief HASH clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_HASHSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: HASH clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief HASH clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_HASHSLPEN_B_0x0 = 0;
        /** @brief HASH clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_HASHSLPEN_B_0x1 = 1;

    /** @brief RNG clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_RNGSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: RNG clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief RNG clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_RNGSLPEN_B_0x0 = 0;
        /** @brief RNG clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_RNGSLPEN_B_0x1 = 1;

    /** @brief PKA clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_PKASLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: PKA clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief PKA clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_PKASLPEN_B_0x0 = 0;
        /** @brief PKA clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_PKASLPEN_B_0x1 = 1;

    /** @brief SAES accelerator clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_SAESSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SAES clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SAES clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_SAESSLPEN_B_0x0 = 0;
        /** @brief SAES clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_SAESSLPEN_B_0x1 = 1;

    /** @brief CCB accelerator clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_CCBSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCB clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: CCB clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief CCB clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_CCBSLPEN_B_0x0 = 0;
        /** @brief CCB clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_CCBSLPEN_B_0x1 = 1;

    /** @brief SDMMC1 clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_SDMMC1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SDMMC1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SDMMC1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_SDMMC1SLPEN_B_0x0 = 0;
        /** @brief SDMMC1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_SDMMC1SLPEN_B_0x1 = 1;

    /** @brief SRAM2 clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_SRAM2SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SRAM2 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SRAM2 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_SRAM2SLPEN_B_0x0 = 0;
        /** @brief SRAM2 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_SRAM2SLPEN_B_0x1 = 1;

    /** @brief SRAM3 clock enable during Sleep mode */
    using RCC_AHB2SLPENR1_SRAM3SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SRAM3 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SRAM3 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_SRAM3SLPEN_B_0x0 = 0;
        /** @brief SRAM3 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR1_SRAM3SLPEN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock enable in Sleep mode register 2 */
    using RCC_AHB2SLPENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI1 clock enable during Sleep mode */
    using RCC_AHB2SLPENR2_OCTOSPI1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: OCTOSPI1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief OCTOSPI1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR2_OCTOSPI1SLPEN_B_0x0 = 0;
        /** @brief OCTOSPI1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB2SLPENR2_OCTOSPI1SLPEN_B_0x1 = 1;

    /** @brief RCC AHB1 peripheral clock enable in Sleep mode register 2 */
    using RCC_AHB1SLPENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR clock enable during Sleep mode */
    using RCC_AHB1SLPENR2_PWRSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: PWR clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief PWR clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR2_PWRSLPEN_B_0x0 = 0;
        /** @brief PWR clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_AHB1SLPENR2_PWRSLPEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable in Sleep mode register 1 */
    using RCC_APB1SLPENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMj clock enable during Sleep mode */
    using RCC_APB1SLPENR1_TIM2SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: TIMj clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief TIMj clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM2SLPEN_B_0x0 = 0;
        /** @brief TIMj clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM2SLPEN_B_0x1 = 1;

    /** @brief TIMj clock enable during Sleep mode */
    using RCC_APB1SLPENR1_TIM3SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: TIMj clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief TIMj clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM3SLPEN_B_0x0 = 0;
        /** @brief TIMj clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM3SLPEN_B_0x1 = 1;

    /** @brief TIMj clock enable during Sleep mode */
    using RCC_APB1SLPENR1_TIM4SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: TIMj clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief TIMj clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM4SLPEN_B_0x0 = 0;
        /** @brief TIMj clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM4SLPEN_B_0x1 = 1;

    /** @brief TIMj clock enable during Sleep mode */
    using RCC_APB1SLPENR1_TIM6SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: TIMj clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief TIMj clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM6SLPEN_B_0x0 = 0;
        /** @brief TIMj clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM6SLPEN_B_0x1 = 1;

    /** @brief TIMj clock enable during Sleep mode */
    using RCC_APB1SLPENR1_TIM7SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMj clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: TIMj clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief TIMj clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM7SLPEN_B_0x0 = 0;
        /** @brief TIMj clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_TIM7SLPEN_B_0x1 = 1;

    /** @brief SPI3 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_SPI3SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SPI3 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SPI3 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_SPI3SLPEN_B_0x0 = 0;
        /** @brief SPI3 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_SPI3SLPEN_B_0x1 = 1;

    /** @brief SPI4 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_SPI4SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SPI4 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SPI4 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_SPI4SLPEN_B_0x0 = 0;
        /** @brief SPI4 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_SPI4SLPEN_B_0x1 = 1;

    /** @brief WWDG clock enable during Sleep mode */
    using RCC_APB1SLPENR1_WWDGSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: WWDG clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief WWDG clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_WWDGSLPEN_B_0x0 = 0;
        /** @brief WWDG clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_WWDGSLPEN_B_0x1 = 1;

    /** @brief SPI2 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_SPI2SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SPI2 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SPI2 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_SPI2SLPEN_B_0x0 = 0;
        /** @brief SPI2 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_SPI2SLPEN_B_0x1 = 1;

    /** @brief USART2 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_USART2SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: USART2 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief USART2 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_USART2SLPEN_B_0x0 = 0;
        /** @brief USART2 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_USART2SLPEN_B_0x1 = 1;

    /** @brief USART3 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_USART3SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: USART3 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief USART3 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_USART3SLPEN_B_0x0 = 0;
        /** @brief USART3 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_USART3SLPEN_B_0x1 = 1;

    /** @brief UART4 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_UART4SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: UART4 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief UART4 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_UART4SLPEN_B_0x0 = 0;
        /** @brief UART4 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_UART4SLPEN_B_0x1 = 1;

    /** @brief UART5 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_UART5SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: UART5 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief UART5 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_UART5SLPEN_B_0x0 = 0;
        /** @brief UART5 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_UART5SLPEN_B_0x1 = 1;

    /** @brief I2C1 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_I2C1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I2C1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I2C1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_I2C1SLPEN_B_0x0 = 0;
        /** @brief I2C1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_I2C1SLPEN_B_0x1 = 1;

    /** @brief I2C2 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_I2C2SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I2C2 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I2C2 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_I2C2SLPEN_B_0x0 = 0;
        /** @brief I2C2 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_I2C2SLPEN_B_0x1 = 1;

    /** @brief I3C1 clock enable during Sleep mode */
    using RCC_APB1SLPENR1_I3C1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I3C1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I3C1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_I3C1SLPEN_B_0x0 = 0;
        /** @brief I3C1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_I3C1SLPEN_B_0x1 = 1;

    /** @brief CRS clock enable during Sleep mode */
    using RCC_APB1SLPENR1_CRSSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRS clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: CRS clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief CRS clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_CRSSLPEN_B_0x0 = 0;
        /** @brief CRS clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_CRSSLPEN_B_0x1 = 1;

    /** @brief OPAMP clock enable during Sleep mode */
    using RCC_APB1SLPENR1_OPAMPSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: OPAMP clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief OPAMP clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_OPAMPSLPEN_B_0x0 = 0;
        /** @brief OPAMP clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_OPAMPSLPEN_B_0x1 = 1;

    /** @brief VREFBUF clock enable during Sleep mode */
    using RCC_APB1SLPENR1_VREFSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: VREFBUF clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief VREFBUF clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_VREFSLPEN_B_0x0 = 0;
        /** @brief VREFBUF clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_VREFSLPEN_B_0x1 = 1;

    /** @brief RTC and TAMP APB clock enable during Sleep mode */
    using RCC_APB1SLPENR1_RTCAPBSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC and TAMP APB clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: RTC and TAMP APB clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief RTC and TAMP APB clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_RTCAPBSLPEN_B_0x0 = 0;
        /** @brief RTC and TAMP APB clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR1_RTCAPBSLPEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable in Sleep mode register 2 */
    using RCC_APB1SLPENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 clock enable during Sleep mode */
    using RCC_APB1SLPENR2_I2C4SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I2C4 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I2C4 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR2_I2C4SLPEN_B_0x0 = 0;
        /** @brief I2C4 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR2_I2C4SLPEN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable during Sleep mode */
    using RCC_APB1SLPENR2_LPTIM2SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: LPTIM2 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief LPTIM2 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR2_LPTIM2SLPEN_B_0x0 = 0;
        /** @brief LPTIM2 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR2_LPTIM2SLPEN_B_0x1 = 1;

    /** @brief FDCAN clock enable during Sleep mode */
    using RCC_APB1SLPENR2_FDCANSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN1 and FDCAN2 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: FDCAN1 and FDCAN2 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief FDCAN1 and FDCAN2 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR2_FDCANSLPEN_B_0x0 = 0;
        /** @brief FDCAN1 and FDCAN2 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB1SLPENR2_FDCANSLPEN_B_0x1 = 1;

    /** @brief RCC APB2 peripheral clock enable in Sleep mode register */
    using RCC_APB2SLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 clock enable during Sleep mode */
    using RCC_APB2SLPENR_TIM1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM1 clock enabled during Sleep mode (value: 1)
     */
        /** @brief TIM1 clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM1SLPEN_B_0x0 = 0;
        /** @brief TIM1 clock enabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM1SLPEN_B_0x1 = 1;

    /** @brief SPI1 clock enable during Sleep mode */
    using RCC_APB2SLPENR_SPI1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SPI1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SPI1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_SPI1SLPEN_B_0x0 = 0;
        /** @brief SPI1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_SPI1SLPEN_B_0x1 = 1;

    /** @brief TIM8 clock enable during Sleep mode */
    using RCC_APB2SLPENR_TIM8SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM8 clock enabled during Sleep mode (value: 1)
     */
        /** @brief TIM8 clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM8SLPEN_B_0x0 = 0;
        /** @brief TIM8 clock enabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM8SLPEN_B_0x1 = 1;

    /** @brief USART1clock enable during Sleep mode */
    using RCC_APB2SLPENR_USART1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: USART1clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief USART1clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_USART1SLPEN_B_0x0 = 0;
        /** @brief USART1clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_USART1SLPEN_B_0x1 = 1;

    /** @brief TIM12 clock enable during Sleep mode */
    using RCC_APB2SLPENR_TIM12SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIM12 clock enabled during Sleep mode (value: 1)
     */
        /** @brief TIM12 clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM12SLPEN_B_0x0 = 0;
        /** @brief TIM12 clock enabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM12SLPEN_B_0x1 = 1;

    /** @brief TIMi clock enable during Sleep mode */
    using RCC_APB2SLPENR_TIM15SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMi clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIMi clock enabled during Sleep mode (value: 1)
     */
        /** @brief TIMi clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM15SLPEN_B_0x0 = 0;
        /** @brief TIMi clock enabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM15SLPEN_B_0x1 = 1;

    /** @brief TIMi clock enable during Sleep mode */
    using RCC_APB2SLPENR_TIM16SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMi clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIMi clock enabled during Sleep mode (value: 1)
     */
        /** @brief TIMi clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM16SLPEN_B_0x0 = 0;
        /** @brief TIMi clock enabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM16SLPEN_B_0x1 = 1;

    /** @brief TIMi clock enable during Sleep mode */
    using RCC_APB2SLPENR_TIM17SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMi clock disabled during Sleep mode (value: 0)
     *          - B_0x1: TIMi clock enabled during Sleep mode (value: 1)
     */
        /** @brief TIMi clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM17SLPEN_B_0x0 = 0;
        /** @brief TIMi clock enabled during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_TIM17SLPEN_B_0x1 = 1;

    /** @brief SAI1 clock enable during Sleep mode */
    using RCC_APB2SLPENR_SAI1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SAI1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SAI1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_SAI1SLPEN_B_0x0 = 0;
        /** @brief SAI1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_SAI1SLPEN_B_0x1 = 1;

    /** @brief USB1 clock enable during Sleep mode */
    using RCC_APB2SLPENR_USB1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: USB1 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief USB1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_USB1SLPEN_B_0x0 = 0;
        /** @brief USB1 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_USB1SLPEN_B_0x1 = 1;

    /** @brief I3C2 clock enable during Sleep mode */
    using RCC_APB2SLPENR_I3C2SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I3C2 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I3C2 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_I3C2SLPEN_B_0x0 = 0;
        /** @brief I3C2 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB2SLPENR_I3C2SLPEN_B_0x1 = 1;

    /** @brief RCC APB3 peripheral clock enable in Sleep mode register */
    using RCC_APB3SLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG clock enable during Sleep mode */
    using RCC_APB3SLPENR_SYSCFGSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: SYSCFG clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief SYSCFG clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_SYSCFGSLPEN_B_0x0 = 0;
        /** @brief SYSCFG clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_SYSCFGSLPEN_B_0x1 = 1;

    /** @brief LPUART1 clock enable during Sleep mode */
    using RCC_APB3SLPENR_LPUART1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: LPUART1 clock enabled by the clock gating during Sleep m (value: 1)
     */
        /** @brief LPUART1 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_LPUART1SLPEN_B_0x0 = 0;
        /** @brief LPUART1 clock enabled by the clock gating during Sleep m */
    constexpr std::uint32_t RCC_APB3SLPENR_LPUART1SLPEN_B_0x1 = 1;

    /** @brief I2C3 clock enable during Sleep mode */
    using RCC_APB3SLPENR_I2C3SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: I2C3 clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief I2C3 clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_I2C3SLPEN_B_0x0 = 0;
        /** @brief I2C3 clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_I2C3SLPEN_B_0x1 = 1;

    /** @brief LPTIM1clock enable during Sleep mode */
    using RCC_APB3SLPENR_LPTIM1SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPTIM1 clock enabled during Sleep mode (value: 1)
     */
        /** @brief LPTIM1 clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_LPTIM1SLPEN_B_0x0 = 0;
        /** @brief LPTIM1 clock enabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_LPTIM1SLPEN_B_0x1 = 1;

    /** @brief LPTIMi clock enable during Sleep mode */
    using RCC_APB3SLPENR_LPTIM3SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIMi clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPTIMi clock enabled during Sleep mode (value: 1)
     */
        /** @brief LPTIMi clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_LPTIM3SLPEN_B_0x0 = 0;
        /** @brief LPTIMi clock enabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_LPTIM3SLPEN_B_0x1 = 1;

    /** @brief LPTIMi clock enable during Sleep mode */
    using RCC_APB3SLPENR_LPTIM4SLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIMi clock disabled during Sleep mode (value: 0)
     *          - B_0x1: LPTIMi clock enabled during Sleep mode (value: 1)
     */
        /** @brief LPTIMi clock disabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_LPTIM4SLPEN_B_0x0 = 0;
        /** @brief LPTIMi clock enabled during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_LPTIM4SLPEN_B_0x1 = 1;

    /** @brief COMP clock enable during Sleep mode */
    using RCC_APB3SLPENR_COMPSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP clock disabled by the clock gating during Sleep mode (value: 0)
     *          - B_0x1: COMP clock enabled by the clock gating during Sleep mode (value: 1)
     */
        /** @brief COMP clock disabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_COMPSLPEN_B_0x0 = 0;
        /** @brief COMP clock enabled by the clock gating during Sleep mode */
    constexpr std::uint32_t RCC_APB3SLPENR_COMPSLPEN_B_0x1 = 1;

    /** @brief RCC AHB1 peripheral clock enable in Stop mode register */
    using RCC_AHB1STPENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 clock enable during Stop mode. */
    using RCC_AHB1STPENR1_GPDMA1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: GPDMA1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief GPDMA1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_GPDMA1STPEN_B_0x0 = 0;
        /** @brief GPDMA1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_GPDMA1STPEN_B_0x1 = 1;

    /** @brief ADF1 clock enable during Stop mode. */
    using RCC_AHB1STPENR1_ADF1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: ADF1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief ADF1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_ADF1STPEN_B_0x0 = 0;
        /** @brief ADF1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_ADF1STPEN_B_0x1 = 1;

    /** @brief FLASH clock enable during Stop mode */
    using RCC_AHB1STPENR1_FLASHSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: FLASH clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief FLASH clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_FLASHSTPEN_B_0x0 = 0;
        /** @brief FLASH clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_FLASHSTPEN_B_0x1 = 1;

    /** @brief RAMCFG clock enable during Stop mode */
    using RCC_AHB1STPENR1_RAMCFGSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: RAMCFG clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief RAMCFG clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_RAMCFGSTPEN_B_0x0 = 0;
        /** @brief RAMCFG clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_RAMCFGSTPEN_B_0x1 = 1;

    /** @brief GTZC1 clock enable during Stop mode */
    using RCC_AHB1STPENR1_GTZC1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: GTZC1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief GTZC1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_GTZC1STPEN_B_0x0 = 0;
        /** @brief GTZC1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_GTZC1STPEN_B_0x1 = 1;

    /** @brief SRAM4 clock enable during Stop mode */
    using RCC_AHB1STPENR1_SRAM4STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: SRAM4 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief SRAM4 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_SRAM4STPEN_B_0x0 = 0;
        /** @brief SRAM4 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_SRAM4STPEN_B_0x1 = 1;

    /** @brief SRAM1 clock enable during Stop mode */
    using RCC_AHB1STPENR1_SRAM1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: SRAM1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief SRAM1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_SRAM1STPEN_B_0x0 = 0;
        /** @brief SRAM1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB1STPENR1_SRAM1STPEN_B_0x1 = 1;

    /** @brief RCC AHB2 peripheral clock enable in Stop mode register 1 */
    using RCC_AHB2STPENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O port i clock enable during Stop mode (i = H to A) */
    using RCC_AHB2STPENR1_GPIOASTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOASTPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOASTPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Stop mode (i = H to A) */
    using RCC_AHB2STPENR1_GPIOBSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOBSTPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOBSTPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Stop mode (i = H to A) */
    using RCC_AHB2STPENR1_GPIOCSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOCSTPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOCSTPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Stop mode (i = H to A) */
    using RCC_AHB2STPENR1_GPIODSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIODSTPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIODSTPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Stop mode (i = H to A) */
    using RCC_AHB2STPENR1_GPIOESTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOESTPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOESTPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Stop mode (i = H to A) */
    using RCC_AHB2STPENR1_GPIOFSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOFSTPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOFSTPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Stop mode (i = H to A) */
    using RCC_AHB2STPENR1_GPIOGSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOGSTPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOGSTPEN_B_0x1 = 1;

    /** @brief I/O port i clock enable during Stop mode (i = H to A) */
    using RCC_AHB2STPENR1_GPIOHSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O port i clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I/O port i clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I/O port i clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOHSTPEN_B_0x0 = 0;
        /** @brief I/O port i clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_GPIOHSTPEN_B_0x1 = 1;

    /** @brief DAC1 clock enable during Stop mode */
    using RCC_AHB2STPENR1_DAC1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: DAC1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief DAC1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_DAC1STPEN_B_0x0 = 0;
        /** @brief DAC1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_DAC1STPEN_B_0x1 = 1;

    /** @brief SRAM2 clock enable during Stop mode */
    using RCC_AHB2STPENR1_SRAM2STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: SRAM2 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief SRAM2 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_SRAM2STPEN_B_0x0 = 0;
        /** @brief SRAM2 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_SRAM2STPEN_B_0x1 = 1;

    /** @brief SRAM3 clock enable during Stop mode */
    using RCC_AHB2STPENR1_SRAM3STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: SRAM3 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief SRAM3 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_SRAM3STPEN_B_0x0 = 0;
        /** @brief SRAM3 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_AHB2STPENR1_SRAM3STPEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable in Stop mode register 1 */
    using RCC_APB1STPENR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 clock enable during Stop mode */
    using RCC_APB1STPENR1_SPI3STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: SPI3 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief SPI3 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_SPI3STPEN_B_0x0 = 0;
        /** @brief SPI3 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_SPI3STPEN_B_0x1 = 1;

    /** @brief SPI4 clock enable during Stop mode */
    using RCC_APB1STPENR1_SPI4STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: SPI4 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief SPI4 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_SPI4STPEN_B_0x0 = 0;
        /** @brief SPI4 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_SPI4STPEN_B_0x1 = 1;

    /** @brief SPI2 clock enable during Stop mode */
    using RCC_APB1STPENR1_SPI2STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: SPI2 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief SPI2 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_SPI2STPEN_B_0x0 = 0;
        /** @brief SPI2 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_SPI2STPEN_B_0x1 = 1;

    /** @brief USART2 clock enable during Stop mode */
    using RCC_APB1STPENR1_USART2STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: USART2 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief USART2 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_USART2STPEN_B_0x0 = 0;
        /** @brief USART2 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_USART2STPEN_B_0x1 = 1;

    /** @brief USART3 clock enable during Stop mode */
    using RCC_APB1STPENR1_USART3STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: USART3 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief USART3 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_USART3STPEN_B_0x0 = 0;
        /** @brief USART3 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_USART3STPEN_B_0x1 = 1;

    /** @brief UART4 clock enable during Stop mode */
    using RCC_APB1STPENR1_UART4STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: UART4 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief UART4 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_UART4STPEN_B_0x0 = 0;
        /** @brief UART4 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_UART4STPEN_B_0x1 = 1;

    /** @brief UART5 clock enable during Stop mode */
    using RCC_APB1STPENR1_UART5STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: UART5 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief UART5 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_UART5STPEN_B_0x0 = 0;
        /** @brief UART5 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_UART5STPEN_B_0x1 = 1;

    /** @brief I2C1 clock enable during Stop mode */
    using RCC_APB1STPENR1_I2C1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I2C1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I2C1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_I2C1STPEN_B_0x0 = 0;
        /** @brief I2C1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_I2C1STPEN_B_0x1 = 1;

    /** @brief I2C2 clock enable during Stop mode */
    using RCC_APB1STPENR1_I2C2STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I2C2 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I2C2 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_I2C2STPEN_B_0x0 = 0;
        /** @brief I2C2 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_I2C2STPEN_B_0x1 = 1;

    /** @brief I3C1 clock enable during Stop mode */
    using RCC_APB1STPENR1_I3C1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I3C1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I3C1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_I3C1STPEN_B_0x0 = 0;
        /** @brief I3C1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_I3C1STPEN_B_0x1 = 1;

    /** @brief OPAMP clock enable during Stop mode */
    using RCC_APB1STPENR1_OPAMPSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: OPAMP clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief OPAMP clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_OPAMPSTPEN_B_0x0 = 0;
        /** @brief OPAMP clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_OPAMPSTPEN_B_0x1 = 1;

    /** @brief VREFBUF clock enable during Stop mode */
    using RCC_APB1STPENR1_VREFSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: VREFBUF clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief VREFBUF clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_VREFSTPEN_B_0x0 = 0;
        /** @brief VREFBUF clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_VREFSTPEN_B_0x1 = 1;

    /** @brief RTC and TAMP APB clock enable during Stop mode */
    using RCC_APB1STPENR1_RTCAPBSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC and TAMP APB clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: RTC and TAMP APB clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief RTC and TAMP APB clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_RTCAPBSTPEN_B_0x0 = 0;
        /** @brief RTC and TAMP APB clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR1_RTCAPBSTPEN_B_0x1 = 1;

    /** @brief RCC APB1 peripheral clock enable in Stop mode register 2 */
    using RCC_APB1STPENR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 clock enable during Stop mode */
    using RCC_APB1STPENR2_I2C4STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I2C4 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I2C4 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR2_I2C4STPEN_B_0x0 = 0;
        /** @brief I2C4 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR2_I2C4STPEN_B_0x1 = 1;

    /** @brief LPTIM2 clock enable during Stop mode */
    using RCC_APB1STPENR2_LPTIM2STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: LPTIM2 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief LPTIM2 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR2_LPTIM2STPEN_B_0x0 = 0;
        /** @brief LPTIM2 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB1STPENR2_LPTIM2STPEN_B_0x1 = 1;

    /** @brief RCC APB2 peripheral clock enable in Stop mode register */
    using RCC_APB2STPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 clock enable during Stop mode */
    using RCC_APB2STPENR_SPI1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: SPI1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief SPI1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB2STPENR_SPI1STPEN_B_0x0 = 0;
        /** @brief SPI1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB2STPENR_SPI1STPEN_B_0x1 = 1;

    /** @brief USART1clock enable during Stop mode */
    using RCC_APB2STPENR_USART1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: USART1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief USART1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB2STPENR_USART1STPEN_B_0x0 = 0;
        /** @brief USART1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB2STPENR_USART1STPEN_B_0x1 = 1;

    /** @brief USB1 clock enable during Stop mode */
    using RCC_APB2STPENR_USB1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: USB1 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief USB1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB2STPENR_USB1STPEN_B_0x0 = 0;
        /** @brief USB1 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB2STPENR_USB1STPEN_B_0x1 = 1;

    /** @brief I3C2 clock enable during Stop mode */
    using RCC_APB2STPENR_I3C2STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I3C2 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I3C2 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB2STPENR_I3C2STPEN_B_0x0 = 0;
        /** @brief I3C2 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB2STPENR_I3C2STPEN_B_0x1 = 1;

    /** @brief RCC APB3 peripheral clock enable in Stop mode register */
    using RCC_APB3STPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 clock enable during Stop mode */
    using RCC_APB3STPENR_LPUART1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: LPUART1 clock enabled by the clock gating during Stop m (value: 1)
     */
        /** @brief LPUART1 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_LPUART1STPEN_B_0x0 = 0;
        /** @brief LPUART1 clock enabled by the clock gating during Stop m */
    constexpr std::uint32_t RCC_APB3STPENR_LPUART1STPEN_B_0x1 = 1;

    /** @brief I2C3 clock enable during Stop mode */
    using RCC_APB3STPENR_I2C3STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: I2C3 clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief I2C3 clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_I2C3STPEN_B_0x0 = 0;
        /** @brief I2C3 clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_I2C3STPEN_B_0x1 = 1;

    /** @brief LPTIM1clock enable during Stop mode */
    using RCC_APB3STPENR_LPTIM1STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 clock disabled during Stop mode (value: 0)
     *          - B_0x1: LPTIM1 clock enabled during Stop mode (value: 1)
     */
        /** @brief LPTIM1 clock disabled during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_LPTIM1STPEN_B_0x0 = 0;
        /** @brief LPTIM1 clock enabled during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_LPTIM1STPEN_B_0x1 = 1;

    /** @brief LPTIMi clock enable during Stop mode */
    using RCC_APB3STPENR_LPTIM3STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIMi clock disabled during Stop mode (value: 0)
     *          - B_0x1: LPTIMi clock enabled during Stop mode (value: 1)
     */
        /** @brief LPTIMi clock disabled during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_LPTIM3STPEN_B_0x0 = 0;
        /** @brief LPTIMi clock enabled during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_LPTIM3STPEN_B_0x1 = 1;

    /** @brief LPTIMi clock enable during Stop mode */
    using RCC_APB3STPENR_LPTIM4STPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIMi clock disabled during Stop mode (value: 0)
     *          - B_0x1: LPTIMi clock enabled during Stop mode (value: 1)
     */
        /** @brief LPTIMi clock disabled during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_LPTIM4STPEN_B_0x0 = 0;
        /** @brief LPTIMi clock enabled during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_LPTIM4STPEN_B_0x1 = 1;

    /** @brief COMP clock enable during Stop mode */
    using RCC_APB3STPENR_COMPSTPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP clock disabled by the clock gating during Stop mode (value: 0)
     *          - B_0x1: COMP clock enabled by the clock gating during Stop mode (value: 1)
     */
        /** @brief COMP clock disabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_COMPSTPEN_B_0x0 = 0;
        /** @brief COMP clock enabled by the clock gating during Stop mode */
    constexpr std::uint32_t RCC_APB3STPENR_COMPSTPEN_B_0x1 = 1;

    /** @brief RCC peripheral independent clock configuration register 1 */
    using RCC_CCIPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 kernel clock source selection */
    using RCC_CCIPR1_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK2 selected (value: 0)
     *          - B_0x1: HSI16 selected (value: 1)
     */
        /** @brief PCLK2 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x0 = 0;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART1SEL_B_0x1 = 1;

    /** @brief USART3 kernel clock source selection */
    using RCC_CCIPR1_USART3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: HSI16 selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x0 = 0;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_USART3SEL_B_0x1 = 1;

    /** @brief UART4 kernel clock source selection */
    using RCC_CCIPR1_UART4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: HSI16 selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x0 = 0;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_UART4SEL_B_0x1 = 1;

    /** @brief UART5 kernel clock source selection */
    using RCC_CCIPR1_UART5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: HSI16 selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x0 = 0;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR1_UART5SEL_B_0x1 = 1;

    /** @brief I3C1 kernel clock source selection */
    using RCC_CCIPR1_I3C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_I3C1SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_I3C1SEL_B_0x1 = 1;

    /** @brief I2C1 kernel clock source selection */
    using RCC_CCIPR1_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C1SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C1SEL_B_0x1 = 1;

    /** @brief I2C2 kernel clock source selection */
    using RCC_CCIPR1_I2C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C2SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_I2C2SEL_B_0x1 = 1;

    /** @brief I3C2 kernel clock source selection */
    using RCC_CCIPR1_I3C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK2 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK2 selected */
    constexpr std::uint32_t RCC_CCIPR1_I3C2SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_I3C2SEL_B_0x1 = 1;

    /** @brief SPI2 kernel clock source selection */
    using RCC_CCIPR1_SPI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI2SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI2SEL_B_0x1 = 1;

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
    using RCC_CCIPR1_SPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK2 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK2 selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI1SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_SPI1SEL_B_0x1 = 1;

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

    /** @brief FDCAN1 and FDCAN2 kernel clock source selection */
    using RCC_CCIPR1_FDCANSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCLK selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_FDCANSEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_FDCANSEL_B_0x1 = 1;

    /** @brief Intermediate clock source selection */
    using RCC_CCIPR1_ICLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     *          - B_0x2: HSE selected (value: 2)
     *          - B_0x3: SYSCLK selected (value: 3)
     */
        /** @brief HSI48 selected */
    constexpr std::uint32_t RCC_CCIPR1_ICLKSEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR1_ICLKSEL_B_0x1 = 1;
        /** @brief HSE selected */
    constexpr std::uint32_t RCC_CCIPR1_ICLKSEL_B_0x2 = 2;
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR1_ICLKSEL_B_0x3 = 3;

    /** @brief USB1 kernel clock prescaler selection */
    using RCC_CCIPR1_USB1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: usbsdmmc_iclk selected (value: 0)
     *          - B_0x1: usbsdmmc_iclk/2 selected (value: 1)
     */
        /** @brief usbsdmmc_iclk selected */
    constexpr std::uint32_t RCC_CCIPR1_USB1SEL_B_0x0 = 0;
        /** @brief usbsdmmc_iclk/2 selected */
    constexpr std::uint32_t RCC_CCIPR1_USB1SEL_B_0x1 = 1;

    /** @brief Clock sources for TIM16,TIM17, and LPTIM2 internal input capture */
    using RCC_CCIPR1_TIMICSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI, MSIK and MSIS dividers disabled (value: 0)
     *          - B_0x1: HSI, MSIK and MSIS dividers disabled (value: 1)
     *          - B_0x2: HSI, MSIK and MSIS dividers disabled (value: 2)
     *          - B_0x3: HSI, MSIK and MSIS dividers disabled (value: 3)
     *          - B_0x4: HSI/256, MSIS/1024 and MSIS/4 are generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture. (value: 4)
     *          - B_0x5: HSI/256, MSIS/1024 and MSIK/4 are generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture. (value: 5)
     *          - B_0x6: HSI/256, MSIK/1024 and MSIS/4 are generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture. (value: 6)
     *          - B_0x7: HSI/256, MSIK/1024 and MSIK/4 are generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture. (value: 7)
     */
        /** @brief HSI, MSIK and MSIS dividers disabled */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x0 = 0;
        /** @brief HSI, MSIK and MSIS dividers disabled */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x1 = 1;
        /** @brief HSI, MSIK and MSIS dividers disabled */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x2 = 2;
        /** @brief HSI, MSIK and MSIS dividers disabled */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x3 = 3;
        /** @brief HSI/256, MSIS/1024 and MSIS/4 are generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture. */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x4 = 4;
        /** @brief HSI/256, MSIS/1024 and MSIK/4 are generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture. */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x5 = 5;
        /** @brief HSI/256, MSIK/1024 and MSIS/4 are generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture. */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x6 = 6;
        /** @brief HSI/256, MSIK/1024 and MSIK/4 are generated and can be selected by TIM16, TIM17, and LPTIM2 as internal input capture. */
    constexpr std::uint32_t RCC_CCIPR1_TIMICSEL_B_0x7 = 7;

    /** @brief RCC peripheral independent clock configuration register 2 */
    using RCC_CCIPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1 kernel clock source selection */
    using RCC_CCIPR2_ADF1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HCLK (value: 0)
     *          - B_0x1: Input pin AUDIOCLK selected (value: 1)
     *          - B_0x2: MSIK clock selected (value: 2)
     *          - B_0x3: SAI1 kernel clock selected (value: 3)
     */
        /** @brief HCLK */
    constexpr std::uint32_t RCC_CCIPR2_ADF1SEL_B_0x0 = 0;
        /** @brief Input pin AUDIOCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_ADF1SEL_B_0x1 = 1;
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CCIPR2_ADF1SEL_B_0x2 = 2;
        /** @brief SAI1 kernel clock selected */
    constexpr std::uint32_t RCC_CCIPR2_ADF1SEL_B_0x3 = 3;

    /** @brief SPI3 kernel clock source selection */
    using RCC_CCIPR2_SPI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR2_SPI3SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_SPI3SEL_B_0x1 = 1;

    /** @brief SAI1 kernel clock source selection */
    using RCC_CCIPR2_SAI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK selected (value: 0)
     *          - B_0x1: input pin AUDIOCLK selected (value: 1)
     *          - B_0x2: HSE clock selected (value: 2)
     */
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x0 = 0;
        /** @brief input pin AUDIOCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x1 = 1;
        /** @brief HSE clock selected */
    constexpr std::uint32_t RCC_CCIPR2_SAI1SEL_B_0x2 = 2;

    /** @brief SPI4 kernel clock source selection */
    using RCC_CCIPR2_SPI4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR2_SPI4SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_SPI4SEL_B_0x1 = 1;

    /** @brief I2C4 kernel clock source selection */
    using RCC_CCIPR2_I2C4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C4SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_I2C4SEL_B_0x1 = 1;

    /** @brief RNG kernel clock source selection */
    using RCC_CCIPR2_RNGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI48 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief HSI48 selected */
    constexpr std::uint32_t RCC_CCIPR2_RNGSEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_RNGSEL_B_0x1 = 1;

    /** @brief ADC12 and DAC1 kernel clock prescaler */
    using RCC_CCIPR2_ADCDACPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adcdac_iclk (value: 0)
     *          - B_0x1: adcdac_iclk/2 (value: 1)
     *          - B_0x2: adcdac_iclk/2 (value: 2)
     *          - B_0x3: adcdac_iclk/2 (value: 3)
     *          - B_0x4: adcdac_iclk/2 (value: 4)
     *          - B_0x5: adcdac_iclk/2 (value: 5)
     *          - B_0x6: adcdac_iclk/2 (value: 6)
     *          - B_0x7: adcdac_iclk/2 (value: 7)
     *          - B_0x8: adcdac_iclk/4 (value: 8)
     *          - B_0x9: adcdac_iclk/8 (value: 9)
     *          - B_0xA: adcdac_iclk/16 (value: 10)
     *          - B_0xB: adcdac_iclk/32 (value: 11)
     *          - B_0xC: adcdac_iclk/64 (value: 12)
     *          - B_0xD: adcdac_iclk/128 (value: 13)
     *          - B_0xE: adcdac_iclk/256 (value: 14)
     *          - B_0xF: adcdac_iclk/512 (value: 15)
     */
        /** @brief adcdac_iclk */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x0 = 0;
        /** @brief adcdac_iclk/2 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x1 = 1;
        /** @brief adcdac_iclk/2 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x2 = 2;
        /** @brief adcdac_iclk/2 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x3 = 3;
        /** @brief adcdac_iclk/2 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x4 = 4;
        /** @brief adcdac_iclk/2 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x5 = 5;
        /** @brief adcdac_iclk/2 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x6 = 6;
        /** @brief adcdac_iclk/2 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x7 = 7;
        /** @brief adcdac_iclk/4 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x8 = 8;
        /** @brief adcdac_iclk/8 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0x9 = 9;
        /** @brief adcdac_iclk/16 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0xA = 10;
        /** @brief adcdac_iclk/32 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0xB = 11;
        /** @brief adcdac_iclk/64 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0xC = 12;
        /** @brief adcdac_iclk/128 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0xD = 13;
        /** @brief adcdac_iclk/256 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0xE = 14;
        /** @brief adcdac_iclk/512 */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACPRE_B_0xF = 15;

    /** @brief ADC12 and DAC1 intermediate kernel clock source selection */
    using RCC_CCIPR2_ADCDACSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HCLK selected (value: 0)
     *          - B_0x1: HSE selected (value: 1)
     *          - B_0x2: MSIK selected (value: 2)
     */
        /** @brief HCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACSEL_B_0x0 = 0;
        /** @brief HSE selected */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACSEL_B_0x1 = 1;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_ADCDACSEL_B_0x2 = 2;

    /** @brief DAC1 sample and hold clock source selection */
    using RCC_CCIPR2_DAC1SHSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     */
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR2_DAC1SHSEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR2_DAC1SHSEL_B_0x1 = 1;

    /** @brief OCTOSPI1 kernel clock source selection */
    using RCC_CCIPR2_OCTOSPISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCLK selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief SYSCLK selected */
    constexpr std::uint32_t RCC_CCIPR2_OCTOSPISEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR2_OCTOSPISEL_B_0x1 = 1;

    /** @brief USART2 kernel clock source selection */
    using RCC_CCIPR2_USART2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK1 selected (value: 0)
     *          - B_0x1: HSI16 selected (value: 1)
     */
        /** @brief PCLK1 selected */
    constexpr std::uint32_t RCC_CCIPR2_USART2SEL_B_0x0 = 0;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR2_USART2SEL_B_0x1 = 1;

    /** @brief RCC peripheral independent clock configuration register 3 */
    using RCC_CCIPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 kernel clock source selection */
    using RCC_CCIPR3_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK3 selected (value: 0)
     *          - B_0x1: HSI16 selected (value: 1)
     *          - B_0x2: LSE selected (value: 2)
     *          - B_0x3: MSIK selected (value: 3)
     */
        /** @brief PCLK3 selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x0 = 0;
        /** @brief HSI16 selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x1 = 1;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x2 = 2;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR3_LPUART1SEL_B_0x3 = 3;

    /** @brief I2C3 kernel clock source selection */
    using RCC_CCIPR3_I2C3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCLK3 selected (value: 0)
     *          - B_0x1: MSIK selected (value: 1)
     */
        /** @brief PCLK3 selected */
    constexpr std::uint32_t RCC_CCIPR3_I2C3SEL_B_0x0 = 0;
        /** @brief MSIK selected */
    constexpr std::uint32_t RCC_CCIPR3_I2C3SEL_B_0x1 = 1;

    /** @brief LPTIM3 and LPTIM4 kernel clock source selection */
    using RCC_CCIPR3_LPTIM34SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIK clock selected (value: 0)
     *          - B_0x1: LSI selected (value: 1)
     *          - B_0x2: HSI16 selected (value: 2)
     *          - B_0x3: LSE selected (value: 3)
     */
        /** @brief MSIK clock selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM34SEL_B_0x0 = 0;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_CCIPR3_LPTIM34SEL_B_0x1 = 1;
        /** @brief HSI16 selected */
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

    /** @brief RCC backup domain control register */
    using RCC_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable */
    using RCC_BDCR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator OFF (value: 0)
     *          - B_0x1: LSE oscillator ON (value: 1)
     */
        /** @brief LSE oscillator OFF */
    constexpr std::uint32_t RCC_BDCR_LSEON_B_0x0 = 0;
        /** @brief LSE oscillator ON */
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
     *          - B_0x0: 'Xtal mode' lower driving capability (value: 0)
     *          - B_0x1: 'Xtal mode' medium-low driving capability (value: 1)
     *          - B_0x2: 'Xtal mode' medium-high driving capability (value: 2)
     *          - B_0x3: 'Xtal mode' higher driving capability (value: 3)
     */
        /** @brief 'Xtal mode' lower driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x0 = 0;
        /** @brief 'Xtal mode' medium-low driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x1 = 1;
        /** @brief 'Xtal mode' medium-high driving capability */
    constexpr std::uint32_t RCC_BDCR_LSEDRV_B_0x2 = 2;
        /** @brief 'Xtal mode' higher driving capability */
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
     *          - B_0x1: LSE selected (value: 1)
     *          - B_0x2: LSI selected (value: 2)
     *          - B_0x3: HSE/32 selected (value: 3)
     */
        /** @brief No clock selected */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x0 = 0;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x1 = 1;
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_BDCR_RTCSEL_B_0x2 = 2;
        /** @brief HSE/32 selected */
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
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Reset the entire backup domain (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RCC_BDCR_BDRST_B_0x0 = 0;
        /** @brief Reset the entire backup domain */
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
     *          - B_0x0: LSI selected (value: 0)
     *          - B_0x1: LSE selected (value: 1)
     */
        /** @brief LSI selected */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x0 = 0;
        /** @brief LSE selected */
    constexpr std::uint32_t RCC_BDCR_LSCOSEL_B_0x1 = 1;

    /** @brief RCC control/status register */
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable */
    using RCC_CSR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI oscillator OFF (value: 0)
     *          - B_0x1: LSI oscillator ON (value: 1)
     */
        /** @brief LSI oscillator OFF */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x0 = 0;
        /** @brief LSI oscillator ON */
    constexpr std::uint32_t RCC_CSR_LSION_B_0x1 = 1;

    /** @brief LSI oscillator ready */
    using RCC_CSR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI oscillator not ready (value: 0)
     *          - B_0x1: LSI oscillator ready (value: 1)
     */
        /** @brief LSI oscillator not ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x0 = 0;
        /** @brief LSI oscillator ready */
    constexpr std::uint32_t RCC_CSR_LSIRDY_B_0x1 = 1;

    /** @brief Low-speed clock divider configuration */
    using RCC_CSR_LSIPREDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI not divided (value: 0)
     *          - B_0x1: LSI divided by 128 (value: 1)
     */
        /** @brief LSI not divided */
    constexpr std::uint32_t RCC_CSR_LSIPREDIV_B_0x0 = 0;
        /** @brief LSI divided by 128 */
    constexpr std::uint32_t RCC_CSR_LSIPREDIV_B_0x1 = 1;

    /** @brief MSIK oscillator division after Standby mode */
    using RCC_CSR_MSIKDIVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Range 5 around 12 MHz (reset value) (value: 1)
     *          - B_0x2: Range 6 around 6 MHz (value: 2)
     *          - B_0x3: Range 7 around 3 MHz (value: 3)
     */
        /** @brief Range 5 around 12 MHz (reset value) */
    constexpr std::uint32_t RCC_CSR_MSIKDIVS_B_0x1 = 1;
        /** @brief Range 6 around 6 MHz */
    constexpr std::uint32_t RCC_CSR_MSIKDIVS_B_0x2 = 2;
        /** @brief Range 7 around 3 MHz */
    constexpr std::uint32_t RCC_CSR_MSIKDIVS_B_0x3 = 3;

    /** @brief MSIS oscillator division after Standby mode */
    using RCC_CSR_MSISDIVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Range 5 around 12 MHz (reset value) (value: 1)
     *          - B_0x2: Range 6 around 6 MHz (value: 2)
     *          - B_0x3: Range 7 around 3 MHz (value: 3)
     */
        /** @brief Range 5 around 12 MHz (reset value) */
    constexpr std::uint32_t RCC_CSR_MSISDIVS_B_0x1 = 1;
        /** @brief Range 6 around 6 MHz */
    constexpr std::uint32_t RCC_CSR_MSISDIVS_B_0x2 = 2;
        /** @brief Range 7 around 3 MHz */
    constexpr std::uint32_t RCC_CSR_MSISDIVS_B_0x3 = 3;

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
     *          - B_0x0: No reset from option-byte loading occurred. (value: 0)
     *          - B_0x1: Reset from option-byte loading occurred. (value: 1)
     */
        /** @brief No reset from option-byte loading occurred. */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x0 = 0;
        /** @brief Reset from option-byte loading occurred. */
    constexpr std::uint32_t RCC_CSR_OBLRSTF_B_0x1 = 1;

    /** @brief NRST pin reset flag */
    using RCC_CSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from NRST pin occurred. (value: 0)
     *          - B_0x1: Reset from NRST pin occurred (value: 1)
     */
        /** @brief No reset from NRST pin occurred. */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x0 = 0;
        /** @brief Reset from NRST pin occurred */
    constexpr std::uint32_t RCC_CSR_PINRSTF_B_0x1 = 1;

    /** @brief BOR flag */
    using RCC_CSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No BOR occurred. (value: 0)
     *          - B_0x1: BOR occurred. (value: 1)
     */
        /** @brief No BOR occurred. */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR occurred. */
    constexpr std::uint32_t RCC_CSR_BORRSTF_B_0x1 = 1;

    /** @brief Software reset flag */
    using RCC_CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No software reset occurred. (value: 0)
     *          - B_0x1: Software reset occurred. (value: 1)
     */
        /** @brief No software reset occurred. */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x0 = 0;
        /** @brief Software reset occurred. */
    constexpr std::uint32_t RCC_CSR_SFTRSTF_B_0x1 = 1;

    /** @brief Independent watchdog reset flag */
    using RCC_CSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No independent watchdog reset occurred. (value: 0)
     *          - B_0x1: Independent watchdog reset occurred. (value: 1)
     */
        /** @brief No independent watchdog reset occurred. */
    constexpr std::uint32_t RCC_CSR_IWDGRSTF_B_0x0 = 0;
        /** @brief Independent watchdog reset occurred. */
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
     *          - B_0x0: No illegal low-power mode reset occurred. (value: 0)
     *          - B_0x1: Illegal low-power mode reset occurred. (value: 1)
     */
        /** @brief No illegal low-power mode reset occurred. */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x0 = 0;
        /** @brief Illegal low-power mode reset occurred. */
    constexpr std::uint32_t RCC_CSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC secure configuration register */
    using RCC_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock configuration and status bit security */
    using RCC_SECCFGR_HSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_HSISEC_B_0x1 = 1;

    /** @brief HSE clock configuration, status bits, and HSE_CSS security */
    using RCC_SECCFGR_HSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_HSESEC_B_0x1 = 1;

    /** @brief MSI clock configuration and status bit security */
    using RCC_SECCFGR_MSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_MSISEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_MSISEC_B_0x1 = 1;

    /** @brief LSI clock configuration and status bit security */
    using RCC_SECCFGR_LSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_LSISEC_B_0x1 = 1;

    /** @brief LSE clock configuration and status bit security */
    using RCC_SECCFGR_LSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_LSESEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_LSESEC_B_0x1 = 1;

    /** @brief SYSCLK clock selection, STOPWUCK bit, clock output on MCO configuration security */
    using RCC_SECCFGR_SYSCLKSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_SYSCLKSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_SYSCLKSEC_B_0x1 = 1;

    /** @brief AHBx/APBx prescaler configuration bit security */
    using RCC_SECCFGR_PRESCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_PRESCSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_PRESCSEC_B_0x1 = 1;

    /** @brief EPOD booster configuration bit security */
    using RCC_SECCFGR_BOOSTSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_BOOSTSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_BOOSTSEC_B_0x1 = 1;

    /** @brief Intermediate clock source selection security */
    using RCC_SECCFGR_ICLKSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_ICLKSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_ICLKSEC_B_0x1 = 1;

    /** @brief HSI48 clock configuration and status bit security */
    using RCC_SECCFGR_HSI48SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_HSI48SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_HSI48SEC_B_0x1 = 1;

    /** @brief Remove reset flag security */
    using RCC_SECCFGR_RMVFSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t RCC_SECCFGR_RMVFSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t RCC_SECCFGR_RMVFSEC_B_0x1 = 1;

    /** @brief RCC privilege configuration register */
    using RCC_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief RCC nonsecure function privilege configuration */
    using RCC_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to RCC nonsecure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to RCC nonsecure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to RCC nonsecure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to RCC nonsecure functions can be done by privileged access only. */
    constexpr std::uint32_t RCC_PRIVCFGR_NSPRIV_B_0x1 = 1;

}

#endif
