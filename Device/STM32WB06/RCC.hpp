/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB06_RCC_HPP
#define EMBEDDED_PP_STM32WB06_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RCC peripheral */
namespace STM32WB06::RCC {

    /** @brief CR register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal Low Speed oscillator enable Set and reset by software. Reset source only for this field: PORESETn */
    using CR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI RC oscillator OFF (value: 0)
     *          - B_0x1: LSI RC oscillator ON (value: 1)
     */
        /** @brief LSI RC oscillator OFF */
    constexpr std::uint32_t CR_LSION_B_0x0 = 0;
        /** @brief LSI RC oscillator ON */
    constexpr std::uint32_t CR_LSION_B_0x1 = 1;

    /** @brief Internal Low Speed oscillator Ready Set and reset by hardware to indicate when the Low Speed Internal RC oscillator is stable. Reset source only for this field: PORESETn */
    using CR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI RC oscillator not ready (value: 0)
     *          - B_0x1: LSI RC oscillator ready (value: 1)
     */
        /** @brief LSI RC oscillator not ready */
    constexpr std::uint32_t CR_LSIRDY_B_0x0 = 0;
        /** @brief LSI RC oscillator ready */
    constexpr std::uint32_t CR_LSIRDY_B_0x1 = 1;

    /** @brief External Low Speed Clock enable. Set and reset by software. Reset source only for this field: PORESETn */
    using CR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator OFF (value: 0)
     *          - B_0x1: LSE oscillator ON (value: 1)
     */
        /** @brief LSE oscillator OFF */
    constexpr std::uint32_t CR_LSEON_B_0x0 = 0;
        /** @brief LSE oscillator ON */
    constexpr std::uint32_t CR_LSEON_B_0x1 = 1;

    /** @brief External Low Speed Clock ready flag. Set by hardware to indicate that LSE oscillator is stable. */
    using CR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not ready (value: 0)
     *          - B_0x1: LSE oscillator ready (value: 1)
     */
        /** @brief LSE oscillator not ready */
    constexpr std::uint32_t CR_LSERDY_B_0x0 = 0;
        /** @brief LSE oscillator ready */
    constexpr std::uint32_t CR_LSERDY_B_0x1 = 1;

    /** @brief External Low Speed Clock bypass. Set and reset by software. Reset source only for this field: PORESETn */
    using CR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator bypass OFF (value: 0)
     *          - B_0x1: LSE oscillator bypass ON (value: 1)
     */
        /** @brief LSE oscillator bypass OFF */
    constexpr std::uint32_t CR_LSEBYP_B_0x0 = 0;
        /** @brief LSE oscillator bypass ON */
    constexpr std::uint32_t CR_LSEBYP_B_0x1 = 1;

    /** @brief Lock detector Nstop value When start_stop signal is high; a counter is incremented every 16 MHz clock cycle. When the counter reaches (NSTOP+1) x 64 value, the lock_det signal is set high indicating that the PLL is locked. As soon as the start_stop signal is low the counter is reset to 0. */
    using CR_LOCKDET_NSTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal High Speed clock ready flag. Set by hardware to indicate that internal RC 64MHz oscillator is stable. This bit is activated only if the RC is enabled by HSION (it is not activated if the RC is enabled by an IP request). */
    using CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: internal RC 64 MHz oscillator not ready (value: 0)
     *          - B_0x1: internal RC 64 MHz oscillator ready (value: 1)
     */
        /** @brief internal RC 64 MHz oscillator not ready */
    constexpr std::uint32_t CR_HSIRDY_B_0x0 = 0;
        /** @brief internal RC 64 MHz oscillator ready */
    constexpr std::uint32_t CR_HSIRDY_B_0x1 = 1;

    /** @brief External High Speed Clock Buffer for PLL RF2G4 enable. Set and reset by software. */
    using CR_HSEPLLBUFON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE PLL Buffer OFF (value: 0)
     *          - B_0x1: HSE PLL Buffer ON (value: 1)
     */
        /** @brief HSE PLL Buffer OFF */
    constexpr std::uint32_t CR_HSEPLLBUFON_B_0x0 = 0;
        /** @brief HSE PLL Buffer ON */
    constexpr std::uint32_t CR_HSEPLLBUFON_B_0x1 = 1;

    /** @brief Internal High Speed Clock PLL enable */
    using CR_HSIPLLON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL is OFF (value: 0)
     *          - B_0x1: PLL is ON (value: 1)
     */
        /** @brief PLL is OFF */
    constexpr std::uint32_t CR_HSIPLLON_B_0x0 = 0;
        /** @brief PLL is ON */
    constexpr std::uint32_t CR_HSIPLLON_B_0x1 = 1;

