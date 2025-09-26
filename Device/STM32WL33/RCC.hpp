/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_RCC_HPP
#define EMBEDDED_PP_STM32WL33_RCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RCC peripheral */
namespace STM32WL33::RCC {

    /** @brief CR register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal Low Speed oscillator enable Set and reset by software. Reset source only for this field: PORESETn 0: LSI RC oscillator OFF 1: LSI RC oscillator ON */
    using CR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal Low Speed oscillator Ready Set and reset by hardware to indicate when the Low Speed Internal RC oscillator is stable. Reset source only for this field: PORESETn 0: LSI RC oscillator not ready 1: LSI RC oscillator ready */
    using CR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External Low Speed Clock enable. Set and reset by software. Reset source only for this field: PORESETn 0: LSE oscillator OFF 1: LSE oscillator ON Note that enablng this bit, the configuration of PB12 and PB13 will be bypassed (whatever DFTMUX or AF selection) */
    using CR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External Low Speed Clock ready flag. Set by hardware to indicate that LSE oscillator is stable. 0: LSE oscillator not ready 1: LSE oscillator ready */
    using CR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External Low Speed Clock bypass. Set and reset by software. Reset source only for this field: PORESETn 0: LSE oscillator bypass OFF 1: LSE oscillator bypass ON Note that enablng this bit, the configuration of PB13 will be bypassed (whatever DFTMUX or AF selection) */
    using CR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lock detector Nstop value When start_stop signal is high; a counter is incremented every 16 MHz clock cycle. When the counter reaches (NSTOP+1) x 64 value, the lock_det signal is set high indicating that the PLL is locked. As soon as the start_stop signal is low the counter is reset to 0. */
    using CR_LOCKDET_NSTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal High Speed clock ready flag. Set by hardware to indicate that internal RC 64MHz oscillator is stable. This bit is activated only if the RC is enabled by HSION (it is not activated if the RC is enabled by an IP request). 0: internal RC 64 MHz oscillator not ready 1: internal RC 64 MHz oscillator ready */
    using CR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External High Speed Clock Buffer for PLL RF enable. Set and reset by software. 0: HSE PLL Buffer OFF 1: HSE PLL Buffer ON (default) */
    using CR_HSEPLLBUFON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal High Speed Clock PLL enable 0: PLL is OFF 1: PLL is ON */
    using CR_HSIPLLON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal High Speed Clock PLL ready flag. 0: PLL is unlocked 1: PLL is locked */
    using CR_HSIPLLRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force MRSUBG accurate clock ready status (for debug purpose) 0: no effect 1: active_transmission is force to '1' whatever the HSIPLLRDY/HSE status */
    using CR_FMRAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External High Speed Clock enable. Set and reset by software. in low power mode, HSE is turned off. HSE is turned ON only when RFSUBG LDO is Ready 0: HSE oscillator OFF 1: HSE oscillator ON */
    using CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External High Speed Clock ready flag. Set by hardware to indicate that HSE oscillator is stable. 0: HSE oscillator not ready 1: HSE oscillator ready */
    using CR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICSCR register */
    using ICSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low Speed oscillator trimming enable Set and reset by software. Reset source only for this field: PORESETn 0: LSI oscillator Bias trimming disabled 1: LSI oscillator Bias trimming enabled */
    using ICSCR_LSITRIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSITRIMOK: Low Speed oscillator trimming OK Set and reset by hardware to indicate when the Low Speed Internal RC oscillator has reached an optimal trimming of its bias current; this bit is only valid when LSITRIMEN is active. 0: LSI Bias trimming (LSIBW) is not good 1: LSI Bias trimming (LSIBW) value is OK */
    using ICSCR_LSITRIMOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trimming in test mode The value stored is the correspondent Engi Byte and represents the actual value driving the input of the hardware macro. This value is loaded soon after the completion of the Option Byte Loading procedure. This field is directly writeable only in Test Mode. */
    using ICSCR_LSIBW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICSCR[18:16] = HSITRIMOFFSET[2:0]: High Speed oscillator signed trimming offset 000: 0 (+ 0 MHz / default) 001: 1 (-0.5 MHz) 010: 2 (-1MHz) 011: 3 (-1.5 MHz) 100: -1 (+2 MHz) 101: -2 (+1.5MHz) 110: -3 (+1 MHz) 111: -4 (+0.5 MHz) */
    using ICSCR_HSITRIMOFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High Speed Internal clock trimming. This value is loaded soon after the completion of the Option Byte Loading procedure. When max value 0x3f is set, HSI is less than 64MHz */
    using ICSCR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CFGR register */
    using CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock source selection request: 0: HSI clock source is requested (default) 1: HSE clock source is requested */
    using CFGR_HSESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop HSI clock source request 0: HSI is enabled (default) 1: disable HSI is requested */
    using CFGR_STOPHSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock source selection Status 0: HSI clock source is selected 1: HSE clock source is selected Mirror the actual system clock source, depending on clock switching mechanism and limitations */
    using CFGR_HSESEL_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock frequency selection request 000: div1 (HSI 64M / HSE 48M) 001: div2 (HSI 32M / HSE 24M) 010: div4/div3 (HSI/HSE) (16M) 011: div8/div6 (HSI/HSE) (8M) * 100: div16/div12 (HSI/HSE) (4M) * 101: div32/div24 (HSI/HSE) (2M) * 110: div64/div48 (HSI/HSE) (1M) * Note: behavior depends on depending on CFGR.HSESEL and (*) APB2ENR.MRSUBGEN or LPAWUREN register */
    using CFGR_CLKSYSDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock frequency selection status 000: div1 (HSI 64M / HSE 48M) 001: div2 (HSI 32M / HSE 24M) 010: div4/div3 (HSI/HSE) (16M) 011: div8/div6 (HSI/HSE) (8M) 100: div16/div12 (HSI/HSE) (4M) 101: div32/div24 (HSI/HSE) (2M) 110: div64/div48 (HSI/HSE) (1M) Note: behavior depends on depending on CFGR.HSESEL and APB2ENR.MRSUBGEN register */
    using CFGR_CLKSYSDIV_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS clock prescaling factor to generate 4MHz or 8MHz 0: SMPS clock 8MHz (default ) 1: SMPS clock 4MHz */
    using CFGR_SMPSDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUCLKSEL: Selection of LPUART clock 0: 16 MHz peripheral clock (default) 1: LSE clock (Mandatory in LPUART deepstop mode) */
    using CFGR_LPUCLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief slow clock source selection Set by software to select the clock source. This is no glitch free mechanism Reset source only for this field: PORESETn 00: '0' (default) 01: LSE oscillator clock used as slow clock 10: LSI oscillator clock used as slow clock 11:HSI_64M divided by 2048 used as slow clock */
    using CFGR_CLKSLOWSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IOBOOSTEN: IO BOOSTER enable 0: IO BOOSTER block is disabled 1: IO BOOSTER block is enabled. */
    using CFGR_IOBOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCOEN: LCO enable on PA10 also in deepstop. 0: LCO output on PA10 is disabled 1: LCO output on PA10 is enabled. */
    using CFGR_LCOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3I2SCLKSEL: Selection of I2S clock for SPI3 IP. 00: 32 MHz peripheral clock (default) 01: 16 MHz peripheral clock 10: CLK_SYS 11: CLK_SYS Note: the I2S clock frequency must be higher or equal to the system clock (configured through RCC_CFGR.CLKSYSDIV[2:0] bit field). */
    using CFGR_SPI3I2SCLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed Configurable Clock Output Selection. Set and reset by software. Glitches propagation possible. Reset source only for this field: PORESETn 00: LCO output disabled, no clock on LCO 01: not used 10: internal 32 KHz (LSI) oscillator clock selected 11: external 32 KHz (LSE) oscillator clock selected */
    using CFGR_LCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Main Configurable Clock Output Selection. Set and reset by software. Glitches propagation possible. 000: MCO output disabled, no clock on MCO 001: system clock selected 010: na 011: internal RC 64 MHz (HSI) oscillator clock selected 100: external oscillator (HSE) clock selected 101: internal RC 64 MHz (HSI) oscillator divided by 2048 and used as slow clock selected 110: SMPS clock selected 111: AUX ADC ANA clock selected */
    using CFGR_MCOSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable Clock Output Prescaler. Set and reset by software. Glitches propagation if CCOPRE is modified after CCO output is enabled. 000: CCO clock is divided by 1 001: CCO clock is divided by 2 010: CCO clock is divided by 4 011: CCO clock is divided by 8 100: CCO clock is divided by 16 101: CCO clock is divided by 32 Others: not used */
    using CFGR_CCOPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSSWCR register */
    using CSSWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low Speed oscillator trimming by SW enable Set and reset by software. Reset source only for this field: PORESETn 0: LSI oscillator Bias trimming by SW disabled 1: LSI oscillator Bias trimming by SW enabled */
    using CSSWCR_LSISWTRIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low Speed Internal clock trimming value to set by SW Reset source only for this field: PORESETn */
    using CSSWCR_LSISWBW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum Crystal gm for Low Speed External XO (to connect to XTDRV of 32kHz LSE XO => into IO V33?) to amplify drinving capacity modulation Set by software. Reset source only for this field: PORESETn 00: 0.0, low drive capability 01: 0.1, medium low drive capability 10: 1.0, medium high drive capability 11: 1.1, highdrive capability */
    using CSSWCR_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High Speed oscillator trimming by SW enable Set and reset by software. 0: HSI oscillator Bias trimming by SW disabled 1: HSI oscillator Bias trimming by SW enabled */
    using CSSWCR_HSISWTRIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High Speed Internal clock trimming value to set by SW. */
    using CSSWCR_HSITRIMSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KRMR register */
    using KRMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KRM_EN: Variable rate multiplier Enable Reset source only for this field: PORESETn 0: KRM is disabled (default) 1: KRM is enabled. */
    using KRMR_KRM_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KRM[4:0] :SMPS clock dividing Ratio (CLK_SPMS_KRM frequency= CLK_ROOT frequency (depending on RCC_CFGR.HSESEL) divided by KRM when KRMEN=1) Reset source only for this field: PORESETn - 0x00 to 0x08: SMPS clock frequency equals CLK_ROOT/8 (8.00 MHz / 6.00 MHz) - 0x09: SMPS clock frequency equals CLK_ROOT/9 (7.11 MHz / 5.33 MHz) - 0x0A: SMPS clock frequency equals CLK_ROOT/10 (6.40 MHz / 4.80 MHz) - 0x0B: SMPS clock frequency equals CLK_ROOT/11 (5.82 MHz / 4.36 MHz) - 0x0C: SMPS clock frequency equals CLK_ROOT/12 (5.33 MHz / 4.00 MHz) - 0x0D: SMPS clock frequency equals CLK_ROOT/13 (4.92 MHz / 3.69 MHz) - 0x0E: SMPS clock frequency equals CLK_ROOT/14 (4.57 MHz / 3.43 MHz) - 0x0F: SMPS clock frequency equals CLK_ROOT/15 (4.27 MHz / 3.20 MHz) - 0x10: SMPS clock frequency equals CLK_ROOT/16 (4.00 MHz / 3.00 MHz) - 0x1x: Reserved Note: SMPS clock frequency must be selected in a range [4-8] MHz (depending on RCC_KRMR.KRM and RCC_CFGR.HSESEL). */
    using KRMR_KRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CIER register */
    using CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI Ready Interrupt Enable. Set and reset by software to enable/disable interrupt caused by internal RC 32 kHz oscillator stabilization. 0: LSI ready interrupt disabled 1: LSI ready interrupt enabled */
    using CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE Ready Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the external 32 kHz oscillator stabilization. 0: LSE ready interrupt disabled 1: LSE ready interrupt enabled */
    using CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI Ready Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the internal RC 64MHz oscillator stabilization. 0: HSI ready interrupt disabled 1: HSI ready interrupt enabled */
    using CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE Ready Interrupt Enable Set and reset by software to enable/disable interrupt caused by the external HSE oscillator stabilization. 0: HSE ready interrupt disabled 1: HSE ready interrupt enabled */
    using CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI PLL Ready Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the HSI 64MHz PLL locked on HSE. 0: HSI PLL ready interrupt disabled 1: HSI PLL ready interrupt enabled */
    using CIER_HSIPLLRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSIPLLUNLOCKDETIE: HSI PLL unlock detection Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the HSI 64MHz PLL unlock. 0: HSI PLL unlock detection interrupt disabled 1: HSI PLL unlock detection interrupt enabled */
    using CIER_HSIPLLUNLOCKDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCRSTIE: RTC reset end Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the RTC reset end. 0: HSI PLL unlock detection interrupt disabled 1: HSI PLL unlock detection interrupt enabled */
    using CIER_RTCRSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDGRSTIE: Watchdog reset end Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the watchdog reset end. 0: interrupt disabled 1: interrupt enabled */
    using CIER_WDGRSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPURSTIE: LPUART reset end Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the LPUART reset end. 0: interrupt disabled 1: interrupt enabled */
    using CIER_LPURSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCDRSTIE: LCD reset end Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the LCD reset end. 0: interrupt disabled 1: interrupt enabled */
    using CIER_LCDRSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSCRSTIE: LCSC reset release interrupt enable. 0: LCSC reset release interrupt is disabled. 1: LCSC reset release interrupt is enabled. */
    using CIER_LCSCRSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CIFR register */
    using CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI Ready Interrupt flag Set by hardware when LSI clock becomes stable. 0: No clock ready interrupt caused by the internal RC 32 KHz oscillator 1: Clock ready interrupt caused by the internal RC 32 kHz oscillator */
    using CIFR_LSIRDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE Ready Interrupt Flag. Set by hardware when LSE clock becomes stable. 0: No clock ready interrupt caused by the LSE oscillator 1: Clock ready interrupt caused by the LSE oscillator */
    using CIFR_LSERDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI Ready Interrupt Flag. Set by hardware when HSI becomes stable. 0: No clock ready interrupt caused by the HSI oscillator 1: Clock ready interrupt caused by the HSI oscillator */
    using CIFR_HSIRDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE Ready Interrupt Flag. Set by hardware when HSE becomes stable. 0: No clock ready interrupt caused by the HSE oscillator 1: Clock ready interrupt caused by the HSE oscillator */
    using CIFR_HSERDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI PLL Ready Interrupt Flag. Set by hardware when HSI PLL 64MHz becomes stable. 0: No clock ready interrupt caused by the HSI PLL64 MHz oscillator 1: Clock ready interrupt caused by the HSI PLL64 MHz oscillator */
    using CIFR_HSIPLLRDYIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSIPLLUNLOCKDETIF: HSI PLL unlock detection Interrupt Flag. */
    using CIFR_HSIPLLUNLOCKDETIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC reset end Interrupt Flag. Raised when reset is released on 32kHz clock */
    using CIFR_RTCRSTIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDG reset end Interrupt Flag. Raised when reset is released on 32kHz clock */
    using CIFR_WDGRSTIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART reset end Interrupt Flag. Raised when reset is released on 32kHz clock */
    using CIFR_LPURSTIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCD reset end Interrupt Flag. Raised when reset is released on 32kHz clock */
    using CIFR_LCDRSTIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC reset end Interrupt Flag. Raised when reset is released on 32kHz clock */
    using CIFR_LCSCRSTIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSCMDR register */
    using CSCMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Request for system clock switching Cleared by hardware when system clock frequency switch is done 0: To cancel an ongiong request - still possible until IRQ assertion 1: To update the system clock frequency */
    using CSCMDR_REQUEST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief system clock frequency selection request 000: div1 (HSI 64M / HSE) (48M) 001: div2 (HSI 32M / HSE (24M*) 010: div4/div3 (HSI/HSE) (16M) 011: div8/div6 (HSI/HSE) (8M) * 100: div16/div12 (HSI/HSE) (4M) * 101: div32/div24 (HSI/HSE) (2M) * 110: div64/div48 (HSI/HSE) (1M) * Note: behavior depends on depending on CFGR.HSESEL and (*) APB2ENR.MRSUBGEN or LPAWUREN */
    using CSCMDR_CLKSYSDIV_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status of clock switch sequence 00: IDLE no switch requested 01: ONGOING clock frequency switch is ongoing 10: DONE clock frequency switch done 11: Reserved */
    using CSCMDR_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of sequence Interrupt Enable. Set and reset by software to enable/disable interrupt caused by the clock system switch. 0: End of sequence interrupt disabled 1: End of sequence interrupt enabled */
    using CSCMDR_EOFSEQ_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sequence flag Set by hardware when clock system swtich is ended 0: No end of sequence event occured 1: End of sequece event occured */
    using CSCMDR_EOFSEQ_IRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBRSTR register */
    using AHBRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA and DMAMUX reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using AHBRSTR_DMARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using AHBRSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using AHBRSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using AHBRSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using AHBRSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using AHBRSTR_AESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB0RSTR register */
    using APB0RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2RST: TIM2 reset. 0: TIM2 IP is not under reset. 1: TIM2 IP is under reset. */
    using APB0RSTR_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16RST: TIM16 reset. 0: TIM16 IP is not under reset. 1: TIM16 IP is under reset. */
    using APB0RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFGRST: system controller reset. 0: system controller IP is not under reset. 1: system controller IP is under reset. */
    using APB0RSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCDCRST: LCD controller reset. 0: LCD controller IP is not under reset. 1: LCD controller IP is under reset. */
    using APB0RSTR_LCDCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMPRST: COMP reset. 0: COMP IP is not under reset. 1: COMP IP is under reset. */
    using APB0RSTR_COMPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DACRST: DAC reset. 0: DAC IP is not under reset. 1: DAC IP is under reset. */
    using APB0RSTR_DACRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCRST: RTC reset. 0: RTC IP is not under reset. 1: RTC IP is under reset. */
    using APB0RSTR_RTCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSCRST: LCSC reset. 0: LCSC IP is not under reset. 1: LCSC IP is under reset. */
    using APB0RSTR_LCSCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDGRST: Watchdog reset. 0: Watchdog IP is not under reset. 1: Watchdog IP is under reset. */
    using APB0RSTR_WDGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCURST: DBGMCU reset. 0: DBGMCU IP is not under reset. 1: DBGMCU IP is under reset. */
    using APB0RSTR_DBGMCURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1RSTR register */
    using APB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using APB1RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC reset for Aux-ADC IP Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using APB1RSTR_ADCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using APB1RSTR_LPUARTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using APB1RSTR_USARTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using APB1RSTR_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using APB1RSTR_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using APB1RSTR_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2RSTR register */
    using APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Radio MRSUBG reset. Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using APB2RSTR_MRSUBGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bubble reset Set and reset by software. 0: IP is not under reset. 1: IP is under reset. */
    using APB2RSTR_LPAWURRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBENR register */
    using AHBENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA and DMAMUX enable Set and enable by software. 0: does not enable 1: enable */
    using AHBENR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA enable. It must be enabled by default */
    using AHBENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB enable. It must be enabled by default */
    using AHBENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC enable Set and enable by software. 0: does not enable 1: enable */
    using AHBENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG clock enable Set and enable by software. 0: does not enable 1: enable */
    using AHBENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESEN: AES clock enable. 0: AES IP is clock gated. 1: AES IP is clocked. */
    using AHBENR_AESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB0ENR register */
    using APB0ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2: Advanced Timer clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB0ENR_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16: Advanced Timer clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB0ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSTEM CONFIG clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB0ENR_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCD clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB0ENR_LCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB0ENR_COMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB0ENR_DACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC clock enable Set and enable by software. Reset source only for this field: PORESETn 0: clock disable 1: clock enable */
    using APB0ENR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC clock enable. Set and enable by software. 0: clock disable 1: clock enable */
    using APB0ENR_LCSCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog clock enable. Set and enable by software. 0: clock disable 1: clock enable */
    using APB0ENR_WDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG MCU clock enable. Set and enable by software. 0: clock disable 1: clock enable */
    using APB0ENR_DBGMCUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1ENR register */
    using APB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB1ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AUXADC clock enable for Aux-ADC digital clock Set and enable by software. 0: clock disable 1: clock enable */
    using APB1ENR_ADCDIGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC clock enable for Aux-ADC analog clock Set and enable by software. 0: clock disable 1: clock enable */
    using APB1ENR_ADCANAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB1ENR_LPUARTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB1ENR_USARTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB1ENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB1ENR_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB1ENR_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2ENR register */
    using APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MRSUBG clock enable. Note: when this bit is '1', it must prevent clk_sys different from 16, 32, 64. If the configured clock is lower than 16MHz (1, 2, 4 or 8 MHz) or equal to 24MHz, clk_sys must be 16MHz 0: clock disable 1: clock enable */
    using APB2ENR_MRSUBGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bubble clock enable Set and enable by software. 0: clock disable 1: clock enable */
    using APB2ENR_LPAWUREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGR register */
    using DBGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief used for debug or test 0: No effect (default) 1: HSI forced off. */
    using DBGR_DBGHSIOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief used for debug mode with HSI bypassed by HSE 0: No effect (default) 1: HSI bypassed HSE. */
    using DBGR_DBGBYPHSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief used for debug mode with HSE bypassed by FXTAL_IN clock and ZIV12 output used. 0: No effect (default) 1: HSE bypassed by FXTAL_IN clock and ZIV12 output used. */
    using DBGR_DBGXOEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FORCEXO48MREADY Force XO48M Ready input signal This bit is for debug and force the XO48M ready input, in order to bypass XO48M comparators. 0: No effect (default) 1: Force XOREADY=1 */
    using DBGR_FORCEXO48MREADY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSR register */
    using CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remove reset flag Set by software to clear the value of the reset flags. It auto clears by HW after clearing reason flags 0: Nothing done 1: Reset the value of the reset flags */
    using CSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSTEM reset flag Reset by software by writing the RMVF bit. Set by hardware when a reset from pad occurs. 0: No reset from pad occurred 1: Reset from pad occurred */
    using CSR_PADRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief POWER reset flag Reset by software by writing the RMVF bit. Set by hardware when a power reset occurs from LPMURESET block. 0: No POWER reset occurred 1: POWER reset occurred */
    using CSR_PORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software reset flag Reset by software by writing the RMVF bit. Set by hardware when a software reset occurs. 0: No software reset occurred 1: Software reset occurred */
    using CSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog reset flag Reset by software by writing the RMVF bit. Set by hardware when a watchdog reset from V33 domain occurs. 0: No watchdog reset occurred 1: Watchdog reset occurred */
    using CSR_WDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK UP reset flag from CM0 Reset by software by writing the RMVF bit. Set by hardware from unrecoverable exception CPU. It reset V12i domain, FLASH controller and peripherals. 0: No lockup reset occurred 1: lockup reset occurred */
    using CSR_LOCKUPRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFSWHSECR register */
    using RFSWHSECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GMC[6:5]: High speed external XO current control reference 00: 10 uA 01: 20 uA 1x: 40 uA GMC[4:0]: High speed external XO current control multiplying factor IcoreHSE= GMC[4:0] * GMC[6:5] Example: GMC[6:0]=0x1111001 -> IcoreHSE=25*40uA / Default 3F: IcoreHSE= 10uA x 31 = 310uA Note: this value is set only by software. */
    using RFSWHSECR_GMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF-HSE capacitor bank tuning by SW enable Set by software */
    using RFSWHSECR_SWXOTUNEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF-HSE capacitor bank tuning value by SW Set by software */
    using RFSWHSECR_SWXOTUNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF-HSE Startup current Set by software Default value 2 */
    using RFSWHSECR_ISTARTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF-HSE Amplitude Control threshold Set by software Default value 0 */
    using RFSWHSECR_AMPLTHRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFHSECR register */
    using RFHSECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF-HSE capacitor bank tuning Set by option byte loading soon after Power On Reset. */
    using RFHSECR_XOTUNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF-HSE Amplitude Control Ready output */
    using RFHSECR_AMPLREADY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSMENR register */
    using AHBSMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA clock enable during Sleep mode bit This bit is set and reset by software. - 0: DMA clock disabled in Sleep mode - 1: DMA clock enabled in Sleep mode (if enabled in DMAEN) */
    using AHBSMENR_DMASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash clocks enable during Flash Sleep PD and CPU Sleep mode bit This bit is set and reset by software. - 0: Flash clocks are disabled in Flash Sleep PD* and CPU Sleep mode - 1: Flash clocks are enabled in Sleep mode Note: Flash Sleep PD is enabled through nvm_control register CONFIG.SLEEP_PD */
    using AHBSMENR_FLASHSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA clock enable during Sleep mode bit This bit is set and reset by software. - 0: GPIOA clock disabled in Sleep mode - 1: GPIOA clock enabled in Sleep mode (if enabled by GPIOAEN) */
    using AHBSMENR_GPIOASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB clock enable during Sleep mode bit This bit is set and reset by software. - 0: GPIOB clock disabled in Sleep mode - 1: GPIOB clock enabled in Sleep mode (if enabled in GPIOBEN) */
    using AHBSMENR_GPIOBSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM0 clock enable during Sleep mode bit This bit is set and reset by software. - 0: SRAM0 clock disabled in Sleep mode - 1: SRAM0 clock enabled in Sleep mode */
    using AHBSMENR_SRAM0SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1 clock enable during Sleep mode bit This bit is set and reset by software. - 0: SRAM1 clock disabled in Sleep mode - 1: SRAM1 clock enabled in Sleep mode */
    using AHBSMENR_SRAM1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC clock enable during Sleep mode bit This bit is set and reset by software. - 0: CRC clock disabled in Sleep mode - 1: CRC clock enabled in Sleep mode (if enabled in CRCEN) */
    using AHBSMENR_CRCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: RNG bus clock disabled in Sleep mode - 1: RNG bus clock enabled in Sleep mode (if enabled in RNGEN) */
    using AHBSMENR_RNGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: AES bus clock disabled in Sleep mode - 1: AES bus clock enabled in Sleep mode (if enabled in AESEN) */
    using AHBSMENR_AESSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB0SMENR register */
    using APB0SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: TIM2 bus clock disabled in Sleep mode - 1: TIM2 bus clock enabled in Sleep mode (if enabled in TIM2EN) */
    using APB0SMENR_TIM2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: TIM16 bus clock disabled in Sleep mode - 1: TIM16 bus clock enabled in Sleep mode (if enabled in TIM16EN) */
    using APB0SMENR_TIM16SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: SYSCFG bus clock disabled in Sleep mode - 1: SYSCFG bus clock enabled in Sleep mode (if enabled in SYSCFGEN) */
    using APB0SMENR_SYSCFGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCDC bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: LCDC bus clock disabled in Sleep mode - 1: LCDC bus clock enabled in Sleep mode (if enabled in LCDCEN) */
    using APB0SMENR_LCDCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: COMP bus clock disabled in Sleep mode - 1: COMP bus clock enabled in Sleep mode (if enabled in COMPEN) */
    using APB0SMENR_COMPSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: DAC bus clock disabled in Sleep mode - 1: DAC bus clock enabled in Sleep mode (if enabled in DACEN) */
    using APB0SMENR_DACSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: RTC bus clock disabled in Sleep mode - 1: RTC bus clock enabled in Sleep mode (if enabled in RTCEN) */
    using APB0SMENR_RTCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: LCSC bus clock disabled in Sleep mode - 1: LCSC bus clock enabled in Sleep mode (if enabled in LCSCEN) */
    using APB0SMENR_LCSCSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDG clock enable during Sleep mode bit This bit is set and reset by software. - 0: WDG clock disabled in Sleep mode - 1: WDG clock enabled in Sleep mode (if enabled in WDGEN) */
    using APB0SMENR_WDGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU clock enable during Sleep mode bit This bit is set and reset by software. - 0: DBGMCU clock disabled in Sleep mode - 1: DBGMCU clock enabled in Sleep mode (if enabled in DBGMCUEN) */
    using APB0SMENR_DBGMCUSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1SMENR register */
    using APB1SMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: SPI1 bus clock disabled in Sleep mode - 1: SPI1 bus clock enabled in Sleep mode (if enabled in SPI1EN) */
    using APB1SMENR_SPI1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADCDIG bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: ADCDIG bus clock disabled in Sleep mode - 1: ADCDIG bus clock enabled in Sleep mode (if enabled by ADCDIGEN) */
    using APB1SMENR_ADCDIGSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: LPUART bus clock disabled in Sleep mode - 1: LPUART bus clock enabled in Sleep mode (if enabled in LPUARTEN) */
    using APB1SMENR_LPUARTSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: USART bus clock disabled in Sleep mode - 1: USART bus clock enabled in Sleep mode (if enabled in USARTEN) */
    using APB1SMENR_USARTSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 bus clock enable during Sleep mode bit This bit is set and reset by software. - 0: SPI3 bus clock disabled in Sleep mode - 1: SPI3 bus clock enabled in Sleep mode (if enabled in SPI3EN) */
    using APB1SMENR_SPI3SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 clock enable during Sleep mode bit This bit is set and reset by software. - 0: I2C1 clock disabled in Sleep mode - 1: I2C1 clock enabled in Sleep mode (if enabled in I2C1EN) */
    using APB1SMENR_I2C1SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 clock enable during Sleep mode bit This bit is set and reset by software. - 0: I2C2 clock disabled in Sleep mode - 1: I2C2 clock enabled in Sleep mode (if enabled in I2C2EN) */
    using APB1SMENR_I2C2SMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