    /** @brief Internal High Speed Clock PLL ready flag. */
    using CR_HSIPLLRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL is unlocked (value: 0)
     *          - B_0x1: PLL is locked (value: 1)
     */
        /** @brief PLL is unlocked */
    constexpr std::uint32_t CR_HSIPLLRDY_B_0x0 = 0;
        /** @brief PLL is locked */
    constexpr std::uint32_t CR_HSIPLLRDY_B_0x1 = 1;

    /** @brief External High Speed Clock enable. Set and reset by software. in low power mode, HSE is turned off. */
    using CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator OFF (value: 0)
     *          - B_0x1: HSE oscillator ON (value: 1)
     */
        /** @brief HSE oscillator OFF */
    constexpr std::uint32_t CR_HSEON_B_0x0 = 0;
        /** @brief HSE oscillator ON */
    constexpr std::uint32_t CR_HSEON_B_0x1 = 1;

    /** @brief External High Speed Clock ready flag. Set by hardware to indicate that HSE oscillator is stable. */
    using CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator not ready (value: 0)
     *          - B_0x1: HSE oscillator ready (value: 1)
     */
        /** @brief HSE oscillator not ready */
    constexpr std::uint32_t CR_HSERDY_B_0x0 = 0;
        /** @brief HSE oscillator ready */
    constexpr std::uint32_t CR_HSERDY_B_0x1 = 1;

    /** @brief CFGR register */
    using CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief bit to control inversion of the SMPS clock */
    using CFGR_SMPSINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMPS clock not inverted (default value) (value: 0)
     *          - B_0x1: SMPS clock inverted (for debug) (value: 1)
     */
        /** @brief SMPS clock not inverted (default value) */
    constexpr std::uint32_t CFGR_SMPSINV_B_0x0 = 0;
        /** @brief SMPS clock inverted (for debug) */
    constexpr std::uint32_t CFGR_SMPSINV_B_0x1 = 1;

    /** @brief Clock source selection request: */
    using CFGR_HSESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI clock source is requested (default) (value: 0)
     *          - B_0x1: HSE clock source is requested (value: 1)
     */
        /** @brief HSI clock source is requested (default) */
    constexpr std::uint32_t CFGR_HSESEL_B_0x0 = 0;
        /** @brief HSE clock source is requested */
    constexpr std::uint32_t CFGR_HSESEL_B_0x1 = 1;

    /** @brief Stop HSI clock source request */
    using CFGR_STOPHSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI is enabled (default) (value: 0)
     *          - B_0x1: disable HSI is requested (value: 1)
     */
        /** @brief HSI is enabled (default) */
    constexpr std::uint32_t CFGR_STOPHSI_B_0x0 = 0;
        /** @brief disable HSI is requested */
    constexpr std::uint32_t CFGR_STOPHSI_B_0x1 = 1;

    /** @brief CLKSYSDIV: system clock divided factor from HSI_64M. */
    using CFGR_CLKSYSDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS clock prescaling factor to generate 4MHz or 8MHz */
    using CFGR_SMPSDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: div 2 when ANADIV=2 or 4 (default ) (value: 0)
     *          - B_0x1: div 4 when ANADIV=1 or 2 (value: 1)
     */
        /** @brief div 2 when ANADIV=2 or 4 (default ) */
    constexpr std::uint32_t CFGR_SMPSDIV_B_0x0 = 0;
        /** @brief div 4 when ANADIV=1 or 2 */
    constexpr std::uint32_t CFGR_SMPSDIV_B_0x1 = 1;

    /** @brief slow clock source selection Set by software to select the clock source. This is no glitch free mechanism Reset source only for this field: PORESETn */
    using CFGR_CLKSLOWSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSILMPU oscillator clock (default) (value: 0)
     *          - B_0x1: LSE oscillator clock used as slow clock (value: 1)
     *          - B_0x2: LSI oscillator clock used as slow clock (value: 2)
     *          - B_0x3: HSI_64M divided by 2048 used as slow clock (value: 3)
     */
        /** @brief LSILMPU oscillator clock (default) */
    constexpr std::uint32_t CFGR_CLKSLOWSEL_B_0x0 = 0;
        /** @brief LSE oscillator clock used as slow clock */
    constexpr std::uint32_t CFGR_CLKSLOWSEL_B_0x1 = 1;
        /** @brief LSI oscillator clock used as slow clock */
    constexpr std::uint32_t CFGR_CLKSLOWSEL_B_0x2 = 2;
        /** @brief HSI_64M divided by 2048 used as slow clock */
    constexpr std::uint32_t CFGR_CLKSLOWSEL_B_0x3 = 3;

    /** @brief IO BOOSTER enable Set and reset by software. */
    using CFGR_IOBOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable IO BOOSTER (value: 0)
     *          - B_0x1: enable IO BOOSTER (value: 1)
     */
        /** @brief does not enable IO BOOSTER */
    constexpr std::uint32_t CFGR_IOBOOSTEN_B_0x0 = 0;
        /** @brief enable IO BOOSTER */
    constexpr std::uint32_t CFGR_IOBOOSTEN_B_0x1 = 1;

    /** @brief Selection of I2S1 clock: 1x:64MHz peripheral clock */
    using CFGR_SPI3I2SCLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 16MHz peripheral clock (default) (value: 0)
     *          - B_0x1: 32MHz peripheral clock (value: 1)
     */
        /** @brief 16MHz peripheral clock (default) */
    constexpr std::uint32_t CFGR_SPI3I2SCLKSEL_B_0x0 = 0;
        /** @brief 32MHz peripheral clock */
    constexpr std::uint32_t CFGR_SPI3I2SCLKSEL_B_0x1 = 1;

    /** @brief Selection of I2S clock: 1x:64MHz peripheral clock */
    using CFGR_SPI2I2SCLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed Configurable Clock Output Selection. Set and reset by software. Glitches propagation possible. Reset source only for this field: PORESETn */
    using CFGR_LCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LCO output disabled, no clock on LCO (value: 0)
     *          - B_0x1: internal 32 KHz (LSI_LPMU) oscillator clock selected (value: 1)
     *          - B_0x2: internal 32 KHz (LSI) oscillator clock selected (value: 2)
     *          - B_0x3: external 32 KHz (LSE) oscillator clock selected (value: 3)
     */
        /** @brief LCO output disabled, no clock on LCO */
    constexpr std::uint32_t CFGR_LCOSEL_B_0x0 = 0;
        /** @brief internal 32 KHz (LSI_LPMU) oscillator clock selected */
    constexpr std::uint32_t CFGR_LCOSEL_B_0x1 = 1;
        /** @brief internal 32 KHz (LSI) oscillator clock selected */
    constexpr std::uint32_t CFGR_LCOSEL_B_0x2 = 2;
        /** @brief external 32 KHz (LSE) oscillator clock selected */
    constexpr std::uint32_t CFGR_LCOSEL_B_0x3 = 3;

    /** @brief Main Configurable Clock Output Selection. Set and reset by software. Glitches propagation possible. */
    using CFGR_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO output disabled, no clock on MCO (value: 0)
     *          - B_0x1: system clock selected (value: 1)
     *          - B_0x2: na (value: 2)
     *          - B_0x3: internal RC 64 MHz (HSI) oscillator clock selected (value: 3)
     *          - B_0x4: external oscillator (HSE) clock selected (value: 4)
     *          - B_0x5: internal RC 64 MHz (HSI) oscillator divided by 2048 and used as slow clock selected (value: 5)
     *          - B_0x6: SMPS clock selected (value: 6)
     *          - B_0x7: AUX ADC ANA clock selected (value: 7)
     */
        /** @brief MCO output disabled, no clock on MCO */
    constexpr std::uint32_t CFGR_MCOSEL_B_0x0 = 0;
        /** @brief system clock selected */
    constexpr std::uint32_t CFGR_MCOSEL_B_0x1 = 1;
        /** @brief na */
    constexpr std::uint32_t CFGR_MCOSEL_B_0x2 = 2;
        /** @brief internal RC 64 MHz (HSI) oscillator clock selected */
    constexpr std::uint32_t CFGR_MCOSEL_B_0x3 = 3;
        /** @brief external oscillator (HSE) clock selected */
    constexpr std::uint32_t CFGR_MCOSEL_B_0x4 = 4;
        /** @brief internal RC 64 MHz (HSI) oscillator divided by 2048 and used as slow clock selected */
    constexpr std::uint32_t CFGR_MCOSEL_B_0x5 = 5;
        /** @brief SMPS clock selected */
    constexpr std::uint32_t CFGR_MCOSEL_B_0x6 = 6;
        /** @brief AUX ADC ANA clock selected */
    constexpr std::uint32_t CFGR_MCOSEL_B_0x7 = 7;

    /** @brief Configurable Clock Output Prescaler. Set and reset by software. Glitches propagation if CCOPRE is modified after CCO output is enabled. Others: not used */
    using CFGR_CCOPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCO clock is divided by 1 (value: 0)
     *          - B_0x1: CCO clock is divided by 2 (value: 1)
     *          - B_0x2: CCO clock is divided by 4 (value: 2)
     *          - B_0x3: CCO clock is divided by 8 (value: 3)
     *          - B_0x4: CCO clock is divided by 16 (value: 4)
     */
        /** @brief CCO clock is divided by 1 */
    constexpr std::uint32_t CFGR_CCOPRE_B_0x0 = 0;
        /** @brief CCO clock is divided by 2 */
    constexpr std::uint32_t CFGR_CCOPRE_B_0x1 = 1;
        /** @brief CCO clock is divided by 4 */
    constexpr std::uint32_t CFGR_CCOPRE_B_0x2 = 2;
        /** @brief CCO clock is divided by 8 */
    constexpr std::uint32_t CFGR_CCOPRE_B_0x3 = 3;
        /** @brief CCO clock is divided by 16 */
    constexpr std::uint32_t CFGR_CCOPRE_B_0x4 = 4;

    /** @brief CIER register */
    using CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI Ready Interrupt Enable. Set and reset by software to enable/disable interrupt caused by internal RC 32 kHz oscillator stabilization. */
    using CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI ready interrupt disabled (value: 0)
     *          - B_0x1: LSI ready interrupt enabled (value: 1)
     */
        /** @brief LSI ready interrupt disabled */
    constexpr std::uint32_t CIER_LSIRDYIE_B_0x0 = 0;
        /** @brief LSI ready interrupt enabled */
    constexpr std::uint32_t CIER_LSIRDYIE_B_0x1 = 1;

    /** @brief LSE Ready Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the external 32 kHz oscillator stabilization. */
    using CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE ready interrupt disabled (value: 0)
     *          - B_0x1: LSE ready interrupt enabled (value: 1)
     */
        /** @brief LSE ready interrupt disabled */
    constexpr std::uint32_t CIER_LSERDYIE_B_0x0 = 0;
        /** @brief LSE ready interrupt enabled */
    constexpr std::uint32_t CIER_LSERDYIE_B_0x1 = 1;

    /** @brief HSI Ready Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the internal RC 64MHz oscillator stabilization. */
    using CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI ready interrupt disabled (value: 0)
     *          - B_0x1: HSI ready interrupt enabled (value: 1)
     */
        /** @brief HSI ready interrupt disabled */
    constexpr std::uint32_t CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief HSI ready interrupt enabled */
    constexpr std::uint32_t CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE Ready Interrupt Enable Set and reset by software to enable/disable interrupt caused by the external HSE oscillator stabilization. */
    using CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE ready interrupt disabled (value: 0)
     *          - B_0x1: HSE ready interrupt enabled (value: 1)
     */
        /** @brief HSE ready interrupt disabled */
    constexpr std::uint32_t CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE ready interrupt enabled */
    constexpr std::uint32_t CIER_HSERDYIE_B_0x1 = 1;

    /** @brief HSI PLL Ready Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the HSI 64MHz PLL locked on HSE. */
    using CIER_HSIPLLRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI PLL ready interrupt disabled (value: 0)
     *          - B_0x1: HSI PLL ready interrupt enabled (value: 1)
     */
        /** @brief HSI PLL ready interrupt disabled */
    constexpr std::uint32_t CIER_HSIPLLRDYIE_B_0x0 = 0;
        /** @brief HSI PLL ready interrupt enabled */
    constexpr std::uint32_t CIER_HSIPLLRDYIE_B_0x1 = 1;

    /** @brief HSIPLLUNLOCKDETIE: HSI PLL unlock detection Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the HSI 64MHz PLL unlock. */
    using CIER_HSIPLLUNLOCKDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI PLL unlock detection interrupt disabled (value: 0)
     *          - B_0x1: HSI PLL unlock detection interrupt enabled (value: 1)
     */
        /** @brief HSI PLL unlock detection interrupt disabled */
    constexpr std::uint32_t CIER_HSIPLLUNLOCKDETIE_B_0x0 = 0;
        /** @brief HSI PLL unlock detection interrupt enabled */
    constexpr std::uint32_t CIER_HSIPLLUNLOCKDETIE_B_0x1 = 1;

    /** @brief RTCRSTIE: RTC reset end Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the RTC reset end. */
    using CIER_RTCRSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI PLL unlock detection interrupt disabled (value: 0)
     *          - B_0x1: HSI PLL unlock detection interrupt enabled (value: 1)
     */
        /** @brief HSI PLL unlock detection interrupt disabled */
    constexpr std::uint32_t CIER_RTCRSTIE_B_0x0 = 0;
        /** @brief HSI PLL unlock detection interrupt enabled */
    constexpr std::uint32_t CIER_RTCRSTIE_B_0x1 = 1;

    /** @brief WDGRSTIE: Watchdog reset end Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the watchdog reset end. */
    using CIER_WDGRSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t CIER_WDGRSTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t CIER_WDGRSTIE_B_0x1 = 1;

    /** @brief CIFR register */
    using CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI Ready Interrupt flag Set by hardware when LSI clock becomes stable. */
    using CIFR_LSIRDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the internal RC 32 KHz oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the internal RC 32 kHz oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the internal RC 32 KHz oscillator */
    constexpr std::uint32_t CIFR_LSIRDYIF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the internal RC 32 kHz oscillator */
    constexpr std::uint32_t CIFR_LSIRDYIF_B_0x1 = 1;

    /** @brief LSE Ready Interrupt Flag. Set by hardware when LSE clock becomes stable. */
    using CIFR_LSERDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the LSE oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the LSE oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t CIFR_LSERDYIF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the LSE oscillator */
    constexpr std::uint32_t CIFR_LSERDYIF_B_0x1 = 1;

    /** @brief HSI Ready Interrupt Flag. Set by hardware when HSI becomes stable. */
    using CIFR_HSIRDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSI oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSI oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSI oscillator */
    constexpr std::uint32_t CIFR_HSIRDYIF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSI oscillator */
    constexpr std::uint32_t CIFR_HSIRDYIF_B_0x1 = 1;

    /** @brief HSE Ready Interrupt Flag. Set by hardware when HSE becomes stable. */
    using CIFR_HSERDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSE oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSE oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t CIFR_HSERDYIF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSE oscillator */
    constexpr std::uint32_t CIFR_HSERDYIF_B_0x1 = 1;

    /** @brief HSI PLL Ready Interrupt Flag. Set by hardware when HSI PLL 64MHz becomes stable. */
    using CIFR_HSIPLLRDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock ready interrupt caused by the HSI PLL64 MHz oscillator (value: 0)
     *          - B_0x1: Clock ready interrupt caused by the HSI PLL64 MHz oscillator (value: 1)
     */
        /** @brief No clock ready interrupt caused by the HSI PLL64 MHz oscillator */
    constexpr std::uint32_t CIFR_HSIPLLRDYIF_B_0x0 = 0;
        /** @brief Clock ready interrupt caused by the HSI PLL64 MHz oscillator */
    constexpr std::uint32_t CIFR_HSIPLLRDYIF_B_0x1 = 1;

    /** @brief HSIPLLUNLOCKDETIF: HSI PLL unlock detection Interrupt Flag. */
    using CIFR_HSIPLLUNLOCKDETIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC reset end Interrupt Flag. Raised when reset is released on 32kHz clock */
    using CIFR_RTCRSTIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDG reset end Interrupt Flag. Raised when reset is released on 32kHz clock */
    using CIFR_WDGRSTIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSCMDR register */
    using CSCMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Request for system clock switching Cleared by hardware when system clock frequency switch is done */
    using CSCMDR_REQUEST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: To cancel an ongiong request - still possible until IRQ assertion (value: 0)
     *          - B_0x1: To update the system clock frequency (value: 1)
     */
        /** @brief To cancel an ongiong request - still possible until IRQ assertion */
    constexpr std::uint32_t CSCMDR_REQUEST_B_0x0 = 0;
        /** @brief To update the system clock frequency */
    constexpr std::uint32_t CSCMDR_REQUEST_B_0x1 = 1;

    /** @brief system clock dividing factor from HSI_64M requested Note: behavior depends on BLEEN in APB2ENR register */
    using CSCMDR_CLKSYSDIV_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: div 1 (sys clock 64M) (value: 0)
     *          - B_0x1: div 2 (sys clock 32M) (value: 1)
     *          - B_0x2: div 4 (sys clock 16M) (value: 2)
     *          - B_0x3: div 8 (sys clock 8M) (value: 3)
     *          - B_0x4: div 16 (sys clock 4M) (value: 4)
     *          - B_0x5: div 32 (sys clock 2M) (value: 5)
     *          - B_0x6: div 64 (sys clock 1M) (value: 6)
     */
        /** @brief div 1 (sys clock 64M) */
    constexpr std::uint32_t CSCMDR_CLKSYSDIV_REQ_B_0x0 = 0;
        /** @brief div 2 (sys clock 32M) */
    constexpr std::uint32_t CSCMDR_CLKSYSDIV_REQ_B_0x1 = 1;
        /** @brief div 4 (sys clock 16M) */
    constexpr std::uint32_t CSCMDR_CLKSYSDIV_REQ_B_0x2 = 2;
        /** @brief div 8 (sys clock 8M) */
    constexpr std::uint32_t CSCMDR_CLKSYSDIV_REQ_B_0x3 = 3;
        /** @brief div 16 (sys clock 4M) */
    constexpr std::uint32_t CSCMDR_CLKSYSDIV_REQ_B_0x4 = 4;
        /** @brief div 32 (sys clock 2M) */
    constexpr std::uint32_t CSCMDR_CLKSYSDIV_REQ_B_0x5 = 5;
        /** @brief div 64 (sys clock 1M) */
    constexpr std::uint32_t CSCMDR_CLKSYSDIV_REQ_B_0x6 = 6;

    /** @brief Status of clock switch sequence */
    using CSCMDR_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IDLE no switch requested (value: 0)
     *          - B_0x1: ONGOING clock frequency switch is ongoing (value: 1)
     *          - B_0x2: DONE clock frequency switch done (value: 2)
     */
        /** @brief IDLE no switch requested */
    constexpr std::uint32_t CSCMDR_STATUS_B_0x0 = 0;
        /** @brief ONGOING clock frequency switch is ongoing */
    constexpr std::uint32_t CSCMDR_STATUS_B_0x1 = 1;
        /** @brief DONE clock frequency switch done */
    constexpr std::uint32_t CSCMDR_STATUS_B_0x2 = 2;

    /** @brief End of sequence Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the clock system switch. */
    using CSCMDR_EOFSEQ_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of sequence interrupt disabled (value: 0)
     *          - B_0x1: End of sequence interrupt enabled (value: 1)
     */
        /** @brief End of sequence interrupt disabled */
    constexpr std::uint32_t CSCMDR_EOFSEQ_IE_B_0x0 = 0;
        /** @brief End of sequence interrupt enabled */
    constexpr std::uint32_t CSCMDR_EOFSEQ_IE_B_0x1 = 1;

    /** @brief End of Sequence flag Set by hardware when clock system swtich is ended */
    using CSCMDR_EOFSEQ_IRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No end of sequence event occured (value: 0)
     *          - B_0x1: End of sequece event occured (value: 1)
     */
        /** @brief No end of sequence event occured */
    constexpr std::uint32_t CSCMDR_EOFSEQ_IRQ_B_0x0 = 0;
        /** @brief End of sequece event occured */
    constexpr std::uint32_t CSCMDR_EOFSEQ_IRQ_B_0x1 = 1;

    /** @brief AHBRSTR register */
    using AHBRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA and DMAMUX reset Set and reset by software. */
    using AHBRSTR_DMARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset DMA (value: 0)
     *          - B_0x1: resets DMA (value: 1)
     */
        /** @brief does not reset DMA */
    constexpr std::uint32_t AHBRSTR_DMARST_B_0x0 = 0;
        /** @brief resets DMA */
    constexpr std::uint32_t AHBRSTR_DMARST_B_0x1 = 1;

    /** @brief GPIOA reset Set and reset by software. */
    using AHBRSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t AHBRSTR_GPIOARST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t AHBRSTR_GPIOARST_B_0x1 = 1;

    /** @brief GPIOB reset Set and reset by software. */
    using AHBRSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t AHBRSTR_GPIOBRST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t AHBRSTR_GPIOBRST_B_0x1 = 1;

    /** @brief CRC reset Set and reset by software. */
    using AHBRSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset CRC (value: 0)
     *          - B_0x1: resets CRC (value: 1)
     */
        /** @brief does not reset CRC */
    constexpr std::uint32_t AHBRSTR_CRCRST_B_0x0 = 0;
        /** @brief resets CRC */
    constexpr std::uint32_t AHBRSTR_CRCRST_B_0x1 = 1;

    /** @brief PKA reset Set and reset by software. */
    using AHBRSTR_PKARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t AHBRSTR_PKARST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t AHBRSTR_PKARST_B_0x1 = 1;

    /** @brief RNG reset Set and reset by software. */
    using AHBRSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t AHBRSTR_RNGRST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t AHBRSTR_RNGRST_B_0x1 = 1;

    /** @brief APB0RSTR register */
    using APB0RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1: Advanced Timer reset Set and reset by software. */
    using APB0RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t APB0RSTR_TIM1RST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t APB0RSTR_TIM1RST_B_0x1 = 1;

    /** @brief SYSTEM CONFIG reset Set and reset by software. */
    using APB0RSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t APB0RSTR_SYSCFGRST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t APB0RSTR_SYSCFGRST_B_0x1 = 1;

    /** @brief RTC reset Set and reset by software. */
    using APB0RSTR_RTCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t APB0RSTR_RTCRST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t APB0RSTR_RTCRST_B_0x1 = 1;

    /** @brief WATCHDOG reset Set and reset by software. */
    using APB0RSTR_WDGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t APB0RSTR_WDGRST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t APB0RSTR_WDGRST_B_0x1 = 1;

    /** @brief APB1RSTR register */
    using APB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 reset */
    using APB1RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC reset. */
    using APB1RSTR_ADCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART reset Set and reset by software. */
    using APB1RSTR_LPUARTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t APB1RSTR_LPUARTRST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t APB1RSTR_LPUARTRST_B_0x1 = 1;

    /** @brief USART reset Set and reset by software. */
    using APB1RSTR_USARTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t APB1RSTR_USARTRST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t APB1RSTR_USARTRST_B_0x1 = 1;

    /** @brief SPI2 reset. */
    using APB1RSTR_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 reset Set and reset by software. */
    using APB1RSTR_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t APB1RSTR_SPI3RST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t APB1RSTR_SPI3RST_B_0x1 = 1;

    /** @brief I2C1 reset Set and reset by software. */
    using APB1RSTR_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not reset (value: 0)
     *          - B_0x1: resets (value: 1)
     */
        /** @brief does not reset */
    constexpr std::uint32_t APB1RSTR_I2C1RST_B_0x0 = 0;
        /** @brief resets */
    constexpr std::uint32_t APB1RSTR_I2C1RST_B_0x1 = 1;

    /** @brief 2C2 reset. */
    using APB1RSTR_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2RSTR register */
    using APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MR_BLE (Bluetooth radio) reset. */
    using APB2RSTR_MRBLERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBENR register */
    using AHBENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA and DMAMUX enable Set and enable by software. */
    using AHBENR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t AHBENR_DMAEN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t AHBENR_DMAEN_B_0x1 = 1;

    /** @brief GPIOA enable. It must be enabled by default */
    using AHBENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB enable. It must be enabled by default */
    using AHBENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC enable Set and enable by software. */
    using AHBENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t AHBENR_CRCEN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t AHBENR_CRCEN_B_0x1 = 1;

    /** @brief PKA clock enable Set and enable by software. */
    using AHBENR_PKAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t AHBENR_PKAEN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t AHBENR_PKAEN_B_0x1 = 1;

    /** @brief RNG clock enable Set and enable by software. */
    using AHBENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t AHBENR_RNGEN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t AHBENR_RNGEN_B_0x1 = 1;

    /** @brief APB0ENR register */
    using APB0ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 enable */
    using APB0ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB0ENR_TIM1EN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB0ENR_TIM1EN_B_0x1 = 1;

    /** @brief SYSTEM CONFIG enable Set and enable by software. */
    using APB0ENR_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB0ENR_SYSCFGEN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB0ENR_SYSCFGEN_B_0x1 = 1;

    /** @brief RTC clock enable Set and enable by software. Reset source only for this field: PORESETn */
    using APB0ENR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB0ENR_RTCEN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB0ENR_RTCEN_B_0x1 = 1;

    /** @brief Watchdog clock enable. Set and enable by software. */
    using APB0ENR_WDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB0ENR_WDGEN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB0ENR_WDGEN_B_0x1 = 1;

    /** @brief APB1ENR register */
    using APB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 enable. */
    using APB1ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB1ENR_SPI1EN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB1ENR_SPI1EN_B_0x1 = 1;

    /** @brief ADC clock enable for digital part of the ADC block. */
    using APB1ENR_ADCDIGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB1ENR_ADCDIGEN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB1ENR_ADCDIGEN_B_0x1 = 1;

    /** @brief ADC clock enable for the analog part of the ADC block. */
    using APB1ENR_ADCANAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART clock enable Set and enable by software. */
    using APB1ENR_LPUARTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB1ENR_LPUARTEN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB1ENR_LPUARTEN_B_0x1 = 1;

    /** @brief USART clock enable Set and enable by software. */
    using APB1ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB1ENR_USART1EN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB1ENR_USART1EN_B_0x1 = 1;

    /** @brief SPI2 enable */
    using APB1ENR_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 clock enable Set and enable by software. */
    using APB1ENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB1ENR_SPI3EN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB1ENR_SPI3EN_B_0x1 = 1;

    /** @brief I2C1 clock enable Set and enable by software. */
    using APB1ENR_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: does not enable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief does not enable */
    constexpr std::uint32_t APB1ENR_I2C1EN_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t APB1ENR_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 enable. */
    using APB1ENR_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2ENR register */
    using APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MR_BLE enable */
    using APB2ENR_MRBLEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MR_BLE IP is clock gated (value: 0)
     *          - B_0x1: MR_BLE IP is clocked (value: 1)
     */
        /** @brief MR_BLE IP is clock gated */
    constexpr std::uint32_t APB2ENR_MRBLEEN_B_0x0 = 0;
        /** @brief MR_BLE IP is clocked */
    constexpr std::uint32_t APB2ENR_MRBLEEN_B_0x1 = 1;

    /** @brief MR_BLE clock frequency selection when RCC_APB2ENR.MRBLEEN=1 */
    using APB2ENR_CLKBLEDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 32MHz (value: 0)
     *          - B_0x1: 16MHz (value: 1)
     */
        /** @brief 32MHz */
    constexpr std::uint32_t APB2ENR_CLKBLEDIV_B_0x0 = 0;
        /** @brief 16MHz */
    constexpr std::uint32_t APB2ENR_CLKBLEDIV_B_0x1 = 1;

    /** @brief CSR register */
    using CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remove reset flag Set by software to clear the value of the reset flags. It auto clears by HW after clearing reason flags */
    using CSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nothing done (value: 0)
     *          - B_0x1: Reset the value of the reset flags (value: 1)
     */
        /** @brief Nothing done */
    constexpr std::uint32_t CSR_RMVF_B_0x0 = 0;
        /** @brief Reset the value of the reset flags */
    constexpr std::uint32_t CSR_RMVF_B_0x1 = 1;

    /** @brief SYSTEM reset flag Reset by software by writing the RMVF bit. Set by hardware when a reset from pad occurs. */
    using CSR_PADRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from pad occurred (value: 0)
     *          - B_0x1: Reset from pad occurred (value: 1)
     */
        /** @brief No reset from pad occurred */
    constexpr std::uint32_t CSR_PADRSTF_B_0x0 = 0;
        /** @brief Reset from pad occurred */
    constexpr std::uint32_t CSR_PADRSTF_B_0x1 = 1;

    /** @brief POWER reset flag Reset by software by writing the RMVF bit. Set by hardware when a power reset occurs from LPMURESET block. */
    using CSR_PORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No POWER reset occurred (value: 0)
     *          - B_0x1: POWER reset occurred (value: 1)
     */
        /** @brief No POWER reset occurred */
    constexpr std::uint32_t CSR_PORRSTF_B_0x0 = 0;
        /** @brief POWER reset occurred */
    constexpr std::uint32_t CSR_PORRSTF_B_0x1 = 1;

    /** @brief Software reset flag Reset by software by writing the RMVF bit. Set by hardware when a software reset occurs. */
    using CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No software reset occurred (value: 0)
     *          - B_0x1: Software reset occurred (value: 1)
     */
        /** @brief No software reset occurred */
    constexpr std::uint32_t CSR_SFTRSTF_B_0x0 = 0;
        /** @brief Software reset occurred */
    constexpr std::uint32_t CSR_SFTRSTF_B_0x1 = 1;

    /** @brief Watchdog reset flag Reset by software by writing the RMVF bit. Set by hardware when a watchdog reset from V33 domain occurs. */
    using CSR_WDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No watchdog reset occurred (value: 0)
     *          - B_0x1: Watchdog reset occurred (value: 1)
     */
        /** @brief No watchdog reset occurred */
    constexpr std::uint32_t CSR_WDGRSTF_B_0x0 = 0;
        /** @brief Watchdog reset occurred */
    constexpr std::uint32_t CSR_WDGRSTF_B_0x1 = 1;

    /** @brief LOCK UP reset flag from CM0 Reset by software by writing the RMVF bit. Set by hardware from unrecoverable exception CPU. It reset V12i domain, FLASH controller and peripherals. */
    using CSR_LOCKUPRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No lockup reset occurred (value: 0)
     *          - B_0x1: lockup reset occurred (value: 1)
     */
        /** @brief No lockup reset occurred */
    constexpr std::uint32_t CSR_LOCKUPRSTF_B_0x0 = 0;
        /** @brief lockup reset occurred */
    constexpr std::uint32_t CSR_LOCKUPRSTF_B_0x1 = 1;

    /** @brief RFSWHSECR register */
    using RFSWHSECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sense Amplifier threshold Set by software. */
    using RFSWHSECR_SATRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the bias current is confronted to a reference current with a ratio of half. (value: 0)
     *          - B_0x1: the bias current is confronted to a reference current with a ratio of 3/4 (value: 1)
     */
        /** @brief the bias current is confronted to a reference current with a ratio of half. */
    constexpr std::uint32_t RFSWHSECR_SATRG_B_0x0 = 0;
        /** @brief the bias current is confronted to a reference current with a ratio of 3/4 */
    constexpr std::uint32_t RFSWHSECR_SATRG_B_0x1 = 1;

    /** @brief High Speed External XO current control Set by software. */
    using RFSWHSECR_GMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: max 0.0 001: max 0.57 mA/V (value: 0)
     *          - B_0x2: max 0.78 mA/V (value: 2)
     *          - B_0x3: max 1.13 mA/V (Default) (value: 3)
     *          - B_0x4: max 0.61 mA/V (value: 4)
     *          - B_0x5: max 1.65 mA/V (value: 5)
     *          - B_0x6: max 2.12 mA/V (value: 6)
     *          - B_0x7: max 2.84 mA/V (value: 7)
     */
        /** @brief max 0.0 001: max 0.57 mA/V */
    constexpr std::uint32_t RFSWHSECR_GMC_B_0x0 = 0;
        /** @brief max 0.78 mA/V */
    constexpr std::uint32_t RFSWHSECR_GMC_B_0x2 = 2;
        /** @brief max 1.13 mA/V (Default) */
    constexpr std::uint32_t RFSWHSECR_GMC_B_0x3 = 3;
        /** @brief max 0.61 mA/V */
    constexpr std::uint32_t RFSWHSECR_GMC_B_0x4 = 4;
        /** @brief max 1.65 mA/V */
    constexpr std::uint32_t RFSWHSECR_GMC_B_0x5 = 5;
        /** @brief max 2.12 mA/V */
    constexpr std::uint32_t RFSWHSECR_GMC_B_0x6 = 6;
        /** @brief max 2.84 mA/V */
    constexpr std::uint32_t RFSWHSECR_GMC_B_0x7 = 7;

    /** @brief RF-HSE capacitor bank tuning by SW enable Set by software */
    using RFSWHSECR_SWXOTUNEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF-HSE capacitor bank tuning value by SW Set by software */
    using RFSWHSECR_SWXOTUNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFHSECR register */
    using RFHSECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF-HSE capacitor bank tuning Set by option byte loading soon after Power On Reset. */
    using RFHSECR_XOTUNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
