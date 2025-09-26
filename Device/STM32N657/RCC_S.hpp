/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_RCC_S_HPP
#define EMBEDDED_PP_STM32N657_RCC_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Reset and clock control */
namespace STM32N657::RCC_S {

    /** @brief RCC control register */
    using RCC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable in Run/Sleep mode. */
    using RCC_CR_LSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI is OFF (default after reset) (value: 0)
     *          - B_0x1: LSI is ON (value: 1)
     */
        /** @brief LSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_LSION_B_0x0 = 0;
        /** @brief LSI is ON */
    constexpr std::uint32_t RCC_CR_LSION_B_0x1 = 1;

    /** @brief LSE oscillator enable in Run/Sleep mode. */
    using RCC_CR_LSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE is OFF (default after reset) (value: 0)
     *          - B_0x1: LSE is ON (value: 1)
     */
        /** @brief LSE is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_LSEON_B_0x0 = 0;
        /** @brief LSE is ON */
    constexpr std::uint32_t RCC_CR_LSEON_B_0x1 = 1;

    /** @brief MSI oscillator enable in Run/Sleep mode. */
    using RCC_CR_MSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI is OFF (default after reset) (value: 0)
     *          - B_0x1: MSI is ON (value: 1)
     */
        /** @brief MSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_MSION_B_0x0 = 0;
        /** @brief MSI is ON */
    constexpr std::uint32_t RCC_CR_MSION_B_0x1 = 1;

    /** @brief HSI oscillator enable in Run/Sleep mode. */
    using RCC_CR_HSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI is OFF (value: 0)
     *          - B_0x1: HSI is ON (default after reset) (value: 1)
     */
        /** @brief HSI is OFF */
    constexpr std::uint32_t RCC_CR_HSION_B_0x0 = 0;
        /** @brief HSI is ON (default after reset) */
    constexpr std::uint32_t RCC_CR_HSION_B_0x1 = 1;

    /** @brief HSE oscillator enable in Run/Sleep mode. */
    using RCC_CR_HSEON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE is OFF (default after reset) (value: 0)
     *          - B_0x1: HSE is ON (value: 1)
     */
        /** @brief HSE is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x0 = 0;
        /** @brief HSE is ON */
    constexpr std::uint32_t RCC_CR_HSEON_B_0x1 = 1;

    /** @brief PLL1 enable in Run/Sleep mode. */
    using RCC_CR_PLL1ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 is OFF (default after reset) (value: 0)
     *          - B_0x1: PLL1 is ON (value: 1)
     */
        /** @brief PLL1 is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x0 = 0;
        /** @brief PLL1 is ON */
    constexpr std::uint32_t RCC_CR_PLL1ON_B_0x1 = 1;

    /** @brief PLL2 enable in Run/Sleep mode. */
    using RCC_CR_PLL2ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 is OFF (default after reset) (value: 0)
     *          - B_0x1: PLL2 is ON (value: 1)
     */
        /** @brief PLL2 is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL2ON_B_0x0 = 0;
        /** @brief PLL2 is ON */
    constexpr std::uint32_t RCC_CR_PLL2ON_B_0x1 = 1;

    /** @brief PLL3 enable in Run/Sleep mode. */
    using RCC_CR_PLL3ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 is OFF (default after reset) (value: 0)
     *          - B_0x1: PLL3 is ON (value: 1)
     */
        /** @brief PLL3 is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL3ON_B_0x0 = 0;
        /** @brief PLL3 is ON */
    constexpr std::uint32_t RCC_CR_PLL3ON_B_0x1 = 1;

    /** @brief PLL4 enable in Run/Sleep mode. */
    using RCC_CR_PLL4ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL4 is OFF (default after reset) (value: 0)
     *          - B_0x1: PLL4 is ON (value: 1)
     */
        /** @brief PLL4 is OFF (default after reset) */
    constexpr std::uint32_t RCC_CR_PLL4ON_B_0x0 = 0;
        /** @brief PLL4 is ON */
    constexpr std::uint32_t RCC_CR_PLL4ON_B_0x1 = 1;

    /** @brief RCC status register */
    using RCC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI clock ready flag */
    using RCC_SR_LSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI is not ready (default after reset) (value: 0)
     *          - B_0x1: LSI is ready (value: 1)
     */
        /** @brief LSI is not ready (default after reset) */
    constexpr std::uint32_t RCC_SR_LSIRDY_B_0x0 = 0;
        /** @brief LSI is ready */
    constexpr std::uint32_t RCC_SR_LSIRDY_B_0x1 = 1;

    /** @brief LSE clock ready flag */
    using RCC_SR_LSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE is not ready (default after reset) (value: 0)
     *          - B_0x1: LSE is ready (value: 1)
     */
        /** @brief LSE is not ready (default after reset) */
    constexpr std::uint32_t RCC_SR_LSERDY_B_0x0 = 0;
        /** @brief LSE is ready */
    constexpr std::uint32_t RCC_SR_LSERDY_B_0x1 = 1;

    /** @brief MSI clock ready flag */
    using RCC_SR_MSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI is not ready (default after reset) (value: 0)
     *          - B_0x1: MSI is ready (value: 1)
     */
        /** @brief MSI is not ready (default after reset) */
    constexpr std::uint32_t RCC_SR_MSIRDY_B_0x0 = 0;
        /** @brief MSI is ready */
    constexpr std::uint32_t RCC_SR_MSIRDY_B_0x1 = 1;

    /** @brief HSI clock ready flag */
    using RCC_SR_HSIRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI is not ready (value: 0)
     *          - B_0x1: HSI is ready (default after reset) (value: 1)
     */
        /** @brief HSI is not ready */
    constexpr std::uint32_t RCC_SR_HSIRDY_B_0x0 = 0;
        /** @brief HSI is ready (default after reset) */
    constexpr std::uint32_t RCC_SR_HSIRDY_B_0x1 = 1;

    /** @brief HSE clock ready flag */
    using RCC_SR_HSERDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE is not ready (default after reset) (value: 0)
     *          - B_0x1: HSE is ready (value: 1)
     */
        /** @brief HSE is not ready (default after reset) */
    constexpr std::uint32_t RCC_SR_HSERDY_B_0x0 = 0;
        /** @brief HSE is ready */
    constexpr std::uint32_t RCC_SR_HSERDY_B_0x1 = 1;

    /** @brief PLL1 clock ready flag */
    using RCC_SR_PLL1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 unlocked (default after reset) (value: 0)
     *          - B_0x1: PLL1 locked (value: 1)
     */
        /** @brief PLL1 unlocked (default after reset) */
    constexpr std::uint32_t RCC_SR_PLL1RDY_B_0x0 = 0;
        /** @brief PLL1 locked */
    constexpr std::uint32_t RCC_SR_PLL1RDY_B_0x1 = 1;

    /** @brief PLL2 clock ready flag */
    using RCC_SR_PLL2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 unlocked (default after reset) (value: 0)
     *          - B_0x1: PLL2 locked (value: 1)
     */
        /** @brief PLL2 unlocked (default after reset) */
    constexpr std::uint32_t RCC_SR_PLL2RDY_B_0x0 = 0;
        /** @brief PLL2 locked */
    constexpr std::uint32_t RCC_SR_PLL2RDY_B_0x1 = 1;

    /** @brief PLL3 clock ready flag */
    using RCC_SR_PLL3RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 unlocked (default after reset) (value: 0)
     *          - B_0x1: PLL3 locked (value: 1)
     */
        /** @brief PLL3 unlocked (default after reset) */
    constexpr std::uint32_t RCC_SR_PLL3RDY_B_0x0 = 0;
        /** @brief PLL3 locked */
    constexpr std::uint32_t RCC_SR_PLL3RDY_B_0x1 = 1;

    /** @brief PLL4 clock ready flag */
    using RCC_SR_PLL4RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL4 unlocked (default after reset) (value: 0)
     *          - B_0x1: PLL4 locked (value: 1)
     */
        /** @brief PLL4 unlocked (default after reset) */
    constexpr std::uint32_t RCC_SR_PLL4RDY_B_0x0 = 0;
        /** @brief PLL4 locked */
    constexpr std::uint32_t RCC_SR_PLL4RDY_B_0x1 = 1;

    /** @brief RCC Stop mode control register */
    using RCC_STOPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable in Stop mode. */
    using RCC_STOPCR_LSISTOPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI is OFF (default after reset) (value: 0)
     *          - B_0x1: LSI is ON (value: 1)
     */
        /** @brief LSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_STOPCR_LSISTOPEN_B_0x0 = 0;
        /** @brief LSI is ON */
    constexpr std::uint32_t RCC_STOPCR_LSISTOPEN_B_0x1 = 1;

    /** @brief LSE oscillator enable in Stop mode. */
    using RCC_STOPCR_LSESTOPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE is OFF (default after reset) (value: 0)
     *          - B_0x1: LSE is ON (value: 1)
     */
        /** @brief LSE is OFF (default after reset) */
    constexpr std::uint32_t RCC_STOPCR_LSESTOPEN_B_0x0 = 0;
        /** @brief LSE is ON */
    constexpr std::uint32_t RCC_STOPCR_LSESTOPEN_B_0x1 = 1;

    /** @brief MSI oscillator enable in Stop mode. */
    using RCC_STOPCR_MSISTOPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI is OFF (default after reset) (value: 0)
     *          - B_0x1: MSI is ON (value: 1)
     */
        /** @brief MSI is OFF (default after reset) */
    constexpr std::uint32_t RCC_STOPCR_MSISTOPEN_B_0x0 = 0;
        /** @brief MSI is ON */
    constexpr std::uint32_t RCC_STOPCR_MSISTOPEN_B_0x1 = 1;

    /** @brief HSI oscillator enable in Stop mode. */
    using RCC_STOPCR_HSISTOPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI is OFF (value: 0)
     *          - B_0x1: HSI is ON (default after reset) (value: 1)
     */
        /** @brief HSI is OFF */
    constexpr std::uint32_t RCC_STOPCR_HSISTOPEN_B_0x0 = 0;
        /** @brief HSI is ON (default after reset) */
    constexpr std::uint32_t RCC_STOPCR_HSISTOPEN_B_0x1 = 1;

    /** @brief RCC configuration register 1 */
    using RCC_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System clock selection after a wake up from system Stop. */
    using RCC_CFGR1_STOPWUCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI selected as wake up clock from system Stop (default after reset) (value: 0)
     *          - B_0x1: CSI selected as wake up clock from system Stop (value: 1)
     */
        /** @brief HSI selected as wake up clock from system Stop (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_STOPWUCK_B_0x0 = 0;
        /** @brief CSI selected as wake up clock from system Stop */
    constexpr std::uint32_t RCC_CFGR1_STOPWUCK_B_0x1 = 1;

    /** @brief CPU clock switch selection */
    using RCC_CFGR1_CPUSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck selected as system clock (default after reset) (value: 0)
     *          - B_0x1: msi_ck selected as system clock (value: 1)
     *          - B_0x2: hse_ck selected as system clock (value: 2)
     *          - B_0x3: ic1_ck selected as system clock (value: 3)
     */
        /** @brief hsi_ck selected as system clock (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_CPUSW_B_0x0 = 0;
        /** @brief msi_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_CPUSW_B_0x1 = 1;
        /** @brief hse_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_CPUSW_B_0x2 = 2;
        /** @brief ic1_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_CPUSW_B_0x3 = 3;

    /** @brief CPU clock switch status */
    using RCC_CFGR1_CPUSWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck selected as system clock (default after reset) (value: 0)
     *          - B_0x1: msi_ck selected as system clock (value: 1)
     *          - B_0x2: hse_ck selected as system clock (value: 2)
     *          - B_0x3: ic1_ck selected as system clock (value: 3)
     */
        /** @brief hsi_ck selected as system clock (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_CPUSWS_B_0x0 = 0;
        /** @brief msi_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_CPUSWS_B_0x1 = 1;
        /** @brief hse_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_CPUSWS_B_0x2 = 2;
        /** @brief ic1_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_CPUSWS_B_0x3 = 3;

    /** @brief System clock switch selection */
    using RCC_CFGR1_SYSSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck selected as system clock (default after reset) (value: 0)
     *          - B_0x1: msi_ck selected as system clock (value: 1)
     *          - B_0x2: hse_ck selected as system clock (value: 2)
     *          - B_0x3: ic2_ck selected as system clock (value: 3)
     */
        /** @brief hsi_ck selected as system clock (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_SYSSW_B_0x0 = 0;
        /** @brief msi_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SYSSW_B_0x1 = 1;
        /** @brief hse_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SYSSW_B_0x2 = 2;
        /** @brief ic2_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SYSSW_B_0x3 = 3;

    /** @brief System clock switch status */
    using RCC_CFGR1_SYSSWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck selected as system clock (default after reset) (value: 0)
     *          - B_0x1: msi_ck selected as system clock (value: 1)
     *          - B_0x2: hse_ck selected as system clock (value: 2)
     *          - B_0x3: ic2_ck selected as system clock (value: 3)
     */
        /** @brief hsi_ck selected as system clock (default after reset) */
    constexpr std::uint32_t RCC_CFGR1_SYSSWS_B_0x0 = 0;
        /** @brief msi_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SYSSWS_B_0x1 = 1;
        /** @brief hse_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SYSSWS_B_0x2 = 2;
        /** @brief ic2_ck selected as system clock */
    constexpr std::uint32_t RCC_CFGR1_SYSSWS_B_0x3 = 3;

    /** @brief RCC configuration register 2 */
    using RCC_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU domain APB1 prescaler */
    using RCC_CFGR2_PPRE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk1 = sys_bus2_ck (default after reset) (value: 0)
     *          - B_0x1: rcc_pclk1 = sys_bus2_ck / 2 (value: 1)
     *          - B_0x2: rcc_pclk1 = sys_bus2_ck / 4 (value: 2)
     *          - B_0x3: rcc_pclk1 = sys_bus2_ck / 8 (value: 3)
     *          - B_0x4: rcc_pclk1 = sys_bus2_ck / 16 (value: 4)
     *          - B_0x5: rcc_pclk1 = sys_bus2_ck / 32 (value: 5)
     *          - B_0x6: rcc_pclk1 = sys_bus2_ck / 64 (value: 6)
     *          - B_0x7: rcc_pclk1 = sys_bus2_ck / 128 (value: 7)
     */
        /** @brief rcc_pclk1 = sys_bus2_ck (default after reset) */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x0 = 0;
        /** @brief rcc_pclk1 = sys_bus2_ck / 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x1 = 1;
        /** @brief rcc_pclk1 = sys_bus2_ck / 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x2 = 2;
        /** @brief rcc_pclk1 = sys_bus2_ck / 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x3 = 3;
        /** @brief rcc_pclk1 = sys_bus2_ck / 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x4 = 4;
        /** @brief rcc_pclk1 = sys_bus2_ck / 32 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x5 = 5;
        /** @brief rcc_pclk1 = sys_bus2_ck / 64 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x6 = 6;
        /** @brief rcc_pclk1 = sys_bus2_ck / 128 */
    constexpr std::uint32_t RCC_CFGR2_PPRE1_B_0x7 = 7;

    /** @brief CPU domain APB2 prescaler */
    using RCC_CFGR2_PPRE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk2 = sys_bus2_ck (default after reset) (value: 0)
     *          - B_0x1: rcc_pclk2 = sys_bus2_ck / 2 (value: 1)
     *          - B_0x2: rcc_pclk1 = sys_bus2_ck / 4 (value: 2)
     *          - B_0x3: rcc_pclk1 = sys_bus2_ck / 8 (value: 3)
     *          - B_0x4: rcc_pclk1 = sys_bus2_ck / 16 (value: 4)
     *          - B_0x5: rcc_pclk1 = sys_bus2_ck / 32 (value: 5)
     *          - B_0x6: rcc_pclk1 = sys_bus2_ck / 64 (value: 6)
     *          - B_0x7: rcc_pclk1 = sys_bus2_ck / 128 (value: 7)
     */
        /** @brief rcc_pclk2 = sys_bus2_ck (default after reset) */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x0 = 0;
        /** @brief rcc_pclk2 = sys_bus2_ck / 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x1 = 1;
        /** @brief rcc_pclk1 = sys_bus2_ck / 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x2 = 2;
        /** @brief rcc_pclk1 = sys_bus2_ck / 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x3 = 3;
        /** @brief rcc_pclk1 = sys_bus2_ck / 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x4 = 4;
        /** @brief rcc_pclk1 = sys_bus2_ck / 32 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x5 = 5;
        /** @brief rcc_pclk1 = sys_bus2_ck / 64 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x6 = 6;
        /** @brief rcc_pclk1 = sys_bus2_ck / 128 */
    constexpr std::uint32_t RCC_CFGR2_PPRE2_B_0x7 = 7;

    /** @brief CPU domain APB4 prescaler */
    using RCC_CFGR2_PPRE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk4 = sys_bus2_ck (default after reset) (value: 0)
     *          - B_0x1: rcc_pclk4 = sys_bus2_ck / 2 (value: 1)
     *          - B_0x2: rcc_pclk1 = sys_bus2_ck / 4 (value: 2)
     *          - B_0x3: rcc_pclk1 = sys_bus2_ck / 8 (value: 3)
     *          - B_0x4: rcc_pclk1 = sys_bus2_ck / 16 (value: 4)
     *          - B_0x5: rcc_pclk1 = sys_bus2_ck / 32 (value: 5)
     *          - B_0x6: rcc_pclk1 = sys_bus2_ck / 64 (value: 6)
     *          - B_0x7: rcc_pclk1 = sys_bus2_ck / 128 (value: 7)
     */
        /** @brief rcc_pclk4 = sys_bus2_ck (default after reset) */
    constexpr std::uint32_t RCC_CFGR2_PPRE4_B_0x0 = 0;
        /** @brief rcc_pclk4 = sys_bus2_ck / 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE4_B_0x1 = 1;
        /** @brief rcc_pclk1 = sys_bus2_ck / 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE4_B_0x2 = 2;
        /** @brief rcc_pclk1 = sys_bus2_ck / 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE4_B_0x3 = 3;
        /** @brief rcc_pclk1 = sys_bus2_ck / 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE4_B_0x4 = 4;
        /** @brief rcc_pclk1 = sys_bus2_ck / 32 */
    constexpr std::uint32_t RCC_CFGR2_PPRE4_B_0x5 = 5;
        /** @brief rcc_pclk1 = sys_bus2_ck / 64 */
    constexpr std::uint32_t RCC_CFGR2_PPRE4_B_0x6 = 6;
        /** @brief rcc_pclk1 = sys_bus2_ck / 128 */
    constexpr std::uint32_t RCC_CFGR2_PPRE4_B_0x7 = 7;

    /** @brief CPU domain APB5 prescaler */
    using RCC_CFGR2_PPRE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rcc_pclk5 = sys_bus2_ck (default after reset) (value: 0)
     *          - B_0x1: rcc_pclk5 = sys_bus2_ck / 2 (value: 1)
     *          - B_0x2: rcc_pclk1 = sys_bus2_ck / 4 (value: 2)
     *          - B_0x3: rcc_pclk1 = sys_bus2_ck / 8 (value: 3)
     *          - B_0x4: rcc_pclk1 = sys_bus2_ck / 16 (value: 4)
     *          - B_0x5: rcc_pclk1 = sys_bus2_ck / 32 (value: 5)
     *          - B_0x6: rcc_pclk1 = sys_bus2_ck / 64 (value: 6)
     *          - B_0x7: rcc_pclk1 = sys_bus2_ck / 128 (value: 7)
     */
        /** @brief rcc_pclk5 = sys_bus2_ck (default after reset) */
    constexpr std::uint32_t RCC_CFGR2_PPRE5_B_0x0 = 0;
        /** @brief rcc_pclk5 = sys_bus2_ck / 2 */
    constexpr std::uint32_t RCC_CFGR2_PPRE5_B_0x1 = 1;
        /** @brief rcc_pclk1 = sys_bus2_ck / 4 */
    constexpr std::uint32_t RCC_CFGR2_PPRE5_B_0x2 = 2;
        /** @brief rcc_pclk1 = sys_bus2_ck / 8 */
    constexpr std::uint32_t RCC_CFGR2_PPRE5_B_0x3 = 3;
        /** @brief rcc_pclk1 = sys_bus2_ck / 16 */
    constexpr std::uint32_t RCC_CFGR2_PPRE5_B_0x4 = 4;
        /** @brief rcc_pclk1 = sys_bus2_ck / 32 */
    constexpr std::uint32_t RCC_CFGR2_PPRE5_B_0x5 = 5;
        /** @brief rcc_pclk1 = sys_bus2_ck / 64 */
    constexpr std::uint32_t RCC_CFGR2_PPRE5_B_0x6 = 6;
        /** @brief rcc_pclk1 = sys_bus2_ck / 128 */
    constexpr std::uint32_t RCC_CFGR2_PPRE5_B_0x7 = 7;

    /** @brief AHB clock prescaler */
    using RCC_CFGR2_HPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sys_bus2_ck= sys_bus_ck (value: 0)
     *          - B_0x1: sys_bus2_ck = sys_bus_ck / 2 (default after reset) (value: 1)
     *          - B_0x2: sys_bus2_ck= sys_bus_ck / 4 (value: 2)
     *          - B_0x3: sys_bus2_ck = sys_bus_ck / 8 (value: 3)
     *          - B_0x4: sys_bus2_ck = sys_bus_ck / 16 (value: 4)
     *          - B_0x5: sys_bus2_ck = sys_bus_ck / 32 (value: 5)
     *          - B_0x6: sys_bus2_ck = sys_bus_ck / 64 (value: 6)
     *          - B_0x7: sys_bus2_ck = sys_bus_ck / 128 (value: 7)
     */
        /** @brief sys_bus2_ck= sys_bus_ck */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x0 = 0;
        /** @brief sys_bus2_ck = sys_bus_ck / 2 (default after reset) */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x1 = 1;
        /** @brief sys_bus2_ck= sys_bus_ck / 4 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x2 = 2;
        /** @brief sys_bus2_ck = sys_bus_ck / 8 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x3 = 3;
        /** @brief sys_bus2_ck = sys_bus_ck / 16 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x4 = 4;
        /** @brief sys_bus2_ck = sys_bus_ck / 32 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x5 = 5;
        /** @brief sys_bus2_ck = sys_bus_ck / 64 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x6 = 6;
        /** @brief sys_bus2_ck = sys_bus_ck / 128 */
    constexpr std::uint32_t RCC_CFGR2_HPRE_B_0x7 = 7;

    /** @brief Timers clocks prescaler selection */
    using RCC_CFGR2_TIMPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: timg_ck = sys_bus_ck (default after reset) (value: 0)
     *          - B_0x1: timg_ck = sys_bus_ck / 2 (value: 1)
     *          - B_0x2: timg_ck = sys_bus_ck / 4 (value: 2)
     */
        /** @brief timg_ck = sys_bus_ck (default after reset) */
    constexpr std::uint32_t RCC_CFGR2_TIMPRE_B_0x0 = 0;
        /** @brief timg_ck = sys_bus_ck / 2 */
    constexpr std::uint32_t RCC_CFGR2_TIMPRE_B_0x1 = 1;
        /** @brief timg_ck = sys_bus_ck / 4 */
    constexpr std::uint32_t RCC_CFGR2_TIMPRE_B_0x2 = 2;

    /** @brief RCC clock protection register */
    using RCC_CKPROTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI3 clock selection current status */
    using RCC_CKPROTR_XSPI3SELS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as XSPI3 clock (default after reset) (value: 0)
     *          - B_0x1: per_ck selected as XSPI3 clock (value: 1)
     *          - B_0x2: ic3_ck selected as XSPI3 clock (value: 2)
     *          - B_0x3: ic4_ck selected as XSPI3 clock (value: 3)
     */
        /** @brief hclk5 selected as XSPI3 clock (default after reset) */
    constexpr std::uint32_t RCC_CKPROTR_XSPI3SELS_B_0x0 = 0;
        /** @brief per_ck selected as XSPI3 clock */
    constexpr std::uint32_t RCC_CKPROTR_XSPI3SELS_B_0x1 = 1;
        /** @brief ic3_ck selected as XSPI3 clock */
    constexpr std::uint32_t RCC_CKPROTR_XSPI3SELS_B_0x2 = 2;
        /** @brief ic4_ck selected as XSPI3 clock */
    constexpr std::uint32_t RCC_CKPROTR_XSPI3SELS_B_0x3 = 3;

    /** @brief XSPI2 clock selection current status */
    using RCC_CKPROTR_XSPI2SELS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as XSPI2 clock (default after reset) (value: 0)
     *          - B_0x1: per_ck selected as XSPI2 clock (value: 1)
     *          - B_0x2: ic3_ck selected as XSPI2 clock (value: 2)
     *          - B_0x3: ic4_ck selected as XSPI2 clock (value: 3)
     */
        /** @brief hclk5 selected as XSPI2 clock (default after reset) */
    constexpr std::uint32_t RCC_CKPROTR_XSPI2SELS_B_0x0 = 0;
        /** @brief per_ck selected as XSPI2 clock */
    constexpr std::uint32_t RCC_CKPROTR_XSPI2SELS_B_0x1 = 1;
        /** @brief ic3_ck selected as XSPI2 clock */
    constexpr std::uint32_t RCC_CKPROTR_XSPI2SELS_B_0x2 = 2;
        /** @brief ic4_ck selected as XSPI2 clock */
    constexpr std::uint32_t RCC_CKPROTR_XSPI2SELS_B_0x3 = 3;

    /** @brief XSPI1 clock selection current status */
    using RCC_CKPROTR_XSPI1SELS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as XSPI1 clock (default after reset) (value: 0)
     *          - B_0x1: per_ck selected as XSPI1 clock (value: 1)
     *          - B_0x2: ic3_ck selected as XSPI1 clock (value: 2)
     *          - B_0x3: ic4_ck selected as XSPI1 clock (value: 3)
     */
        /** @brief hclk5 selected as XSPI1 clock (default after reset) */
    constexpr std::uint32_t RCC_CKPROTR_XSPI1SELS_B_0x0 = 0;
        /** @brief per_ck selected as XSPI1 clock */
    constexpr std::uint32_t RCC_CKPROTR_XSPI1SELS_B_0x1 = 1;
        /** @brief ic3_ck selected as XSPI1 clock */
    constexpr std::uint32_t RCC_CKPROTR_XSPI1SELS_B_0x2 = 2;
        /** @brief ic4_ck selected as XSPI1 clock */
    constexpr std::uint32_t RCC_CKPROTR_XSPI1SELS_B_0x3 = 3;

    /** @brief FMC clock selection current status */
    using RCC_CKPROTR_FMCSELS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as FMC clock (default after reset) (value: 0)
     *          - B_0x1: per_ck selected as FMC clock (value: 1)
     *          - B_0x2: ic3_ck selected as FMC clock (value: 2)
     *          - B_0x3: ic4_ck selected as FMC clock (value: 3)
     */
        /** @brief hclk5 selected as FMC clock (default after reset) */
    constexpr std::uint32_t RCC_CKPROTR_FMCSELS_B_0x0 = 0;
        /** @brief per_ck selected as FMC clock */
    constexpr std::uint32_t RCC_CKPROTR_FMCSELS_B_0x1 = 1;
        /** @brief ic3_ck selected as FMC clock */
    constexpr std::uint32_t RCC_CKPROTR_FMCSELS_B_0x2 = 2;
        /** @brief ic4_ck selected as FMC clock */
    constexpr std::uint32_t RCC_CKPROTR_FMCSELS_B_0x3 = 3;

    /** @brief RCC backup domain protection register */
    using RCC_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VSW domain software reset. */
    using RCC_BDCR_VSWRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VSW domain is not reset (default after reset) (value: 0)
     *          - B_0x1: VSW domain is reset (value: 1)
     */
        /** @brief VSW domain is not reset (default after reset) */
    constexpr std::uint32_t RCC_BDCR_VSWRST_B_0x0 = 0;
        /** @brief VSW domain is reset */
    constexpr std::uint32_t RCC_BDCR_VSWRST_B_0x1 = 1;

    /** @brief RCC reset status register for hardware */
    using RCC_HWRSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remove reset flag */
    using RCC_HWRSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clear of the reset flags not activated (default after power-on reset) (value: 0)
     *          - B_0x1: clear the value of the reset flags (value: 1)
     */
        /** @brief clear of the reset flags not activated (default after power-on reset) */
    constexpr std::uint32_t RCC_HWRSR_RMVF_B_0x0 = 0;
        /** @brief clear the value of the reset flags */
    constexpr std::uint32_t RCC_HWRSR_RMVF_B_0x1 = 1;

    /** @brief CPU lockup reset flag. */
    using RCC_HWRSR_LCKRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from CPU lockup occurred (value: 0)
     *          - B_0x1: Reset from CPU lockup occurred (value: 1)
     */
        /** @brief No reset from CPU lockup occurred */
    constexpr std::uint32_t RCC_HWRSR_LCKRSTF_B_0x0 = 0;
        /** @brief Reset from CPU lockup occurred */
    constexpr std::uint32_t RCC_HWRSR_LCKRSTF_B_0x1 = 1;

    /** @brief BOR flag */
    using RCC_HWRSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no BOR occurred (value: 0)
     *          - B_0x1: BOR occurred (default after power-on reset) (value: 1)
     */
        /** @brief no BOR occurred */
    constexpr std::uint32_t RCC_HWRSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_HWRSR_BORRSTF_B_0x1 = 1;

    /** @brief Pin reset flag (NRST) */
    using RCC_HWRSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset from pin occurred (value: 0)
     *          - B_0x1: Reset from Pin occurred (default after power-on reset) (value: 1)
     */
        /** @brief no reset from pin occurred */
    constexpr std::uint32_t RCC_HWRSR_PINRSTF_B_0x0 = 0;
        /** @brief Reset from Pin occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_HWRSR_PINRSTF_B_0x1 = 1;

    /** @brief POR/PDR flag. */
    using RCC_HWRSR_PORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no POR/PDR reset occurred (value: 0)
     *          - B_0x1: POR/PDR reset occurred (default after power-on reset) (value: 1)
     */
        /** @brief no POR/PDR reset occurred */
    constexpr std::uint32_t RCC_HWRSR_PORRSTF_B_0x0 = 0;
        /** @brief POR/PDR reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_HWRSR_PORRSTF_B_0x1 = 1;

    /** @brief Software system reset flag (1) */
    using RCC_HWRSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no Software System reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: a Software System reset has been generated by the CPU (value: 1)
     */
        /** @brief no Software System reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_HWRSR_SFTRSTF_B_0x0 = 0;
        /** @brief a Software System reset has been generated by the CPU */
    constexpr std::uint32_t RCC_HWRSR_SFTRSTF_B_0x1 = 1;

    /** @brief Independent Watchdog reset flag. */
    using RCC_HWRSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no Independent Watchdog Reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: Independent Watchdog Reset occurred (value: 1)
     */
        /** @brief no Independent Watchdog Reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_HWRSR_IWDGRSTF_B_0x0 = 0;
        /** @brief Independent Watchdog Reset occurred */
    constexpr std::uint32_t RCC_HWRSR_IWDGRSTF_B_0x1 = 1;

    /** @brief Window watchdog reset flag */
    using RCC_HWRSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no Window Watchdog Reset occurred from WWDG (default after power-on reset) (value: 0)
     *          - B_0x1: Window Watchdog Reset occurred from WWDG (value: 1)
     */
        /** @brief no Window Watchdog Reset occurred from WWDG (default after power-on reset) */
    constexpr std::uint32_t RCC_HWRSR_WWDGRSTF_B_0x0 = 0;
        /** @brief Window Watchdog Reset occurred from WWDG */
    constexpr std::uint32_t RCC_HWRSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Illegal Stop or Standby flag. */
    using RCC_HWRSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no illegal reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: illegal Stop or Standby reset occurred (value: 1)
     */
        /** @brief no illegal reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_HWRSR_LPWRRSTF_B_0x0 = 0;
        /** @brief illegal Stop or Standby reset occurred */
    constexpr std::uint32_t RCC_HWRSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC reset register */
    using RCC_RSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remove reset flag */
    using RCC_RSR_RMVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clear of the reset flags not activated (default after power-on reset) (value: 0)
     *          - B_0x1: clear the value of the reset flags (value: 1)
     */
        /** @brief clear of the reset flags not activated (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x0 = 0;
        /** @brief clear the value of the reset flags */
    constexpr std::uint32_t RCC_RSR_RMVF_B_0x1 = 1;

    /** @brief CPU lockup reset flag. */
    using RCC_RSR_LCKRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reset from CPU lockup occurred (value: 0)
     *          - B_0x1: Reset from CPU lockup occurred (value: 1)
     */
        /** @brief No reset from CPU lockup occurred */
    constexpr std::uint32_t RCC_RSR_LCKRSTF_B_0x0 = 0;
        /** @brief Reset from CPU lockup occurred */
    constexpr std::uint32_t RCC_RSR_LCKRSTF_B_0x1 = 1;

    /** @brief BOR flag */
    using RCC_RSR_BORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no BOR occurred (value: 0)
     *          - B_0x1: BOR occurred (default after power-on reset) (value: 1)
     */
        /** @brief no BOR occurred */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x0 = 0;
        /** @brief BOR occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_BORRSTF_B_0x1 = 1;

    /** @brief Pin reset flag (NRST) */
    using RCC_RSR_PINRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no reset from Pin occurred (value: 0)
     *          - B_0x1: Reset from Pin occurred (default after power-on reset) (value: 1)
     */
        /** @brief no reset from Pin occurred */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x0 = 0;
        /** @brief Reset from Pin occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_PINRSTF_B_0x1 = 1;

    /** @brief POR/PDR flag. */
    using RCC_RSR_PORRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no POR/PDR reset occurred (value: 0)
     *          - B_0x1: POR/PDR reset occurred (default after power-on reset) (value: 1)
     */
        /** @brief no POR/PDR reset occurred */
    constexpr std::uint32_t RCC_RSR_PORRSTF_B_0x0 = 0;
        /** @brief POR/PDR reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_PORRSTF_B_0x1 = 1;

    /** @brief Software System reset flag (1) */
    using RCC_RSR_SFTRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no Software System reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: a Software System reset has been generated by the CPU (value: 1)
     */
        /** @brief no Software System reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x0 = 0;
        /** @brief a Software System reset has been generated by the CPU */
    constexpr std::uint32_t RCC_RSR_SFTRSTF_B_0x1 = 1;

    /** @brief Independent Watchdog reset flag. */
    using RCC_RSR_IWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no Independent Watchdog reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: Independent Watchdog reset occurred (value: 1)
     */
        /** @brief no Independent Watchdog reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x0 = 0;
        /** @brief Independent Watchdog reset occurred */
    constexpr std::uint32_t RCC_RSR_IWDGRSTF_B_0x1 = 1;

    /** @brief Window Watchdog reset flag */
    using RCC_RSR_WWDGRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no Window Watchdog reset occurred from WWDG (default after power-on reset) (value: 0)
     *          - B_0x1: Window Watchdog reset occurred from WWDG (value: 1)
     */
        /** @brief no Window Watchdog reset occurred from WWDG (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x0 = 0;
        /** @brief Window Watchdog reset occurred from WWDG */
    constexpr std::uint32_t RCC_RSR_WWDGRSTF_B_0x1 = 1;

    /** @brief Illegal Stop or Standby flag. */
    using RCC_RSR_LPWRRSTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no illegal reset occurred (default after power-on reset) (value: 0)
     *          - B_0x1: illegal Stop or Standby reset occurred (value: 1)
     */
        /** @brief no illegal reset occurred (default after power-on reset) */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x0 = 0;
        /** @brief illegal Stop or Standby reset occurred */
    constexpr std::uint32_t RCC_RSR_LPWRRSTF_B_0x1 = 1;

    /** @brief RCC LSE configuration register */
    using RCC_LSECFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE clock security system (CSS) enable */
    using RCC_LSECFGR_LSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock Security System on the LSE oscillator OFF (default after reset) (value: 0)
     *          - B_0x1: clock Security System on the LSE oscillator ON (value: 1)
     */
        /** @brief clock Security System on the LSE oscillator OFF (default after reset) */
    constexpr std::uint32_t RCC_LSECFGR_LSECSSON_B_0x0 = 0;
        /** @brief clock Security System on the LSE oscillator ON */
    constexpr std::uint32_t RCC_LSECFGR_LSECSSON_B_0x1 = 1;

    /** @brief LSE clock security system (CSS) re-arm function */
    using RCC_LSECFGR_LSECSSRA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect (default after reset) (value: 0)
     *          - B_0x1: Writing 1 generates a re-arm pulse for the LSECSS function (value: 1)
     */
        /** @brief Writing 0 has no effect (default after reset) */
    constexpr std::uint32_t RCC_LSECFGR_LSECSSRA_B_0x0 = 0;
        /** @brief Writing 1 generates a re-arm pulse for the LSECSS function */
    constexpr std::uint32_t RCC_LSECFGR_LSECSSRA_B_0x1 = 1;

    /** @brief LSE clock security system (CSS) failure detection */
    using RCC_LSECFGR_LSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No failure detected on the oscillator (default after reset) (value: 0)
     *          - B_0x1: Failure detected on the oscillator (value: 1)
     */
        /** @brief No failure detected on the oscillator (default after reset) */
    constexpr std::uint32_t RCC_LSECFGR_LSECSSD_B_0x0 = 0;
        /** @brief Failure detected on the oscillator */
    constexpr std::uint32_t RCC_LSECFGR_LSECSSD_B_0x1 = 1;

    /** @brief LSE clock bypass */
    using RCC_LSECFGR_LSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE oscillator not bypassed (default after reset) (value: 0)
     *          - B_0x1: LSE oscillator bypassed with an external clock (value: 1)
     */
        /** @brief LSE oscillator not bypassed (default after reset) */
    constexpr std::uint32_t RCC_LSECFGR_LSEBYP_B_0x0 = 0;
        /** @brief LSE oscillator bypassed with an external clock */
    constexpr std::uint32_t RCC_LSECFGR_LSEBYP_B_0x1 = 1;

    /** @brief LSE clock type in Bypass mode */
    using RCC_LSECFGR_LSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE in analog mode (default after reset) (value: 0)
     *          - B_0x1: LSE in digital mode (value: 1)
     */
        /** @brief LSE in analog mode (default after reset) */
    constexpr std::uint32_t RCC_LSECFGR_LSEEXT_B_0x0 = 0;
        /** @brief LSE in digital mode */
    constexpr std::uint32_t RCC_LSECFGR_LSEEXT_B_0x1 = 1;

    /** @brief LSE clock glitch filter enable */
    using RCC_LSECFGR_LSEGFON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE clock glitch filter is disabled (default after reset) (value: 0)
     *          - B_0x1: LSE clock glitch filter is enabled (value: 1)
     */
        /** @brief LSE clock glitch filter is disabled (default after reset) */
    constexpr std::uint32_t RCC_LSECFGR_LSEGFON_B_0x0 = 0;
        /** @brief LSE clock glitch filter is enabled */
    constexpr std::uint32_t RCC_LSECFGR_LSEGFON_B_0x1 = 1;

    /** @brief LSE oscillator driving capability */
    using RCC_LSECFGR_LSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lowest drive (default after reset) (value: 0)
     *          - B_0x1: Medium low drive (value: 1)
     *          - B_0x2: Medium high drive (value: 2)
     *          - B_0x3: Highest drive (value: 3)
     */
        /** @brief Lowest drive (default after reset) */
    constexpr std::uint32_t RCC_LSECFGR_LSEDRV_B_0x0 = 0;
        /** @brief Medium low drive */
    constexpr std::uint32_t RCC_LSECFGR_LSEDRV_B_0x1 = 1;
        /** @brief Medium high drive */
    constexpr std::uint32_t RCC_LSECFGR_LSEDRV_B_0x2 = 2;
        /** @brief Highest drive */
    constexpr std::uint32_t RCC_LSECFGR_LSEDRV_B_0x3 = 3;

    /** @brief RCC MSI configuration register */
    using RCC_MSICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI oscillator frequency select */
    using RCC_MSICFGR_MSIFREQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI oscillator frequency is 4 MHz (default after backup domain reset) (value: 0)
     *          - B_0x1: MSI oscillator frequency is 16 MHz (value: 1)
     */
        /** @brief MSI oscillator frequency is 4 MHz (default after backup domain reset) */
    constexpr std::uint32_t RCC_MSICFGR_MSIFREQSEL_B_0x0 = 0;
        /** @brief MSI oscillator frequency is 16 MHz */
    constexpr std::uint32_t RCC_MSICFGR_MSIFREQSEL_B_0x1 = 1;

    /** @brief MSI clock trimming */
    using RCC_MSICFGR_MSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI clock calibration */
    using RCC_MSICFGR_MSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC HSI configuration register */
    using RCC_HSICFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock divider */
    using RCC_HSICFGR_HSIDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck = hsi_osc_ck (default after reset) (value: 0)
     *          - B_0x1: hsi_ck = hsi_osc_ck / 2 (value: 1)
     */
        /** @brief hsi_ck = hsi_osc_ck (default after reset) */
    constexpr std::uint32_t RCC_HSICFGR_HSIDIV_B_0x0 = 0;
        /** @brief hsi_ck = hsi_osc_ck / 2 */
    constexpr std::uint32_t RCC_HSICFGR_HSIDIV_B_0x1 = 1;

    /** @brief HSI clock trimming */
    using RCC_HSICFGR_HSITRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x40: bsec_hsi_cal[8:0] - 64 (value: 64)
     *          - B_0x41: bsec_hsi_cal[8:0] - 63 (value: 65)
     *          - B_0x0: bsec_hsi_cal[8:0] (default after reset) (value: 0)
     *          - B_0x3E: bsec_hsi_cal[8:0] + 62 (value: 62)
     *          - B_0x3F: bsec_hsi_cal[8:0] + 63 (value: 63)
     */
        /** @brief bsec_hsi_cal[8:0] - 64 */
    constexpr std::uint32_t RCC_HSICFGR_HSITRIM_B_0x40 = 64;
        /** @brief bsec_hsi_cal[8:0] - 63 */
    constexpr std::uint32_t RCC_HSICFGR_HSITRIM_B_0x41 = 65;
        /** @brief bsec_hsi_cal[8:0] (default after reset) */
    constexpr std::uint32_t RCC_HSICFGR_HSITRIM_B_0x0 = 0;
        /** @brief bsec_hsi_cal[8:0] + 62 */
    constexpr std::uint32_t RCC_HSICFGR_HSITRIM_B_0x3E = 62;
        /** @brief bsec_hsi_cal[8:0] + 63 */
    constexpr std::uint32_t RCC_HSICFGR_HSITRIM_B_0x3F = 63;

    /** @brief HSI clock calibration */
    using RCC_HSICFGR_HSICAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC HSI monitor control register */
    using RCC_HSIMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock cycle counter reference value. */
    using RCC_HSIMCR_HSIREF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock count deviation value */
    using RCC_HSIMCR_HSIDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock period monitor enable */
    using RCC_HSIMCR_HSIMONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing '0' disables the HSI clock period monitoring, reading '0' means that the HSI clock period monitoring is disabled (value: 0)
     *          - B_0x1: Writing '1' enables the HSI clock period monitoring, reading '1' means that the HSI clock period monitoring is enabled (value: 1)
     */
        /** @brief Writing '0' disables the HSI clock period monitoring, reading '0' means that the HSI clock period monitoring is disabled */
    constexpr std::uint32_t RCC_HSIMCR_HSIMONEN_B_0x0 = 0;
        /** @brief Writing '1' enables the HSI clock period monitoring, reading '1' means that the HSI clock period monitoring is enabled */
    constexpr std::uint32_t RCC_HSIMCR_HSIMONEN_B_0x1 = 1;

    /** @brief RCC HSI monitor status register */
    using RCC_HSIMSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI clock cycle counter measured value. */
    using RCC_HSIMSR_HSIVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC HSE configuration register */
    using RCC_HSECFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE div2 oscillator clock in Bypass mode */
    using RCC_HSECFGR_HSEDIV2BYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE: hse_div2_osc_ck = hse_osc_ck/2 (default after reset) (value: 0)
     *          - B_0x1: HSE: hse_div2_osc_ck = hse_osc_ck (value: 1)
     */
        /** @brief HSE: hse_div2_osc_ck = hse_osc_ck/2 (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSEDIV2BYP_B_0x0 = 0;
        /** @brief HSE: hse_div2_osc_ck = hse_osc_ck */
    constexpr std::uint32_t RCC_HSECFGR_HSEDIV2BYP_B_0x1 = 1;

    /** @brief HSE clock security system (CSS) enable */
    using RCC_HSECFGR_HSECSSON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock Security System on the HSE oscillator OFF (default after reset) (value: 0)
     *          - B_0x1: clock Security System on the HSE oscillator ON (value: 1)
     */
        /** @brief clock Security System on the HSE oscillator OFF (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSON_B_0x0 = 0;
        /** @brief clock Security System on the HSE oscillator ON */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSON_B_0x1 = 1;

    /** @brief HSE clock security system (CSS) re-arm function */
    using RCC_HSECFGR_HSECSSRA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect (default after reset) (value: 0)
     *          - B_0x1: Writing 1 generates a re-arm pulse for the HSECSS function (value: 1)
     */
        /** @brief Writing 0 has no effect (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSRA_B_0x0 = 0;
        /** @brief Writing 1 generates a re-arm pulse for the HSECSS function */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSRA_B_0x1 = 1;

    /** @brief HSE clock security system (CSS) failure detection */
    using RCC_HSECFGR_HSECSSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No failure detected on the oscillator (default after reset) (value: 0)
     *          - B_0x1: Failure detected on the oscillator (value: 1)
     */
        /** @brief No failure detected on the oscillator (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSD_B_0x0 = 0;
        /** @brief Failure detected on the oscillator */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSD_B_0x1 = 1;

    /** @brief HSE clock security system (CSS) bypass enable */
    using RCC_HSECFGR_HSECSSBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clock Security System Bypass of the HSE oscillator is OFF (default after reset) (value: 0)
     *          - B_0x1: clock Security System Bypass on the HSE oscillator is ON (value: 1)
     */
        /** @brief clock Security System Bypass of the HSE oscillator is OFF (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSBYP_B_0x0 = 0;
        /** @brief clock Security System Bypass on the HSE oscillator is ON */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSBYP_B_0x1 = 1;

    /** @brief HSE clock security system (CSS) bypass divider */
    using RCC_HSECFGR_HSECSSBPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI clock is divided by 1 (value: 0)
     *          - B_0x1: HSI clock is divided by 2 (default after reset) (value: 1)
     *          - B_0x2: HSI clock is divided by 3 (value: 2)
     *          - B_0x3: HSI clock is divided by 4 (value: 3)
     *          - B_0xF: HSI clock is divided by 15 (value: 15)
     */
        /** @brief HSI clock is divided by 1 */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSBPRE_B_0x0 = 0;
        /** @brief HSI clock is divided by 2 (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSBPRE_B_0x1 = 1;
        /** @brief HSI clock is divided by 3 */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSBPRE_B_0x2 = 2;
        /** @brief HSI clock is divided by 4 */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSBPRE_B_0x3 = 3;
        /** @brief HSI clock is divided by 15 */
    constexpr std::uint32_t RCC_HSECFGR_HSECSSBPRE_B_0xF = 15;

    /** @brief HSE clock bypass */
    using RCC_HSECFGR_HSEBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE oscillator not bypassed (default after reset) (value: 0)
     *          - B_0x1: HSE oscillator bypassed with an external clock (value: 1)
     */
        /** @brief HSE oscillator not bypassed (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSEBYP_B_0x0 = 0;
        /** @brief HSE oscillator bypassed with an external clock */
    constexpr std::uint32_t RCC_HSECFGR_HSEBYP_B_0x1 = 1;

    /** @brief HSE clock type in Bypass mode */
    using RCC_HSECFGR_HSEEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE in analog mode (default after reset) (value: 0)
     *          - B_0x1: HSE in digital mode (value: 1)
     */
        /** @brief HSE in analog mode (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSEEXT_B_0x0 = 0;
        /** @brief HSE in digital mode */
    constexpr std::uint32_t RCC_HSECFGR_HSEEXT_B_0x1 = 1;

    /** @brief HSE clock glitch filter enable */
    using RCC_HSECFGR_HSEGFON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE clock glitch filter is disabled (default after reset) (value: 0)
     *          - B_0x1: LSE clock glitch filter is enabled (value: 1)
     */
        /** @brief LSE clock glitch filter is disabled (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSEGFON_B_0x0 = 0;
        /** @brief LSE clock glitch filter is enabled */
    constexpr std::uint32_t RCC_HSECFGR_HSEGFON_B_0x1 = 1;

    /** @brief HSE oscillator driving capability */
    using RCC_HSECFGR_HSEDRV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lowest drive (default after reset) (value: 0)
     *          - B_0x1: Medium low drive (value: 1)
     *          - B_0x2: Medium high drive (value: 2)
     *          - B_0x3: Highest drive (value: 3)
     */
        /** @brief Lowest drive (default after reset) */
    constexpr std::uint32_t RCC_HSECFGR_HSEDRV_B_0x0 = 0;
        /** @brief Medium low drive */
    constexpr std::uint32_t RCC_HSECFGR_HSEDRV_B_0x1 = 1;
        /** @brief Medium high drive */
    constexpr std::uint32_t RCC_HSECFGR_HSEDRV_B_0x2 = 2;
        /** @brief Highest drive */
    constexpr std::uint32_t RCC_HSECFGR_HSEDRV_B_0x3 = 3;

    /** @brief RCC PLL1 configuration register 1 */
    using RCC_PLL1CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 Integer part for the VCO multiplication factor */
    using RCC_PLL1CFGR1_PLL1DIVN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 reference input clock divide frequency ratio */
    using RCC_PLL1CFGR1_PLL1DIVM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable when PLL is enabled (value: 0)
     *          - B_0x1: reference clock is divided by 1 (min value) (value: 1)
     *          - B_0x2: reference clock is divided by 2 (value: 2)
     *          - B_0x3F: reference clock is divided by 63 (value: 63)
     */
        /** @brief Not applicable when PLL is enabled */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1DIVM_B_0x0 = 0;
        /** @brief reference clock is divided by 1 (min value) */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1DIVM_B_0x1 = 1;
        /** @brief reference clock is divided by 2 */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1DIVM_B_0x2 = 2;
        /** @brief reference clock is divided by 63 */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1DIVM_B_0x3F = 63;

    /** @brief PLL1 bypass */
    using RCC_PLL1CFGR1_PLL1BYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL output is driven by the VCO, via the optional POSTDIV division (value: 0)
     *          - B_0x1: PLL output is bypassed and driven by the PLL reference clock (default after reset) (value: 1)
     */
        /** @brief PLL output is driven by the VCO, via the optional POSTDIV division */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1BYP_B_0x0 = 0;
        /** @brief PLL output is bypassed and driven by the PLL reference clock (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1BYP_B_0x1 = 1;

    /** @brief PLL1 source selection of the reference clock */
    using RCC_PLL1CFGR1_PLL1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck selected as reference clock (value: 0)
     *          - B_0x1: msi_ck selected as reference clock (value: 1)
     *          - B_0x2: hse_ck selected as reference clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as reference clock (value: 3)
     */
        /** @brief hsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1SEL_B_0x0 = 0;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1SEL_B_0x1 = 1;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_PLL1CFGR1_PLL1SEL_B_0x3 = 3;

    /** @brief RCC PLL1 configuration register 2 */
    using RCC_PLL1CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 Fractional part of the VCO multiplication factor */
    using RCC_PLL1CFGR2_PLL1DIVNFRAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL1 configuration register 3 */
    using RCC_PLL1CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 Modulation Spread Spectrum reset */
    using RCC_PLL1CFGR3_PLL1MODSSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The PLL1 modulation Spread Spectrum reset module is released (value: 0)
     *          - B_0x1: The PLL1 modulation Spread Spectrum reset module is asserted (default after reset) (value: 1)
     */
        /** @brief The PLL1 modulation Spread Spectrum reset module is released */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1MODSSRST_B_0x0 = 0;
        /** @brief The PLL1 modulation Spread Spectrum reset module is asserted (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1MODSSRST_B_0x1 = 1;

    /** @brief PLL1 noise canceling DAC enable in fractional mode. */
    using RCC_PLL1CFGR3_PLL1DACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC is not active (default after reset) (value: 0)
     *          - B_0x1: DAC is active (value: 1)
     */
        /** @brief DAC is not active (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1DACEN_B_0x0 = 0;
        /** @brief DAC is active */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1DACEN_B_0x1 = 1;

    /** @brief PLL1 Modulation Spread-Spectrum Disable */
    using RCC_PLL1CFGR3_PLL1MODSSDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Modulation Spread-Spectrum is active (and Fractional Divide inactive) (value: 0)
     *          - B_0x1: Fractional Divide is active (and the Modulation Spread-Spectrum inactive) (default after reset) (value: 1)
     */
        /** @brief Modulation Spread-Spectrum is active (and Fractional Divide inactive) */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1MODSSDIS_B_0x0 = 0;
        /** @brief Fractional Divide is active (and the Modulation Spread-Spectrum inactive) (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1MODSSDIS_B_0x1 = 1;

    /** @brief PLL1 Modulation Spread-Spectrum (and Fractional Divide) enable */
    using RCC_PLL1CFGR3_PLL1MODDSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Modulation Spread-Spectrum and Fractional Divide are not active (value: 0)
     *          - B_0x1: Modulation Spread-Spectrum and Fractional Divide are active (default after reset) (value: 1)
     */
        /** @brief Modulation Spread-Spectrum and Fractional Divide are not active */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1MODDSEN_B_0x0 = 0;
        /** @brief Modulation Spread-Spectrum and Fractional Divide are active (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1MODDSEN_B_0x1 = 1;

    /** @brief PLL1 Modulation Spread-Spectrum Down */
    using RCC_PLL1CFGR3_PLL1MODSPRDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Center-spread modulation selected (default after reset) (value: 0)
     *          - B_0x1: Down-spread modulation selected (value: 1)
     */
        /** @brief Center-spread modulation selected (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1MODSPRDW_B_0x0 = 0;
        /** @brief Down-spread modulation selected */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1MODSPRDW_B_0x1 = 1;

    /** @brief PLL1 Modulation Division frequency adjustment */
    using RCC_PLL1CFGR3_PLL1MODDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 Modulation Spread depth adjustment */
    using RCC_PLL1CFGR3_PLL1MODSPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 VCO frequency divider level 2 */
    using RCC_PLL1CFGR3_PLL1PDIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable (value: 0)
     *          - B_0x1: VCO output is divided by 1 (minimum value) (default after reset) (value: 1)
     *          - B_0x7: VCO output is divided by 7 (value: 7)
     */
        /** @brief Not applicable */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1PDIV2_B_0x0 = 0;
        /** @brief VCO output is divided by 1 (minimum value) (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1PDIV2_B_0x1 = 1;
        /** @brief VCO output is divided by 7 */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1PDIV2_B_0x7 = 7;

    /** @brief PLL1 VCO frequency divider level 1 */
    using RCC_PLL1CFGR3_PLL1PDIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable (value: 0)
     *          - B_0x1: VCO output is divided by 1 (minimum value) (default after reset) (value: 1)
     *          - B_0x7: VCO output is divided by 7 (value: 7)
     */
        /** @brief Not applicable */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1PDIV1_B_0x0 = 0;
        /** @brief VCO output is divided by 1 (minimum value) (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1PDIV1_B_0x1 = 1;
        /** @brief VCO output is divided by 7 */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1PDIV1_B_0x7 = 7;

    /** @brief PLL1 post divider POSTDIV1, POSTDIV2, and PLL clock output enable */
    using RCC_PLL1CFGR3_PLL1PDIVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: POSTDIV1 and POSTDIV2 are powered down (value: 0)
     *          - B_0x1: POSTDIV1 and POSTDIV2 dividers are active (default after reset) (value: 1)
     */
        /** @brief POSTDIV1 and POSTDIV2 are powered down */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1PDIVEN_B_0x0 = 0;
        /** @brief POSTDIV1 and POSTDIV2 dividers are active (default after reset) */
    constexpr std::uint32_t RCC_PLL1CFGR3_PLL1PDIVEN_B_0x1 = 1;

    /** @brief RCC PLL2 configuration register 1 */
    using RCC_PLL2CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 Integer part for the VCO multiplication factor */
    using RCC_PLL2CFGR1_PLL2DIVN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 reference input clock divide frequency ratio */
    using RCC_PLL2CFGR1_PLL2DIVM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable when PLL is enabled (value: 0)
     *          - B_0x1: reference clock is divided by 1 (min value) (value: 1)
     *          - B_0x2: reference clock is divided by 2 (value: 2)
     *          - B_0x3F: reference clock is divided by 63 (value: 63)
     */
        /** @brief Not applicable when PLL is enabled */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2DIVM_B_0x0 = 0;
        /** @brief reference clock is divided by 1 (min value) */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2DIVM_B_0x1 = 1;
        /** @brief reference clock is divided by 2 */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2DIVM_B_0x2 = 2;
        /** @brief reference clock is divided by 63 */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2DIVM_B_0x3F = 63;

    /** @brief PLL2 bypass */
    using RCC_PLL2CFGR1_PLL2BYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL output is driven by the VCO, via the optional POSTDIV division (value: 0)
     *          - B_0x1: PLL output is bypassed and driven by the PLL reference clock (default after reset) (value: 1)
     */
        /** @brief PLL output is driven by the VCO, via the optional POSTDIV division */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2BYP_B_0x0 = 0;
        /** @brief PLL output is bypassed and driven by the PLL reference clock (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2BYP_B_0x1 = 1;

    /** @brief PLL2 source selection of the reference clock */
    using RCC_PLL2CFGR1_PLL2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck selected as reference clock (value: 0)
     *          - B_0x1: msi_ck selected as reference clock (value: 1)
     *          - B_0x2: hse_ck selected as reference clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as reference clock (value: 3)
     */
        /** @brief hsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2SEL_B_0x0 = 0;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2SEL_B_0x1 = 1;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_PLL2CFGR1_PLL2SEL_B_0x3 = 3;

    /** @brief RCC PLL2 configuration register 2 */
    using RCC_PLL2CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 Fractional part of the VCO multiplication factor */
    using RCC_PLL2CFGR2_PLL2DIVNFRAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL2 configuration register 3 */
    using RCC_PLL2CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 Modulation Spread Spectrum reset */
    using RCC_PLL2CFGR3_PLL2MODSSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The PLL2 Modulation Spread Spectrum reset module is released (value: 0)
     *          - B_0x1: The PLL2 Modulation Spread Spectrum reset module is asserted (default after reset) (value: 1)
     */
        /** @brief The PLL2 Modulation Spread Spectrum reset module is released */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2MODSSRST_B_0x0 = 0;
        /** @brief The PLL2 Modulation Spread Spectrum reset module is asserted (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2MODSSRST_B_0x1 = 1;

    /** @brief PLL2 noise canceling DAC enable in fractional mode. */
    using RCC_PLL2CFGR3_PLL2DACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC is not active (default after reset) (value: 0)
     *          - B_0x1: DAC is active (value: 1)
     */
        /** @brief DAC is not active (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2DACEN_B_0x0 = 0;
        /** @brief DAC is active */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2DACEN_B_0x1 = 1;

    /** @brief PLL2 Modulation Spread-Spectrum Disable */
    using RCC_PLL2CFGR3_PLL2MODSSDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Modulation Spread-Spectrum is active (and Fractional Divide inactive) (value: 0)
     *          - B_0x1: Fractional Divide is active (and the Modulation Spread-Spectrum inactive) (default after reset) (value: 1)
     */
        /** @brief Modulation Spread-Spectrum is active (and Fractional Divide inactive) */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2MODSSDIS_B_0x0 = 0;
        /** @brief Fractional Divide is active (and the Modulation Spread-Spectrum inactive) (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2MODSSDIS_B_0x1 = 1;

    /** @brief PLL2 Modulation Spread-Spectrum (and Fractional Divide) enable */
    using RCC_PLL2CFGR3_PLL2MODDSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Modulation Spread-Spectrum and Fractional Divide are not active (default after reset) (value: 0)
     *          - B_0x1: Modulation Spread-Spectrum and Fractional Divide are active (value: 1)
     */
        /** @brief Modulation Spread-Spectrum and Fractional Divide are not active (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2MODDSEN_B_0x0 = 0;
        /** @brief Modulation Spread-Spectrum and Fractional Divide are active */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2MODDSEN_B_0x1 = 1;

    /** @brief PLL2 Modulation Down Spread */
    using RCC_PLL2CFGR3_PLL2MODSPRDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Center-spread modulation selected (default after reset) (value: 0)
     *          - B_0x1: Down-spread modulation selected (value: 1)
     */
        /** @brief Center-spread modulation selected (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2MODSPRDW_B_0x0 = 0;
        /** @brief Down-spread modulation selected */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2MODSPRDW_B_0x1 = 1;

    /** @brief PLL2 Modulation Division frequency adjustment */
    using RCC_PLL2CFGR3_PLL2MODDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 Modulation Spread depth adjustment */
    using RCC_PLL2CFGR3_PLL2MODSPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 VCO frequency divider level 2 */
    using RCC_PLL2CFGR3_PLL2PDIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable (value: 0)
     *          - B_0x1: VCO output is divided by 1 (minimum value) (default after reset) (value: 1)
     *          - B_0x7: VCO output is divided by 7 (value: 7)
     */
        /** @brief Not applicable */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2PDIV2_B_0x0 = 0;
        /** @brief VCO output is divided by 1 (minimum value) (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2PDIV2_B_0x1 = 1;
        /** @brief VCO output is divided by 7 */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2PDIV2_B_0x7 = 7;

    /** @brief PLL2 VCO frequency divider level 1 */
    using RCC_PLL2CFGR3_PLL2PDIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable (value: 0)
     *          - B_0x1: VCO output is divided by 1 (minimum value) (default after reset) (value: 1)
     *          - B_0x7: VCO output is divided by 7 (value: 7)
     */
        /** @brief Not applicable */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2PDIV1_B_0x0 = 0;
        /** @brief VCO output is divided by 1 (minimum value) (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2PDIV1_B_0x1 = 1;
        /** @brief VCO output is divided by 7 */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2PDIV1_B_0x7 = 7;

    /** @brief PLL2 post divider POSTDIV1, POSTDIV2, and PLL clock output enable */
    using RCC_PLL2CFGR3_PLL2PDIVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: POSTDIV1 and POSTDIV2 are powered down (value: 0)
     *          - B_0x1: POSTDIV1 and POSTDIV2 dividers are active (default after reset) (value: 1)
     */
        /** @brief POSTDIV1 and POSTDIV2 are powered down */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2PDIVEN_B_0x0 = 0;
        /** @brief POSTDIV1 and POSTDIV2 dividers are active (default after reset) */
    constexpr std::uint32_t RCC_PLL2CFGR3_PLL2PDIVEN_B_0x1 = 1;

    /** @brief RCC PLL3 configuration register 1 */
    using RCC_PLL3CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 Integer part for the VCO multiplication factor */
    using RCC_PLL3CFGR1_PLL3DIVN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 reference input clock divide frequency ratio */
    using RCC_PLL3CFGR1_PLL3DIVM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable when PLL is enabled (value: 0)
     *          - B_0x1: reference clock is divided by 1 (min value) (value: 1)
     *          - B_0x2: reference clock is divided by 2 (value: 2)
     *          - B_0x3F: reference clock is divided by 63 (value: 63)
     */
        /** @brief Not applicable when PLL is enabled */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3DIVM_B_0x0 = 0;
        /** @brief reference clock is divided by 1 (min value) */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3DIVM_B_0x1 = 1;
        /** @brief reference clock is divided by 2 */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3DIVM_B_0x2 = 2;
        /** @brief reference clock is divided by 63 */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3DIVM_B_0x3F = 63;

    /** @brief PLL3 bypass */
    using RCC_PLL3CFGR1_PLL3BYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL output is driven by the VCO, via the optional POSTDIV division (value: 0)
     *          - B_0x1: PLL output is bypassed and driven by the PLL reference clock (default after reset) (value: 1)
     */
        /** @brief PLL output is driven by the VCO, via the optional POSTDIV division */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3BYP_B_0x0 = 0;
        /** @brief PLL output is bypassed and driven by the PLL reference clock (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3BYP_B_0x1 = 1;

    /** @brief PLL3 source selection of the reference clock */
    using RCC_PLL3CFGR1_PLL3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck selected as reference clock (value: 0)
     *          - B_0x1: msi_ck selected as reference clock (value: 1)
     *          - B_0x2: hse_ck selected as reference clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as reference clock (value: 3)
     */
        /** @brief hsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3SEL_B_0x0 = 0;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3SEL_B_0x1 = 1;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_PLL3CFGR1_PLL3SEL_B_0x3 = 3;

    /** @brief RCC PLL3 configuration register 2 */
    using RCC_PLL3CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 Fractional part of the VCO multiplication factor */
    using RCC_PLL3CFGR2_PLL3DIVNFRAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL3 configuration register 3 */
    using RCC_PLL3CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 Modulation Spread Spectrum reset */
    using RCC_PLL3CFGR3_PLL3MODSSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The PLL3 modulation Spread Spectrum reset module is released (value: 0)
     *          - B_0x1: The PLL3 modulation Spread Spectrum reset module is asserted (default after reset) (value: 1)
     */
        /** @brief The PLL3 modulation Spread Spectrum reset module is released */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3MODSSRST_B_0x0 = 0;
        /** @brief The PLL3 modulation Spread Spectrum reset module is asserted (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3MODSSRST_B_0x1 = 1;

    /** @brief PLL3 noise canceling DAC enable in fractional mode. */
    using RCC_PLL3CFGR3_PLL3DACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC is not active (default after reset) (value: 0)
     *          - B_0x1: DAC is active (value: 1)
     */
        /** @brief DAC is not active (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3DACEN_B_0x0 = 0;
        /** @brief DAC is active */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3DACEN_B_0x1 = 1;

    /** @brief PLL3 Modulation Spread-Spectrum Disable */
    using RCC_PLL3CFGR3_PLL3MODSSDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Modulation Spread-Spectrum is active (and Fractional Divide inactive) (value: 0)
     *          - B_0x1: Fractional Divide is active (and the Modulation Spread-Spectrum inactive) (default after reset) (value: 1)
     */
        /** @brief Modulation Spread-Spectrum is active (and Fractional Divide inactive) */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3MODSSDIS_B_0x0 = 0;
        /** @brief Fractional Divide is active (and the Modulation Spread-Spectrum inactive) (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3MODSSDIS_B_0x1 = 1;

    /** @brief PLL3 Modulation Spread-Spectrum (and Fractional Divide) enable */
    using RCC_PLL3CFGR3_PLL3MODDSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Modulation Spread-Spectrum and Fractional Divide are not active (default after reset) (value: 0)
     *          - B_0x1: Modulation Spread-Spectrum and Fractional Divide are active (value: 1)
     */
        /** @brief Modulation Spread-Spectrum and Fractional Divide are not active (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3MODDSEN_B_0x0 = 0;
        /** @brief Modulation Spread-Spectrum and Fractional Divide are active */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3MODDSEN_B_0x1 = 1;

    /** @brief PLL3 Modulation Down Spread */
    using RCC_PLL3CFGR3_PLL3MODSPRDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Center-spread modulation selected (default after reset) (value: 0)
     *          - B_0x1: Down-spread modulation selected (value: 1)
     */
        /** @brief Center-spread modulation selected (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3MODSPRDW_B_0x0 = 0;
        /** @brief Down-spread modulation selected */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3MODSPRDW_B_0x1 = 1;

    /** @brief PLL3 Modulation Division frequency adjustment */
    using RCC_PLL3CFGR3_PLL3MODDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 Modulation Spread depth adjustment */
    using RCC_PLL3CFGR3_PLL3MODSPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 VCO frequency divider level 2 */
    using RCC_PLL3CFGR3_PLL3PDIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable (value: 0)
     *          - B_0x1: VCO output is divided by 1 (minimum value) (default after reset) (value: 1)
     *          - B_0x7: VCO output is divided by 7 (value: 7)
     */
        /** @brief Not applicable */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3PDIV2_B_0x0 = 0;
        /** @brief VCO output is divided by 1 (minimum value) (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3PDIV2_B_0x1 = 1;
        /** @brief VCO output is divided by 7 */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3PDIV2_B_0x7 = 7;

    /** @brief PLL3 VCO frequency divider level 1 */
    using RCC_PLL3CFGR3_PLL3PDIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable (value: 0)
     *          - B_0x1: VCO output is divided by 1 (minimum value) (default after reset) (value: 1)
     *          - B_0x7: VCO output is divided by 7 (value: 7)
     */
        /** @brief Not applicable */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3PDIV1_B_0x0 = 0;
        /** @brief VCO output is divided by 1 (minimum value) (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3PDIV1_B_0x1 = 1;
        /** @brief VCO output is divided by 7 */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3PDIV1_B_0x7 = 7;

    /** @brief PLL3 post divider POSTDIV1, POSTDIV2, and PLL clock output enable */
    using RCC_PLL3CFGR3_PLL3PDIVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: POSTDIV1 and POSTDIV2 are powered down (value: 0)
     *          - B_0x1: POSTDIV1 and POSTDIV2 dividers are active (default after reset) (value: 1)
     */
        /** @brief POSTDIV1 and POSTDIV2 are powered down */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3PDIVEN_B_0x0 = 0;
        /** @brief POSTDIV1 and POSTDIV2 dividers are active (default after reset) */
    constexpr std::uint32_t RCC_PLL3CFGR3_PLL3PDIVEN_B_0x1 = 1;

    /** @brief RCC PLL4 configuration register 1 */
    using RCC_PLL4CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL4 Integer part for the VCO multiplication factor */
    using RCC_PLL4CFGR1_PLL4DIVN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL4 reference input clock divide frequency ratio */
    using RCC_PLL4CFGR1_PLL4DIVM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable when PLL is enabled (value: 0)
     *          - B_0x1: reference clock is divided by 1 (min value) (value: 1)
     *          - B_0x2: reference clock is divided by 2 (value: 2)
     *          - B_0x3F: reference clock is divided by 63 (value: 63)
     */
        /** @brief Not applicable when PLL is enabled */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4DIVM_B_0x0 = 0;
        /** @brief reference clock is divided by 1 (min value) */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4DIVM_B_0x1 = 1;
        /** @brief reference clock is divided by 2 */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4DIVM_B_0x2 = 2;
        /** @brief reference clock is divided by 63 */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4DIVM_B_0x3F = 63;

    /** @brief PLL4 bypass */
    using RCC_PLL4CFGR1_PLL4BYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL output is driven by the VCO, via the optional POSTDIV division (value: 0)
     *          - B_0x1: PLL output is bypassed and driven by the PLL reference clock (default after reset) (value: 1)
     */
        /** @brief PLL output is driven by the VCO, via the optional POSTDIV division */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4BYP_B_0x0 = 0;
        /** @brief PLL output is bypassed and driven by the PLL reference clock (default after reset) */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4BYP_B_0x1 = 1;

    /** @brief PLL4 source selection of the reference clock */
    using RCC_PLL4CFGR1_PLL4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck selected as reference clock (value: 0)
     *          - B_0x1: msi_ck selected as reference clock (value: 1)
     *          - B_0x2: hse_ck selected as reference clock (value: 2)
     *          - B_0x3: I2S_CKIN selected as reference clock (value: 3)
     */
        /** @brief hsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4SEL_B_0x0 = 0;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4SEL_B_0x1 = 1;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4SEL_B_0x2 = 2;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_PLL4CFGR1_PLL4SEL_B_0x3 = 3;

    /** @brief RCC PLL4 configuration register 2 */
    using RCC_PLL4CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL4 Fractional part of the VCO multiplication factor */
    using RCC_PLL4CFGR2_PLL4DIVNFRAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL4 configuration register 3 */
    using RCC_PLL4CFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL4 Modulation Spread Spectrum reset */
    using RCC_PLL4CFGR3_PLL4MODSSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The PLL4 modulation Spread Spectrum reset module is released (value: 0)
     *          - B_0x1: The PLL4 modulation Spread Spectrum reset module is asserted (default after reset) (value: 1)
     */
        /** @brief The PLL4 modulation Spread Spectrum reset module is released */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4MODSSRST_B_0x0 = 0;
        /** @brief The PLL4 modulation Spread Spectrum reset module is asserted (default after reset) */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4MODSSRST_B_0x1 = 1;

    /** @brief PLL4 noise canceling DAC enable in fractional mode. */
    using RCC_PLL4CFGR3_PLL4DACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC is not active (default after reset) (value: 0)
     *          - B_0x1: DAC is active (value: 1)
     */
        /** @brief DAC is not active (default after reset) */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4DACEN_B_0x0 = 0;
        /** @brief DAC is active */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4DACEN_B_0x1 = 1;

    /** @brief PLL4 Modulation Spread-Spectrum Disable */
    using RCC_PLL4CFGR3_PLL4MODSSDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Modulation Spread-Spectrum is active (and Fractional Divide inactive) (value: 0)
     *          - B_0x1: Fractional Divide is active (and the Modulation Spread-Spectrum inactive) (default after reset) (value: 1)
     */
        /** @brief Modulation Spread-Spectrum is active (and Fractional Divide inactive) */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4MODSSDIS_B_0x0 = 0;
        /** @brief Fractional Divide is active (and the Modulation Spread-Spectrum inactive) (default after reset) */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4MODSSDIS_B_0x1 = 1;

    /** @brief PLL4 Modulation Spread-Spectrum (and Fractional Divide) enable */
    using RCC_PLL4CFGR3_PLL4MODDSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Modulation Spread-Spectrum and Fractional Divide are not active (default after reset) (value: 0)
     *          - B_0x1: Modulation Spread-Spectrum and Fractional Divide are active (value: 1)
     */
        /** @brief Modulation Spread-Spectrum and Fractional Divide are not active (default after reset) */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4MODDSEN_B_0x0 = 0;
        /** @brief Modulation Spread-Spectrum and Fractional Divide are active */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4MODDSEN_B_0x1 = 1;

    /** @brief PLL4 Modulation Down Spread */
    using RCC_PLL4CFGR3_PLL4MODSPRDW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Center-spread modulation selected (default after reset) (value: 0)
     *          - B_0x1: Down-spread modulation selected (value: 1)
     */
        /** @brief Center-spread modulation selected (default after reset) */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4MODSPRDW_B_0x0 = 0;
        /** @brief Down-spread modulation selected */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4MODSPRDW_B_0x1 = 1;

    /** @brief PLL4 Modulation Division frequency adjustment */
    using RCC_PLL4CFGR3_PLL4MODDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL4 Modulation Spread depth adjustment */
    using RCC_PLL4CFGR3_PLL4MODSPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL4 VCO frequency divider level 2 */
    using RCC_PLL4CFGR3_PLL4PDIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable (value: 0)
     *          - B_0x1: VCO output is divided by 1 (minimum value) (default after reset) (value: 1)
     *          - B_0x7: VCO output is divided by 7 (value: 7)
     */
        /** @brief Not applicable */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4PDIV2_B_0x0 = 0;
        /** @brief VCO output is divided by 1 (minimum value) (default after reset) */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4PDIV2_B_0x1 = 1;
        /** @brief VCO output is divided by 7 */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4PDIV2_B_0x7 = 7;

    /** @brief PLL4 VCO frequency divider level 1 */
    using RCC_PLL4CFGR3_PLL4PDIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applicable (value: 0)
     *          - B_0x1: VCO output is divided by 1 (minimum value) (default after reset) (value: 1)
     *          - B_0x7: VCO output is divided by 7 (value: 7)
     */
        /** @brief Not applicable */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4PDIV1_B_0x0 = 0;
        /** @brief VCO output is divided by 1 (minimum value) (default after reset) */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4PDIV1_B_0x1 = 1;
        /** @brief VCO output is divided by 7 */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4PDIV1_B_0x7 = 7;

    /** @brief PLL4 post divider POSTDIV1, POSTDIV2, and PLL clock output enable */
    using RCC_PLL4CFGR3_PLL4PDIVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: POSTDIV1 and POSTDIV2 are powered down (value: 0)
     *          - B_0x1: POSTDIV1 and POSTDIV2 dividers are active (default after reset) (value: 1)
     */
        /** @brief POSTDIV1 and POSTDIV2 are powered down */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4PDIVEN_B_0x0 = 0;
        /** @brief POSTDIV1 and POSTDIV2 dividers are active (default after reset) */
    constexpr std::uint32_t RCC_PLL4CFGR3_PLL4PDIVEN_B_0x1 = 1;

    /** @brief RCC IC1 configuration register */
    using RCC_IC1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC1 integer division factor */
    using RCC_IC1CFGR_IC1INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC1 = pllx_ck (value: 0)
     *          - B_0x1: IC1 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC1 = pllx_ck / 3 (default after reset) (value: 2)
     *          - B_0x3: IC1 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC1 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC1 = pllx_ck */
    constexpr std::uint32_t RCC_IC1CFGR_IC1INT_B_0x0 = 0;
        /** @brief IC1 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC1CFGR_IC1INT_B_0x1 = 1;
        /** @brief IC1 = pllx_ck / 3 (default after reset) */
    constexpr std::uint32_t RCC_IC1CFGR_IC1INT_B_0x2 = 2;
        /** @brief IC1 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC1CFGR_IC1INT_B_0x3 = 3;
        /** @brief IC1 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC1CFGR_IC1INT_B_0xFF = 255;

    /** @brief Divider IC1 Source Selection */
    using RCC_IC1CFGR_IC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (default after reset) (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC1CFGR_IC1SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC1CFGR_IC1SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC1CFGR_IC1SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC1CFGR_IC1SEL_B_0x3 = 3;

    /** @brief RCC IC2 configuration register */
    using RCC_IC2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC2 integer division factor */
    using RCC_IC2CFGR_IC2INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC2 = pllx_ck (value: 0)
     *          - B_0x1: IC2 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC2 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC2 = pllx_ck / 4 (default after reset) (value: 3)
     *          - B_0xFF: IC2 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC2 = pllx_ck */
    constexpr std::uint32_t RCC_IC2CFGR_IC2INT_B_0x0 = 0;
        /** @brief IC2 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC2CFGR_IC2INT_B_0x1 = 1;
        /** @brief IC2 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC2CFGR_IC2INT_B_0x2 = 2;
        /** @brief IC2 = pllx_ck / 4 (default after reset) */
    constexpr std::uint32_t RCC_IC2CFGR_IC2INT_B_0x3 = 3;
        /** @brief IC2 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC2CFGR_IC2INT_B_0xFF = 255;

    /** @brief Divider IC2 Source Selection */
    using RCC_IC2CFGR_IC2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (default after reset) (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC2CFGR_IC2SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC2CFGR_IC2SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC2CFGR_IC2SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC2CFGR_IC2SEL_B_0x3 = 3;

    /** @brief RCC IC3 configuration register */
    using RCC_IC3CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC3 integer division factor */
    using RCC_IC3CFGR_IC3INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC3 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC3 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC3 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC3 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC3 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC3 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC3CFGR_IC3INT_B_0x0 = 0;
        /** @brief IC3 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC3CFGR_IC3INT_B_0x1 = 1;
        /** @brief IC3 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC3CFGR_IC3INT_B_0x2 = 2;
        /** @brief IC3 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC3CFGR_IC3INT_B_0x3 = 3;
        /** @brief IC3 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC3CFGR_IC3INT_B_0xFF = 255;

    /** @brief Divider IC3 Source Selection */
    using RCC_IC3CFGR_IC3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (default after reset) (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC3CFGR_IC3SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC3CFGR_IC3SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC3CFGR_IC3SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC3CFGR_IC3SEL_B_0x3 = 3;

    /** @brief RCC IC4 configuration register */
    using RCC_IC4CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC4 integer division factor */
    using RCC_IC4CFGR_IC4INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC4 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC4 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC4 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC4 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC4 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC4 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC4CFGR_IC4INT_B_0x0 = 0;
        /** @brief IC4 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC4CFGR_IC4INT_B_0x1 = 1;
        /** @brief IC4 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC4CFGR_IC4INT_B_0x2 = 2;
        /** @brief IC4 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC4CFGR_IC4INT_B_0x3 = 3;
        /** @brief IC4 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC4CFGR_IC4INT_B_0xFF = 255;

    /** @brief Divider IC4 Source Selection */
    using RCC_IC4CFGR_IC4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (default after reset) (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC4CFGR_IC4SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC4CFGR_IC4SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC4CFGR_IC4SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC4CFGR_IC4SEL_B_0x3 = 3;

    /** @brief RCC IC5 configuration register */
    using RCC_IC5CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC5 integer division factor */
    using RCC_IC5CFGR_IC5INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC5 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC5 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC5 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC5 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC5 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC5 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC5CFGR_IC5INT_B_0x0 = 0;
        /** @brief IC5 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC5CFGR_IC5INT_B_0x1 = 1;
        /** @brief IC5 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC5CFGR_IC5INT_B_0x2 = 2;
        /** @brief IC5 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC5CFGR_IC5INT_B_0x3 = 3;
        /** @brief IC5 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC5CFGR_IC5INT_B_0xFF = 255;

    /** @brief Divider IC5 Source Selection */
    using RCC_IC5CFGR_IC5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (default after reset) (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC5CFGR_IC5SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC5CFGR_IC5SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC5CFGR_IC5SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC5CFGR_IC5SEL_B_0x3 = 3;

    /** @brief RCC IC6 configuration register */
    using RCC_IC6CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC6 integer division factor */
    using RCC_IC6CFGR_IC6INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC6 = pllx_ck (value: 0)
     *          - B_0x1: IC6 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC6 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC6 = pllx_ck / 4 (default after reset) (value: 3)
     *          - B_0xFF: IC6 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC6 = pllx_ck */
    constexpr std::uint32_t RCC_IC6CFGR_IC6INT_B_0x0 = 0;
        /** @brief IC6 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC6CFGR_IC6INT_B_0x1 = 1;
        /** @brief IC6 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC6CFGR_IC6INT_B_0x2 = 2;
        /** @brief IC6 = pllx_ck / 4 (default after reset) */
    constexpr std::uint32_t RCC_IC6CFGR_IC6INT_B_0x3 = 3;
        /** @brief IC6 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC6CFGR_IC6INT_B_0xFF = 255;

    /** @brief Divider IC6 Source Selection */
    using RCC_IC6CFGR_IC6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (default after reset) (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC6CFGR_IC6SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC6CFGR_IC6SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC6CFGR_IC6SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC6CFGR_IC6SEL_B_0x3 = 3;

    /** @brief RCC IC7 configuration register */
    using RCC_IC7CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC7 integer division factor */
    using RCC_IC7CFGR_IC7INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC7 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC7 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC7 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC7 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC7 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC7 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC7CFGR_IC7INT_B_0x0 = 0;
        /** @brief IC7 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC7CFGR_IC7INT_B_0x1 = 1;
        /** @brief IC7 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC7CFGR_IC7INT_B_0x2 = 2;
        /** @brief IC7 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC7CFGR_IC7INT_B_0x3 = 3;
        /** @brief IC7 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC7CFGR_IC7INT_B_0xFF = 255;

    /** @brief Divider IC7 Source Selection */
    using RCC_IC7CFGR_IC7SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (default after reset) (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC7CFGR_IC7SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC7CFGR_IC7SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC7CFGR_IC7SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC7CFGR_IC7SEL_B_0x3 = 3;

    /** @brief RCC IC8 configuration register */
    using RCC_IC8CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC8 integer division factor */
    using RCC_IC8CFGR_IC8INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC8 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC8 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC8 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC8 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC8 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC8 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC8CFGR_IC8INT_B_0x0 = 0;
        /** @brief IC8 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC8CFGR_IC8INT_B_0x1 = 1;
        /** @brief IC8 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC8CFGR_IC8INT_B_0x2 = 2;
        /** @brief IC8 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC8CFGR_IC8INT_B_0x3 = 3;
        /** @brief IC8 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC8CFGR_IC8INT_B_0xFF = 255;

    /** @brief Divider IC8 Source Selection */
    using RCC_IC8CFGR_IC8SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (default after reset) (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC8CFGR_IC8SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC8CFGR_IC8SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC8CFGR_IC8SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC8CFGR_IC8SEL_B_0x3 = 3;

    /** @brief RCC IC9 configuration register */
    using RCC_IC9CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC9 integer division factor */
    using RCC_IC9CFGR_IC9INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC9 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC9 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC9 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC9 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC9 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC9 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC9CFGR_IC9INT_B_0x0 = 0;
        /** @brief IC9 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC9CFGR_IC9INT_B_0x1 = 1;
        /** @brief IC9 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC9CFGR_IC9INT_B_0x2 = 2;
        /** @brief IC9 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC9CFGR_IC9INT_B_0x3 = 3;
        /** @brief IC9 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC9CFGR_IC9INT_B_0xFF = 255;

    /** @brief Divider IC9 Source Selection */
    using RCC_IC9CFGR_IC9SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (default after reset) (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC9CFGR_IC9SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC9CFGR_IC9SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC9CFGR_IC9SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC9CFGR_IC9SEL_B_0x3 = 3;

    /** @brief RCC IC10 configuration register */
    using RCC_IC10CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC10 integer division factor */
    using RCC_IC10CFGR_IC10INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC10 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC10 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC10 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC10 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC10 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC10 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC10CFGR_IC10INT_B_0x0 = 0;
        /** @brief IC10 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC10CFGR_IC10INT_B_0x1 = 1;
        /** @brief IC10 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC10CFGR_IC10INT_B_0x2 = 2;
        /** @brief IC10 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC10CFGR_IC10INT_B_0x3 = 3;
        /** @brief IC10 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC10CFGR_IC10INT_B_0xFF = 255;

    /** @brief Divider IC10 Source Selection */
    using RCC_IC10CFGR_IC10SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (default after reset) (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC10CFGR_IC10SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC10CFGR_IC10SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC10CFGR_IC10SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC10CFGR_IC10SEL_B_0x3 = 3;

    /** @brief RCC IC11 configuration register */
    using RCC_IC11CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC11 integer division factor */
    using RCC_IC11CFGR_IC11INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC11 = pllx_ck (value: 0)
     *          - B_0x1: IC11 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC11 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC11 = pllx_ck / 4 (default after reset) (value: 3)
     *          - B_0xFF: IC11 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC11 = pllx_ck */
    constexpr std::uint32_t RCC_IC11CFGR_IC11INT_B_0x0 = 0;
        /** @brief IC11 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC11CFGR_IC11INT_B_0x1 = 1;
        /** @brief IC11 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC11CFGR_IC11INT_B_0x2 = 2;
        /** @brief IC11 = pllx_ck / 4 (default after reset) */
    constexpr std::uint32_t RCC_IC11CFGR_IC11INT_B_0x3 = 3;
        /** @brief IC11 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC11CFGR_IC11INT_B_0xFF = 255;

    /** @brief Divider IC11 Source Selection */
    using RCC_IC11CFGR_IC11SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (default after reset) (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected (default after reset) */
    constexpr std::uint32_t RCC_IC11CFGR_IC11SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC11CFGR_IC11SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC11CFGR_IC11SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC11CFGR_IC11SEL_B_0x3 = 3;

    /** @brief RCC IC12 configuration register */
    using RCC_IC12CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC12 integer division factor */
    using RCC_IC12CFGR_IC12INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC12 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC12 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC12 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC12 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC12 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC12 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC12CFGR_IC12INT_B_0x0 = 0;
        /** @brief IC12 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC12CFGR_IC12INT_B_0x1 = 1;
        /** @brief IC12 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC12CFGR_IC12INT_B_0x2 = 2;
        /** @brief IC12 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC12CFGR_IC12INT_B_0x3 = 3;
        /** @brief IC12 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC12CFGR_IC12INT_B_0xFF = 255;

    /** @brief Divider IC12 Source Selection */
    using RCC_IC12CFGR_IC12SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC12CFGR_IC12SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC12CFGR_IC12SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC12CFGR_IC12SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC12CFGR_IC12SEL_B_0x3 = 3;

    /** @brief RCC IC13 configuration register */
    using RCC_IC13CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC13 integer division factor */
    using RCC_IC13CFGR_IC13INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC13 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC13 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC13 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC13 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC13 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC13 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC13CFGR_IC13INT_B_0x0 = 0;
        /** @brief IC13 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC13CFGR_IC13INT_B_0x1 = 1;
        /** @brief IC13 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC13CFGR_IC13INT_B_0x2 = 2;
        /** @brief IC13 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC13CFGR_IC13INT_B_0x3 = 3;
        /** @brief IC13 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC13CFGR_IC13INT_B_0xFF = 255;

    /** @brief Divider IC13 Source Selection */
    using RCC_IC13CFGR_IC13SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC13CFGR_IC13SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC13CFGR_IC13SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC13CFGR_IC13SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC13CFGR_IC13SEL_B_0x3 = 3;

    /** @brief RCC IC14 configuration register */
    using RCC_IC14CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC14 integer division factor */
    using RCC_IC14CFGR_IC14INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC14 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC14 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC14 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC14 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC14 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC14 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC14CFGR_IC14INT_B_0x0 = 0;
        /** @brief IC14 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC14CFGR_IC14INT_B_0x1 = 1;
        /** @brief IC14 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC14CFGR_IC14INT_B_0x2 = 2;
        /** @brief IC14 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC14CFGR_IC14INT_B_0x3 = 3;
        /** @brief IC14 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC14CFGR_IC14INT_B_0xFF = 255;

    /** @brief Divider IC14 Source Selection */
    using RCC_IC14CFGR_IC14SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC14CFGR_IC14SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC14CFGR_IC14SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC14CFGR_IC14SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC14CFGR_IC14SEL_B_0x3 = 3;

    /** @brief RCC IC15 configuration register */
    using RCC_IC15CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC15 integer division factor */
    using RCC_IC15CFGR_IC15INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC15 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC15 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC15 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC15 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC15 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC15 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC15CFGR_IC15INT_B_0x0 = 0;
        /** @brief IC15 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC15CFGR_IC15INT_B_0x1 = 1;
        /** @brief IC15 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC15CFGR_IC15INT_B_0x2 = 2;
        /** @brief IC15 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC15CFGR_IC15INT_B_0x3 = 3;
        /** @brief IC15 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC15CFGR_IC15INT_B_0xFF = 255;

    /** @brief Divider IC15 Source Selection */
    using RCC_IC15CFGR_IC15SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC15CFGR_IC15SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC15CFGR_IC15SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC15CFGR_IC15SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC15CFGR_IC15SEL_B_0x3 = 3;

    /** @brief RCC IC16 configuration register */
    using RCC_IC16CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC16 integer division factor */
    using RCC_IC16CFGR_IC16INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: IC16 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC16 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC16 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC16 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC16 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC16CFGR_IC16INT_B_0x1 = 1;
        /** @brief IC16 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC16CFGR_IC16INT_B_0x2 = 2;
        /** @brief IC16 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC16CFGR_IC16INT_B_0x3 = 3;
        /** @brief IC16 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC16CFGR_IC16INT_B_0xFF = 255;

    /** @brief Divider IC16 Source Selection */
    using RCC_IC16CFGR_IC16SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC16CFGR_IC16SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC16CFGR_IC16SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC16CFGR_IC16SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC16CFGR_IC16SEL_B_0x3 = 3;

    /** @brief RCC IC17 configuration register */
    using RCC_IC17CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC17 integer division factor */
    using RCC_IC17CFGR_IC17INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC17 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC17 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC17 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC17 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC17 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC17 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC17CFGR_IC17INT_B_0x0 = 0;
        /** @brief IC17 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC17CFGR_IC17INT_B_0x1 = 1;
        /** @brief IC17 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC17CFGR_IC17INT_B_0x2 = 2;
        /** @brief IC17 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC17CFGR_IC17INT_B_0x3 = 3;
        /** @brief IC17 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC17CFGR_IC17INT_B_0xFF = 255;

    /** @brief Divider IC17 Source Selection */
    using RCC_IC17CFGR_IC17SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC17CFGR_IC17SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC17CFGR_IC17SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC17CFGR_IC17SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC17CFGR_IC17SEL_B_0x3 = 3;

    /** @brief RCC IC18 configuration register */
    using RCC_IC18CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC18 integer division factor */
    using RCC_IC18CFGR_IC18INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC18 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC18 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC18 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC18 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC18 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC18 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC18CFGR_IC18INT_B_0x0 = 0;
        /** @brief IC18 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC18CFGR_IC18INT_B_0x1 = 1;
        /** @brief IC18 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC18CFGR_IC18INT_B_0x2 = 2;
        /** @brief IC18 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC18CFGR_IC18INT_B_0x3 = 3;
        /** @brief IC18 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC18CFGR_IC18INT_B_0xFF = 255;

    /** @brief Divider IC18 Source Selection */
    using RCC_IC18CFGR_IC18SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC18CFGR_IC18SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC18CFGR_IC18SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC18CFGR_IC18SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC18CFGR_IC18SEL_B_0x3 = 3;

    /** @brief RCC IC19 configuration register */
    using RCC_IC19CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC19 integer division factor */
    using RCC_IC19CFGR_IC19INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC19 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC19 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC19 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC19 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC19 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC19 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC19CFGR_IC19INT_B_0x0 = 0;
        /** @brief IC19 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC19CFGR_IC19INT_B_0x1 = 1;
        /** @brief IC19 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC19CFGR_IC19INT_B_0x2 = 2;
        /** @brief IC19 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC19CFGR_IC19INT_B_0x3 = 3;
        /** @brief IC19 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC19CFGR_IC19INT_B_0xFF = 255;

    /** @brief Divider IC19 Source Selection */
    using RCC_IC19CFGR_IC19SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC19CFGR_IC19SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC19CFGR_IC19SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC19CFGR_IC19SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC19CFGR_IC19SEL_B_0x3 = 3;

    /** @brief RCC IC20 configuration register */
    using RCC_IC20CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divider IC20 integer division factor */
    using RCC_IC20CFGR_IC20INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC20 = pllx_ck (default after reset) (value: 0)
     *          - B_0x1: IC20 = pllx_ck / 2 (value: 1)
     *          - B_0x2: IC20 = pllx_ck / 3 (value: 2)
     *          - B_0x3: IC20 = pllx_ck / 4 (value: 3)
     *          - B_0xFF: IC20 = pllx_ck / 256 (value: 255)
     */
        /** @brief IC20 = pllx_ck (default after reset) */
    constexpr std::uint32_t RCC_IC20CFGR_IC20INT_B_0x0 = 0;
        /** @brief IC20 = pllx_ck / 2 */
    constexpr std::uint32_t RCC_IC20CFGR_IC20INT_B_0x1 = 1;
        /** @brief IC20 = pllx_ck / 3 */
    constexpr std::uint32_t RCC_IC20CFGR_IC20INT_B_0x2 = 2;
        /** @brief IC20 = pllx_ck / 4 */
    constexpr std::uint32_t RCC_IC20CFGR_IC20INT_B_0x3 = 3;
        /** @brief IC20 = pllx_ck / 256 */
    constexpr std::uint32_t RCC_IC20CFGR_IC20INT_B_0xFF = 255;

    /** @brief Divider IC20 Source Selection */
    using RCC_IC20CFGR_IC20SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pll1_ck is selected (value: 0)
     *          - B_0x1: pll2_ck is selected (value: 1)
     *          - B_0x2: hsi_ck = hsi_osc_ck / 4 (value: 2)
     *          - B_0x3: hsi_ck = hsi_osc_ck / 8 (value: 3)
     */
        /** @brief pll1_ck is selected */
    constexpr std::uint32_t RCC_IC20CFGR_IC20SEL_B_0x0 = 0;
        /** @brief pll2_ck is selected */
    constexpr std::uint32_t RCC_IC20CFGR_IC20SEL_B_0x1 = 1;
        /** @brief hsi_ck = hsi_osc_ck / 4 */
    constexpr std::uint32_t RCC_IC20CFGR_IC20SEL_B_0x2 = 2;
        /** @brief hsi_ck = hsi_osc_ck / 8 */
    constexpr std::uint32_t RCC_IC20CFGR_IC20SEL_B_0x3 = 3;

    /** @brief RCC clock-source interrupt enable register */
    using RCC_CIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt enable */
    using RCC_CIER_LSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: LSI ready interrupt enabled (value: 1)
     */
        /** @brief LSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x0 = 0;
        /** @brief LSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSIRDYIE_B_0x1 = 1;

    /** @brief LSE ready interrupt enable */
    using RCC_CIER_LSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: LSE ready interrupt enabled (value: 1)
     */
        /** @brief LSE ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x0 = 0;
        /** @brief LSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSERDYIE_B_0x1 = 1;

    /** @brief MSI ready interrupt enable */
    using RCC_CIER_MSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: MSI ready interrupt enabled (value: 1)
     */
        /** @brief MSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_MSIRDYIE_B_0x0 = 0;
        /** @brief MSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_MSIRDYIE_B_0x1 = 1;

    /** @brief HSI ready interrupt enable */
    using RCC_CIER_HSIRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSI ready interrupt enabled (value: 1)
     */
        /** @brief HSI ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x0 = 0;
        /** @brief HSI ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSIRDYIE_B_0x1 = 1;

    /** @brief HSE ready interrupt enable */
    using RCC_CIER_HSERDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE ready interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: HSE ready interrupt enabled (value: 1)
     */
        /** @brief HSE ready interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x0 = 0;
        /** @brief HSE ready interrupt enabled */
    constexpr std::uint32_t RCC_CIER_HSERDYIE_B_0x1 = 1;

    /** @brief PLL1 ready interrupt enable */
    using RCC_CIER_PLL1RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL1 lock interrupt enabled (value: 1)
     */
        /** @brief PLL1 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x0 = 0;
        /** @brief PLL1 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL1RDYIE_B_0x1 = 1;

    /** @brief PLL2 ready interrupt enable */
    using RCC_CIER_PLL2RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL2 lock interrupt enabled (value: 1)
     */
        /** @brief PLL2 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL2RDYIE_B_0x0 = 0;
        /** @brief PLL2 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL2RDYIE_B_0x1 = 1;

    /** @brief PLL3 ready interrupt enable */
    using RCC_CIER_PLL3RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL3 lock interrupt enabled (value: 1)
     */
        /** @brief PLL3 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL3RDYIE_B_0x0 = 0;
        /** @brief PLL3 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL3RDYIE_B_0x1 = 1;

    /** @brief PLL4 ready interrupt enable */
    using RCC_CIER_PLL4RDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL4 lock interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: PLL4 lock interrupt enabled (value: 1)
     */
        /** @brief PLL4 lock interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_PLL4RDYIE_B_0x0 = 0;
        /** @brief PLL4 lock interrupt enabled */
    constexpr std::uint32_t RCC_CIER_PLL4RDYIE_B_0x1 = 1;

    /** @brief LSE clock security system (CSS) interrupt enable */
    using RCC_CIER_LSECSSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE CSS interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: LSE CSS interrupt enabled (value: 1)
     */
        /** @brief LSE CSS interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x0 = 0;
        /** @brief LSE CSS interrupt enabled */
    constexpr std::uint32_t RCC_CIER_LSECSSIE_B_0x1 = 1;

    /** @brief HSE clock security system (CSS) interrupt enable */
    using RCC_CIER_HSECSSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE CSS interrupt disabled (value: 0)
     *          - B_0x1: HSE CSS interrupt enabled (default after reset) (value: 1)
     */
        /** @brief HSE CSS interrupt disabled */
    constexpr std::uint32_t RCC_CIER_HSECSSIE_B_0x0 = 0;
        /** @brief HSE CSS interrupt enabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_HSECSSIE_B_0x1 = 1;

    /** @brief CPU wakeup from Stop interrupt enable */
    using RCC_CIER_WKUPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup interrupt disabled (default after reset) (value: 0)
     *          - B_0x1: Wakeup interrupt enabled (value: 1)
     */
        /** @brief Wakeup interrupt disabled (default after reset) */
    constexpr std::uint32_t RCC_CIER_WKUPIE_B_0x0 = 0;
        /** @brief Wakeup interrupt enabled */
    constexpr std::uint32_t RCC_CIER_WKUPIE_B_0x1 = 1;

    /** @brief RCC clock-source interrupt flag register */
    using RCC_CIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt flag */
    using RCC_CIFR_LSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSI */
    constexpr std::uint32_t RCC_CIFR_LSIRDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag */
    using RCC_CIFR_LSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSE */
    constexpr std::uint32_t RCC_CIFR_LSERDYF_B_0x1 = 1;

    /** @brief MSI ready interrupt flag */
    using RCC_CIFR_MSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the MSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the MSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the MSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_MSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the MSI */
    constexpr std::uint32_t RCC_CIFR_MSIRDYF_B_0x1 = 1;

    /** @brief HSI ready interrupt flag */
    using RCC_CIFR_HSIRDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSI (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSI (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSI (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSI */
    constexpr std::uint32_t RCC_CIFR_HSIRDYF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag */
    using RCC_CIFR_HSERDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSE */
    constexpr std::uint32_t RCC_CIFR_HSERDYF_B_0x1 = 1;

    /** @brief PLL1 ready interrupt flag */
    using RCC_CIFR_PLL1RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the PLL1 (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the PLL1 (value: 1)
     */
        /** @brief no clock ready interrupt caused by the PLL1 (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the PLL1 */
    constexpr std::uint32_t RCC_CIFR_PLL1RDYF_B_0x1 = 1;

    /** @brief PLL2 ready interrupt flag */
    using RCC_CIFR_PLL2RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the PLL2 (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the PLL2 (value: 1)
     */
        /** @brief no clock ready interrupt caused by the PLL2 (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL2RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the PLL2 */
    constexpr std::uint32_t RCC_CIFR_PLL2RDYF_B_0x1 = 1;

    /** @brief PLL3 ready interrupt flag */
    using RCC_CIFR_PLL3RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the PLL3 (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the PLL3 (value: 1)
     */
        /** @brief no clock ready interrupt caused by the PLL3 (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL3RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the PLL3 */
    constexpr std::uint32_t RCC_CIFR_PLL3RDYF_B_0x1 = 1;

    /** @brief PLL4 ready interrupt flag */
    using RCC_CIFR_PLL4RDYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the PLL4 (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the PLL4 (value: 1)
     */
        /** @brief no clock ready interrupt caused by the PLL4 (default after reset) */
    constexpr std::uint32_t RCC_CIFR_PLL4RDYF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the PLL4 */
    constexpr std::uint32_t RCC_CIFR_PLL4RDYF_B_0x1 = 1;

    /** @brief LSE ready interrupt flag */
    using RCC_CIFR_LSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the LSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the LSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the LSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the LSE */
    constexpr std::uint32_t RCC_CIFR_LSECSSF_B_0x1 = 1;

    /** @brief HSE ready interrupt flag */
    using RCC_CIFR_HSECSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no clock ready interrupt caused by the HSE (default after reset) (value: 0)
     *          - B_0x1: clock ready interrupt caused by the HSE (value: 1)
     */
        /** @brief no clock ready interrupt caused by the HSE (default after reset) */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x0 = 0;
        /** @brief clock ready interrupt caused by the HSE */
    constexpr std::uint32_t RCC_CIFR_HSECSSF_B_0x1 = 1;

    /** @brief CPU wakeup from Stop interrupt flag */
    using RCC_CIFR_WKUPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wakeup interrupt caused by the PWR (default after reset) (value: 0)
     *          - B_0x1: wakeup interrupt caused by the PWR (value: 1)
     */
        /** @brief no wakeup interrupt caused by the PWR (default after reset) */
    constexpr std::uint32_t RCC_CIFR_WKUPF_B_0x0 = 0;
        /** @brief wakeup interrupt caused by the PWR */
    constexpr std::uint32_t RCC_CIFR_WKUPF_B_0x1 = 1;

    /** @brief RCC clock-source interrupt Clear register */
    using RCC_CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI ready interrupt clear */
    using RCC_CICR_LSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSIRDYF not modified (default after reset) (value: 0)
     *          - B_0x1: LSIRDYF cleared (value: 1)
     */
        /** @brief LSIRDYF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x0 = 0;
        /** @brief LSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_LSIRDYC_B_0x1 = 1;

    /** @brief LSE ready interrupt clear */
    using RCC_CICR_LSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSERDYF not modified (default after reset) (value: 0)
     *          - B_0x1: LSERDYF cleared (value: 1)
     */
        /** @brief LSERDYF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x0 = 0;
        /** @brief LSERDYF cleared */
    constexpr std::uint32_t RCC_CICR_LSERDYC_B_0x1 = 1;

    /** @brief MSI ready interrupt clear */
    using RCC_CICR_MSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSIRDYF not modified (default after reset) (value: 0)
     *          - B_0x1: MSIRDYF cleared (value: 1)
     */
        /** @brief MSIRDYF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_MSIRDYC_B_0x0 = 0;
        /** @brief MSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_MSIRDYC_B_0x1 = 1;

    /** @brief HSI ready interrupt clear */
    using RCC_CICR_HSIRDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSIRDYF not modified (default after reset) (value: 0)
     *          - B_0x1: HSIRDYF cleared (value: 1)
     */
        /** @brief HSIRDYF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x0 = 0;
        /** @brief HSIRDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSIRDYC_B_0x1 = 1;

    /** @brief HSE ready interrupt clear */
    using RCC_CICR_HSERDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSERDYF not modified (default after reset) (value: 0)
     *          - B_0x1: HSERDYF cleared (value: 1)
     */
        /** @brief HSERDYF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x0 = 0;
        /** @brief HSERDYF cleared */
    constexpr std::uint32_t RCC_CICR_HSERDYC_B_0x1 = 1;

    /** @brief PLL1 ready interrupt clear */
    using RCC_CICR_PLL1RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1RDYF not modified (default after reset) (value: 0)
     *          - B_0x1: PLL1RDYF cleared (value: 1)
     */
        /** @brief PLL1RDYF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL1RDYC_B_0x0 = 0;
        /** @brief PLL1RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL1RDYC_B_0x1 = 1;

    /** @brief PLL2 ready interrupt clear */
    using RCC_CICR_PLL2RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2RDYF not modified (default after reset) (value: 0)
     *          - B_0x1: PLL2RDYF cleared (value: 1)
     */
        /** @brief PLL2RDYF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL2RDYC_B_0x0 = 0;
        /** @brief PLL2RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL2RDYC_B_0x1 = 1;

    /** @brief PLL3 ready interrupt clear */
    using RCC_CICR_PLL3RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3RDYF not modified (default after reset) (value: 0)
     *          - B_0x1: PLL3RDYF cleared (value: 1)
     */
        /** @brief PLL3RDYF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL3RDYC_B_0x0 = 0;
        /** @brief PLL3RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL3RDYC_B_0x1 = 1;

    /** @brief PLL4 ready interrupt clear */
    using RCC_CICR_PLL4RDYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL4RDYF not modified (default after reset) (value: 0)
     *          - B_0x1: PLL4RDYF cleared (value: 1)
     */
        /** @brief PLL4RDYF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_PLL4RDYC_B_0x0 = 0;
        /** @brief PLL4RDYF cleared */
    constexpr std::uint32_t RCC_CICR_PLL4RDYC_B_0x1 = 1;

    /** @brief LSE ready interrupt clear */
    using RCC_CICR_LSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSECSSF not modified (default after reset) (value: 0)
     *          - B_0x1: LSECSSF cleared (value: 1)
     */
        /** @brief LSECSSF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x0 = 0;
        /** @brief LSECSSF cleared */
    constexpr std::uint32_t RCC_CICR_LSECSSC_B_0x1 = 1;

    /** @brief HSE ready interrupt clear */
    using RCC_CICR_HSECSSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSECSSF not modified (default after reset) (value: 0)
     *          - B_0x1: HSECSSF cleared (value: 1)
     */
        /** @brief HSECSSF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_HSECSSC_B_0x0 = 0;
        /** @brief HSECSSF cleared */
    constexpr std::uint32_t RCC_CICR_HSECSSC_B_0x1 = 1;

    /** @brief CPU Wakeup ready interrupt clear */
    using RCC_CICR_WKUPFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUPF not modified (default after reset) (value: 0)
     *          - B_0x1: WKUPF cleared (value: 1)
     */
        /** @brief WKUPF not modified (default after reset) */
    constexpr std::uint32_t RCC_CICR_WKUPFC_B_0x0 = 0;
        /** @brief WKUPF cleared */
    constexpr std::uint32_t RCC_CICR_WKUPFC_B_0x1 = 1;

    /** @brief RCC clock configuration for independent peripheral register1 */
    using RCC_CCIPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the ADF1 kernel clock */
    using RCC_CCIPR1_ADF1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic7_ck selected as reference clock (value: 2)
     *          - B_0x3: ic8_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     *          - B_0x7: timg_ck selected as reference clock (value: 7)
     */
        /** @brief hclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x1 = 1;
        /** @brief ic7_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x2 = 2;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x6 = 6;
        /** @brief timg_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADF1SEL_B_0x7 = 7;

    /** @brief Source selection for the ADC12 kernel clock */
    using RCC_CCIPR1_ADC12SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic7_ck selected as reference clock (value: 2)
     *          - B_0x3: ic8_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     *          - B_0x7: timg_ck selected as reference clock (value: 7)
     */
        /** @brief hclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADC12SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADC12SEL_B_0x1 = 1;
        /** @brief ic7_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADC12SEL_B_0x2 = 2;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADC12SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADC12SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADC12SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADC12SEL_B_0x6 = 6;
        /** @brief timg_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_ADC12SEL_B_0x7 = 7;

    /** @brief ADC12 Prog clock divider selection (for clock ck_icn_p_adf1) */
    using RCC_CCIPR1_ADCPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ck_icn_p_adf1 is divided by 1 (value: 0)
     *          - B_0x1: ck_icn_p_adf1 is divided by 2 (value: 1)
     *          - B_0x2: ck_icn_p_adf1 is divided by 3 (value: 2)
     *          - B_0x3: ck_icn_p_adf1 is divided by 4 (value: 3)
     */
        /** @brief ck_icn_p_adf1 is divided by 1 */
    constexpr std::uint32_t RCC_CCIPR1_ADCPRE_B_0x0 = 0;
        /** @brief ck_icn_p_adf1 is divided by 2 */
    constexpr std::uint32_t RCC_CCIPR1_ADCPRE_B_0x1 = 1;
        /** @brief ck_icn_p_adf1 is divided by 3 */
    constexpr std::uint32_t RCC_CCIPR1_ADCPRE_B_0x2 = 2;
        /** @brief ck_icn_p_adf1 is divided by 4 */
    constexpr std::uint32_t RCC_CCIPR1_ADCPRE_B_0x3 = 3;

    /** @brief Source selection for the DCMIPP kernel clock */
    using RCC_CCIPR1_DCMIPPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk5 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic17_ck selected as reference clock (value: 2)
     *          - B_0x3: hsi_div_ck selected as reference clock (value: 3)
     */
        /** @brief pclk5 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_DCMIPPSEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_DCMIPPSEL_B_0x1 = 1;
        /** @brief ic17_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_DCMIPPSEL_B_0x2 = 2;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR1_DCMIPPSEL_B_0x3 = 3;

    /** @brief RCC clock configuration for independent peripheral register 2 */
    using RCC_CCIPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the ETH1 kernel clock */
    using RCC_CCIPR2_ETH1PTPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclke selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic13_ck selected as reference clock (value: 2)
     *          - B_0x3: hse_ck selected as reference clock (value: 3)
     */
        /** @brief hclke selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PTPSEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PTPSEL_B_0x1 = 1;
        /** @brief ic13_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PTPSEL_B_0x2 = 2;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PTPSEL_B_0x3 = 3;

    /** @brief ETH1 Kernel clock divider selection (for clock ck_ker_eth1ptp) */
    using RCC_CCIPR2_ETH1PTPDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ck_ker_eth1ptp is divided by 1 (value: 0)
     *          - B_0x1: ck_ker_eth1ptp is divided by 2 (value: 1)
     *          - B_0x2: ck_ker_eth1ptp is divided by 3 (value: 2)
     *          - B_0x3: ck_ker_eth1ptp is divided by 4 (value: 3)
     *          - B_0xF: ck_ker_eth1ptp is divided by 16 (value: 15)
     */
        /** @brief ck_ker_eth1ptp is divided by 1 */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PTPDIV_B_0x0 = 0;
        /** @brief ck_ker_eth1ptp is divided by 2 */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PTPDIV_B_0x1 = 1;
        /** @brief ck_ker_eth1ptp is divided by 3 */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PTPDIV_B_0x2 = 2;
        /** @brief ck_ker_eth1ptp is divided by 4 */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PTPDIV_B_0x3 = 3;
        /** @brief ck_ker_eth1ptp is divided by 16 */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PTPDIV_B_0xF = 15;

    /** @brief Set and reset by software. */
    using RCC_CCIPR2_ETH1PWRDOWNACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power-down sequence start not yet acknowledged. (value: 0)
     *          - B_0x1: Power-down sequence start acknowledged (value: 1)
     */
        /** @brief Power-down sequence start not yet acknowledged. */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PWRDOWNACK_B_0x0 = 0;
        /** @brief Power-down sequence start acknowledged */
    constexpr std::uint32_t RCC_CCIPR2_ETH1PWRDOWNACK_B_0x1 = 1;

    /** @brief Source selection for the ETH1 kernel clock */
    using RCC_CCIPR2_ETH1CLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclke selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic12_ck selected as reference clock (value: 2)
     *          - B_0x3: hse_ck selected as reference clock (value: 3)
     */
        /** @brief hclke selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR2_ETH1CLKSEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR2_ETH1CLKSEL_B_0x1 = 1;
        /** @brief ic12_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR2_ETH1CLKSEL_B_0x2 = 2;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR2_ETH1CLKSEL_B_0x3 = 3;

    /** @brief Set and reset by software */
    using RCC_CCIPR2_ETH1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set and reset by software */
    using RCC_CCIPR2_ETH1REFCLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set and reset by software. */
    using RCC_CCIPR2_ETH1GTXCLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MII (value: 0)
     *          - B_0x1: RGMII (value: 1)
     */
        /** @brief MII */
    constexpr std::uint32_t RCC_CCIPR2_ETH1GTXCLKSEL_B_0x0 = 0;
        /** @brief RGMII */
    constexpr std::uint32_t RCC_CCIPR2_ETH1GTXCLKSEL_B_0x1 = 1;

    /** @brief RCC clock configuration for independent peripheral register3 */
    using RCC_CCIPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the FDCAN kernel clock */
    using RCC_CCIPR3_FDCANSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic19_ck selected as reference clock (value: 2)
     *          - B_0x3: hse_ck selected as reference clock (value: 3)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR3_FDCANSEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR3_FDCANSEL_B_0x1 = 1;
        /** @brief ic19_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR3_FDCANSEL_B_0x2 = 2;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR3_FDCANSEL_B_0x3 = 3;

    /** @brief Source selection for the FMC kernel clock */
    using RCC_CCIPR3_FMCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic3_ck selected as reference clock (value: 2)
     *          - B_0x3: ic4_ck selected as reference clock (value: 3)
     */
        /** @brief hclk5 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR3_FMCSEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR3_FMCSEL_B_0x1 = 1;
        /** @brief ic3_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR3_FMCSEL_B_0x2 = 2;
        /** @brief ic4_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR3_FMCSEL_B_0x3 = 3;

    /** @brief Source selection for the DFT kernel clock */
    using RCC_CCIPR3_DFTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: jtag_tck selected as reference clock (default after reset) (value: 0)
     *          - B_0x1: pclk3 selected as reference clock (value: 1)
     */
        /** @brief jtag_tck selected as reference clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR3_DFTSEL_B_0x0 = 0;
        /** @brief pclk3 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR3_DFTSEL_B_0x1 = 1;

    /** @brief RCC clock configuration for independent peripheral register4 */
    using RCC_CCIPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the I2C1 kernel clock */
    using RCC_CCIPR4_I2C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic10_ck selected as reference clock (value: 2)
     *          - B_0x3: ic15_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x1 = 1;
        /** @brief ic10_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x2 = 2;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C1SEL_B_0x5 = 5;

    /** @brief Source selection for the I2C2 kernel clock */
    using RCC_CCIPR4_I2C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic10_ck selected as reference clock (value: 2)
     *          - B_0x3: ic15_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x1 = 1;
        /** @brief ic10_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x2 = 2;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C2SEL_B_0x5 = 5;

    /** @brief Source selection for the I2C3 kernel clock */
    using RCC_CCIPR4_I2C3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic10_ck selected as reference clock (value: 2)
     *          - B_0x3: ic15_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x1 = 1;
        /** @brief ic10_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x2 = 2;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C3SEL_B_0x5 = 5;

    /** @brief Source selection for the I2C4 kernel clock */
    using RCC_CCIPR4_I2C4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic10_ck selected as reference clock (value: 2)
     *          - B_0x3: ic15_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C4SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C4SEL_B_0x1 = 1;
        /** @brief ic10_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C4SEL_B_0x2 = 2;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C4SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C4SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I2C4SEL_B_0x5 = 5;

    /** @brief Source selection for the I3C1 kernel clock */
    using RCC_CCIPR4_I3C1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic10_ck selected as reference clock (value: 2)
     *          - B_0x3: ic15_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x1 = 1;
        /** @brief ic10_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x2 = 2;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C1SEL_B_0x5 = 5;

    /** @brief Source selection for the I3C2 kernel clock */
    using RCC_CCIPR4_I3C2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic10_ck selected as reference clock (value: 2)
     *          - B_0x3: ic15_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x1 = 1;
        /** @brief ic10_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x2 = 2;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_I3C2SEL_B_0x5 = 5;

    /** @brief Source selection for the LTDC kernel clock */
    using RCC_CCIPR4_LTDCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk5 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic16_ck selected as reference clock (value: 2)
     *          - B_0x3: hsi_div_ck selected as reference clock (value: 3)
     */
        /** @brief pclk5 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_LTDCSEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_LTDCSEL_B_0x1 = 1;
        /** @brief ic16_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_LTDCSEL_B_0x2 = 2;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR4_LTDCSEL_B_0x3 = 3;

    /** @brief RCC lock configuration for independent peripheral register5 */
    using RCC_CCIPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the MCO1 kernel clock */
    using RCC_CCIPR5_MCO1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_div_ck selected as reference clock (default after reset) (value: 0)
     *          - B_0x1: lse_ck selected as reference clock (value: 1)
     *          - B_0x2: msi_ck selected as reference clock (value: 2)
     *          - B_0x3: lsi_ck selected as reference clock (value: 3)
     *          - B_0x4: hse_ck selected as reference clock (value: 4)
     *          - B_0x5: ic5_ck selected as reference clock (value: 5)
     *          - B_0x6: ic10_ck selected as reference clock (value: 6)
     *          - B_0x7: sysa_ck selected as reference clock (value: 7)
     */
        /** @brief hsi_div_ck selected as reference clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_MCO1SEL_B_0x0 = 0;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO1SEL_B_0x1 = 1;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO1SEL_B_0x2 = 2;
        /** @brief lsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO1SEL_B_0x3 = 3;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO1SEL_B_0x4 = 4;
        /** @brief ic5_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO1SEL_B_0x5 = 5;
        /** @brief ic10_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO1SEL_B_0x6 = 6;
        /** @brief sysa_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO1SEL_B_0x7 = 7;

    /** @brief MCO1 Prog clock divider selection (for clock ck_icn_p_mce3) */
    using RCC_CCIPR5_MCO1PRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ck_icn_p_mce3 is divided by 1 (value: 0)
     *          - B_0x1: ck_icn_p_mce3 is divided by 2 (value: 1)
     *          - B_0x2: ck_icn_p_mce3 is divided by 3 (value: 2)
     *          - B_0x3: ck_icn_p_mce3 is divided by 4 (value: 3)
     *          - B_0xF: ck_icn_p_mce3 is divided by 16 (value: 15)
     */
        /** @brief ck_icn_p_mce3 is divided by 1 */
    constexpr std::uint32_t RCC_CCIPR5_MCO1PRE_B_0x0 = 0;
        /** @brief ck_icn_p_mce3 is divided by 2 */
    constexpr std::uint32_t RCC_CCIPR5_MCO1PRE_B_0x1 = 1;
        /** @brief ck_icn_p_mce3 is divided by 3 */
    constexpr std::uint32_t RCC_CCIPR5_MCO1PRE_B_0x2 = 2;
        /** @brief ck_icn_p_mce3 is divided by 4 */
    constexpr std::uint32_t RCC_CCIPR5_MCO1PRE_B_0x3 = 3;
        /** @brief ck_icn_p_mce3 is divided by 16 */
    constexpr std::uint32_t RCC_CCIPR5_MCO1PRE_B_0xF = 15;

    /** @brief Source selection for the MCO2 kernel clock */
    using RCC_CCIPR5_MCO2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_div_ck selected as reference clock (default after reset) (value: 0)
     *          - B_0x1: lse_ck selected as reference clock (value: 1)
     *          - B_0x2: msi_ck selected as reference clock (value: 2)
     *          - B_0x3: lsi_ck selected as reference clock (value: 3)
     *          - B_0x4: hse_ck selected as reference clock (value: 4)
     *          - B_0x5: ic15_ck selected as reference clock (value: 5)
     *          - B_0x6: ic20_ck selected as reference clock (value: 6)
     *          - B_0x7: sysb_ck selected as reference clock (value: 7)
     */
        /** @brief hsi_div_ck selected as reference clock (default after reset) */
    constexpr std::uint32_t RCC_CCIPR5_MCO2SEL_B_0x0 = 0;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO2SEL_B_0x1 = 1;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO2SEL_B_0x2 = 2;
        /** @brief lsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO2SEL_B_0x3 = 3;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO2SEL_B_0x4 = 4;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO2SEL_B_0x5 = 5;
        /** @brief ic20_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO2SEL_B_0x6 = 6;
        /** @brief sysb_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MCO2SEL_B_0x7 = 7;

    /** @brief MCO2 Prog clock divider selection (for clock ck_icn_p_mce4) */
    using RCC_CCIPR5_MCO2PRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ck_icn_p_mce4 is divided by 1 (value: 0)
     *          - B_0x1: ck_icn_p_mce4 is divided by 2 (value: 1)
     *          - B_0x2: ck_icn_p_mce4 is divided by 3 (value: 2)
     *          - B_0x3: ck_icn_p_mce4 is divided by 4 (value: 3)
     *          - B_0xF: ck_icn_p_mce4 is divided by 16 (value: 15)
     */
        /** @brief ck_icn_p_mce4 is divided by 1 */
    constexpr std::uint32_t RCC_CCIPR5_MCO2PRE_B_0x0 = 0;
        /** @brief ck_icn_p_mce4 is divided by 2 */
    constexpr std::uint32_t RCC_CCIPR5_MCO2PRE_B_0x1 = 1;
        /** @brief ck_icn_p_mce4 is divided by 3 */
    constexpr std::uint32_t RCC_CCIPR5_MCO2PRE_B_0x2 = 2;
        /** @brief ck_icn_p_mce4 is divided by 4 */
    constexpr std::uint32_t RCC_CCIPR5_MCO2PRE_B_0x3 = 3;
        /** @brief ck_icn_p_mce4 is divided by 16 */
    constexpr std::uint32_t RCC_CCIPR5_MCO2PRE_B_0xF = 15;

    /** @brief Source selection for the MDF1 kernel clock */
    using RCC_CCIPR5_MDF1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic7_ck selected as reference clock (value: 2)
     *          - B_0x3: ic8_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     *          - B_0x7: timg_ck selected as reference clock (value: 7)
     */
        /** @brief hclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MDF1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MDF1SEL_B_0x1 = 1;
        /** @brief ic7_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MDF1SEL_B_0x2 = 2;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MDF1SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MDF1SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MDF1SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MDF1SEL_B_0x6 = 6;
        /** @brief timg_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR5_MDF1SEL_B_0x7 = 7;

    /** @brief RCC clock configuration for independent peripheral register6 */
    using RCC_CCIPR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the XSPI1 kernel clock */
    using RCC_CCIPR6_XSPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic3_ck selected as reference clock (value: 2)
     *          - B_0x3: ic4_ck selected as reference clock (value: 3)
     */
        /** @brief hclk5 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI1SEL_B_0x1 = 1;
        /** @brief ic3_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI1SEL_B_0x2 = 2;
        /** @brief ic4_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI1SEL_B_0x3 = 3;

    /** @brief Source selection for the XSPI2 kernel clock */
    using RCC_CCIPR6_XSPI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic3_ck selected as reference clock (value: 2)
     *          - B_0x3: ic4_ck selected as reference clock (value: 3)
     */
        /** @brief hclk5 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI2SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI2SEL_B_0x1 = 1;
        /** @brief ic3_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI2SEL_B_0x2 = 2;
        /** @brief ic4_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI2SEL_B_0x3 = 3;

    /** @brief Source selection for the XSPI3 kernel clock */
    using RCC_CCIPR6_XSPI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic3_ck selected as reference clock (value: 2)
     *          - B_0x3: ic4_ck selected as reference clock (value: 3)
     */
        /** @brief hclk5 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI3SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI3SEL_B_0x1 = 1;
        /** @brief ic3_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI3SEL_B_0x2 = 2;
        /** @brief ic4_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_XSPI3SEL_B_0x3 = 3;

    /** @brief Source selection for the OTGPHY1 kernel clock */
    using RCC_CCIPR6_OTGPHY1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hse_ck selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic15_ck selected as reference clock (value: 2)
     *          - B_0x3: hse_div2_osc_ck selected as reference clock (value: 3)
     */
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_OTGPHY1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_OTGPHY1SEL_B_0x1 = 1;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_OTGPHY1SEL_B_0x2 = 2;
        /** @brief hse_div2_osc_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_OTGPHY1SEL_B_0x3 = 3;

    /** @brief Set and reset by software */
    using RCC_CCIPR6_OTGPHY1CKREFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the OTGPHY2 kernel clock */
    using RCC_CCIPR6_OTGPHY2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hse_ck selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic15_ck selected as reference clock (value: 2)
     *          - B_0x3: hse_div2_osc_ck selected as reference clock (value: 3)
     */
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_OTGPHY2SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_OTGPHY2SEL_B_0x1 = 1;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_OTGPHY2SEL_B_0x2 = 2;
        /** @brief hse_div2_osc_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR6_OTGPHY2SEL_B_0x3 = 3;

    /** @brief Set and reset by software */
    using RCC_CCIPR6_OTGPHY2CKREFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC clock configuration for independent peripheral register7 */
    using RCC_CCIPR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the PER kernel clock */
    using RCC_CCIPR7_PERSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hsi_ck selected as reference clock (value: 0)
     *          - B_0x1: msi_ck selected as reference clock (value: 1)
     *          - B_0x2: hse_ck selected as reference clock (value: 2)
     *          - B_0x3: ic19_ck selected as reference clock (value: 3)
     *          - B_0x4: ic5_ck selected as reference clock (value: 4)
     *          - B_0x5: ic10_ck selected as reference clock (value: 5)
     *          - B_0x6: ic15_ck selected as reference clock (value: 6)
     *          - B_0x7: ic20_ck selected as reference clock (value: 7)
     */
        /** @brief hsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PERSEL_B_0x0 = 0;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PERSEL_B_0x1 = 1;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PERSEL_B_0x2 = 2;
        /** @brief ic19_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PERSEL_B_0x3 = 3;
        /** @brief ic5_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PERSEL_B_0x4 = 4;
        /** @brief ic10_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PERSEL_B_0x5 = 5;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PERSEL_B_0x6 = 6;
        /** @brief ic20_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PERSEL_B_0x7 = 7;

    /** @brief Source selection for the PSSI kernel clock */
    using RCC_CCIPR7_PSSISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclk5 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic20_ck selected as reference clock (value: 2)
     *          - B_0x3: hsi_div_ck selected as reference clock (value: 3)
     */
        /** @brief hclk5 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PSSISEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PSSISEL_B_0x1 = 1;
        /** @brief ic20_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PSSISEL_B_0x2 = 2;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_PSSISEL_B_0x3 = 3;

    /** @brief Source selection for the RTC kernel clock */
    using RCC_CCIPR7_RTCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: lse_ck selected as reference clock (value: 1)
     *          - B_0x2: lsi_ck selected as reference clock (value: 2)
     *          - B_0x3: hse_rtc_ck selected as reference clock (value: 3)
     */
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_RTCSEL_B_0x1 = 1;
        /** @brief lsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_RTCSEL_B_0x2 = 2;
        /** @brief hse_rtc_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_RTCSEL_B_0x3 = 3;

    /** @brief RTC Prog clock divider selection (for clock ck_icn_p_risaf) */
    using RCC_CCIPR7_RTCPRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ck_icn_p_risaf is divided by 1 (value: 0)
     *          - B_0x1: ck_icn_p_risaf is divided by 2 (value: 1)
     *          - B_0x2: ck_icn_p_risaf is divided by 3 (value: 2)
     *          - B_0x3: ck_icn_p_risaf is divided by 4 (value: 3)
     *          - B_0x3F: ck_icn_p_risaf is divided by 64 (value: 63)
     */
        /** @brief ck_icn_p_risaf is divided by 1 */
    constexpr std::uint32_t RCC_CCIPR7_RTCPRE_B_0x0 = 0;
        /** @brief ck_icn_p_risaf is divided by 2 */
    constexpr std::uint32_t RCC_CCIPR7_RTCPRE_B_0x1 = 1;
        /** @brief ck_icn_p_risaf is divided by 3 */
    constexpr std::uint32_t RCC_CCIPR7_RTCPRE_B_0x2 = 2;
        /** @brief ck_icn_p_risaf is divided by 4 */
    constexpr std::uint32_t RCC_CCIPR7_RTCPRE_B_0x3 = 3;
        /** @brief ck_icn_p_risaf is divided by 64 */
    constexpr std::uint32_t RCC_CCIPR7_RTCPRE_B_0x3F = 63;

    /** @brief Source selection for the SAI1 kernel clock */
    using RCC_CCIPR7_SAI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic7_ck selected as reference clock (value: 2)
     *          - B_0x3: ic8_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     *          - B_0x7: spdif_symb_ck selected as reference clock (value: 7)
     */
        /** @brief pclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI1SEL_B_0x1 = 1;
        /** @brief ic7_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI1SEL_B_0x2 = 2;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI1SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI1SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI1SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI1SEL_B_0x6 = 6;
        /** @brief spdif_symb_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI1SEL_B_0x7 = 7;

    /** @brief Source selection for the SAI2 kernel clock */
    using RCC_CCIPR7_SAI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic7_ck selected as reference clock (value: 2)
     *          - B_0x3: ic8_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     *          - B_0x7: spdif_symb_ck selected as reference clock (value: 7)
     */
        /** @brief pclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI2SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI2SEL_B_0x1 = 1;
        /** @brief ic7_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI2SEL_B_0x2 = 2;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI2SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI2SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI2SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI2SEL_B_0x6 = 6;
        /** @brief spdif_symb_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR7_SAI2SEL_B_0x7 = 7;

    /** @brief RCC clock configuration for independent peripheral register8 */
    using RCC_CCIPR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the SDMMC1 kernel clock */
    using RCC_CCIPR8_SDMMC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclku selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic4_ck selected as reference clock (value: 2)
     *          - B_0x3: ic5_ck selected as reference clock (value: 3)
     */
        /** @brief hclku selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR8_SDMMC1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR8_SDMMC1SEL_B_0x1 = 1;
        /** @brief ic4_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR8_SDMMC1SEL_B_0x2 = 2;
        /** @brief ic5_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR8_SDMMC1SEL_B_0x3 = 3;

    /** @brief Source selection for the SDMMC2 kernel clock */
    using RCC_CCIPR8_SDMMC2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: hclku selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic4_ck selected as reference clock (value: 2)
     *          - B_0x3: ic5_ck selected as reference clock (value: 3)
     */
        /** @brief hclku selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR8_SDMMC2SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR8_SDMMC2SEL_B_0x1 = 1;
        /** @brief ic4_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR8_SDMMC2SEL_B_0x2 = 2;
        /** @brief ic5_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR8_SDMMC2SEL_B_0x3 = 3;

    /** @brief RCC clock configuration for independent peripheral register9 */
    using RCC_CCIPR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the SPDIFRX1 kernel clock */
    using RCC_CCIPR9_SPDIFRX1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic7_ck selected as reference clock (value: 2)
     *          - B_0x3: ic8_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPDIFRX1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPDIFRX1SEL_B_0x1 = 1;
        /** @brief ic7_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPDIFRX1SEL_B_0x2 = 2;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPDIFRX1SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPDIFRX1SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPDIFRX1SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPDIFRX1SEL_B_0x6 = 6;

    /** @brief Source selection for the SPI1 kernel clock */
    using RCC_CCIPR9_SPI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic8_ck selected as reference clock (value: 2)
     *          - B_0x3: ic9_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     */
        /** @brief pclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI1SEL_B_0x1 = 1;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI1SEL_B_0x2 = 2;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI1SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI1SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI1SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI1SEL_B_0x6 = 6;

    /** @brief Source selection for the SPI2 kernel clock */
    using RCC_CCIPR9_SPI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic8_ck selected as reference clock (value: 2)
     *          - B_0x3: ic9_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI2SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI2SEL_B_0x1 = 1;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI2SEL_B_0x2 = 2;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI2SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI2SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI2SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI2SEL_B_0x6 = 6;

    /** @brief Source selection for the SPI3 kernel clock */
    using RCC_CCIPR9_SPI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic8_ck selected as reference clock (value: 2)
     *          - B_0x3: ic9_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI3SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI3SEL_B_0x1 = 1;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI3SEL_B_0x2 = 2;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI3SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI3SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI3SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI3SEL_B_0x6 = 6;

    /** @brief Source selection for the SPI4 kernel clock */
    using RCC_CCIPR9_SPI4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: hse_ck selected as reference clock (value: 6)
     */
        /** @brief pclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI4SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI4SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI4SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI4SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI4SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI4SEL_B_0x5 = 5;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI4SEL_B_0x6 = 6;

    /** @brief Source selection for the SPI5 kernel clock */
    using RCC_CCIPR9_SPI5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: hse_ck selected as reference clock (value: 6)
     */
        /** @brief pclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI5SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI5SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI5SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI5SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI5SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI5SEL_B_0x5 = 5;
        /** @brief hse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI5SEL_B_0x6 = 6;

    /** @brief Source selection for the SPI6 kernel clock */
    using RCC_CCIPR9_SPI6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic8_ck selected as reference clock (value: 2)
     *          - B_0x3: ic9_ck selected as reference clock (value: 3)
     *          - B_0x4: msi_ck selected as reference clock (value: 4)
     *          - B_0x5: hsi_div_ck selected as reference clock (value: 5)
     *          - B_0x6: I2S_CKIN selected as reference clock (value: 6)
     */
        /** @brief pclk4 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI6SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI6SEL_B_0x1 = 1;
        /** @brief ic8_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI6SEL_B_0x2 = 2;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI6SEL_B_0x3 = 3;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI6SEL_B_0x4 = 4;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI6SEL_B_0x5 = 5;
        /** @brief I2S_CKIN selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR9_SPI6SEL_B_0x6 = 6;

    /** @brief RCC clock configuration for independent peripheral register12 */
    using RCC_CCIPR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the LPTIM1 kernel clock */
    using RCC_CCIPR12_LPTIM1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic15_ck selected as reference clock (value: 2)
     *          - B_0x3: lse_ck selected as reference clock (value: 3)
     *          - B_0x4: lsi_ck selected as reference clock (value: 4)
     *          - B_0x5: timg_ck selected as reference clock (value: 5)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM1SEL_B_0x1 = 1;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM1SEL_B_0x2 = 2;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM1SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM1SEL_B_0x4 = 4;
        /** @brief timg_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM1SEL_B_0x5 = 5;

    /** @brief Source selection for the LPTIM2 kernel clock */
    using RCC_CCIPR12_LPTIM2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic15_ck selected as reference clock (value: 2)
     *          - B_0x3: lse_ck selected as reference clock (value: 3)
     *          - B_0x4: lsi_ck selected as reference clock (value: 4)
     *          - B_0x5: timg_ck selected as reference clock (value: 5)
     */
        /** @brief pclk4 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM2SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM2SEL_B_0x1 = 1;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM2SEL_B_0x2 = 2;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM2SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM2SEL_B_0x4 = 4;
        /** @brief timg_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM2SEL_B_0x5 = 5;

    /** @brief Source selection for the LPTIM3 kernel clock */
    using RCC_CCIPR12_LPTIM3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic15_ck selected as reference clock (value: 2)
     *          - B_0x3: lse_ck selected as reference clock (value: 3)
     *          - B_0x4: lsi_ck selected as reference clock (value: 4)
     *          - B_0x5: timg_ck selected as reference clock (value: 5)
     */
        /** @brief pclk4 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM3SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM3SEL_B_0x1 = 1;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM3SEL_B_0x2 = 2;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM3SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM3SEL_B_0x4 = 4;
        /** @brief timg_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM3SEL_B_0x5 = 5;

    /** @brief Source selection for the LPTIM4 kernel clock */
    using RCC_CCIPR12_LPTIM4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic15_ck selected as reference clock (value: 2)
     *          - B_0x3: lse_ck selected as reference clock (value: 3)
     *          - B_0x4: lsi_ck selected as reference clock (value: 4)
     *          - B_0x5: timg_ck selected as reference clock (value: 5)
     */
        /** @brief pclk4 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM4SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM4SEL_B_0x1 = 1;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM4SEL_B_0x2 = 2;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM4SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM4SEL_B_0x4 = 4;
        /** @brief timg_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM4SEL_B_0x5 = 5;

    /** @brief Source selection for the LPTIM5 kernel clock */
    using RCC_CCIPR12_LPTIM5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic15_ck selected as reference clock (value: 2)
     *          - B_0x3: lse_ck selected as reference clock (value: 3)
     *          - B_0x4: lsi_ck selected as reference clock (value: 4)
     *          - B_0x5: timg_ck selected as reference clock (value: 5)
     */
        /** @brief pclk4 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM5SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM5SEL_B_0x1 = 1;
        /** @brief ic15_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM5SEL_B_0x2 = 2;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM5SEL_B_0x3 = 3;
        /** @brief lsi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM5SEL_B_0x4 = 4;
        /** @brief timg_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR12_LPTIM5SEL_B_0x5 = 5;

    /** @brief RCC clock configuration for independent peripheral register13 */
    using RCC_CCIPR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the USART1 kernel clock */
    using RCC_CCIPR13_USART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART1SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART1SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART1SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART1SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART1SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART1SEL_B_0x6 = 6;

    /** @brief Source selection for the USART2 kernel clock */
    using RCC_CCIPR13_USART2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART2SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART2SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART2SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART2SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART2SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART2SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART2SEL_B_0x6 = 6;

    /** @brief Source selection for the USART3 kernel clock */
    using RCC_CCIPR13_USART3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART3SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART3SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART3SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART3SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART3SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART3SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART3SEL_B_0x6 = 6;

    /** @brief Source selection for the UART4 kernel clock */
    using RCC_CCIPR13_UART4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART4SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART4SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART4SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART4SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART4SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART4SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART4SEL_B_0x6 = 6;

    /** @brief Source selection for the UART5 kernel clock */
    using RCC_CCIPR13_UART5SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART5SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART5SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART5SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART5SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART5SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART5SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART5SEL_B_0x6 = 6;

    /** @brief Source selection for the USART6 kernel clock */
    using RCC_CCIPR13_USART6SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART6SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART6SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART6SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART6SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART6SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART6SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_USART6SEL_B_0x6 = 6;

    /** @brief Source selection for the UART7 kernel clock */
    using RCC_CCIPR13_UART7SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART7SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART7SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART7SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART7SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART7SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART7SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART7SEL_B_0x6 = 6;

    /** @brief Source selection for the UART8 kernel clock */
    using RCC_CCIPR13_UART8SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk1 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk1 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART8SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART8SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART8SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART8SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART8SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART8SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR13_UART8SEL_B_0x6 = 6;

    /** @brief RCC clock configuration for independent peripheral register14 */
    using RCC_CCIPR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source selection for the UART9 kernel clock */
    using RCC_CCIPR14_UART9SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_UART9SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_UART9SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_UART9SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_UART9SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_UART9SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_UART9SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_UART9SEL_B_0x6 = 6;

    /** @brief Source selection for the USART10 kernel clock */
    using RCC_CCIPR14_USART10SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk2 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk2 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_USART10SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_USART10SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_USART10SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_USART10SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_USART10SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_USART10SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_USART10SEL_B_0x6 = 6;

    /** @brief Source selection for the LPUART1 kernel clock */
    using RCC_CCIPR14_LPUART1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pclk4 selected as reference clock (value: 0)
     *          - B_0x1: per_ck selected as reference clock (value: 1)
     *          - B_0x2: ic9_ck selected as reference clock (value: 2)
     *          - B_0x3: ic14_ck selected as reference clock (value: 3)
     *          - B_0x4: lse_ck selected as reference clock (value: 4)
     *          - B_0x5: msi_ck selected as reference clock (value: 5)
     *          - B_0x6: hsi_div_ck selected as reference clock (value: 6)
     */
        /** @brief pclk4 selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_LPUART1SEL_B_0x0 = 0;
        /** @brief per_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_LPUART1SEL_B_0x1 = 1;
        /** @brief ic9_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_LPUART1SEL_B_0x2 = 2;
        /** @brief ic14_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_LPUART1SEL_B_0x3 = 3;
        /** @brief lse_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_LPUART1SEL_B_0x4 = 4;
        /** @brief msi_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_LPUART1SEL_B_0x5 = 5;
        /** @brief hsi_div_ck selected as reference clock */
    constexpr std::uint32_t RCC_CCIPR14_LPUART1SEL_B_0x6 = 6;

    /** @brief RCC SoC buses reset register */
    using RCC_BUSRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKN reset */
    using RCC_BUSRSTR_ACLKNRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKN is not under reset (default after reset) (value: 0)
     *          - B_0x1: ACLKN is under reset (value: 1)
     */
        /** @brief ACLKN is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_ACLKNRST_B_0x0 = 0;
        /** @brief ACLKN is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_ACLKNRST_B_0x1 = 1;

    /** @brief AHBM reset */
    using RCC_BUSRSTR_AHBMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBM is not under reset (default after reset) (value: 0)
     *          - B_0x1: AHBM is under reset (value: 1)
     */
        /** @brief AHBM is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_AHBMRST_B_0x0 = 0;
        /** @brief AHBM is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_AHBMRST_B_0x1 = 1;

    /** @brief AHB1 reset */
    using RCC_BUSRSTR_AHB1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AHB1 is under reset (value: 1)
     */
        /** @brief AHB1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_AHB1RST_B_0x0 = 0;
        /** @brief AHB1 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_AHB1RST_B_0x1 = 1;

    /** @brief AHB2 reset */
    using RCC_BUSRSTR_AHB2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AHB2 is under reset (value: 1)
     */
        /** @brief AHB2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_AHB2RST_B_0x0 = 0;
        /** @brief AHB2 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_AHB2RST_B_0x1 = 1;

    /** @brief AHB3 reset */
    using RCC_BUSRSTR_AHB3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB3 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AHB3 is under reset (value: 1)
     */
        /** @brief AHB3 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_AHB3RST_B_0x0 = 0;
        /** @brief AHB3 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_AHB3RST_B_0x1 = 1;

    /** @brief AHB4 reset */
    using RCC_BUSRSTR_AHB4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB4 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AHB4 is under reset (value: 1)
     */
        /** @brief AHB4 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_AHB4RST_B_0x0 = 0;
        /** @brief AHB4 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_AHB4RST_B_0x1 = 1;

    /** @brief AHB5 reset */
    using RCC_BUSRSTR_AHB5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB5 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AHB5 is under reset (value: 1)
     */
        /** @brief AHB5 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_AHB5RST_B_0x0 = 0;
        /** @brief AHB5 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_AHB5RST_B_0x1 = 1;

    /** @brief APB1 reset */
    using RCC_BUSRSTR_APB1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: APB1 is under reset (value: 1)
     */
        /** @brief APB1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_APB1RST_B_0x0 = 0;
        /** @brief APB1 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_APB1RST_B_0x1 = 1;

    /** @brief APB2 reset */
    using RCC_BUSRSTR_APB2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: APB2 is under reset (value: 1)
     */
        /** @brief APB2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_APB2RST_B_0x0 = 0;
        /** @brief APB2 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_APB2RST_B_0x1 = 1;

    /** @brief APB3 reset */
    using RCC_BUSRSTR_APB3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 is not under reset (default after reset) (value: 0)
     *          - B_0x1: APB3 is under reset (value: 1)
     */
        /** @brief APB3 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_APB3RST_B_0x0 = 0;
        /** @brief APB3 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_APB3RST_B_0x1 = 1;

    /** @brief APB4 reset */
    using RCC_BUSRSTR_APB4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB4 is not under reset (default after reset) (value: 0)
     *          - B_0x1: APB4 is under reset (value: 1)
     */
        /** @brief APB4 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_APB4RST_B_0x0 = 0;
        /** @brief APB4 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_APB4RST_B_0x1 = 1;

    /** @brief APB5 reset */
    using RCC_BUSRSTR_APB5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB5 is not under reset (default after reset) (value: 0)
     *          - B_0x1: APB5 is under reset (value: 1)
     */
        /** @brief APB5 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_APB5RST_B_0x0 = 0;
        /** @brief APB5 is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_APB5RST_B_0x1 = 1;

    /** @brief NOC reset */
    using RCC_BUSRSTR_NOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NOC is not under reset (default after reset) (value: 0)
     *          - B_0x1: NOC is under reset (value: 1)
     */
        /** @brief NOC is not under reset (default after reset) */
    constexpr std::uint32_t RCC_BUSRSTR_NOCRST_B_0x0 = 0;
        /** @brief NOC is under reset */
    constexpr std::uint32_t RCC_BUSRSTR_NOCRST_B_0x1 = 1;

    /** @brief RCC miscellaneous configurations reset register */
    using RCC_MISCRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG reset */
    using RCC_MISCRSTR_DBGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBG is not under reset (default after reset) (value: 0)
     *          - B_0x1: DBG is under reset (value: 1)
     */
        /** @brief DBG is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MISCRSTR_DBGRST_B_0x0 = 0;
        /** @brief DBG is under reset */
    constexpr std::uint32_t RCC_MISCRSTR_DBGRST_B_0x1 = 1;

    /** @brief XSPIPHY1 reset */
    using RCC_MISCRSTR_XSPIPHY1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIPHY1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: XSPIPHY1 is under reset (value: 1)
     */
        /** @brief XSPIPHY1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MISCRSTR_XSPIPHY1RST_B_0x0 = 0;
        /** @brief XSPIPHY1 is under reset */
    constexpr std::uint32_t RCC_MISCRSTR_XSPIPHY1RST_B_0x1 = 1;

    /** @brief XSPIPHY2 reset */
    using RCC_MISCRSTR_XSPIPHY2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIPHY2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: XSPIPHY2 is under reset (value: 1)
     */
        /** @brief XSPIPHY2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MISCRSTR_XSPIPHY2RST_B_0x0 = 0;
        /** @brief XSPIPHY2 is under reset */
    constexpr std::uint32_t RCC_MISCRSTR_XSPIPHY2RST_B_0x1 = 1;

    /** @brief SDMMC1DLL reset */
    using RCC_MISCRSTR_SDMMC1DLLRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1DLL is not under reset (default after reset) (value: 0)
     *          - B_0x1: SDMMC1DLL is under reset (value: 1)
     */
        /** @brief SDMMC1DLL is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MISCRSTR_SDMMC1DLLRST_B_0x0 = 0;
        /** @brief SDMMC1DLL is under reset */
    constexpr std::uint32_t RCC_MISCRSTR_SDMMC1DLLRST_B_0x1 = 1;

    /** @brief SDMMC2DLL reset */
    using RCC_MISCRSTR_SDMMC2DLLRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2DLL is not under reset (default after reset) (value: 0)
     *          - B_0x1: SDMMC2DLL is under reset (value: 1)
     */
        /** @brief SDMMC2DLL is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MISCRSTR_SDMMC2DLLRST_B_0x0 = 0;
        /** @brief SDMMC2DLL is under reset */
    constexpr std::uint32_t RCC_MISCRSTR_SDMMC2DLLRST_B_0x1 = 1;

    /** @brief RCC memories reset register */
    using RCC_MEMRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM3 reset */
    using RCC_MEMRSTR_AXISRAM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM3 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AXISRAM3 is under reset (value: 1)
     */
        /** @brief AXISRAM3 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM3RST_B_0x0 = 0;
        /** @brief AXISRAM3 is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM3RST_B_0x1 = 1;

    /** @brief AXISRAM4reset */
    using RCC_MEMRSTR_AXISRAM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM4 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AXISRAM4 is under reset (value: 1)
     */
        /** @brief AXISRAM4 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM4RST_B_0x0 = 0;
        /** @brief AXISRAM4 is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM4RST_B_0x1 = 1;

    /** @brief AXISRAM5 reset */
    using RCC_MEMRSTR_AXISRAM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM5 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AXISRAM5 is under reset (value: 1)
     */
        /** @brief AXISRAM5 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM5RST_B_0x0 = 0;
        /** @brief AXISRAM5 is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM5RST_B_0x1 = 1;

    /** @brief AXISRAM6 reset */
    using RCC_MEMRSTR_AXISRAM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM6 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AXISRAM6 is under reset (value: 1)
     */
        /** @brief AXISRAM6 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM6RST_B_0x0 = 0;
        /** @brief AXISRAM6 is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM6RST_B_0x1 = 1;

    /** @brief AHBSRAM1 reset */
    using RCC_MEMRSTR_AHBSRAM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AHBSRAM1 is under reset (value: 1)
     */
        /** @brief AHBSRAM1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_AHBSRAM1RST_B_0x0 = 0;
        /** @brief AHBSRAM1 is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_AHBSRAM1RST_B_0x1 = 1;

    /** @brief AHBSRAM2 reset */
    using RCC_MEMRSTR_AHBSRAM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AHBSRAM2 is under reset (value: 1)
     */
        /** @brief AHBSRAM2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_AHBSRAM2RST_B_0x0 = 0;
        /** @brief AHBSRAM2 is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_AHBSRAM2RST_B_0x1 = 1;

    /** @brief AXISRAM1 reset */
    using RCC_MEMRSTR_AXISRAM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AXISRAM1 is under reset (value: 1)
     */
        /** @brief AXISRAM1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM1RST_B_0x0 = 0;
        /** @brief AXISRAM1 is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM1RST_B_0x1 = 1;

    /** @brief AXISRAM2 reset */
    using RCC_MEMRSTR_AXISRAM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: AXISRAM2 is under reset (value: 1)
     */
        /** @brief AXISRAM2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM2RST_B_0x0 = 0;
        /** @brief AXISRAM2 is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_AXISRAM2RST_B_0x1 = 1;

    /** @brief FLEXRAM reset */
    using RCC_MEMRSTR_FLEXRAMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLEXRAM is not under reset (default after reset) (value: 0)
     *          - B_0x1: FLEXRAM is under reset (value: 1)
     */
        /** @brief FLEXRAM is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_FLEXRAMRST_B_0x0 = 0;
        /** @brief FLEXRAM is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_FLEXRAMRST_B_0x1 = 1;

    /** @brief NPUCACHERAM reset */
    using RCC_MEMRSTR_NPUCACHERAMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPUCACHERAM is not under reset (default after reset) (value: 0)
     *          - B_0x1: NPUCACHERAM is under reset (value: 1)
     */
        /** @brief NPUCACHERAM is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_NPUCACHERAMRST_B_0x0 = 0;
        /** @brief NPUCACHERAM is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_NPUCACHERAMRST_B_0x1 = 1;

    /** @brief VENCRAM reset */
    using RCC_MEMRSTR_VENCRAMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VENCRAM is not under reset (default after reset) (value: 0)
     *          - B_0x1: VENCRAM is under reset (value: 1)
     */
        /** @brief VENCRAM is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_VENCRAMRST_B_0x0 = 0;
        /** @brief VENCRAM is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_VENCRAMRST_B_0x1 = 1;

    /** @brief BOOTROM reset */
    using RCC_MEMRSTR_BOOTROMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOOTROM is not under reset (default after reset) (value: 0)
     *          - B_0x1: BOOTROM is under reset (value: 1)
     */
        /** @brief BOOTROM is not under reset (default after reset) */
    constexpr std::uint32_t RCC_MEMRSTR_BOOTROMRST_B_0x0 = 0;
        /** @brief BOOTROM is under reset */
    constexpr std::uint32_t RCC_MEMRSTR_BOOTROMRST_B_0x1 = 1;

    /** @brief RCC AHB1 Reset register */
    using RCC_AHB1RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 reset */
    using RCC_AHB1RSTR_GPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPDMA1 is under reset (value: 1)
     */
        /** @brief GPDMA1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x0 = 0;
        /** @brief GPDMA1 is under reset */
    constexpr std::uint32_t RCC_AHB1RSTR_GPDMA1RST_B_0x1 = 1;

    /** @brief ADC12 reset */
    using RCC_AHB1RSTR_ADC12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC12 is not under reset (default after reset) (value: 0)
     *          - B_0x1: ADC12 is under reset (value: 1)
     */
        /** @brief ADC12 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB1RSTR_ADC12RST_B_0x0 = 0;
        /** @brief ADC12 is under reset */
    constexpr std::uint32_t RCC_AHB1RSTR_ADC12RST_B_0x1 = 1;

    /** @brief RCC AHB2 reset register */
    using RCC_AHB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG reset */
    using RCC_AHB2RSTR_RAMCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG is not under reset (default after reset) (value: 0)
     *          - B_0x1: RAMCFG is under reset (value: 1)
     */
        /** @brief RAMCFG is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_RAMCFGRST_B_0x0 = 0;
        /** @brief RAMCFG is under reset */
    constexpr std::uint32_t RCC_AHB2RSTR_RAMCFGRST_B_0x1 = 1;

    /** @brief MDF1 reset */
    using RCC_AHB2RSTR_MDF1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: MDF1 is under reset (value: 1)
     */
        /** @brief MDF1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_MDF1RST_B_0x0 = 0;
        /** @brief MDF1 is under reset */
    constexpr std::uint32_t RCC_AHB2RSTR_MDF1RST_B_0x1 = 1;

    /** @brief ADF1 reset */
    using RCC_AHB2RSTR_ADF1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: ADF1 is under reset (value: 1)
     */
        /** @brief ADF1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB2RSTR_ADF1RST_B_0x0 = 0;
        /** @brief ADF1 is under reset */
    constexpr std::uint32_t RCC_AHB2RSTR_ADF1RST_B_0x1 = 1;

    /** @brief RCC AHB3 reset register */
    using RCC_AHB3RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG reset */
    using RCC_AHB3RSTR_RNGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG is not under reset (default after reset) (value: 0)
     *          - B_0x1: RNG is under reset (value: 1)
     */
        /** @brief RNG is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_RNGRST_B_0x0 = 0;
        /** @brief RNG is under reset */
    constexpr std::uint32_t RCC_AHB3RSTR_RNGRST_B_0x1 = 1;

    /** @brief HASH reset */
    using RCC_AHB3RSTR_HASHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH is not under reset (default after reset) (value: 0)
     *          - B_0x1: HASH is under reset (value: 1)
     */
        /** @brief HASH is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_HASHRST_B_0x0 = 0;
        /** @brief HASH is under reset */
    constexpr std::uint32_t RCC_AHB3RSTR_HASHRST_B_0x1 = 1;

    /** @brief CRYP reset */
    using RCC_AHB3RSTR_CRYPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRYP is not under reset (default after reset) (value: 0)
     *          - B_0x1: CRYP is under reset (value: 1)
     */
        /** @brief CRYP is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_CRYPRST_B_0x0 = 0;
        /** @brief CRYP is under reset */
    constexpr std::uint32_t RCC_AHB3RSTR_CRYPRST_B_0x1 = 1;

    /** @brief SAES reset */
    using RCC_AHB3RSTR_SAESRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES is not under reset (default after reset) (value: 0)
     *          - B_0x1: SAES is under reset (value: 1)
     */
        /** @brief SAES is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_SAESRST_B_0x0 = 0;
        /** @brief SAES is under reset */
    constexpr std::uint32_t RCC_AHB3RSTR_SAESRST_B_0x1 = 1;

    /** @brief PKA reset */
    using RCC_AHB3RSTR_PKARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA is not under reset (default after reset) (value: 0)
     *          - B_0x1: PKA is under reset (value: 1)
     */
        /** @brief PKA is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_PKARST_B_0x0 = 0;
        /** @brief PKA is under reset */
    constexpr std::uint32_t RCC_AHB3RSTR_PKARST_B_0x1 = 1;

    /** @brief IAC reset */
    using RCC_AHB3RSTR_IACRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAC is not under reset (default after reset) (value: 0)
     *          - B_0x1: IAC is under reset (value: 1)
     */
        /** @brief IAC is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB3RSTR_IACRST_B_0x0 = 0;
        /** @brief IAC is under reset */
    constexpr std::uint32_t RCC_AHB3RSTR_IACRST_B_0x1 = 1;

    /** @brief RCC AHB4 reset register */
    using RCC_AHB4RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA reset */
    using RCC_AHB4RSTR_GPIOARST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOA is under reset (value: 1)
     */
        /** @brief GPIOA is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOARST_B_0x0 = 0;
        /** @brief GPIOA is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOARST_B_0x1 = 1;

    /** @brief GPIOB reset */
    using RCC_AHB4RSTR_GPIOBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOB is under reset (value: 1)
     */
        /** @brief GPIOB is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOBRST_B_0x0 = 0;
        /** @brief GPIOB is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOBRST_B_0x1 = 1;

    /** @brief GPIOC reset */
    using RCC_AHB4RSTR_GPIOCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOC is under reset (value: 1)
     */
        /** @brief GPIOC is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOCRST_B_0x0 = 0;
        /** @brief GPIOC is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOCRST_B_0x1 = 1;

    /** @brief GPIOD reset */
    using RCC_AHB4RSTR_GPIODRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOD is under reset (value: 1)
     */
        /** @brief GPIOD is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIODRST_B_0x0 = 0;
        /** @brief GPIOD is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIODRST_B_0x1 = 1;

    /** @brief GPIOE reset */
    using RCC_AHB4RSTR_GPIOERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOE is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOE is under reset (value: 1)
     */
        /** @brief GPIOE is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOERST_B_0x0 = 0;
        /** @brief GPIOE is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOERST_B_0x1 = 1;

    /** @brief GPIOF reset */
    using RCC_AHB4RSTR_GPIOFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOF is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOF is under reset (value: 1)
     */
        /** @brief GPIOF is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOFRST_B_0x0 = 0;
        /** @brief GPIOF is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOFRST_B_0x1 = 1;

    /** @brief GPIOG reset */
    using RCC_AHB4RSTR_GPIOGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOG is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOG is under reset (value: 1)
     */
        /** @brief GPIOG is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOGRST_B_0x0 = 0;
        /** @brief GPIOG is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOGRST_B_0x1 = 1;

    /** @brief GPIOH reset */
    using RCC_AHB4RSTR_GPIOHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOH is under reset (value: 1)
     */
        /** @brief GPIOH is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOHRST_B_0x0 = 0;
        /** @brief GPIOH is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOHRST_B_0x1 = 1;

    /** @brief GPION reset */
    using RCC_AHB4RSTR_GPIONRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPION is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPION is under reset (value: 1)
     */
        /** @brief GPION is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIONRST_B_0x0 = 0;
        /** @brief GPION is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIONRST_B_0x1 = 1;

    /** @brief GPIOO reset */
    using RCC_AHB4RSTR_GPIOORST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOO is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOO is under reset (value: 1)
     */
        /** @brief GPIOO is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOORST_B_0x0 = 0;
        /** @brief GPIOO is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOORST_B_0x1 = 1;

    /** @brief GPIOP reset */
    using RCC_AHB4RSTR_GPIOPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOP is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOP is under reset (value: 1)
     */
        /** @brief GPIOP is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOPRST_B_0x0 = 0;
        /** @brief GPIOP is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOPRST_B_0x1 = 1;

    /** @brief GPIOQ reset */
    using RCC_AHB4RSTR_GPIOQRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOQ is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPIOQ is under reset (value: 1)
     */
        /** @brief GPIOQ is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOQRST_B_0x0 = 0;
        /** @brief GPIOQ is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_GPIOQRST_B_0x1 = 1;

    /** @brief PWR reset */
    using RCC_AHB4RSTR_PWRRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR is not under reset (default after reset) (value: 0)
     *          - B_0x1: PWR is under reset (value: 1)
     */
        /** @brief PWR is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_PWRRST_B_0x0 = 0;
        /** @brief PWR is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_PWRRST_B_0x1 = 1;

    /** @brief CRC reset */
    using RCC_AHB4RSTR_CRCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC is not under reset (default after reset) (value: 0)
     *          - B_0x1: CRC is under reset (value: 1)
     */
        /** @brief CRC is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB4RSTR_CRCRST_B_0x0 = 0;
        /** @brief CRC is under reset */
    constexpr std::uint32_t RCC_AHB4RSTR_CRCRST_B_0x1 = 1;

    /** @brief RCC AHB5 reset register */
    using RCC_AHB5RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 reset */
    using RCC_AHB5RSTR_HPDMA1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPDMA1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: HPDMA1 is under reset (value: 1)
     */
        /** @brief HPDMA1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_HPDMA1RST_B_0x0 = 0;
        /** @brief HPDMA1 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_HPDMA1RST_B_0x1 = 1;

    /** @brief DMA2D reset */
    using RCC_AHB5RSTR_DMA2DRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D is not under reset (default after reset) (value: 0)
     *          - B_0x1: DMA2D is under reset (value: 1)
     */
        /** @brief DMA2D is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_DMA2DRST_B_0x0 = 0;
        /** @brief DMA2D is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_DMA2DRST_B_0x1 = 1;

    /** @brief JPEG reset */
    using RCC_AHB5RSTR_JPEGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JPEG is not under reset (default after reset) (value: 0)
     *          - B_0x1: JPEG is under reset (value: 1)
     */
        /** @brief JPEG is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_JPEGRST_B_0x0 = 0;
        /** @brief JPEG is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_JPEGRST_B_0x1 = 1;

    /** @brief FMC reset */
    using RCC_AHB5RSTR_FMCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC is not under reset (default after reset) (value: 0)
     *          - B_0x1: FMC is under reset (value: 1)
     */
        /** @brief FMC is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_FMCRST_B_0x0 = 0;
        /** @brief FMC is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_FMCRST_B_0x1 = 1;

    /** @brief XSPI1 reset */
    using RCC_AHB5RSTR_XSPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: XSPI1 is under reset (value: 1)
     */
        /** @brief XSPI1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI1RST_B_0x0 = 0;
        /** @brief XSPI1 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI1RST_B_0x1 = 1;

    /** @brief PSSI reset */
    using RCC_AHB5RSTR_PSSIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PSSI is not under reset (default after reset) (value: 0)
     *          - B_0x1: PSSI is under reset (value: 1)
     */
        /** @brief PSSI is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_PSSIRST_B_0x0 = 0;
        /** @brief PSSI is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_PSSIRST_B_0x1 = 1;

    /** @brief SDMMC2 reset */
    using RCC_AHB5RSTR_SDMMC2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SDMMC2 is under reset (value: 1)
     */
        /** @brief SDMMC2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_SDMMC2RST_B_0x0 = 0;
        /** @brief SDMMC2 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_SDMMC2RST_B_0x1 = 1;

    /** @brief SDMMC1 reset */
    using RCC_AHB5RSTR_SDMMC1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SDMMC1 is under reset (value: 1)
     */
        /** @brief SDMMC1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_SDMMC1RST_B_0x0 = 0;
        /** @brief SDMMC1 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_SDMMC1RST_B_0x1 = 1;

    /** @brief XSPI2 reset */
    using RCC_AHB5RSTR_XSPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: XSPI2 is under reset (value: 1)
     */
        /** @brief XSPI2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI2RST_B_0x0 = 0;
        /** @brief XSPI2 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI2RST_B_0x1 = 1;

    /** @brief XSPIM reset */
    using RCC_AHB5RSTR_XSPIMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIM is not under reset (default after reset) (value: 0)
     *          - B_0x1: XSPIM is under reset (value: 1)
     */
        /** @brief XSPIM is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPIMRST_B_0x0 = 0;
        /** @brief XSPIM is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPIMRST_B_0x1 = 1;

    /** @brief XSPI3 reset */
    using RCC_AHB5RSTR_XSPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI3 is not under reset (default after reset) (value: 0)
     *          - B_0x1: XSPI3 is under reset (value: 1)
     */
        /** @brief XSPI3 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI3RST_B_0x0 = 0;
        /** @brief XSPI3 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_XSPI3RST_B_0x1 = 1;

    /** @brief MCE4 reset */
    using RCC_AHB5RSTR_MCE4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE4 is not under reset (default after reset) (value: 0)
     *          - B_0x1: MCE4 is under reset (value: 1)
     */
        /** @brief MCE4 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_MCE4RST_B_0x0 = 0;
        /** @brief MCE4 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_MCE4RST_B_0x1 = 1;

    /** @brief GFXMMU reset */
    using RCC_AHB5RSTR_GFXMMURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU is not under reset (default after reset) (value: 0)
     *          - B_0x1: GFXMMU is under reset (value: 1)
     */
        /** @brief GFXMMU is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_GFXMMURST_B_0x0 = 0;
        /** @brief GFXMMU is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_GFXMMURST_B_0x1 = 1;

    /** @brief GPU reset */
    using RCC_AHB5RSTR_GPURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPU is not under reset (default after reset) (value: 0)
     *          - B_0x1: GPU is under reset (value: 1)
     */
        /** @brief GPU is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_GPURST_B_0x0 = 0;
        /** @brief GPU is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_GPURST_B_0x1 = 1;

    /** @brief SYSCFGOTGHSPHY1 reset */
    using RCC_AHB5RSTR_SYSCFGOTGHSPHY1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFGOTGHSPHY1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SYSCFGOTGHSPHY1 is under reset (value: 1)
     */
        /** @brief SYSCFGOTGHSPHY1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_SYSCFGOTGHSPHY1RST_B_0x0 = 0;
        /** @brief SYSCFGOTGHSPHY1 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_SYSCFGOTGHSPHY1RST_B_0x1 = 1;

    /** @brief SYSCFGOTGHSPHY2 reset */
    using RCC_AHB5RSTR_SYSCFGOTGHSPHY2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFGOTGHSPHY2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SYSCFGOTGHSPHY2 is under reset (value: 1)
     */
        /** @brief SYSCFGOTGHSPHY2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_SYSCFGOTGHSPHY2RST_B_0x0 = 0;
        /** @brief SYSCFGOTGHSPHY2 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_SYSCFGOTGHSPHY2RST_B_0x1 = 1;

    /** @brief ETH1 reset */
    using RCC_AHB5RSTR_ETH1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: ETH1 is under reset (value: 1)
     */
        /** @brief ETH1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_ETH1RST_B_0x0 = 0;
        /** @brief ETH1 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_ETH1RST_B_0x1 = 1;

    /** @brief OTG1 reset */
    using RCC_AHB5RSTR_OTG1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: OTG1 is under reset (value: 1)
     */
        /** @brief OTG1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_OTG1RST_B_0x0 = 0;
        /** @brief OTG1 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_OTG1RST_B_0x1 = 1;

    /** @brief OTGPHY1 reset */
    using RCC_AHB5RSTR_OTGPHY1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGPHY1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: OTGPHY1 is under reset (value: 1)
     */
        /** @brief OTGPHY1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_OTGPHY1RST_B_0x0 = 0;
        /** @brief OTGPHY1 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_OTGPHY1RST_B_0x1 = 1;

    /** @brief OTGPHY2 reset */
    using RCC_AHB5RSTR_OTGPHY2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGPHY2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: OTGPHY2 is under reset (value: 1)
     */
        /** @brief OTGPHY2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_OTGPHY2RST_B_0x0 = 0;
        /** @brief OTGPHY2 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_OTGPHY2RST_B_0x1 = 1;

    /** @brief OTG2 reset */
    using RCC_AHB5RSTR_OTG2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: OTG2 is under reset (value: 1)
     */
        /** @brief OTG2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_OTG2RST_B_0x0 = 0;
        /** @brief OTG2 is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_OTG2RST_B_0x1 = 1;

    /** @brief NPUCACHE reset */
    using RCC_AHB5RSTR_NPUCACHERST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPUCACHE is not under reset (default after reset) (value: 0)
     *          - B_0x1: NPUCACHE is under reset (value: 1)
     */
        /** @brief NPUCACHE is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_NPUCACHERST_B_0x0 = 0;
        /** @brief NPUCACHE is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_NPUCACHERST_B_0x1 = 1;

    /** @brief NPU reset */
    using RCC_AHB5RSTR_NPURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPU is not under reset (default after reset) (value: 0)
     *          - B_0x1: NPU is under reset (value: 1)
     */
        /** @brief NPU is not under reset (default after reset) */
    constexpr std::uint32_t RCC_AHB5RSTR_NPURST_B_0x0 = 0;
        /** @brief NPU is under reset */
    constexpr std::uint32_t RCC_AHB5RSTR_NPURST_B_0x1 = 1;

    /** @brief RCC APB1L reset register */
    using RCC_APB1LRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 reset */
    using RCC_APB1LRSTR_TIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM2 is under reset (value: 1)
     */
        /** @brief TIM2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM2RST_B_0x0 = 0;
        /** @brief TIM2 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM2RST_B_0x1 = 1;

    /** @brief TIM3 reset */
    using RCC_APB1LRSTR_TIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM3 is under reset (value: 1)
     */
        /** @brief TIM3 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM3RST_B_0x0 = 0;
        /** @brief TIM3 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM3RST_B_0x1 = 1;

    /** @brief TIM4 reset */
    using RCC_APB1LRSTR_TIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM4 is under reset (value: 1)
     */
        /** @brief TIM4 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM4RST_B_0x0 = 0;
        /** @brief TIM4 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM4RST_B_0x1 = 1;

    /** @brief TIM5 reset */
    using RCC_APB1LRSTR_TIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM5 is under reset (value: 1)
     */
        /** @brief TIM5 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM5RST_B_0x0 = 0;
        /** @brief TIM5 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM5RST_B_0x1 = 1;

    /** @brief TIM6 reset */
    using RCC_APB1LRSTR_TIM6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM6 is under reset (value: 1)
     */
        /** @brief TIM6 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM6RST_B_0x0 = 0;
        /** @brief TIM6 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM6RST_B_0x1 = 1;

    /** @brief TIM7 reset */
    using RCC_APB1LRSTR_TIM7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM7 is under reset (value: 1)
     */
        /** @brief TIM7 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM7RST_B_0x0 = 0;
        /** @brief TIM7 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM7RST_B_0x1 = 1;

    /** @brief TIM12 reset */
    using RCC_APB1LRSTR_TIM12RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM12 is under reset (value: 1)
     */
        /** @brief TIM12 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM12RST_B_0x0 = 0;
        /** @brief TIM12 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM12RST_B_0x1 = 1;

    /** @brief TIM13 reset */
    using RCC_APB1LRSTR_TIM13RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM13 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM13 is under reset (value: 1)
     */
        /** @brief TIM13 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM13RST_B_0x0 = 0;
        /** @brief TIM13 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM13RST_B_0x1 = 1;

    /** @brief TIM14 reset */
    using RCC_APB1LRSTR_TIM14RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM14 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM14 is under reset (value: 1)
     */
        /** @brief TIM14 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM14RST_B_0x0 = 0;
        /** @brief TIM14 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM14RST_B_0x1 = 1;

    /** @brief LPTIM1 reset */
    using RCC_APB1LRSTR_LPTIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: LPTIM1 is under reset (value: 1)
     */
        /** @brief LPTIM1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_LPTIM1RST_B_0x0 = 0;
        /** @brief LPTIM1 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_LPTIM1RST_B_0x1 = 1;

    /** @brief WWDG reset */
    using RCC_APB1LRSTR_WWDGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG is not under reset (default after reset) (value: 0)
     *          - B_0x1: WWDG is under reset (value: 1)
     */
        /** @brief WWDG is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_WWDGRST_B_0x0 = 0;
        /** @brief WWDG is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_WWDGRST_B_0x1 = 1;

    /** @brief TIM10 reset */
    using RCC_APB1LRSTR_TIM10RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM10 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM10 is under reset (value: 1)
     */
        /** @brief TIM10 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM10RST_B_0x0 = 0;
        /** @brief TIM10 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM10RST_B_0x1 = 1;

    /** @brief TIM11 reset */
    using RCC_APB1LRSTR_TIM11RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM11 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM11 is under reset (value: 1)
     */
        /** @brief TIM11 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM11RST_B_0x0 = 0;
        /** @brief TIM11 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_TIM11RST_B_0x1 = 1;

    /** @brief SPI2 reset */
    using RCC_APB1LRSTR_SPI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SPI2 is under reset (value: 1)
     */
        /** @brief SPI2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI2RST_B_0x0 = 0;
        /** @brief SPI2 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI2RST_B_0x1 = 1;

    /** @brief SPI3 reset */
    using RCC_APB1LRSTR_SPI3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SPI3 is under reset (value: 1)
     */
        /** @brief SPI3 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI3RST_B_0x0 = 0;
        /** @brief SPI3 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_SPI3RST_B_0x1 = 1;

    /** @brief SPDIFRX1 reset */
    using RCC_APB1LRSTR_SPDIFRX1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPDIFRX1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SPDIFRX1 is under reset (value: 1)
     */
        /** @brief SPDIFRX1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_SPDIFRX1RST_B_0x0 = 0;
        /** @brief SPDIFRX1 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_SPDIFRX1RST_B_0x1 = 1;

    /** @brief USART2 reset */
    using RCC_APB1LRSTR_USART2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: USART2 is under reset (value: 1)
     */
        /** @brief USART2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_USART2RST_B_0x0 = 0;
        /** @brief USART2 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_USART2RST_B_0x1 = 1;

    /** @brief USART3 reset */
    using RCC_APB1LRSTR_USART3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 is not under reset (default after reset) (value: 0)
     *          - B_0x1: USART3 is under reset (value: 1)
     */
        /** @brief USART3 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_USART3RST_B_0x0 = 0;
        /** @brief USART3 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_USART3RST_B_0x1 = 1;

    /** @brief UART4 reset */
    using RCC_APB1LRSTR_UART4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 is not under reset (default after reset) (value: 0)
     *          - B_0x1: UART4 is under reset (value: 1)
     */
        /** @brief UART4 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART4RST_B_0x0 = 0;
        /** @brief UART4 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_UART4RST_B_0x1 = 1;

    /** @brief UART5 reset */
    using RCC_APB1LRSTR_UART5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 is not under reset (default after reset) (value: 0)
     *          - B_0x1: UART5 is under reset (value: 1)
     */
        /** @brief UART5 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART5RST_B_0x0 = 0;
        /** @brief UART5 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_UART5RST_B_0x1 = 1;

    /** @brief I2C1 reset */
    using RCC_APB1LRSTR_I2C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: I2C1 is under reset (value: 1)
     */
        /** @brief I2C1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C1RST_B_0x0 = 0;
        /** @brief I2C1 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C1RST_B_0x1 = 1;

    /** @brief I2C2 reset */
    using RCC_APB1LRSTR_I2C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: I2C2 is under reset (value: 1)
     */
        /** @brief I2C2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C2RST_B_0x0 = 0;
        /** @brief I2C2 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C2RST_B_0x1 = 1;

    /** @brief I2C3 reset */
    using RCC_APB1LRSTR_I2C3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 is not under reset (default after reset) (value: 0)
     *          - B_0x1: I2C3 is under reset (value: 1)
     */
        /** @brief I2C3 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C3RST_B_0x0 = 0;
        /** @brief I2C3 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_I2C3RST_B_0x1 = 1;

    /** @brief I3C1 reset */
    using RCC_APB1LRSTR_I3C1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: I3C1 is under reset (value: 1)
     */
        /** @brief I3C1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I3C1RST_B_0x0 = 0;
        /** @brief I3C1 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_I3C1RST_B_0x1 = 1;

    /** @brief I3C2 reset */
    using RCC_APB1LRSTR_I3C2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: I3C2 is under reset (value: 1)
     */
        /** @brief I3C2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_I3C2RST_B_0x0 = 0;
        /** @brief I3C2 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_I3C2RST_B_0x1 = 1;

    /** @brief UART7 reset */
    using RCC_APB1LRSTR_UART7RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART7 is not under reset (default after reset) (value: 0)
     *          - B_0x1: UART7 is under reset (value: 1)
     */
        /** @brief UART7 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART7RST_B_0x0 = 0;
        /** @brief UART7 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_UART7RST_B_0x1 = 1;

    /** @brief UART8 reset */
    using RCC_APB1LRSTR_UART8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART8 is not under reset (default after reset) (value: 0)
     *          - B_0x1: UART8 is under reset (value: 1)
     */
        /** @brief UART8 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1LRSTR_UART8RST_B_0x0 = 0;
        /** @brief UART8 is under reset */
    constexpr std::uint32_t RCC_APB1LRSTR_UART8RST_B_0x1 = 1;

    /** @brief RCC APB1H reset register */
    using RCC_APB1HRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS reset */
    using RCC_APB1HRSTR_MDIOSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS is not under reset (default after reset) (value: 0)
     *          - B_0x1: MDIOS is under reset (value: 1)
     */
        /** @brief MDIOS is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_MDIOSRST_B_0x0 = 0;
        /** @brief MDIOS is under reset */
    constexpr std::uint32_t RCC_APB1HRSTR_MDIOSRST_B_0x1 = 1;

    /** @brief FDCAN reset */
    using RCC_APB1HRSTR_FDCANRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN is not under reset (default after reset) (value: 0)
     *          - B_0x1: FDCAN is under reset (value: 1)
     */
        /** @brief FDCAN is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_FDCANRST_B_0x0 = 0;
        /** @brief FDCAN is under reset */
    constexpr std::uint32_t RCC_APB1HRSTR_FDCANRST_B_0x1 = 1;

    /** @brief UCPD1 reset */
    using RCC_APB1HRSTR_UCPD1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: UCPD1 is under reset (value: 1)
     */
        /** @brief UCPD1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB1HRSTR_UCPD1RST_B_0x0 = 0;
        /** @brief UCPD1 is under reset */
    constexpr std::uint32_t RCC_APB1HRSTR_UCPD1RST_B_0x1 = 1;

    /** @brief RCC APB2 reset register */
    using RCC_APB2RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 reset */
    using RCC_APB2RSTR_TIM1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM1 is under reset (value: 1)
     */
        /** @brief TIM1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x0 = 0;
        /** @brief TIM1 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_TIM1RST_B_0x1 = 1;

    /** @brief TIM8 reset */
    using RCC_APB2RSTR_TIM8RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM8 is under reset (value: 1)
     */
        /** @brief TIM8 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x0 = 0;
        /** @brief TIM8 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_TIM8RST_B_0x1 = 1;

    /** @brief USART1 reset */
    using RCC_APB2RSTR_USART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: USART1 is under reset (value: 1)
     */
        /** @brief USART1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x0 = 0;
        /** @brief USART1 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_USART1RST_B_0x1 = 1;

    /** @brief USART6 reset */
    using RCC_APB2RSTR_USART6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 is not under reset (default after reset) (value: 0)
     *          - B_0x1: USART6 is under reset (value: 1)
     */
        /** @brief USART6 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USART6RST_B_0x0 = 0;
        /** @brief USART6 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_USART6RST_B_0x1 = 1;

    /** @brief UART9 reset */
    using RCC_APB2RSTR_UART9RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART9 is not under reset (default after reset) (value: 0)
     *          - B_0x1: UART9 is under reset (value: 1)
     */
        /** @brief UART9 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_UART9RST_B_0x0 = 0;
        /** @brief UART9 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_UART9RST_B_0x1 = 1;

    /** @brief USART10 reset */
    using RCC_APB2RSTR_USART10RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART10 is not under reset (default after reset) (value: 0)
     *          - B_0x1: USART10 is under reset (value: 1)
     */
        /** @brief USART10 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_USART10RST_B_0x0 = 0;
        /** @brief USART10 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_USART10RST_B_0x1 = 1;

    /** @brief SPI1 reset */
    using RCC_APB2RSTR_SPI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SPI1 is under reset (value: 1)
     */
        /** @brief SPI1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x0 = 0;
        /** @brief SPI1 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_SPI1RST_B_0x1 = 1;

    /** @brief SPI4 reset */
    using RCC_APB2RSTR_SPI4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SPI4 is under reset (value: 1)
     */
        /** @brief SPI4 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x0 = 0;
        /** @brief SPI4 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_SPI4RST_B_0x1 = 1;

    /** @brief TIM18 reset */
    using RCC_APB2RSTR_TIM18RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM18 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM18 is under reset (value: 1)
     */
        /** @brief TIM18 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM18RST_B_0x0 = 0;
        /** @brief TIM18 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_TIM18RST_B_0x1 = 1;

    /** @brief TIM15 reset */
    using RCC_APB2RSTR_TIM15RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM15 is under reset (value: 1)
     */
        /** @brief TIM15 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x0 = 0;
        /** @brief TIM15 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_TIM15RST_B_0x1 = 1;

    /** @brief TIM16 reset */
    using RCC_APB2RSTR_TIM16RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM16 is under reset (value: 1)
     */
        /** @brief TIM16 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x0 = 0;
        /** @brief TIM16 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_TIM16RST_B_0x1 = 1;

    /** @brief TIM17 reset */
    using RCC_APB2RSTR_TIM17RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM17 is under reset (value: 1)
     */
        /** @brief TIM17 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x0 = 0;
        /** @brief TIM17 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_TIM17RST_B_0x1 = 1;

    /** @brief TIM9 reset */
    using RCC_APB2RSTR_TIM9RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM9 is not under reset (default after reset) (value: 0)
     *          - B_0x1: TIM9 is under reset (value: 1)
     */
        /** @brief TIM9 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_TIM9RST_B_0x0 = 0;
        /** @brief TIM9 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_TIM9RST_B_0x1 = 1;

    /** @brief SPI5 reset */
    using RCC_APB2RSTR_SPI5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI5 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SPI5 is under reset (value: 1)
     */
        /** @brief SPI5 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SPI5RST_B_0x0 = 0;
        /** @brief SPI5 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_SPI5RST_B_0x1 = 1;

    /** @brief SAI1 reset */
    using RCC_APB2RSTR_SAI1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SAI1 is under reset (value: 1)
     */
        /** @brief SAI1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x0 = 0;
        /** @brief SAI1 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_SAI1RST_B_0x1 = 1;

    /** @brief SAI2 reset */
    using RCC_APB2RSTR_SAI2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SAI2 is under reset (value: 1)
     */
        /** @brief SAI2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x0 = 0;
        /** @brief SAI2 is under reset */
    constexpr std::uint32_t RCC_APB2RSTR_SAI2RST_B_0x1 = 1;

    /** @brief RCC APB4L reset register */
    using RCC_APB4LRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP reset */
    using RCC_APB4LRSTR_HDPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDP is not under reset (default after reset) (value: 0)
     *          - B_0x1: HDP is under reset (value: 1)
     */
        /** @brief HDP is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_HDPRST_B_0x0 = 0;
        /** @brief HDP is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_HDPRST_B_0x1 = 1;

    /** @brief LPUART1 reset */
    using RCC_APB4LRSTR_LPUART1RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 is not under reset (default after reset) (value: 0)
     *          - B_0x1: LPUART1 is under reset (value: 1)
     */
        /** @brief LPUART1 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_LPUART1RST_B_0x0 = 0;
        /** @brief LPUART1 is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_LPUART1RST_B_0x1 = 1;

    /** @brief SPI6 reset */
    using RCC_APB4LRSTR_SPI6RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI6 is not under reset (default after reset) (value: 0)
     *          - B_0x1: SPI6 is under reset (value: 1)
     */
        /** @brief SPI6 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_SPI6RST_B_0x0 = 0;
        /** @brief SPI6 is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_SPI6RST_B_0x1 = 1;

    /** @brief I2C4 reset */
    using RCC_APB4LRSTR_I2C4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 is not under reset (default after reset) (value: 0)
     *          - B_0x1: I2C4 is under reset (value: 1)
     */
        /** @brief I2C4 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_I2C4RST_B_0x0 = 0;
        /** @brief I2C4 is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_I2C4RST_B_0x1 = 1;

    /** @brief LPTIM2 reset */
    using RCC_APB4LRSTR_LPTIM2RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 is not under reset (default after reset) (value: 0)
     *          - B_0x1: LPTIM2 is under reset (value: 1)
     */
        /** @brief LPTIM2 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_LPTIM2RST_B_0x0 = 0;
        /** @brief LPTIM2 is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_LPTIM2RST_B_0x1 = 1;

    /** @brief LPTIM3 reset */
    using RCC_APB4LRSTR_LPTIM3RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 is not under reset (default after reset) (value: 0)
     *          - B_0x1: LPTIM3 is under reset (value: 1)
     */
        /** @brief LPTIM3 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_LPTIM3RST_B_0x0 = 0;
        /** @brief LPTIM3 is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_LPTIM3RST_B_0x1 = 1;

    /** @brief LPTIM4 reset */
    using RCC_APB4LRSTR_LPTIM4RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 is not under reset (default after reset) (value: 0)
     *          - B_0x1: LPTIM4 is under reset (value: 1)
     */
        /** @brief LPTIM4 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_LPTIM4RST_B_0x0 = 0;
        /** @brief LPTIM4 is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_LPTIM4RST_B_0x1 = 1;

    /** @brief LPTIM5 reset */
    using RCC_APB4LRSTR_LPTIM5RST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM5 is not under reset (default after reset) (value: 0)
     *          - B_0x1: LPTIM5 is under reset (value: 1)
     */
        /** @brief LPTIM5 is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_LPTIM5RST_B_0x0 = 0;
        /** @brief LPTIM5 is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_LPTIM5RST_B_0x1 = 1;

    /** @brief VREFBUF reset */
    using RCC_APB4LRSTR_VREFBUFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF is not under reset (default after reset) (value: 0)
     *          - B_0x1: VREFBUF is under reset (value: 1)
     */
        /** @brief VREFBUF is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_VREFBUFRST_B_0x0 = 0;
        /** @brief VREFBUF is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_VREFBUFRST_B_0x1 = 1;

    /** @brief RTC reset */
    using RCC_APB4LRSTR_RTCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC is not under reset (default after reset) (value: 0)
     *          - B_0x1: RTC is under reset (value: 1)
     */
        /** @brief RTC is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_RTCRST_B_0x0 = 0;
        /** @brief RTC is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_RTCRST_B_0x1 = 1;

    /** @brief R2GRET reset */
    using RCC_APB4LRSTR_R2GRETRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: R2GRET is not under reset (default after reset) (value: 0)
     *          - B_0x1: R2GRET is under reset (value: 1)
     */
        /** @brief R2GRET is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_R2GRETRST_B_0x0 = 0;
        /** @brief R2GRET is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_R2GRETRST_B_0x1 = 1;

    /** @brief R2GNPU reset */
    using RCC_APB4LRSTR_R2GNPURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: R2GNPU is not under reset (default after reset) (value: 0)
     *          - B_0x1: R2GNPU is under reset (value: 1)
     */
        /** @brief R2GNPU is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_R2GNPURST_B_0x0 = 0;
        /** @brief R2GNPU is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_R2GNPURST_B_0x1 = 1;

    /** @brief SERF reset */
    using RCC_APB4LRSTR_SERFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SERF is not under reset (default after reset) (value: 0)
     *          - B_0x1: SERF is under reset (value: 1)
     */
        /** @brief SERF is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4LRSTR_SERFRST_B_0x0 = 0;
        /** @brief SERF is under reset */
    constexpr std::uint32_t RCC_APB4LRSTR_SERFRST_B_0x1 = 1;

    /** @brief RCC APB4H reset register */
    using RCC_APB4HRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG reset */
    using RCC_APB4HRSTR_SYSCFGRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG is not under reset (default after reset) (value: 0)
     *          - B_0x1: SYSCFG is under reset (value: 1)
     */
        /** @brief SYSCFG is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4HRSTR_SYSCFGRST_B_0x0 = 0;
        /** @brief SYSCFG is under reset */
    constexpr std::uint32_t RCC_APB4HRSTR_SYSCFGRST_B_0x1 = 1;

    /** @brief DTS reset */
    using RCC_APB4HRSTR_DTSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS is not under reset (default after reset) (value: 0)
     *          - B_0x1: DTS is under reset (value: 1)
     */
        /** @brief DTS is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4HRSTR_DTSRST_B_0x0 = 0;
        /** @brief DTS is under reset */
    constexpr std::uint32_t RCC_APB4HRSTR_DTSRST_B_0x1 = 1;

    /** @brief BUSPERFM reset */
    using RCC_APB4HRSTR_BUSPERFMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSPERFM is not under reset (default after reset) (value: 0)
     *          - B_0x1: BUSPERFM is under reset (value: 1)
     */
        /** @brief BUSPERFM is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB4HRSTR_BUSPERFMRST_B_0x0 = 0;
        /** @brief BUSPERFM is under reset */
    constexpr std::uint32_t RCC_APB4HRSTR_BUSPERFMRST_B_0x1 = 1;

    /** @brief RCC APB5 reset register */
    using RCC_APB5RSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC reset */
    using RCC_APB5RSTR_LTDCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC is not under reset (default after reset) (value: 0)
     *          - B_0x1: LTDC is under reset (value: 1)
     */
        /** @brief LTDC is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB5RSTR_LTDCRST_B_0x0 = 0;
        /** @brief LTDC is under reset */
    constexpr std::uint32_t RCC_APB5RSTR_LTDCRST_B_0x1 = 1;

    /** @brief DCMIPP reset */
    using RCC_APB5RSTR_DCMIPPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMIPP is not under reset (default after reset) (value: 0)
     *          - B_0x1: DCMIPP is under reset (value: 1)
     */
        /** @brief DCMIPP is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB5RSTR_DCMIPPRST_B_0x0 = 0;
        /** @brief DCMIPP is under reset */
    constexpr std::uint32_t RCC_APB5RSTR_DCMIPPRST_B_0x1 = 1;

    /** @brief GFXTIM reset */
    using RCC_APB5RSTR_GFXTIMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXTIM is not under reset (default after reset) (value: 0)
     *          - B_0x1: GFXTIM is under reset (value: 1)
     */
        /** @brief GFXTIM is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB5RSTR_GFXTIMRST_B_0x0 = 0;
        /** @brief GFXTIM is under reset */
    constexpr std::uint32_t RCC_APB5RSTR_GFXTIMRST_B_0x1 = 1;

    /** @brief VENC reset */
    using RCC_APB5RSTR_VENCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VENC is not under reset (default after reset) (value: 0)
     *          - B_0x1: VENC is under reset (value: 1)
     */
        /** @brief VENC is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB5RSTR_VENCRST_B_0x0 = 0;
        /** @brief VENC is under reset */
    constexpr std::uint32_t RCC_APB5RSTR_VENCRST_B_0x1 = 1;

    /** @brief CSI reset */
    using RCC_APB5RSTR_CSIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI is not under reset (default after reset) (value: 0)
     *          - B_0x1: CSI is under reset (value: 1)
     */
        /** @brief CSI is not under reset (default after reset) */
    constexpr std::uint32_t RCC_APB5RSTR_CSIRST_B_0x0 = 0;
        /** @brief CSI is under reset */
    constexpr std::uint32_t RCC_APB5RSTR_CSIRST_B_0x1 = 1;

    /** @brief RCC IC dividers enable register */
    using RCC_DIVENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC1 enable */
    using RCC_DIVENR_IC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC1 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC1 is enabled (value: 1)
     */
        /** @brief IC1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC1EN_B_0x0 = 0;
        /** @brief IC1 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC1EN_B_0x1 = 1;

    /** @brief IC2 enable */
    using RCC_DIVENR_IC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC2 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC2 is enabled (value: 1)
     */
        /** @brief IC2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC2EN_B_0x0 = 0;
        /** @brief IC2 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC2EN_B_0x1 = 1;

    /** @brief IC3 enable */
    using RCC_DIVENR_IC3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC3 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC3 is enabled (value: 1)
     */
        /** @brief IC3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC3EN_B_0x0 = 0;
        /** @brief IC3 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC3EN_B_0x1 = 1;

    /** @brief IC4 enable */
    using RCC_DIVENR_IC4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC4 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC4 is enabled (value: 1)
     */
        /** @brief IC4 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC4EN_B_0x0 = 0;
        /** @brief IC4 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC4EN_B_0x1 = 1;

    /** @brief IC5 enable */
    using RCC_DIVENR_IC5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC5 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC5 is enabled (value: 1)
     */
        /** @brief IC5 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC5EN_B_0x0 = 0;
        /** @brief IC5 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC5EN_B_0x1 = 1;

    /** @brief IC6 enable */
    using RCC_DIVENR_IC6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC6 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC6 is enabled (value: 1)
     */
        /** @brief IC6 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC6EN_B_0x0 = 0;
        /** @brief IC6 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC6EN_B_0x1 = 1;

    /** @brief IC7 enable */
    using RCC_DIVENR_IC7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC7 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC7 is enabled (value: 1)
     */
        /** @brief IC7 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC7EN_B_0x0 = 0;
        /** @brief IC7 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC7EN_B_0x1 = 1;

    /** @brief IC8 enable */
    using RCC_DIVENR_IC8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC8 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC8 is enabled (value: 1)
     */
        /** @brief IC8 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC8EN_B_0x0 = 0;
        /** @brief IC8 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC8EN_B_0x1 = 1;

    /** @brief IC9 enable */
    using RCC_DIVENR_IC9EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC9 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC9 is enabled (value: 1)
     */
        /** @brief IC9 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC9EN_B_0x0 = 0;
        /** @brief IC9 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC9EN_B_0x1 = 1;

    /** @brief IC10 enable */
    using RCC_DIVENR_IC10EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC10 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC10 is enabled (value: 1)
     */
        /** @brief IC10 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC10EN_B_0x0 = 0;
        /** @brief IC10 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC10EN_B_0x1 = 1;

    /** @brief IC11 enable */
    using RCC_DIVENR_IC11EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC11 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC11 is enabled (value: 1)
     */
        /** @brief IC11 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC11EN_B_0x0 = 0;
        /** @brief IC11 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC11EN_B_0x1 = 1;

    /** @brief IC12 enable */
    using RCC_DIVENR_IC12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC12 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC12 is enabled (value: 1)
     */
        /** @brief IC12 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC12EN_B_0x0 = 0;
        /** @brief IC12 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC12EN_B_0x1 = 1;

    /** @brief IC13 enable */
    using RCC_DIVENR_IC13EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC13 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC13 is enabled (value: 1)
     */
        /** @brief IC13 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC13EN_B_0x0 = 0;
        /** @brief IC13 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC13EN_B_0x1 = 1;

    /** @brief IC14 enable */
    using RCC_DIVENR_IC14EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC14 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC14 is enabled (value: 1)
     */
        /** @brief IC14 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC14EN_B_0x0 = 0;
        /** @brief IC14 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC14EN_B_0x1 = 1;

    /** @brief IC15 enable */
    using RCC_DIVENR_IC15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC15 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC15 is enabled (value: 1)
     */
        /** @brief IC15 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC15EN_B_0x0 = 0;
        /** @brief IC15 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC15EN_B_0x1 = 1;

    /** @brief IC16 enable */
    using RCC_DIVENR_IC16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC16 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC16 is enabled (value: 1)
     */
        /** @brief IC16 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC16EN_B_0x0 = 0;
        /** @brief IC16 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC16EN_B_0x1 = 1;

    /** @brief IC17 enable */
    using RCC_DIVENR_IC17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC17 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC17 is enabled (value: 1)
     */
        /** @brief IC17 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC17EN_B_0x0 = 0;
        /** @brief IC17 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC17EN_B_0x1 = 1;

    /** @brief IC18 enable */
    using RCC_DIVENR_IC18EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC18 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC18 is enabled (value: 1)
     */
        /** @brief IC18 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC18EN_B_0x0 = 0;
        /** @brief IC18 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC18EN_B_0x1 = 1;

    /** @brief IC19 enable */
    using RCC_DIVENR_IC19EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC19 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC19 is enabled (value: 1)
     */
        /** @brief IC19 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC19EN_B_0x0 = 0;
        /** @brief IC19 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC19EN_B_0x1 = 1;

    /** @brief IC20 enable */
    using RCC_DIVENR_IC20EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC20 is disabled (default after reset) (value: 0)
     *          - B_0x1: IC20 is enabled (value: 1)
     */
        /** @brief IC20 is disabled (default after reset) */
    constexpr std::uint32_t RCC_DIVENR_IC20EN_B_0x0 = 0;
        /** @brief IC20 is enabled */
    constexpr std::uint32_t RCC_DIVENR_IC20EN_B_0x1 = 1;

    /** @brief RCC SoC buses enable register */
    using RCC_BUSENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKN enable */
    using RCC_BUSENR_ACLKNEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKN is disabled (value: 0)
     *          - B_0x1: ACLKN is enabled (default after reset) (value: 1)
     */
        /** @brief ACLKN is disabled */
    constexpr std::uint32_t RCC_BUSENR_ACLKNEN_B_0x0 = 0;
        /** @brief ACLKN is enabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_ACLKNEN_B_0x1 = 1;

    /** @brief ACLKNC enable */
    using RCC_BUSENR_ACLKNCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKNC is disabled (value: 0)
     *          - B_0x1: ACLKNC is enabled (default after reset) (value: 1)
     */
        /** @brief ACLKNC is disabled */
    constexpr std::uint32_t RCC_BUSENR_ACLKNCEN_B_0x0 = 0;
        /** @brief ACLKNC is enabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_ACLKNCEN_B_0x1 = 1;

    /** @brief AHBM enable */
    using RCC_BUSENR_AHBMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBM is disabled (default after reset) (value: 0)
     *          - B_0x1: AHBM is enabled (value: 1)
     */
        /** @brief AHBM is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_AHBMEN_B_0x0 = 0;
        /** @brief AHBM is enabled */
    constexpr std::uint32_t RCC_BUSENR_AHBMEN_B_0x1 = 1;

    /** @brief AHB1 enable */
    using RCC_BUSENR_AHB1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB1 is disabled (default after reset) (value: 0)
     *          - B_0x1: AHB1 is enabled (value: 1)
     */
        /** @brief AHB1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_AHB1EN_B_0x0 = 0;
        /** @brief AHB1 is enabled */
    constexpr std::uint32_t RCC_BUSENR_AHB1EN_B_0x1 = 1;

    /** @brief AHB2 enable */
    using RCC_BUSENR_AHB2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2 is disabled (default after reset) (value: 0)
     *          - B_0x1: AHB2 is enabled (value: 1)
     */
        /** @brief AHB2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_AHB2EN_B_0x0 = 0;
        /** @brief AHB2 is enabled */
    constexpr std::uint32_t RCC_BUSENR_AHB2EN_B_0x1 = 1;

    /** @brief AHB3 enable */
    using RCC_BUSENR_AHB3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB3 is disabled (default after reset) (value: 0)
     *          - B_0x1: AHB3 is enabled (value: 1)
     */
        /** @brief AHB3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_AHB3EN_B_0x0 = 0;
        /** @brief AHB3 is enabled */
    constexpr std::uint32_t RCC_BUSENR_AHB3EN_B_0x1 = 1;

    /** @brief AHB4 enable */
    using RCC_BUSENR_AHB4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB4 is disabled (default after reset) (value: 0)
     *          - B_0x1: AHB4 is enabled (value: 1)
     */
        /** @brief AHB4 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_AHB4EN_B_0x0 = 0;
        /** @brief AHB4 is enabled */
    constexpr std::uint32_t RCC_BUSENR_AHB4EN_B_0x1 = 1;

    /** @brief AHB5 enable */
    using RCC_BUSENR_AHB5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB5 is disabled (default after reset) (value: 0)
     *          - B_0x1: AHB5 is enabled (value: 1)
     */
        /** @brief AHB5 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_AHB5EN_B_0x0 = 0;
        /** @brief AHB5 is enabled */
    constexpr std::uint32_t RCC_BUSENR_AHB5EN_B_0x1 = 1;

    /** @brief APB1 enable */
    using RCC_BUSENR_APB1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 is disabled (default after reset) (value: 0)
     *          - B_0x1: APB1 is enabled (value: 1)
     */
        /** @brief APB1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_APB1EN_B_0x0 = 0;
        /** @brief APB1 is enabled */
    constexpr std::uint32_t RCC_BUSENR_APB1EN_B_0x1 = 1;

    /** @brief APB2 enable */
    using RCC_BUSENR_APB2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 is disabled (default after reset) (value: 0)
     *          - B_0x1: APB2 is enabled (value: 1)
     */
        /** @brief APB2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_APB2EN_B_0x0 = 0;
        /** @brief APB2 is enabled */
    constexpr std::uint32_t RCC_BUSENR_APB2EN_B_0x1 = 1;

    /** @brief APB3 enable */
    using RCC_BUSENR_APB3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 is disabled (default after reset) (value: 0)
     *          - B_0x1: APB3 is enabled (value: 1)
     */
        /** @brief APB3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_APB3EN_B_0x0 = 0;
        /** @brief APB3 is enabled */
    constexpr std::uint32_t RCC_BUSENR_APB3EN_B_0x1 = 1;

    /** @brief APB4 enable */
    using RCC_BUSENR_APB4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB4 is disabled (default after reset) (value: 0)
     *          - B_0x1: APB4 is enabled (value: 1)
     */
        /** @brief APB4 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_APB4EN_B_0x0 = 0;
        /** @brief APB4 is enabled */
    constexpr std::uint32_t RCC_BUSENR_APB4EN_B_0x1 = 1;

    /** @brief APB5 enable */
    using RCC_BUSENR_APB5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB5 is disabled (default after reset) (value: 0)
     *          - B_0x1: APB5 is enabled (value: 1)
     */
        /** @brief APB5 is disabled (default after reset) */
    constexpr std::uint32_t RCC_BUSENR_APB5EN_B_0x0 = 0;
        /** @brief APB5 is enabled */
    constexpr std::uint32_t RCC_BUSENR_APB5EN_B_0x1 = 1;

    /** @brief RCC miscellaneous configuration enable register */
    using RCC_MISCENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG enable */
    using RCC_MISCENR_DBGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBG is disabled (default after reset) (value: 0)
     *          - B_0x1: DBG is enabled (value: 1)
     */
        /** @brief DBG is disabled (default after reset) */
    constexpr std::uint32_t RCC_MISCENR_DBGEN_B_0x0 = 0;
        /** @brief DBG is enabled */
    constexpr std::uint32_t RCC_MISCENR_DBGEN_B_0x1 = 1;

    /** @brief MCO1 enable */
    using RCC_MISCENR_MCO1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO1 is disabled (default after reset) (value: 0)
     *          - B_0x1: MCO1 is enabled (value: 1)
     */
        /** @brief MCO1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_MISCENR_MCO1EN_B_0x0 = 0;
        /** @brief MCO1 is enabled */
    constexpr std::uint32_t RCC_MISCENR_MCO1EN_B_0x1 = 1;

    /** @brief MCO2 enable */
    using RCC_MISCENR_MCO2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCO2 is disabled (default after reset) (value: 0)
     *          - B_0x1: MCO2 is enabled (value: 1)
     */
        /** @brief MCO2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_MISCENR_MCO2EN_B_0x0 = 0;
        /** @brief MCO2 is enabled */
    constexpr std::uint32_t RCC_MISCENR_MCO2EN_B_0x1 = 1;

    /** @brief XSPIPHYCOMP enable */
    using RCC_MISCENR_XSPIPHYCOMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIPHYCOMP is disabled (default after reset) (value: 0)
     *          - B_0x1: XSPIPHYCOMP is enabled (value: 1)
     */
        /** @brief XSPIPHYCOMP is disabled (default after reset) */
    constexpr std::uint32_t RCC_MISCENR_XSPIPHYCOMPEN_B_0x0 = 0;
        /** @brief XSPIPHYCOMP is enabled */
    constexpr std::uint32_t RCC_MISCENR_XSPIPHYCOMPEN_B_0x1 = 1;

    /** @brief PER enable */
    using RCC_MISCENR_PEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PER is disabled (default after reset) (value: 0)
     *          - B_0x1: PER is enabled (value: 1)
     */
        /** @brief PER is disabled (default after reset) */
    constexpr std::uint32_t RCC_MISCENR_PEREN_B_0x0 = 0;
        /** @brief PER is enabled */
    constexpr std::uint32_t RCC_MISCENR_PEREN_B_0x1 = 1;

    /** @brief RCC memory enable register */
    using RCC_MEMENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM3 enable */
    using RCC_MEMENR_AXISRAM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM3 is disabled (value: 0)
     *          - B_0x1: AXISRAM3 is enabled (default after reset) (value: 1)
     */
        /** @brief AXISRAM3 is disabled */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM3EN_B_0x0 = 0;
        /** @brief AXISRAM3 is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM3EN_B_0x1 = 1;

    /** @brief AXISRAM4 enable */
    using RCC_MEMENR_AXISRAM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM4 is disabled (value: 0)
     *          - B_0x1: AXISRAM4 is enabled (default after reset) (value: 1)
     */
        /** @brief AXISRAM4 is disabled */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM4EN_B_0x0 = 0;
        /** @brief AXISRAM4 is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM4EN_B_0x1 = 1;

    /** @brief AXISRAM5 enable */
    using RCC_MEMENR_AXISRAM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM5 is disabled (value: 0)
     *          - B_0x1: AXISRAM5 is enabled (default after reset) (value: 1)
     */
        /** @brief AXISRAM5 is disabled */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM5EN_B_0x0 = 0;
        /** @brief AXISRAM5 is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM5EN_B_0x1 = 1;

    /** @brief AXISRAM6 enable */
    using RCC_MEMENR_AXISRAM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM6 is disabled (value: 0)
     *          - B_0x1: AXISRAM6 is enabled (default after reset) (value: 1)
     */
        /** @brief AXISRAM6 is disabled */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM6EN_B_0x0 = 0;
        /** @brief AXISRAM6 is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM6EN_B_0x1 = 1;

    /** @brief AHBSRAM1 enable */
    using RCC_MEMENR_AHBSRAM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM1 is disabled (value: 0)
     *          - B_0x1: AHBSRAM1 is enabled (default after reset) (value: 1)
     */
        /** @brief AHBSRAM1 is disabled */
    constexpr std::uint32_t RCC_MEMENR_AHBSRAM1EN_B_0x0 = 0;
        /** @brief AHBSRAM1 is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_AHBSRAM1EN_B_0x1 = 1;

    /** @brief AHBSRAM2 enable */
    using RCC_MEMENR_AHBSRAM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM2 is disabled (value: 0)
     *          - B_0x1: AHBSRAM2 is enabled (default after reset) (value: 1)
     */
        /** @brief AHBSRAM2 is disabled */
    constexpr std::uint32_t RCC_MEMENR_AHBSRAM2EN_B_0x0 = 0;
        /** @brief AHBSRAM2 is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_AHBSRAM2EN_B_0x1 = 1;

    /** @brief BKPSRAM enable */
    using RCC_MEMENR_BKPSRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPSRAM is disabled (value: 0)
     *          - B_0x1: BKPSRAM is enabled (default after reset) (value: 1)
     */
        /** @brief BKPSRAM is disabled */
    constexpr std::uint32_t RCC_MEMENR_BKPSRAMEN_B_0x0 = 0;
        /** @brief BKPSRAM is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_BKPSRAMEN_B_0x1 = 1;

    /** @brief AXISRAM1 enable */
    using RCC_MEMENR_AXISRAM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM1 is disabled (value: 0)
     *          - B_0x1: AXISRAM1 is enabled (default after reset) (value: 1)
     */
        /** @brief AXISRAM1 is disabled */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM1EN_B_0x0 = 0;
        /** @brief AXISRAM1 is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM1EN_B_0x1 = 1;

    /** @brief AXISRAM2 enable */
    using RCC_MEMENR_AXISRAM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM2 is disabled (value: 0)
     *          - B_0x1: AXISRAM2 is enabled (default after reset) (value: 1)
     */
        /** @brief AXISRAM2 is disabled */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM2EN_B_0x0 = 0;
        /** @brief AXISRAM2 is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_AXISRAM2EN_B_0x1 = 1;

    /** @brief FLEXRAM enable */
    using RCC_MEMENR_FLEXRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLEXRAM is disabled (value: 0)
     *          - B_0x1: FLEXRAM is enabled (default after reset) (value: 1)
     */
        /** @brief FLEXRAM is disabled */
    constexpr std::uint32_t RCC_MEMENR_FLEXRAMEN_B_0x0 = 0;
        /** @brief FLEXRAM is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_FLEXRAMEN_B_0x1 = 1;

    /** @brief NPUCACHERAM enable */
    using RCC_MEMENR_NPUCACHERAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPUCACHERAM is disabled (default after reset) (value: 0)
     *          - B_0x1: NPUCACHERAM is enabled (value: 1)
     */
        /** @brief NPUCACHERAM is disabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_NPUCACHERAMEN_B_0x0 = 0;
        /** @brief NPUCACHERAM is enabled */
    constexpr std::uint32_t RCC_MEMENR_NPUCACHERAMEN_B_0x1 = 1;

    /** @brief VENCRAM enable */
    using RCC_MEMENR_VENCRAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VENCRAM is disabled (default after reset) (value: 0)
     *          - B_0x1: VENCRAM is enabled (value: 1)
     */
        /** @brief VENCRAM is disabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_VENCRAMEN_B_0x0 = 0;
        /** @brief VENCRAM is enabled */
    constexpr std::uint32_t RCC_MEMENR_VENCRAMEN_B_0x1 = 1;

    /** @brief BOOTROM enable */
    using RCC_MEMENR_BOOTROMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOOTROM is disabled (value: 0)
     *          - B_0x1: BOOTROM is enabled (default after reset) (value: 1)
     */
        /** @brief BOOTROM is disabled */
    constexpr std::uint32_t RCC_MEMENR_BOOTROMEN_B_0x0 = 0;
        /** @brief BOOTROM is enabled (default after reset) */
    constexpr std::uint32_t RCC_MEMENR_BOOTROMEN_B_0x1 = 1;

    /** @brief RCC AHB1 enable register */
    using RCC_AHB1ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 enable */
    using RCC_AHB1ENR_GPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 is disabled (default after reset) (value: 0)
     *          - B_0x1: GPDMA1 is enabled (value: 1)
     */
        /** @brief GPDMA1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x0 = 0;
        /** @brief GPDMA1 is enabled */
    constexpr std::uint32_t RCC_AHB1ENR_GPDMA1EN_B_0x1 = 1;

    /** @brief ADC12 enable */
    using RCC_AHB1ENR_ADC12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC12 is disabled (default after reset) (value: 0)
     *          - B_0x1: ADC12 is enabled (value: 1)
     */
        /** @brief ADC12 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB1ENR_ADC12EN_B_0x0 = 0;
        /** @brief ADC12 is enabled */
    constexpr std::uint32_t RCC_AHB1ENR_ADC12EN_B_0x1 = 1;

    /** @brief RCC AHB2 enable register */
    using RCC_AHB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG enable */
    using RCC_AHB2ENR_RAMCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG is disabled (value: 0)
     *          - B_0x1: RAMCFG is enabled (default after reset) (value: 1)
     */
        /** @brief RAMCFG is disabled */
    constexpr std::uint32_t RCC_AHB2ENR_RAMCFGEN_B_0x0 = 0;
        /** @brief RAMCFG is enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_RAMCFGEN_B_0x1 = 1;

    /** @brief MDF1 enable */
    using RCC_AHB2ENR_MDF1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF1 is disabled (default after reset) (value: 0)
     *          - B_0x1: MDF1 is enabled (value: 1)
     */
        /** @brief MDF1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_MDF1EN_B_0x0 = 0;
        /** @brief MDF1 is enabled */
    constexpr std::uint32_t RCC_AHB2ENR_MDF1EN_B_0x1 = 1;

    /** @brief ADF enable */
    using RCC_AHB2ENR_ADF1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF is disabled (default after reset) (value: 0)
     *          - B_0x1: ADF is enabled (value: 1)
     */
        /** @brief ADF is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB2ENR_ADF1EN_B_0x0 = 0;
        /** @brief ADF is enabled */
    constexpr std::uint32_t RCC_AHB2ENR_ADF1EN_B_0x1 = 1;

    /** @brief RCC AHB3 enable register */
    using RCC_AHB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG enable */
    using RCC_AHB3ENR_RNGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG is disabled (default after reset) (value: 0)
     *          - B_0x1: RNG is enabled (value: 1)
     */
        /** @brief RNG is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_RNGEN_B_0x0 = 0;
        /** @brief RNG is enabled */
    constexpr std::uint32_t RCC_AHB3ENR_RNGEN_B_0x1 = 1;

    /** @brief HASH enable */
    using RCC_AHB3ENR_HASHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH is disabled (default after reset) (value: 0)
     *          - B_0x1: HASH is enabled (value: 1)
     */
        /** @brief HASH is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_HASHEN_B_0x0 = 0;
        /** @brief HASH is enabled */
    constexpr std::uint32_t RCC_AHB3ENR_HASHEN_B_0x1 = 1;

    /** @brief CRYP enable */
    using RCC_AHB3ENR_CRYPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRYP is disabled (default after reset) (value: 0)
     *          - B_0x1: CRYP is enabled (value: 1)
     */
        /** @brief CRYP is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_CRYPEN_B_0x0 = 0;
        /** @brief CRYP is enabled */
    constexpr std::uint32_t RCC_AHB3ENR_CRYPEN_B_0x1 = 1;

    /** @brief SAES enable */
    using RCC_AHB3ENR_SAESEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES is disabled (default after reset) (value: 0)
     *          - B_0x1: SAES is enabled (value: 1)
     */
        /** @brief SAES is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_SAESEN_B_0x0 = 0;
        /** @brief SAES is enabled */
    constexpr std::uint32_t RCC_AHB3ENR_SAESEN_B_0x1 = 1;

    /** @brief PKA enable */
    using RCC_AHB3ENR_PKAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA is disabled (default after reset) (value: 0)
     *          - B_0x1: PKA is enabled (value: 1)
     */
        /** @brief PKA is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_PKAEN_B_0x0 = 0;
        /** @brief PKA is enabled */
    constexpr std::uint32_t RCC_AHB3ENR_PKAEN_B_0x1 = 1;

    /** @brief RIFSC enable */
    using RCC_AHB3ENR_RIFSCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIFSC is disabled (value: 0)
     *          - B_0x1: RIFSC is enabled (default after reset) (value: 1)
     */
        /** @brief RIFSC is disabled */
    constexpr std::uint32_t RCC_AHB3ENR_RIFSCEN_B_0x0 = 0;
        /** @brief RIFSC is enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_RIFSCEN_B_0x1 = 1;

    /** @brief IAC enable */
    using RCC_AHB3ENR_IACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAC is disabled (value: 0)
     *          - B_0x1: IAC is enabled (default after reset) (value: 1)
     */
        /** @brief IAC is disabled */
    constexpr std::uint32_t RCC_AHB3ENR_IACEN_B_0x0 = 0;
        /** @brief IAC is enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_IACEN_B_0x1 = 1;

    /** @brief RISAF enable */
    using RCC_AHB3ENR_RISAFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF is disabled (value: 0)
     *          - B_0x1: RISAF is enabled (default after reset) (value: 1)
     */
        /** @brief RISAF is disabled */
    constexpr std::uint32_t RCC_AHB3ENR_RISAFEN_B_0x0 = 0;
        /** @brief RISAF is enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB3ENR_RISAFEN_B_0x1 = 1;

    /** @brief RCC AHB4 enable register */
    using RCC_AHB4ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA enable */
    using RCC_AHB4ENR_GPIOAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOA is enabled (value: 1)
     */
        /** @brief GPIOA is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOAEN_B_0x0 = 0;
        /** @brief GPIOA is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOAEN_B_0x1 = 1;

    /** @brief GPIOB enable */
    using RCC_AHB4ENR_GPIOBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOB is enabled (value: 1)
     */
        /** @brief GPIOB is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOBEN_B_0x0 = 0;
        /** @brief GPIOB is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOBEN_B_0x1 = 1;

    /** @brief GPIOC enable */
    using RCC_AHB4ENR_GPIOCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOC is enabled (value: 1)
     */
        /** @brief GPIOC is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOCEN_B_0x0 = 0;
        /** @brief GPIOC is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOCEN_B_0x1 = 1;

    /** @brief GPIOD enable */
    using RCC_AHB4ENR_GPIODEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOD is enabled (value: 1)
     */
        /** @brief GPIOD is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIODEN_B_0x0 = 0;
        /** @brief GPIOD is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIODEN_B_0x1 = 1;

    /** @brief GPIOE enable */
    using RCC_AHB4ENR_GPIOEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOE is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOE is enabled (value: 1)
     */
        /** @brief GPIOE is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOEEN_B_0x0 = 0;
        /** @brief GPIOE is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOEEN_B_0x1 = 1;

    /** @brief GPIOF enable */
    using RCC_AHB4ENR_GPIOFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOF is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOF is enabled (value: 1)
     */
        /** @brief GPIOF is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOFEN_B_0x0 = 0;
        /** @brief GPIOF is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOFEN_B_0x1 = 1;

    /** @brief GPIOG enable */
    using RCC_AHB4ENR_GPIOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOG is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOG is enabled (value: 1)
     */
        /** @brief GPIOG is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOGEN_B_0x0 = 0;
        /** @brief GPIOG is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOGEN_B_0x1 = 1;

    /** @brief GPIOH enable */
    using RCC_AHB4ENR_GPIOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOH is enabled (value: 1)
     */
        /** @brief GPIOH is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOHEN_B_0x0 = 0;
        /** @brief GPIOH is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOHEN_B_0x1 = 1;

    /** @brief GPION enable */
    using RCC_AHB4ENR_GPIONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPION is disabled (default after reset) (value: 0)
     *          - B_0x1: GPION is enabled (value: 1)
     */
        /** @brief GPION is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIONEN_B_0x0 = 0;
        /** @brief GPION is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIONEN_B_0x1 = 1;

    /** @brief GPIOO enable */
    using RCC_AHB4ENR_GPIOOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOO is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOO is enabled (value: 1)
     */
        /** @brief GPIOO is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOOEN_B_0x0 = 0;
        /** @brief GPIOO is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOOEN_B_0x1 = 1;

    /** @brief GPIOP enable */
    using RCC_AHB4ENR_GPIOPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOP is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOP is enabled (value: 1)
     */
        /** @brief GPIOP is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOPEN_B_0x0 = 0;
        /** @brief GPIOP is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOPEN_B_0x1 = 1;

    /** @brief GPIOQ enable */
    using RCC_AHB4ENR_GPIOQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOQ is disabled (default after reset) (value: 0)
     *          - B_0x1: GPIOQ is enabled (value: 1)
     */
        /** @brief GPIOQ is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOQEN_B_0x0 = 0;
        /** @brief GPIOQ is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_GPIOQEN_B_0x1 = 1;

    /** @brief PWR enable */
    using RCC_AHB4ENR_PWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR is disabled (value: 0)
     *          - B_0x1: PWR is enabled (default after reset) (value: 1)
     */
        /** @brief PWR is disabled */
    constexpr std::uint32_t RCC_AHB4ENR_PWREN_B_0x0 = 0;
        /** @brief PWR is enabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_PWREN_B_0x1 = 1;

    /** @brief CRC enable */
    using RCC_AHB4ENR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC is disabled (default after reset) (value: 0)
     *          - B_0x1: CRC is enabled (value: 1)
     */
        /** @brief CRC is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB4ENR_CRCEN_B_0x0 = 0;
        /** @brief CRC is enabled */
    constexpr std::uint32_t RCC_AHB4ENR_CRCEN_B_0x1 = 1;

    /** @brief RCC AHB5 enable register */
    using RCC_AHB5ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 enable */
    using RCC_AHB5ENR_HPDMA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPDMA1 is disabled (default after reset) (value: 0)
     *          - B_0x1: HPDMA1 is enabled (value: 1)
     */
        /** @brief HPDMA1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_HPDMA1EN_B_0x0 = 0;
        /** @brief HPDMA1 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_HPDMA1EN_B_0x1 = 1;

    /** @brief DMA2D enable */
    using RCC_AHB5ENR_DMA2DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D is disabled (default after reset) (value: 0)
     *          - B_0x1: DMA2D is enabled (value: 1)
     */
        /** @brief DMA2D is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_DMA2DEN_B_0x0 = 0;
        /** @brief DMA2D is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_DMA2DEN_B_0x1 = 1;

    /** @brief JPEG enable */
    using RCC_AHB5ENR_JPEGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JPEG is disabled (default after reset) (value: 0)
     *          - B_0x1: JPEG is enabled (value: 1)
     */
        /** @brief JPEG is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_JPEGEN_B_0x0 = 0;
        /** @brief JPEG is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_JPEGEN_B_0x1 = 1;

    /** @brief FMC enable */
    using RCC_AHB5ENR_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC is disabled (default after reset) (value: 0)
     *          - B_0x1: FMC is enabled (value: 1)
     */
        /** @brief FMC is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_FMCEN_B_0x0 = 0;
        /** @brief FMC is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_FMCEN_B_0x1 = 1;

    /** @brief XSPI1 enable */
    using RCC_AHB5ENR_XSPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI1 is disabled (default after reset) (value: 0)
     *          - B_0x1: XSPI1 is enabled (value: 1)
     */
        /** @brief XSPI1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI1EN_B_0x0 = 0;
        /** @brief XSPI1 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI1EN_B_0x1 = 1;

    /** @brief PSSI enable */
    using RCC_AHB5ENR_PSSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PSSI is disabled (default after reset) (value: 0)
     *          - B_0x1: PSSI is enabled (value: 1)
     */
        /** @brief PSSI is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_PSSIEN_B_0x0 = 0;
        /** @brief PSSI is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_PSSIEN_B_0x1 = 1;

    /** @brief SDMMC2 enable */
    using RCC_AHB5ENR_SDMMC2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 is disabled (default after reset) (value: 0)
     *          - B_0x1: SDMMC2 is enabled (value: 1)
     */
        /** @brief SDMMC2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_SDMMC2EN_B_0x0 = 0;
        /** @brief SDMMC2 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_SDMMC2EN_B_0x1 = 1;

    /** @brief SDMMC1 enable */
    using RCC_AHB5ENR_SDMMC1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 is disabled (default after reset) (value: 0)
     *          - B_0x1: SDMMC1 is enabled (value: 1)
     */
        /** @brief SDMMC1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_SDMMC1EN_B_0x0 = 0;
        /** @brief SDMMC1 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_SDMMC1EN_B_0x1 = 1;

    /** @brief XSPI2 enable */
    using RCC_AHB5ENR_XSPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI2 is disabled (default after reset) (value: 0)
     *          - B_0x1: XSPI2 is enabled (value: 1)
     */
        /** @brief XSPI2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI2EN_B_0x0 = 0;
        /** @brief XSPI2 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI2EN_B_0x1 = 1;

    /** @brief XSPIM enable */
    using RCC_AHB5ENR_XSPIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIM is disabled (default after reset) (value: 0)
     *          - B_0x1: XSPIM is enabled (value: 1)
     */
        /** @brief XSPIM is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_XSPIMEN_B_0x0 = 0;
        /** @brief XSPIM is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_XSPIMEN_B_0x1 = 1;

    /** @brief MCE1 enable */
    using RCC_AHB5ENR_MCE1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE1 is disabled (default after reset) (value: 0)
     *          - B_0x1: MCE1 is enabled (value: 1)
     */
        /** @brief MCE1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_MCE1EN_B_0x0 = 0;
        /** @brief MCE1 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_MCE1EN_B_0x1 = 1;

    /** @brief MCE2 enable */
    using RCC_AHB5ENR_MCE2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE2 is disabled (default after reset) (value: 0)
     *          - B_0x1: MCE2 is enabled (value: 1)
     */
        /** @brief MCE2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_MCE2EN_B_0x0 = 0;
        /** @brief MCE2 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_MCE2EN_B_0x1 = 1;

    /** @brief MCE3 enable */
    using RCC_AHB5ENR_MCE3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE3 is disabled (default after reset) (value: 0)
     *          - B_0x1: MCE3 is enabled (value: 1)
     */
        /** @brief MCE3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_MCE3EN_B_0x0 = 0;
        /** @brief MCE3 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_MCE3EN_B_0x1 = 1;

    /** @brief XSPI3 enable */
    using RCC_AHB5ENR_XSPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI3 is disabled (default after reset) (value: 0)
     *          - B_0x1: XSPI3 is enabled (value: 1)
     */
        /** @brief XSPI3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI3EN_B_0x0 = 0;
        /** @brief XSPI3 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_XSPI3EN_B_0x1 = 1;

    /** @brief MCE4 enable */
    using RCC_AHB5ENR_MCE4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE4 is disabled (default after reset) (value: 0)
     *          - B_0x1: MCE4 is enabled (value: 1)
     */
        /** @brief MCE4 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_MCE4EN_B_0x0 = 0;
        /** @brief MCE4 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_MCE4EN_B_0x1 = 1;

    /** @brief GFXMMU enable */
    using RCC_AHB5ENR_GFXMMUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU is disabled (default after reset) (value: 0)
     *          - B_0x1: GFXMMU is enabled (value: 1)
     */
        /** @brief GFXMMU is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_GFXMMUEN_B_0x0 = 0;
        /** @brief GFXMMU is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_GFXMMUEN_B_0x1 = 1;

    /** @brief GPU enable */
    using RCC_AHB5ENR_GPUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPU is disabled (default after reset) (value: 0)
     *          - B_0x1: GPU is enabled (value: 1)
     */
        /** @brief GPU is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_GPUEN_B_0x0 = 0;
        /** @brief GPU is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_GPUEN_B_0x1 = 1;

    /** @brief ETH1MAC enable */
    using RCC_AHB5ENR_ETH1MACEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1MAC is disabled (default after reset) (value: 0)
     *          - B_0x1: ETH1MAC is enabled (value: 1)
     */
        /** @brief ETH1MAC is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_ETH1MACEN_B_0x0 = 0;
        /** @brief ETH1MAC is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_ETH1MACEN_B_0x1 = 1;

    /** @brief ETH1TX enable */
    using RCC_AHB5ENR_ETH1TXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1TX is disabled (default after reset) (value: 0)
     *          - B_0x1: ETH1TX is enabled (value: 1)
     */
        /** @brief ETH1TX is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_ETH1TXEN_B_0x0 = 0;
        /** @brief ETH1TX is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_ETH1TXEN_B_0x1 = 1;

    /** @brief ETH1RX enable */
    using RCC_AHB5ENR_ETH1RXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1RX is disabled (default after reset) (value: 0)
     *          - B_0x1: ETH1RX is enabled (value: 1)
     */
        /** @brief ETH1RX is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_ETH1RXEN_B_0x0 = 0;
        /** @brief ETH1RX is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_ETH1RXEN_B_0x1 = 1;

    /** @brief ETH1 enable */
    using RCC_AHB5ENR_ETH1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1 is disabled (default after reset) (value: 0)
     *          - B_0x1: ETH1 is enabled (value: 1)
     */
        /** @brief ETH1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_ETH1EN_B_0x0 = 0;
        /** @brief ETH1 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_ETH1EN_B_0x1 = 1;

    /** @brief OTG1 enable */
    using RCC_AHB5ENR_OTG1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG1 is disabled (default after reset) (value: 0)
     *          - B_0x1: OTG1 is enabled (value: 1)
     */
        /** @brief OTG1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_OTG1EN_B_0x0 = 0;
        /** @brief OTG1 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_OTG1EN_B_0x1 = 1;

    /** @brief OTGPHY1 enable */
    using RCC_AHB5ENR_OTGPHY1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGPHY1 is disabled (default after reset) (value: 0)
     *          - B_0x1: OTGPHY1 is enabled (value: 1)
     */
        /** @brief OTGPHY1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_OTGPHY1EN_B_0x0 = 0;
        /** @brief OTGPHY1 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_OTGPHY1EN_B_0x1 = 1;

    /** @brief OTGPHY2 enable */
    using RCC_AHB5ENR_OTGPHY2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGPHY2 is disabled (default after reset) (value: 0)
     *          - B_0x1: OTGPHY2 is enabled (value: 1)
     */
        /** @brief OTGPHY2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_OTGPHY2EN_B_0x0 = 0;
        /** @brief OTGPHY2 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_OTGPHY2EN_B_0x1 = 1;

    /** @brief OTG2 enable */
    using RCC_AHB5ENR_OTG2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG2 is disabled (default after reset) (value: 0)
     *          - B_0x1: OTG2 is enabled (value: 1)
     */
        /** @brief OTG2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_OTG2EN_B_0x0 = 0;
        /** @brief OTG2 is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_OTG2EN_B_0x1 = 1;

    /** @brief NPUCACHE enable */
    using RCC_AHB5ENR_NPUCACHEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPUCACHE is disabled (default after reset) (value: 0)
     *          - B_0x1: NPUCACHE is enabled (value: 1)
     */
        /** @brief NPUCACHE is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_NPUCACHEEN_B_0x0 = 0;
        /** @brief NPUCACHE is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_NPUCACHEEN_B_0x1 = 1;

    /** @brief NPU enable */
    using RCC_AHB5ENR_NPUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPU is disabled (default after reset) (value: 0)
     *          - B_0x1: NPU is enabled (value: 1)
     */
        /** @brief NPU is disabled (default after reset) */
    constexpr std::uint32_t RCC_AHB5ENR_NPUEN_B_0x0 = 0;
        /** @brief NPU is enabled */
    constexpr std::uint32_t RCC_AHB5ENR_NPUEN_B_0x1 = 1;

    /** @brief RCC APB1L enable register */
    using RCC_APB1LENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 enable */
    using RCC_APB1LENR_TIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM2 is enabled (value: 1)
     */
        /** @brief TIM2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM2EN_B_0x0 = 0;
        /** @brief TIM2 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM2EN_B_0x1 = 1;

    /** @brief TIM3 enable */
    using RCC_APB1LENR_TIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM3 is enabled (value: 1)
     */
        /** @brief TIM3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM3EN_B_0x0 = 0;
        /** @brief TIM3 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM3EN_B_0x1 = 1;

    /** @brief TIM4 enable */
    using RCC_APB1LENR_TIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM4 is enabled (value: 1)
     */
        /** @brief TIM4 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM4EN_B_0x0 = 0;
        /** @brief TIM4 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM4EN_B_0x1 = 1;

    /** @brief TIM5 enable */
    using RCC_APB1LENR_TIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM5 is enabled (value: 1)
     */
        /** @brief TIM5 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM5EN_B_0x0 = 0;
        /** @brief TIM5 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM5EN_B_0x1 = 1;

    /** @brief TIM6 enable */
    using RCC_APB1LENR_TIM6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM6 is enabled (value: 1)
     */
        /** @brief TIM6 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM6EN_B_0x0 = 0;
        /** @brief TIM6 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM6EN_B_0x1 = 1;

    /** @brief TIM7 enable */
    using RCC_APB1LENR_TIM7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM7 is enabled (value: 1)
     */
        /** @brief TIM7 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM7EN_B_0x0 = 0;
        /** @brief TIM7 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM7EN_B_0x1 = 1;

    /** @brief TIM12 enable */
    using RCC_APB1LENR_TIM12EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM12 is enabled (value: 1)
     */
        /** @brief TIM12 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM12EN_B_0x0 = 0;
        /** @brief TIM12 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM12EN_B_0x1 = 1;

    /** @brief TIM13 enable */
    using RCC_APB1LENR_TIM13EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM13 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM13 is enabled (value: 1)
     */
        /** @brief TIM13 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM13EN_B_0x0 = 0;
        /** @brief TIM13 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM13EN_B_0x1 = 1;

    /** @brief TIM14 enable */
    using RCC_APB1LENR_TIM14EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM14 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM14 is enabled (value: 1)
     */
        /** @brief TIM14 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM14EN_B_0x0 = 0;
        /** @brief TIM14 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM14EN_B_0x1 = 1;

    /** @brief LPTIM1 enable */
    using RCC_APB1LENR_LPTIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 is disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM1 is enabled (value: 1)
     */
        /** @brief LPTIM1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_LPTIM1EN_B_0x0 = 0;
        /** @brief LPTIM1 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_LPTIM1EN_B_0x1 = 1;

    /** @brief WWDG enable */
    using RCC_APB1LENR_WWDGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG is disabled (default after reset) (value: 0)
     *          - B_0x1: WWDG is enabled (value: 1)
     */
        /** @brief WWDG is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_WWDGEN_B_0x0 = 0;
        /** @brief WWDG is enabled */
    constexpr std::uint32_t RCC_APB1LENR_WWDGEN_B_0x1 = 1;

    /** @brief TIM10 enable */
    using RCC_APB1LENR_TIM10EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM10 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM10 is enabled (value: 1)
     */
        /** @brief TIM10 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM10EN_B_0x0 = 0;
        /** @brief TIM10 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM10EN_B_0x1 = 1;

    /** @brief TIM11 enable */
    using RCC_APB1LENR_TIM11EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM11 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM11 is enabled (value: 1)
     */
        /** @brief TIM11 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_TIM11EN_B_0x0 = 0;
        /** @brief TIM11 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_TIM11EN_B_0x1 = 1;

    /** @brief SPI2 enable */
    using RCC_APB1LENR_SPI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 is disabled (default after reset) (value: 0)
     *          - B_0x1: SPI2 is enabled (value: 1)
     */
        /** @brief SPI2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPI2EN_B_0x0 = 0;
        /** @brief SPI2 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPI2EN_B_0x1 = 1;

    /** @brief SPI3 enable */
    using RCC_APB1LENR_SPI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 is disabled (default after reset) (value: 0)
     *          - B_0x1: SPI3 is enabled (value: 1)
     */
        /** @brief SPI3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPI3EN_B_0x0 = 0;
        /** @brief SPI3 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPI3EN_B_0x1 = 1;

    /** @brief SPDIFRX1 enable */
    using RCC_APB1LENR_SPDIFRX1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPDIFRX1 is disabled (default after reset) (value: 0)
     *          - B_0x1: SPDIFRX1 is enabled (value: 1)
     */
        /** @brief SPDIFRX1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_SPDIFRX1EN_B_0x0 = 0;
        /** @brief SPDIFRX1 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_SPDIFRX1EN_B_0x1 = 1;

    /** @brief USART2 enable */
    using RCC_APB1LENR_USART2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 is disabled (default after reset) (value: 0)
     *          - B_0x1: USART2 is enabled (value: 1)
     */
        /** @brief USART2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART2EN_B_0x0 = 0;
        /** @brief USART2 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART2EN_B_0x1 = 1;

    /** @brief USART3 enable */
    using RCC_APB1LENR_USART3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 is disabled (default after reset) (value: 0)
     *          - B_0x1: USART3 is enabled (value: 1)
     */
        /** @brief USART3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_USART3EN_B_0x0 = 0;
        /** @brief USART3 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_USART3EN_B_0x1 = 1;

    /** @brief UART4 enable */
    using RCC_APB1LENR_UART4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 is disabled (default after reset) (value: 0)
     *          - B_0x1: UART4 is enabled (value: 1)
     */
        /** @brief UART4 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART4EN_B_0x0 = 0;
        /** @brief UART4 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART4EN_B_0x1 = 1;

    /** @brief UART5 enable */
    using RCC_APB1LENR_UART5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 is disabled (default after reset) (value: 0)
     *          - B_0x1: UART5 is enabled (value: 1)
     */
        /** @brief UART5 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART5EN_B_0x0 = 0;
        /** @brief UART5 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART5EN_B_0x1 = 1;

    /** @brief I2C1 enable */
    using RCC_APB1LENR_I2C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 is disabled (default after reset) (value: 0)
     *          - B_0x1: I2C1 is enabled (value: 1)
     */
        /** @brief I2C1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C1EN_B_0x0 = 0;
        /** @brief I2C1 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C1EN_B_0x1 = 1;

    /** @brief I2C2 enable */
    using RCC_APB1LENR_I2C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 is disabled (default after reset) (value: 0)
     *          - B_0x1: I2C2 is enabled (value: 1)
     */
        /** @brief I2C2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C2EN_B_0x0 = 0;
        /** @brief I2C2 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C2EN_B_0x1 = 1;

    /** @brief I2C3 enable */
    using RCC_APB1LENR_I2C3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 is disabled (default after reset) (value: 0)
     *          - B_0x1: I2C3 is enabled (value: 1)
     */
        /** @brief I2C3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I2C3EN_B_0x0 = 0;
        /** @brief I2C3 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_I2C3EN_B_0x1 = 1;

    /** @brief I3C1 enable */
    using RCC_APB1LENR_I3C1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 is disabled (default after reset) (value: 0)
     *          - B_0x1: I3C1 is enabled (value: 1)
     */
        /** @brief I3C1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I3C1EN_B_0x0 = 0;
        /** @brief I3C1 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_I3C1EN_B_0x1 = 1;

    /** @brief I3C2 enable */
    using RCC_APB1LENR_I3C2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2 is disabled (default after reset) (value: 0)
     *          - B_0x1: I3C2 is enabled (value: 1)
     */
        /** @brief I3C2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_I3C2EN_B_0x0 = 0;
        /** @brief I3C2 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_I3C2EN_B_0x1 = 1;

    /** @brief UART7 enable */
    using RCC_APB1LENR_UART7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART7 is disabled (default after reset) (value: 0)
     *          - B_0x1: UART7 is enabled (value: 1)
     */
        /** @brief UART7 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART7EN_B_0x0 = 0;
        /** @brief UART7 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART7EN_B_0x1 = 1;

    /** @brief UART8 enable */
    using RCC_APB1LENR_UART8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART8 is disabled (default after reset) (value: 0)
     *          - B_0x1: UART8 is enabled (value: 1)
     */
        /** @brief UART8 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1LENR_UART8EN_B_0x0 = 0;
        /** @brief UART8 is enabled */
    constexpr std::uint32_t RCC_APB1LENR_UART8EN_B_0x1 = 1;

    /** @brief RCC APB1H enable register */
    using RCC_APB1HENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS enable */
    using RCC_APB1HENR_MDIOSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS is disabled (default after reset) (value: 0)
     *          - B_0x1: MDIOS is enabled (value: 1)
     */
        /** @brief MDIOS is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_MDIOSEN_B_0x0 = 0;
        /** @brief MDIOS is enabled */
    constexpr std::uint32_t RCC_APB1HENR_MDIOSEN_B_0x1 = 1;

    /** @brief FDCAN enable */
    using RCC_APB1HENR_FDCANEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN is disabled (default after reset) (value: 0)
     *          - B_0x1: FDCAN is enabled (value: 1)
     */
        /** @brief FDCAN is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_FDCANEN_B_0x0 = 0;
        /** @brief FDCAN is enabled */
    constexpr std::uint32_t RCC_APB1HENR_FDCANEN_B_0x1 = 1;

    /** @brief UCPD1 enable */
    using RCC_APB1HENR_UCPD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD1 is disabled (default after reset) (value: 0)
     *          - B_0x1: UCPD1 is enabled (value: 1)
     */
        /** @brief UCPD1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB1HENR_UCPD1EN_B_0x0 = 0;
        /** @brief UCPD1 is enabled */
    constexpr std::uint32_t RCC_APB1HENR_UCPD1EN_B_0x1 = 1;

    /** @brief RCC APB2 enable register */
    using RCC_APB2ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 enable */
    using RCC_APB2ENR_TIM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM1 is enabled (value: 1)
     */
        /** @brief TIM1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x0 = 0;
        /** @brief TIM1 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM1EN_B_0x1 = 1;

    /** @brief TIM8 enable */
    using RCC_APB2ENR_TIM8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM8 is enabled (value: 1)
     */
        /** @brief TIM8 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x0 = 0;
        /** @brief TIM8 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM8EN_B_0x1 = 1;

    /** @brief USART1 enable */
    using RCC_APB2ENR_USART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 is disabled (default after reset) (value: 0)
     *          - B_0x1: USART1 is enabled (value: 1)
     */
        /** @brief USART1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x0 = 0;
        /** @brief USART1 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_USART1EN_B_0x1 = 1;

    /** @brief USART6 enable */
    using RCC_APB2ENR_USART6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 is disabled (default after reset) (value: 0)
     *          - B_0x1: USART6 is enabled (value: 1)
     */
        /** @brief USART6 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USART6EN_B_0x0 = 0;
        /** @brief USART6 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_USART6EN_B_0x1 = 1;

    /** @brief UART9 enable */
    using RCC_APB2ENR_UART9EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART9 is disabled (default after reset) (value: 0)
     *          - B_0x1: UART9 is enabled (value: 1)
     */
        /** @brief UART9 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_UART9EN_B_0x0 = 0;
        /** @brief UART9 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_UART9EN_B_0x1 = 1;

    /** @brief USART10 enable */
    using RCC_APB2ENR_USART10EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART10 is disabled (default after reset) (value: 0)
     *          - B_0x1: USART10 is enabled (value: 1)
     */
        /** @brief USART10 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_USART10EN_B_0x0 = 0;
        /** @brief USART10 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_USART10EN_B_0x1 = 1;

    /** @brief SPI1 enable */
    using RCC_APB2ENR_SPI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 is disabled (default after reset) (value: 0)
     *          - B_0x1: SPI1 is enabled (value: 1)
     */
        /** @brief SPI1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x0 = 0;
        /** @brief SPI1 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI1EN_B_0x1 = 1;

    /** @brief SPI4 enable */
    using RCC_APB2ENR_SPI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 is disabled (default after reset) (value: 0)
     *          - B_0x1: SPI4 is enabled (value: 1)
     */
        /** @brief SPI4 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x0 = 0;
        /** @brief SPI4 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI4EN_B_0x1 = 1;

    /** @brief TIM18 enable */
    using RCC_APB2ENR_TIM18EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM18 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM18 is enabled (value: 1)
     */
        /** @brief TIM18 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM18EN_B_0x0 = 0;
        /** @brief TIM18 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM18EN_B_0x1 = 1;

    /** @brief TIM15 enable */
    using RCC_APB2ENR_TIM15EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM15 is enabled (value: 1)
     */
        /** @brief TIM15 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x0 = 0;
        /** @brief TIM15 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM15EN_B_0x1 = 1;

    /** @brief TIM16 enable */
    using RCC_APB2ENR_TIM16EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM16 is enabled (value: 1)
     */
        /** @brief TIM16 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x0 = 0;
        /** @brief TIM16 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM16EN_B_0x1 = 1;

    /** @brief TIM17 enable */
    using RCC_APB2ENR_TIM17EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM17 is enabled (value: 1)
     */
        /** @brief TIM17 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x0 = 0;
        /** @brief TIM17 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM17EN_B_0x1 = 1;

    /** @brief TIM9 enable */
    using RCC_APB2ENR_TIM9EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM9 is disabled (default after reset) (value: 0)
     *          - B_0x1: TIM9 is enabled (value: 1)
     */
        /** @brief TIM9 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_TIM9EN_B_0x0 = 0;
        /** @brief TIM9 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_TIM9EN_B_0x1 = 1;

    /** @brief SPI5 enable */
    using RCC_APB2ENR_SPI5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI5 is disabled (default after reset) (value: 0)
     *          - B_0x1: SPI5 is enabled (value: 1)
     */
        /** @brief SPI5 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SPI5EN_B_0x0 = 0;
        /** @brief SPI5 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_SPI5EN_B_0x1 = 1;

    /** @brief SAI1 enable */
    using RCC_APB2ENR_SAI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 is disabled (default after reset) (value: 0)
     *          - B_0x1: SAI1 is enabled (value: 1)
     */
        /** @brief SAI1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x0 = 0;
        /** @brief SAI1 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI1EN_B_0x1 = 1;

    /** @brief SAI2 enable */
    using RCC_APB2ENR_SAI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 is disabled (default after reset) (value: 0)
     *          - B_0x1: SAI2 is enabled (value: 1)
     */
        /** @brief SAI2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB2ENR_SAI2EN_B_0x0 = 0;
        /** @brief SAI2 is enabled */
    constexpr std::uint32_t RCC_APB2ENR_SAI2EN_B_0x1 = 1;

    /** @brief RCC APB3 enable register */
    using RCC_APB3ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFT enable */
    using RCC_APB3ENR_DFTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFT is disabled (default after reset) (value: 0)
     *          - B_0x1: DFT is enabled (value: 1)
     */
        /** @brief DFT is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB3ENR_DFTEN_B_0x0 = 0;
        /** @brief DFT is enabled */
    constexpr std::uint32_t RCC_APB3ENR_DFTEN_B_0x1 = 1;

    /** @brief RCC APB4L enable register */
    using RCC_APB4LENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP enable */
    using RCC_APB4LENR_HDPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDP is disabled (default after reset) (value: 0)
     *          - B_0x1: HDP is enabled (value: 1)
     */
        /** @brief HDP is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_HDPEN_B_0x0 = 0;
        /** @brief HDP is enabled */
    constexpr std::uint32_t RCC_APB4LENR_HDPEN_B_0x1 = 1;

    /** @brief LPUART1 enable */
    using RCC_APB4LENR_LPUART1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 is disabled (default after reset) (value: 0)
     *          - B_0x1: LPUART1 is enabled (value: 1)
     */
        /** @brief LPUART1 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_LPUART1EN_B_0x0 = 0;
        /** @brief LPUART1 is enabled */
    constexpr std::uint32_t RCC_APB4LENR_LPUART1EN_B_0x1 = 1;

    /** @brief SPI6 enable */
    using RCC_APB4LENR_SPI6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI6 is disabled (default after reset) (value: 0)
     *          - B_0x1: SPI6 is enabled (value: 1)
     */
        /** @brief SPI6 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_SPI6EN_B_0x0 = 0;
        /** @brief SPI6 is enabled */
    constexpr std::uint32_t RCC_APB4LENR_SPI6EN_B_0x1 = 1;

    /** @brief I2C4 enable */
    using RCC_APB4LENR_I2C4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 is disabled (default after reset) (value: 0)
     *          - B_0x1: I2C4 is enabled (value: 1)
     */
        /** @brief I2C4 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_I2C4EN_B_0x0 = 0;
        /** @brief I2C4 is enabled */
    constexpr std::uint32_t RCC_APB4LENR_I2C4EN_B_0x1 = 1;

    /** @brief LPTIM2 enable */
    using RCC_APB4LENR_LPTIM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 is disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM2 is enabled (value: 1)
     */
        /** @brief LPTIM2 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_LPTIM2EN_B_0x0 = 0;
        /** @brief LPTIM2 is enabled */
    constexpr std::uint32_t RCC_APB4LENR_LPTIM2EN_B_0x1 = 1;

    /** @brief LPTIM3 enable */
    using RCC_APB4LENR_LPTIM3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 is disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM3 is enabled (value: 1)
     */
        /** @brief LPTIM3 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_LPTIM3EN_B_0x0 = 0;
        /** @brief LPTIM3 is enabled */
    constexpr std::uint32_t RCC_APB4LENR_LPTIM3EN_B_0x1 = 1;

    /** @brief LPTIM4 enable */
    using RCC_APB4LENR_LPTIM4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 is disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM4 is enabled (value: 1)
     */
        /** @brief LPTIM4 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_LPTIM4EN_B_0x0 = 0;
        /** @brief LPTIM4 is enabled */
    constexpr std::uint32_t RCC_APB4LENR_LPTIM4EN_B_0x1 = 1;

    /** @brief LPTIM5 enable */
    using RCC_APB4LENR_LPTIM5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM5 is disabled (default after reset) (value: 0)
     *          - B_0x1: LPTIM5 is enabled (value: 1)
     */
        /** @brief LPTIM5 is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_LPTIM5EN_B_0x0 = 0;
        /** @brief LPTIM5 is enabled */
    constexpr std::uint32_t RCC_APB4LENR_LPTIM5EN_B_0x1 = 1;

    /** @brief VREFBUF enable */
    using RCC_APB4LENR_VREFBUFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF is disabled (default after reset) (value: 0)
     *          - B_0x1: VREFBUF is enabled (value: 1)
     */
        /** @brief VREFBUF is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_VREFBUFEN_B_0x0 = 0;
        /** @brief VREFBUF is enabled */
    constexpr std::uint32_t RCC_APB4LENR_VREFBUFEN_B_0x1 = 1;

    /** @brief RTC enable */
    using RCC_APB4LENR_RTCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC is disabled (default after reset) (value: 0)
     *          - B_0x1: RTC is enabled (value: 1)
     */
        /** @brief RTC is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_RTCEN_B_0x0 = 0;
        /** @brief RTC is enabled */
    constexpr std::uint32_t RCC_APB4LENR_RTCEN_B_0x1 = 1;

    /** @brief RTCAPB enable */
    using RCC_APB4LENR_RTCAPBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTCAPB is disabled (default after reset) (value: 0)
     *          - B_0x1: RTCAPB is enabled (value: 1)
     */
        /** @brief RTCAPB is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_RTCAPBEN_B_0x0 = 0;
        /** @brief RTCAPB is enabled */
    constexpr std::uint32_t RCC_APB4LENR_RTCAPBEN_B_0x1 = 1;

    /** @brief R2GRET enable */
    using RCC_APB4LENR_R2GRETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: R2GRET is disabled (default after reset) (value: 0)
     *          - B_0x1: R2GRET is enabled (value: 1)
     */
        /** @brief R2GRET is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_R2GRETEN_B_0x0 = 0;
        /** @brief R2GRET is enabled */
    constexpr std::uint32_t RCC_APB4LENR_R2GRETEN_B_0x1 = 1;

    /** @brief R2GNPU enable */
    using RCC_APB4LENR_R2GNPUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: R2GNPU is disabled (default after reset) (value: 0)
     *          - B_0x1: R2GNPU is enabled (value: 1)
     */
        /** @brief R2GNPU is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_R2GNPUEN_B_0x0 = 0;
        /** @brief R2GNPU is enabled */
    constexpr std::uint32_t RCC_APB4LENR_R2GNPUEN_B_0x1 = 1;

    /** @brief SERF enable */
    using RCC_APB4LENR_SERFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SERF is disabled (default after reset) (value: 0)
     *          - B_0x1: SERF is enabled (value: 1)
     */
        /** @brief SERF is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4LENR_SERFEN_B_0x0 = 0;
        /** @brief SERF is enabled */
    constexpr std::uint32_t RCC_APB4LENR_SERFEN_B_0x1 = 1;

    /** @brief RCC APB4H enable register */
    using RCC_APB4HENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG enable */
    using RCC_APB4HENR_SYSCFGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG is disabled (default after reset) (value: 0)
     *          - B_0x1: SYSCFG is enabled (value: 1)
     */
        /** @brief SYSCFG is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4HENR_SYSCFGEN_B_0x0 = 0;
        /** @brief SYSCFG is enabled */
    constexpr std::uint32_t RCC_APB4HENR_SYSCFGEN_B_0x1 = 1;

    /** @brief BSEC enable */
    using RCC_APB4HENR_BSECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSEC is disabled (value: 0)
     *          - B_0x1: BSEC is enabled (default after reset) (value: 1)
     */
        /** @brief BSEC is disabled */
    constexpr std::uint32_t RCC_APB4HENR_BSECEN_B_0x0 = 0;
        /** @brief BSEC is enabled (default after reset) */
    constexpr std::uint32_t RCC_APB4HENR_BSECEN_B_0x1 = 1;

    /** @brief DTS enable */
    using RCC_APB4HENR_DTSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS is disabled (default after reset) (value: 0)
     *          - B_0x1: DTS is enabled (value: 1)
     */
        /** @brief DTS is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4HENR_DTSEN_B_0x0 = 0;
        /** @brief DTS is enabled */
    constexpr std::uint32_t RCC_APB4HENR_DTSEN_B_0x1 = 1;

    /** @brief BUSPERFM enable */
    using RCC_APB4HENR_BUSPERFMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSPERFM is disabled (default after reset) (value: 0)
     *          - B_0x1: BUSPERFM is enabled (value: 1)
     */
        /** @brief BUSPERFM is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB4HENR_BUSPERFMEN_B_0x0 = 0;
        /** @brief BUSPERFM is enabled */
    constexpr std::uint32_t RCC_APB4HENR_BUSPERFMEN_B_0x1 = 1;

    /** @brief RCC APB5 enable register */
    using RCC_APB5ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC enable */
    using RCC_APB5ENR_LTDCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC is disabled (default after reset) (value: 0)
     *          - B_0x1: LTDC is enabled (value: 1)
     */
        /** @brief LTDC is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB5ENR_LTDCEN_B_0x0 = 0;
        /** @brief LTDC is enabled */
    constexpr std::uint32_t RCC_APB5ENR_LTDCEN_B_0x1 = 1;

    /** @brief DCMIPP enable */
    using RCC_APB5ENR_DCMIPPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMIPP is disabled (default after reset) (value: 0)
     *          - B_0x1: DCMIPP is enabled (value: 1)
     */
        /** @brief DCMIPP is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB5ENR_DCMIPPEN_B_0x0 = 0;
        /** @brief DCMIPP is enabled */
    constexpr std::uint32_t RCC_APB5ENR_DCMIPPEN_B_0x1 = 1;

    /** @brief GFXTIM enable */
    using RCC_APB5ENR_GFXTIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXTIM is disabled (default after reset) (value: 0)
     *          - B_0x1: GFXTIM is enabled (value: 1)
     */
        /** @brief GFXTIM is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB5ENR_GFXTIMEN_B_0x0 = 0;
        /** @brief GFXTIM is enabled */
    constexpr std::uint32_t RCC_APB5ENR_GFXTIMEN_B_0x1 = 1;

    /** @brief VENC enable */
    using RCC_APB5ENR_VENCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VENC is disabled (default after reset) (value: 0)
     *          - B_0x1: VENC is enabled (value: 1)
     */
        /** @brief VENC is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB5ENR_VENCEN_B_0x0 = 0;
        /** @brief VENC is enabled */
    constexpr std::uint32_t RCC_APB5ENR_VENCEN_B_0x1 = 1;

    /** @brief CSI enable */
    using RCC_APB5ENR_CSIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI is disabled (default after reset) (value: 0)
     *          - B_0x1: CSI is enabled (value: 1)
     */
        /** @brief CSI is disabled (default after reset) */
    constexpr std::uint32_t RCC_APB5ENR_CSIEN_B_0x0 = 0;
        /** @brief CSI is enabled */
    constexpr std::uint32_t RCC_APB5ENR_CSIEN_B_0x1 = 1;

    /** @brief RCC dividers Sleep enable register */
    using RCC_DIVLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC1 sleep enable */
    using RCC_DIVLPENR_IC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC1 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC1LPEN_B_0x0 = 0;
        /** @brief IC1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC1LPEN_B_0x1 = 1;

    /** @brief IC2 sleep enable */
    using RCC_DIVLPENR_IC2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC2 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC2LPEN_B_0x0 = 0;
        /** @brief IC2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC2LPEN_B_0x1 = 1;

    /** @brief IC3 sleep enable */
    using RCC_DIVLPENR_IC3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC3 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC3LPEN_B_0x0 = 0;
        /** @brief IC3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC3LPEN_B_0x1 = 1;

    /** @brief IC4 sleep enable */
    using RCC_DIVLPENR_IC4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC4 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC4LPEN_B_0x0 = 0;
        /** @brief IC4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC4LPEN_B_0x1 = 1;

    /** @brief IC5 sleep enable */
    using RCC_DIVLPENR_IC5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC5 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC5 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC5 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC5LPEN_B_0x0 = 0;
        /** @brief IC5 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC5LPEN_B_0x1 = 1;

    /** @brief IC6 sleep enable */
    using RCC_DIVLPENR_IC6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC6 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC6 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC6 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC6LPEN_B_0x0 = 0;
        /** @brief IC6 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC6LPEN_B_0x1 = 1;

    /** @brief IC7 sleep enable */
    using RCC_DIVLPENR_IC7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC7 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC7 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC7 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC7LPEN_B_0x0 = 0;
        /** @brief IC7 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC7LPEN_B_0x1 = 1;

    /** @brief IC8 sleep enable */
    using RCC_DIVLPENR_IC8LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC8 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC8 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC8 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC8LPEN_B_0x0 = 0;
        /** @brief IC8 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC8LPEN_B_0x1 = 1;

    /** @brief IC9 sleep enable */
    using RCC_DIVLPENR_IC9LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC9 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC9 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC9 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC9LPEN_B_0x0 = 0;
        /** @brief IC9 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC9LPEN_B_0x1 = 1;

    /** @brief IC10 sleep enable */
    using RCC_DIVLPENR_IC10LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC10 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC10 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC10 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC10LPEN_B_0x0 = 0;
        /** @brief IC10 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC10LPEN_B_0x1 = 1;

    /** @brief IC11 sleep enable */
    using RCC_DIVLPENR_IC11LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC11 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC11 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC11 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC11LPEN_B_0x0 = 0;
        /** @brief IC11 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC11LPEN_B_0x1 = 1;

    /** @brief IC12 sleep enable */
    using RCC_DIVLPENR_IC12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC12 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC12 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC12 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC12LPEN_B_0x0 = 0;
        /** @brief IC12 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC12LPEN_B_0x1 = 1;

    /** @brief IC13 sleep enable */
    using RCC_DIVLPENR_IC13LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC13 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC13 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC13 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC13LPEN_B_0x0 = 0;
        /** @brief IC13 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC13LPEN_B_0x1 = 1;

    /** @brief IC14 sleep enable */
    using RCC_DIVLPENR_IC14LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC14 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC14 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC14 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC14LPEN_B_0x0 = 0;
        /** @brief IC14 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC14LPEN_B_0x1 = 1;

    /** @brief IC15 sleep enable */
    using RCC_DIVLPENR_IC15LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC15 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC15 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC15 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC15LPEN_B_0x0 = 0;
        /** @brief IC15 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC15LPEN_B_0x1 = 1;

    /** @brief IC16 sleep enable */
    using RCC_DIVLPENR_IC16LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC16 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC16 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC16 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC16LPEN_B_0x0 = 0;
        /** @brief IC16 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC16LPEN_B_0x1 = 1;

    /** @brief IC17 sleep enable */
    using RCC_DIVLPENR_IC17LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC17 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC17 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC17 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC17LPEN_B_0x0 = 0;
        /** @brief IC17 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC17LPEN_B_0x1 = 1;

    /** @brief IC18 sleep enable */
    using RCC_DIVLPENR_IC18LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC18 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC18 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC18 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC18LPEN_B_0x0 = 0;
        /** @brief IC18 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC18LPEN_B_0x1 = 1;

    /** @brief IC19 sleep enable */
    using RCC_DIVLPENR_IC19LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC19 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC19 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC19 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC19LPEN_B_0x0 = 0;
        /** @brief IC19 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC19LPEN_B_0x1 = 1;

    /** @brief IC20 sleep enable */
    using RCC_DIVLPENR_IC20LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC20 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: IC20 is enabled in Sleep mode (value: 1)
     */
        /** @brief IC20 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_DIVLPENR_IC20LPEN_B_0x0 = 0;
        /** @brief IC20 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_DIVLPENR_IC20LPEN_B_0x1 = 1;

    /** @brief RCC SoC buses Sleep enable register */
    using RCC_BUSLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKN sleep enable */
    using RCC_BUSLPENR_ACLKNLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKN is disabled in Sleep mode (value: 0)
     *          - B_0x1: ACLKN is enabled in Sleep mode (default after reset) (value: 1)
     */
        /** @brief ACLKN is disabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_ACLKNLPEN_B_0x0 = 0;
        /** @brief ACLKN is enabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_ACLKNLPEN_B_0x1 = 1;

    /** @brief ACLKNC sleep enable */
    using RCC_BUSLPENR_ACLKNCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKNC is disabled in Sleep mode (value: 0)
     *          - B_0x1: ACLKNC is enabled in Sleep mode (default after reset) (value: 1)
     */
        /** @brief ACLKNC is disabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_ACLKNCLPEN_B_0x0 = 0;
        /** @brief ACLKNC is enabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_ACLKNCLPEN_B_0x1 = 1;

    /** @brief AHBM sleep enable */
    using RCC_BUSLPENR_AHBMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBM is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AHBM is enabled in Sleep mode (value: 1)
     */
        /** @brief AHBM is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_AHBMLPEN_B_0x0 = 0;
        /** @brief AHBM is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_AHBMLPEN_B_0x1 = 1;

    /** @brief AHB1 sleep enable */
    using RCC_BUSLPENR_AHB1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AHB1 is enabled in Sleep mode (value: 1)
     */
        /** @brief AHB1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_AHB1LPEN_B_0x0 = 0;
        /** @brief AHB1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_AHB1LPEN_B_0x1 = 1;

    /** @brief AHB2 sleep enable */
    using RCC_BUSLPENR_AHB2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AHB2 is enabled in Sleep mode (value: 1)
     */
        /** @brief AHB2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_AHB2LPEN_B_0x0 = 0;
        /** @brief AHB2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_AHB2LPEN_B_0x1 = 1;

    /** @brief AHB3 sleep enable */
    using RCC_BUSLPENR_AHB3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AHB3 is enabled in Sleep mode (value: 1)
     */
        /** @brief AHB3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_AHB3LPEN_B_0x0 = 0;
        /** @brief AHB3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_AHB3LPEN_B_0x1 = 1;

    /** @brief AHB4 sleep enable */
    using RCC_BUSLPENR_AHB4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AHB4 is enabled in Sleep mode (value: 1)
     */
        /** @brief AHB4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_AHB4LPEN_B_0x0 = 0;
        /** @brief AHB4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_AHB4LPEN_B_0x1 = 1;

    /** @brief AHB5 sleep enable */
    using RCC_BUSLPENR_AHB5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB5 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AHB5 is enabled in Sleep mode (value: 1)
     */
        /** @brief AHB5 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_AHB5LPEN_B_0x0 = 0;
        /** @brief AHB5 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_AHB5LPEN_B_0x1 = 1;

    /** @brief APB1 sleep enable */
    using RCC_BUSLPENR_APB1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: APB1 is enabled in Sleep mode (value: 1)
     */
        /** @brief APB1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_APB1LPEN_B_0x0 = 0;
        /** @brief APB1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_APB1LPEN_B_0x1 = 1;

    /** @brief APB2 sleep enable */
    using RCC_BUSLPENR_APB2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: APB2 is enabled in Sleep mode (value: 1)
     */
        /** @brief APB2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_APB2LPEN_B_0x0 = 0;
        /** @brief APB2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_APB2LPEN_B_0x1 = 1;

    /** @brief APB3 sleep enable */
    using RCC_BUSLPENR_APB3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: APB3 is enabled in Sleep mode (value: 1)
     */
        /** @brief APB3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_APB3LPEN_B_0x0 = 0;
        /** @brief APB3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_APB3LPEN_B_0x1 = 1;

    /** @brief APB4 sleep enable */
    using RCC_BUSLPENR_APB4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: APB4 is enabled in Sleep mode (value: 1)
     */
        /** @brief APB4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_APB4LPEN_B_0x0 = 0;
        /** @brief APB4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_APB4LPEN_B_0x1 = 1;

    /** @brief APB5 sleep enable */
    using RCC_BUSLPENR_APB5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB5 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: APB5 is enabled in Sleep mode (value: 1)
     */
        /** @brief APB5 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_BUSLPENR_APB5LPEN_B_0x0 = 0;
        /** @brief APB5 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_BUSLPENR_APB5LPEN_B_0x1 = 1;

    /** @brief RCC miscellaneous configurations Sleep enable register */
    using RCC_MISCLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG sleep enable */
    using RCC_MISCLPENR_DBGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBG is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: DBG is enabled in Sleep mode (value: 1)
     */
        /** @brief DBG is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MISCLPENR_DBGLPEN_B_0x0 = 0;
        /** @brief DBG is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MISCLPENR_DBGLPEN_B_0x1 = 1;

    /** @brief XSPIPHYCOMP sleep enable */
    using RCC_MISCLPENR_XSPIPHYCOMPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIPHYCOMP is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: XSPIPHYCOMP is enabled in Sleep mode (value: 1)
     */
        /** @brief XSPIPHYCOMP is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MISCLPENR_XSPIPHYCOMPLPEN_B_0x0 = 0;
        /** @brief XSPIPHYCOMP is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MISCLPENR_XSPIPHYCOMPLPEN_B_0x1 = 1;

    /** @brief PER sleep enable */
    using RCC_MISCLPENR_PERLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PER is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: PER is enabled in Sleep mode (value: 1)
     */
        /** @brief PER is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MISCLPENR_PERLPEN_B_0x0 = 0;
        /** @brief PER is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MISCLPENR_PERLPEN_B_0x1 = 1;

    /** @brief RCC memory Sleep enable register */
    using RCC_MEMLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM3 sleep enable */
    using RCC_MEMLPENR_AXISRAM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AXISRAM3 is enabled in Sleep mode (value: 1)
     */
        /** @brief AXISRAM3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM3LPEN_B_0x0 = 0;
        /** @brief AXISRAM3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM3LPEN_B_0x1 = 1;

    /** @brief AXISRAM4 sleep enable */
    using RCC_MEMLPENR_AXISRAM4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AXISRAM4 is enabled in Sleep mode (value: 1)
     */
        /** @brief AXISRAM4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM4LPEN_B_0x0 = 0;
        /** @brief AXISRAM4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM4LPEN_B_0x1 = 1;

    /** @brief AXISRAM5 sleep enable */
    using RCC_MEMLPENR_AXISRAM5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM5 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AXISRAM5 is enabled in Sleep mode (value: 1)
     */
        /** @brief AXISRAM5 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM5LPEN_B_0x0 = 0;
        /** @brief AXISRAM5 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM5LPEN_B_0x1 = 1;

    /** @brief AXISRAM6 sleep enable */
    using RCC_MEMLPENR_AXISRAM6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM6 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AXISRAM6 is enabled in Sleep mode (value: 1)
     */
        /** @brief AXISRAM6 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM6LPEN_B_0x0 = 0;
        /** @brief AXISRAM6 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM6LPEN_B_0x1 = 1;

    /** @brief AHBSRAM1 sleep enable */
    using RCC_MEMLPENR_AHBSRAM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AHBSRAM1 is enabled in Sleep mode (value: 1)
     */
        /** @brief AHBSRAM1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_AHBSRAM1LPEN_B_0x0 = 0;
        /** @brief AHBSRAM1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_AHBSRAM1LPEN_B_0x1 = 1;

    /** @brief AHBSRAM2 sleep enable */
    using RCC_MEMLPENR_AHBSRAM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AHBSRAM2 is enabled in Sleep mode (value: 1)
     */
        /** @brief AHBSRAM2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_AHBSRAM2LPEN_B_0x0 = 0;
        /** @brief AHBSRAM2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_AHBSRAM2LPEN_B_0x1 = 1;

    /** @brief BKPSRAM sleep enable */
    using RCC_MEMLPENR_BKPSRAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPSRAM is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: BKPSRAM is enabled in Sleep mode (value: 1)
     */
        /** @brief BKPSRAM is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_BKPSRAMLPEN_B_0x0 = 0;
        /** @brief BKPSRAM is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_BKPSRAMLPEN_B_0x1 = 1;

    /** @brief AXISRAM1 sleep enable */
    using RCC_MEMLPENR_AXISRAM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AXISRAM1 is enabled in Sleep mode (value: 1)
     */
        /** @brief AXISRAM1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM1LPEN_B_0x0 = 0;
        /** @brief AXISRAM1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM1LPEN_B_0x1 = 1;

    /** @brief AXISRAM2 sleep enable */
    using RCC_MEMLPENR_AXISRAM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: AXISRAM2 is enabled in Sleep mode (value: 1)
     */
        /** @brief AXISRAM2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM2LPEN_B_0x0 = 0;
        /** @brief AXISRAM2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_AXISRAM2LPEN_B_0x1 = 1;

    /** @brief FLEXRAM sleep enable */
    using RCC_MEMLPENR_FLEXRAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLEXRAM is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: FLEXRAM is enabled in Sleep mode (value: 1)
     */
        /** @brief FLEXRAM is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_FLEXRAMLPEN_B_0x0 = 0;
        /** @brief FLEXRAM is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_FLEXRAMLPEN_B_0x1 = 1;

    /** @brief NPUCACHERAM sleep enable */
    using RCC_MEMLPENR_NPUCACHERAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPUCACHERAM is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: NPUCACHERAM is enabled in Sleep mode (value: 1)
     */
        /** @brief NPUCACHERAM is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_NPUCACHERAMLPEN_B_0x0 = 0;
        /** @brief NPUCACHERAM is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_NPUCACHERAMLPEN_B_0x1 = 1;

    /** @brief VENCRAM sleep enable */
    using RCC_MEMLPENR_VENCRAMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VENCRAM is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: VENCRAM is enabled in Sleep mode (value: 1)
     */
        /** @brief VENCRAM is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_VENCRAMLPEN_B_0x0 = 0;
        /** @brief VENCRAM is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_VENCRAMLPEN_B_0x1 = 1;

    /** @brief BOOTROM sleep enable */
    using RCC_MEMLPENR_BOOTROMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOOTROM is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: BOOTROM is enabled in Sleep mode (value: 1)
     */
        /** @brief BOOTROM is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_MEMLPENR_BOOTROMLPEN_B_0x0 = 0;
        /** @brief BOOTROM is enabled in Sleep mode */
    constexpr std::uint32_t RCC_MEMLPENR_BOOTROMLPEN_B_0x1 = 1;

    /** @brief RCC AHB1 Sleep enable register */
    using RCC_AHB1LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 sleep enable */
    using RCC_AHB1LPENR_GPDMA1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPDMA1 is enabled in Sleep mode (value: 1)
     */
        /** @brief GPDMA1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA1LPEN_B_0x0 = 0;
        /** @brief GPDMA1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_GPDMA1LPEN_B_0x1 = 1;

    /** @brief ADC12 sleep enable */
    using RCC_AHB1LPENR_ADC12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC12 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: ADC12 is enabled in Sleep mode (value: 1)
     */
        /** @brief ADC12 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB1LPENR_ADC12LPEN_B_0x0 = 0;
        /** @brief ADC12 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB1LPENR_ADC12LPEN_B_0x1 = 1;

    /** @brief RCC AHB2 Sleep enable register */
    using RCC_AHB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG sleep enable */
    using RCC_AHB2LPENR_RAMCFGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAMCFG is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: RAMCFG is enabled in Sleep mode (value: 1)
     */
        /** @brief RAMCFG is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_RAMCFGLPEN_B_0x0 = 0;
        /** @brief RAMCFG is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_RAMCFGLPEN_B_0x1 = 1;

    /** @brief MDF1 sleep enable */
    using RCC_AHB2LPENR_MDF1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: MDF1 is enabled in Sleep mode (value: 1)
     */
        /** @brief MDF1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_MDF1LPEN_B_0x0 = 0;
        /** @brief MDF1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_MDF1LPEN_B_0x1 = 1;

    /** @brief ADF1 sleep enable */
    using RCC_AHB2LPENR_ADF1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: ADF1 is enabled in Sleep mode (value: 1)
     */
        /** @brief ADF1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB2LPENR_ADF1LPEN_B_0x0 = 0;
        /** @brief ADF1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB2LPENR_ADF1LPEN_B_0x1 = 1;

    /** @brief RCC AHB3 Sleep enable register */
    using RCC_AHB3LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG sleep enable */
    using RCC_AHB3LPENR_RNGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: RNG is enabled in Sleep mode (value: 1)
     */
        /** @brief RNG is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_RNGLPEN_B_0x0 = 0;
        /** @brief RNG is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_RNGLPEN_B_0x1 = 1;

    /** @brief HASH sleep enable */
    using RCC_AHB3LPENR_HASHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HASH is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: HASH is enabled in Sleep mode (value: 1)
     */
        /** @brief HASH is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_HASHLPEN_B_0x0 = 0;
        /** @brief HASH is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_HASHLPEN_B_0x1 = 1;

    /** @brief CRYP sleep enable */
    using RCC_AHB3LPENR_CRYPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRYP is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: CRYP is enabled in Sleep mode (value: 1)
     */
        /** @brief CRYP is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_CRYPLPEN_B_0x0 = 0;
        /** @brief CRYP is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_CRYPLPEN_B_0x1 = 1;

    /** @brief SAES sleep enable */
    using RCC_AHB3LPENR_SAESLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAES is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SAES is enabled in Sleep mode (value: 1)
     */
        /** @brief SAES is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_SAESLPEN_B_0x0 = 0;
        /** @brief SAES is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_SAESLPEN_B_0x1 = 1;

    /** @brief PKA sleep enable */
    using RCC_AHB3LPENR_PKALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: PKA is enabled in Sleep mode (value: 1)
     */
        /** @brief PKA is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_PKALPEN_B_0x0 = 0;
        /** @brief PKA is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_PKALPEN_B_0x1 = 1;

    /** @brief RIFSC sleep enable */
    using RCC_AHB3LPENR_RIFSCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIFSC is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: RIFSC is enabled in Sleep mode (value: 1)
     */
        /** @brief RIFSC is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_RIFSCLPEN_B_0x0 = 0;
        /** @brief RIFSC is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_RIFSCLPEN_B_0x1 = 1;

    /** @brief IAC sleep enable */
    using RCC_AHB3LPENR_IACLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IAC is disabled in Sleep mode (value: 0)
     *          - B_0x1: IAC is enabled in Sleep mode (default after reset) (value: 1)
     */
        /** @brief IAC is disabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_IACLPEN_B_0x0 = 0;
        /** @brief IAC is enabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_IACLPEN_B_0x1 = 1;

    /** @brief RISAF sleep enable */
    using RCC_AHB3LPENR_RISAFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: RISAF is enabled in Sleep mode (value: 1)
     */
        /** @brief RISAF is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB3LPENR_RISAFLPEN_B_0x0 = 0;
        /** @brief RISAF is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB3LPENR_RISAFLPEN_B_0x1 = 1;

    /** @brief RCC AHB4 Sleep enable register */
    using RCC_AHB4LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA sleep enable */
    using RCC_AHB4LPENR_GPIOALPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOA is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOA is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOA is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOALPEN_B_0x0 = 0;
        /** @brief GPIOA is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOALPEN_B_0x1 = 1;

    /** @brief GPIOB sleep enable */
    using RCC_AHB4LPENR_GPIOBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOB is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOB is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOB is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOBLPEN_B_0x0 = 0;
        /** @brief GPIOB is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOBLPEN_B_0x1 = 1;

    /** @brief GPIOC sleep enable */
    using RCC_AHB4LPENR_GPIOCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOC is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOC is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOC is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOCLPEN_B_0x0 = 0;
        /** @brief GPIOC is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOCLPEN_B_0x1 = 1;

    /** @brief GPIOD sleep enable */
    using RCC_AHB4LPENR_GPIODLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOD is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOD is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOD is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIODLPEN_B_0x0 = 0;
        /** @brief GPIOD is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIODLPEN_B_0x1 = 1;

    /** @brief GPIOE sleep enable */
    using RCC_AHB4LPENR_GPIOELPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOE is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOE is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOE is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOELPEN_B_0x0 = 0;
        /** @brief GPIOE is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOELPEN_B_0x1 = 1;

    /** @brief GPIOF sleep enable */
    using RCC_AHB4LPENR_GPIOFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOF is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOF is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOF is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOFLPEN_B_0x0 = 0;
        /** @brief GPIOF is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOFLPEN_B_0x1 = 1;

    /** @brief GPIOG sleep enable */
    using RCC_AHB4LPENR_GPIOGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOG is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOG is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOG is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOGLPEN_B_0x0 = 0;
        /** @brief GPIOG is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOGLPEN_B_0x1 = 1;

    /** @brief GPIOH sleep enable */
    using RCC_AHB4LPENR_GPIOHLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOH is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOH is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOH is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOHLPEN_B_0x0 = 0;
        /** @brief GPIOH is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOHLPEN_B_0x1 = 1;

    /** @brief GPION sleep enable */
    using RCC_AHB4LPENR_GPIONLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPION is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPION is enabled in Sleep mode (value: 1)
     */
        /** @brief GPION is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIONLPEN_B_0x0 = 0;
        /** @brief GPION is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIONLPEN_B_0x1 = 1;

    /** @brief GPIOO sleep enable */
    using RCC_AHB4LPENR_GPIOOLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOO is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOO is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOO is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOOLPEN_B_0x0 = 0;
        /** @brief GPIOO is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOOLPEN_B_0x1 = 1;

    /** @brief GPIOP sleep enable */
    using RCC_AHB4LPENR_GPIOPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOP is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOP is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOP is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOPLPEN_B_0x0 = 0;
        /** @brief GPIOP is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOPLPEN_B_0x1 = 1;

    /** @brief GPIOQ sleep enable */
    using RCC_AHB4LPENR_GPIOQLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIOQ is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPIOQ is enabled in Sleep mode (value: 1)
     */
        /** @brief GPIOQ is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOQLPEN_B_0x0 = 0;
        /** @brief GPIOQ is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_GPIOQLPEN_B_0x1 = 1;

    /** @brief PWR sleep enable */
    using RCC_AHB4LPENR_PWRLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR is disabled in Sleep mode (value: 0)
     *          - B_0x1: PWR is enabled in Sleep mode (default after reset) (value: 1)
     */
        /** @brief PWR is disabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_PWRLPEN_B_0x0 = 0;
        /** @brief PWR is enabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_PWRLPEN_B_0x1 = 1;

    /** @brief CRC sleep enable */
    using RCC_AHB4LPENR_CRCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: CRC is enabled in Sleep mode (value: 1)
     */
        /** @brief CRC is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB4LPENR_CRCLPEN_B_0x0 = 0;
        /** @brief CRC is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB4LPENR_CRCLPEN_B_0x1 = 1;

    /** @brief RCC AHB5 Sleep enable register */
    using RCC_AHB5LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 sleep enable */
    using RCC_AHB5LPENR_HPDMA1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPDMA1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: HPDMA1 is enabled in Sleep mode (value: 1)
     */
        /** @brief HPDMA1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_HPDMA1LPEN_B_0x0 = 0;
        /** @brief HPDMA1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_HPDMA1LPEN_B_0x1 = 1;

    /** @brief DMA2D sleep enable */
    using RCC_AHB5LPENR_DMA2DLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: DMA2D is enabled in Sleep mode (value: 1)
     */
        /** @brief DMA2D is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_DMA2DLPEN_B_0x0 = 0;
        /** @brief DMA2D is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_DMA2DLPEN_B_0x1 = 1;

    /** @brief JPEG sleep enable */
    using RCC_AHB5LPENR_JPEGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JPEG is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: JPEG is enabled in Sleep mode (value: 1)
     */
        /** @brief JPEG is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_JPEGLPEN_B_0x0 = 0;
        /** @brief JPEG is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_JPEGLPEN_B_0x1 = 1;

    /** @brief FMC sleep enable */
    using RCC_AHB5LPENR_FMCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: FMC is enabled in Sleep mode (value: 1)
     */
        /** @brief FMC is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_FMCLPEN_B_0x0 = 0;
        /** @brief FMC is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_FMCLPEN_B_0x1 = 1;

    /** @brief XSPI1 sleep enable */
    using RCC_AHB5LPENR_XSPI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: XSPI1 is enabled in Sleep mode (value: 1)
     */
        /** @brief XSPI1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI1LPEN_B_0x0 = 0;
        /** @brief XSPI1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI1LPEN_B_0x1 = 1;

    /** @brief PSSI sleep enable */
    using RCC_AHB5LPENR_PSSILPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PSSI is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: PSSI is enabled in Sleep mode (value: 1)
     */
        /** @brief PSSI is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_PSSILPEN_B_0x0 = 0;
        /** @brief PSSI is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_PSSILPEN_B_0x1 = 1;

    /** @brief SDMMC2 sleep enable */
    using RCC_AHB5LPENR_SDMMC2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SDMMC2 is enabled in Sleep mode (value: 1)
     */
        /** @brief SDMMC2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_SDMMC2LPEN_B_0x0 = 0;
        /** @brief SDMMC2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_SDMMC2LPEN_B_0x1 = 1;

    /** @brief SDMMC1 sleep enable */
    using RCC_AHB5LPENR_SDMMC1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDMMC1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SDMMC1 is enabled in Sleep mode (value: 1)
     */
        /** @brief SDMMC1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_SDMMC1LPEN_B_0x0 = 0;
        /** @brief SDMMC1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_SDMMC1LPEN_B_0x1 = 1;

    /** @brief XSPI2 sleep enable */
    using RCC_AHB5LPENR_XSPI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: XSPI2 is enabled in Sleep mode (value: 1)
     */
        /** @brief XSPI2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI2LPEN_B_0x0 = 0;
        /** @brief XSPI2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI2LPEN_B_0x1 = 1;

    /** @brief XSPIM sleep enable */
    using RCC_AHB5LPENR_XSPIMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIM is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: XSPIM is enabled in Sleep mode (value: 1)
     */
        /** @brief XSPIM is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPIMLPEN_B_0x0 = 0;
        /** @brief XSPIM is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPIMLPEN_B_0x1 = 1;

    /** @brief MCE1 sleep enable */
    using RCC_AHB5LPENR_MCE1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: MCE1 is enabled in Sleep mode (value: 1)
     */
        /** @brief MCE1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_MCE1LPEN_B_0x0 = 0;
        /** @brief MCE1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_MCE1LPEN_B_0x1 = 1;

    /** @brief MCE2 sleep enable */
    using RCC_AHB5LPENR_MCE2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: MCE2 is enabled in Sleep mode (value: 1)
     */
        /** @brief MCE2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_MCE2LPEN_B_0x0 = 0;
        /** @brief MCE2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_MCE2LPEN_B_0x1 = 1;

    /** @brief MCE3 sleep enable */
    using RCC_AHB5LPENR_MCE3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: MCE3 is enabled in Sleep mode (value: 1)
     */
        /** @brief MCE3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_MCE3LPEN_B_0x0 = 0;
        /** @brief MCE3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_MCE3LPEN_B_0x1 = 1;

    /** @brief XSPI3 sleep enable */
    using RCC_AHB5LPENR_XSPI3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: XSPI3 is enabled in Sleep mode (value: 1)
     */
        /** @brief XSPI3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI3LPEN_B_0x0 = 0;
        /** @brief XSPI3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_XSPI3LPEN_B_0x1 = 1;

    /** @brief MCE4 sleep enable */
    using RCC_AHB5LPENR_MCE4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: MCE4 is enabled in Sleep mode (value: 1)
     */
        /** @brief MCE4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_MCE4LPEN_B_0x0 = 0;
        /** @brief MCE4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_MCE4LPEN_B_0x1 = 1;

    /** @brief GFXMMU sleep enable */
    using RCC_AHB5LPENR_GFXMMULPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXMMU is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GFXMMU is enabled in Sleep mode (value: 1)
     */
        /** @brief GFXMMU is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_GFXMMULPEN_B_0x0 = 0;
        /** @brief GFXMMU is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_GFXMMULPEN_B_0x1 = 1;

    /** @brief GPU sleep enable */
    using RCC_AHB5LPENR_GPULPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPU is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GPU is enabled in Sleep mode (value: 1)
     */
        /** @brief GPU is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_GPULPEN_B_0x0 = 0;
        /** @brief GPU is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_GPULPEN_B_0x1 = 1;

    /** @brief ETH1MAC sleep enable */
    using RCC_AHB5LPENR_ETH1MACLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1MAC is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: ETH1MAC is enabled in Sleep mode (value: 1)
     */
        /** @brief ETH1MAC is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_ETH1MACLPEN_B_0x0 = 0;
        /** @brief ETH1MAC is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_ETH1MACLPEN_B_0x1 = 1;

    /** @brief ETH1TX sleep enable */
    using RCC_AHB5LPENR_ETH1TXLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1TX is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: ETH1TX is enabled in Sleep mode (value: 1)
     */
        /** @brief ETH1TX is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_ETH1TXLPEN_B_0x0 = 0;
        /** @brief ETH1TX is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_ETH1TXLPEN_B_0x1 = 1;

    /** @brief ETH1RX sleep enable */
    using RCC_AHB5LPENR_ETH1RXLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1RX is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: ETH1RX is enabled in Sleep mode (value: 1)
     */
        /** @brief ETH1RX is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_ETH1RXLPEN_B_0x0 = 0;
        /** @brief ETH1RX is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_ETH1RXLPEN_B_0x1 = 1;

    /** @brief ETH1 sleep enable */
    using RCC_AHB5LPENR_ETH1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: ETH1 is enabled in Sleep mode (value: 1)
     */
        /** @brief ETH1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_ETH1LPEN_B_0x0 = 0;
        /** @brief ETH1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_ETH1LPEN_B_0x1 = 1;

    /** @brief OTG1 sleep enable */
    using RCC_AHB5LPENR_OTG1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: OTG1 is enabled in Sleep mode (value: 1)
     */
        /** @brief OTG1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_OTG1LPEN_B_0x0 = 0;
        /** @brief OTG1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_OTG1LPEN_B_0x1 = 1;

    /** @brief OTGPHY1 sleep enable */
    using RCC_AHB5LPENR_OTGPHY1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGPHY1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: OTGPHY1 is enabled in Sleep mode (value: 1)
     */
        /** @brief OTGPHY1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_OTGPHY1LPEN_B_0x0 = 0;
        /** @brief OTGPHY1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_OTGPHY1LPEN_B_0x1 = 1;

    /** @brief OTGPHY2 sleep enable */
    using RCC_AHB5LPENR_OTGPHY2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTGPHY2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: OTGPHY2 is enabled in Sleep mode (value: 1)
     */
        /** @brief OTGPHY2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_OTGPHY2LPEN_B_0x0 = 0;
        /** @brief OTGPHY2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_OTGPHY2LPEN_B_0x1 = 1;

    /** @brief OTG2 sleep enable */
    using RCC_AHB5LPENR_OTG2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: OTG2 is enabled in Sleep mode (value: 1)
     */
        /** @brief OTG2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_OTG2LPEN_B_0x0 = 0;
        /** @brief OTG2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_OTG2LPEN_B_0x1 = 1;

    /** @brief NPUCACHE sleep enable */
    using RCC_AHB5LPENR_NPUCACHELPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPUCACHE is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: NPUCACHE is enabled in Sleep mode (value: 1)
     */
        /** @brief NPUCACHE is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_NPUCACHELPEN_B_0x0 = 0;
        /** @brief NPUCACHE is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_NPUCACHELPEN_B_0x1 = 1;

    /** @brief NPU sleep enable */
    using RCC_AHB5LPENR_NPULPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPU is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: NPU is enabled in Sleep mode (value: 1)
     */
        /** @brief NPU is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_AHB5LPENR_NPULPEN_B_0x0 = 0;
        /** @brief NPU is enabled in Sleep mode */
    constexpr std::uint32_t RCC_AHB5LPENR_NPULPEN_B_0x1 = 1;

    /** @brief RCC APB1L Sleep enable register */
    using RCC_APB1LLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 sleep enable */
    using RCC_APB1LLPENR_TIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM2 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM2LPEN_B_0x0 = 0;
        /** @brief TIM2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM2LPEN_B_0x1 = 1;

    /** @brief TIM3 sleep enable */
    using RCC_APB1LLPENR_TIM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM3 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM3LPEN_B_0x0 = 0;
        /** @brief TIM3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM3LPEN_B_0x1 = 1;

    /** @brief TIM4 sleep enable */
    using RCC_APB1LLPENR_TIM4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM4 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM4LPEN_B_0x0 = 0;
        /** @brief TIM4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM4LPEN_B_0x1 = 1;

    /** @brief TIM5 sleep enable */
    using RCC_APB1LLPENR_TIM5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM5 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM5 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM5 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM5LPEN_B_0x0 = 0;
        /** @brief TIM5 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM5LPEN_B_0x1 = 1;

    /** @brief TIM6 sleep enable */
    using RCC_APB1LLPENR_TIM6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM6 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM6 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM6 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM6LPEN_B_0x0 = 0;
        /** @brief TIM6 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM6LPEN_B_0x1 = 1;

    /** @brief TIM7 sleep enable */
    using RCC_APB1LLPENR_TIM7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM7 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM7 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM7 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM7LPEN_B_0x0 = 0;
        /** @brief TIM7 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM7LPEN_B_0x1 = 1;

    /** @brief TIM12 sleep enable */
    using RCC_APB1LLPENR_TIM12LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM12 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM12 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM12 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM12LPEN_B_0x0 = 0;
        /** @brief TIM12 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM12LPEN_B_0x1 = 1;

    /** @brief TIM13 sleep enable */
    using RCC_APB1LLPENR_TIM13LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM13 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM13 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM13 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM13LPEN_B_0x0 = 0;
        /** @brief TIM13 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM13LPEN_B_0x1 = 1;

    /** @brief TIM14 sleep enable */
    using RCC_APB1LLPENR_TIM14LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM14 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM14 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM14 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM14LPEN_B_0x0 = 0;
        /** @brief TIM14 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM14LPEN_B_0x1 = 1;

    /** @brief LPTIM1 sleep enable */
    using RCC_APB1LLPENR_LPTIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: LPTIM1 is enabled in Sleep mode (value: 1)
     */
        /** @brief LPTIM1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_LPTIM1LPEN_B_0x0 = 0;
        /** @brief LPTIM1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_LPTIM1LPEN_B_0x1 = 1;

    /** @brief WWDG sleep enable */
    using RCC_APB1LLPENR_WWDGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WWDG is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: WWDG is enabled in Sleep mode (value: 1)
     */
        /** @brief WWDG is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_WWDGLPEN_B_0x0 = 0;
        /** @brief WWDG is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_WWDGLPEN_B_0x1 = 1;

    /** @brief TIM10 sleep enable */
    using RCC_APB1LLPENR_TIM10LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM10 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM10 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM10 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM10LPEN_B_0x0 = 0;
        /** @brief TIM10 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM10LPEN_B_0x1 = 1;

    /** @brief TIM11 sleep enable */
    using RCC_APB1LLPENR_TIM11LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM11 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM11 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM11 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM11LPEN_B_0x0 = 0;
        /** @brief TIM11 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_TIM11LPEN_B_0x1 = 1;

    /** @brief SPI2 sleep enable */
    using RCC_APB1LLPENR_SPI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SPI2 is enabled in Sleep mode (value: 1)
     */
        /** @brief SPI2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI2LPEN_B_0x0 = 0;
        /** @brief SPI2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI2LPEN_B_0x1 = 1;

    /** @brief SPI3 sleep enable */
    using RCC_APB1LLPENR_SPI3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SPI3 is enabled in Sleep mode (value: 1)
     */
        /** @brief SPI3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI3LPEN_B_0x0 = 0;
        /** @brief SPI3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPI3LPEN_B_0x1 = 1;

    /** @brief SPDIFRX1 sleep enable */
    using RCC_APB1LLPENR_SPDIFRX1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPDIFRX1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SPDIFRX1 is enabled in Sleep mode (value: 1)
     */
        /** @brief SPDIFRX1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_SPDIFRX1LPEN_B_0x0 = 0;
        /** @brief SPDIFRX1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_SPDIFRX1LPEN_B_0x1 = 1;

    /** @brief USART2 sleep enable */
    using RCC_APB1LLPENR_USART2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: USART2 is enabled in Sleep mode (value: 1)
     */
        /** @brief USART2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART2LPEN_B_0x0 = 0;
        /** @brief USART2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART2LPEN_B_0x1 = 1;

    /** @brief USART3 sleep enable */
    using RCC_APB1LLPENR_USART3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: USART3 is enabled in Sleep mode (value: 1)
     */
        /** @brief USART3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_USART3LPEN_B_0x0 = 0;
        /** @brief USART3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_USART3LPEN_B_0x1 = 1;

    /** @brief UART4 sleep enable */
    using RCC_APB1LLPENR_UART4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: UART4 is enabled in Sleep mode (value: 1)
     */
        /** @brief UART4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART4LPEN_B_0x0 = 0;
        /** @brief UART4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART4LPEN_B_0x1 = 1;

    /** @brief UART5 sleep enable */
    using RCC_APB1LLPENR_UART5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART5 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: UART5 is enabled in Sleep mode (value: 1)
     */
        /** @brief UART5 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART5LPEN_B_0x0 = 0;
        /** @brief UART5 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART5LPEN_B_0x1 = 1;

    /** @brief I2C1 sleep enable */
    using RCC_APB1LLPENR_I2C1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: I2C1 is enabled in Sleep mode (value: 1)
     */
        /** @brief I2C1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C1LPEN_B_0x0 = 0;
        /** @brief I2C1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C1LPEN_B_0x1 = 1;

    /** @brief I2C2 sleep enable */
    using RCC_APB1LLPENR_I2C2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: I2C2 is enabled in Sleep mode (value: 1)
     */
        /** @brief I2C2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C2LPEN_B_0x0 = 0;
        /** @brief I2C2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C2LPEN_B_0x1 = 1;

    /** @brief I2C3 sleep enable */
    using RCC_APB1LLPENR_I2C3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: I2C3 is enabled in Sleep mode (value: 1)
     */
        /** @brief I2C3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C3LPEN_B_0x0 = 0;
        /** @brief I2C3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I2C3LPEN_B_0x1 = 1;

    /** @brief I3C1 sleep enable */
    using RCC_APB1LLPENR_I3C1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: I3C1 is enabled in Sleep mode (value: 1)
     */
        /** @brief I3C1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I3C1LPEN_B_0x0 = 0;
        /** @brief I3C1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I3C1LPEN_B_0x1 = 1;

    /** @brief I3C2 sleep enable */
    using RCC_APB1LLPENR_I3C2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I3C2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: I3C2 is enabled in Sleep mode (value: 1)
     */
        /** @brief I3C2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_I3C2LPEN_B_0x0 = 0;
        /** @brief I3C2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_I3C2LPEN_B_0x1 = 1;

    /** @brief UART7 sleep enable */
    using RCC_APB1LLPENR_UART7LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART7 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: UART7 is enabled in Sleep mode (value: 1)
     */
        /** @brief UART7 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART7LPEN_B_0x0 = 0;
        /** @brief UART7 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART7LPEN_B_0x1 = 1;

    /** @brief UART8 sleep enable */
    using RCC_APB1LLPENR_UART8LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART8 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: UART8 is enabled in Sleep mode (value: 1)
     */
        /** @brief UART8 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1LLPENR_UART8LPEN_B_0x0 = 0;
        /** @brief UART8 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1LLPENR_UART8LPEN_B_0x1 = 1;

    /** @brief RCC APB1H Sleep enable register */
    using RCC_APB1HLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS sleep enable */
    using RCC_APB1HLPENR_MDIOSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: MDIOS is enabled in Sleep mode (value: 1)
     */
        /** @brief MDIOS is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_MDIOSLPEN_B_0x0 = 0;
        /** @brief MDIOS is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_MDIOSLPEN_B_0x1 = 1;

    /** @brief FDCAN sleep enable */
    using RCC_APB1HLPENR_FDCANLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: FDCAN is enabled in Sleep mode (value: 1)
     */
        /** @brief FDCAN is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_FDCANLPEN_B_0x0 = 0;
        /** @brief FDCAN is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_FDCANLPEN_B_0x1 = 1;

    /** @brief UCPD1 sleep enable */
    using RCC_APB1HLPENR_UCPD1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: UCPD1 is enabled in Sleep mode (value: 1)
     */
        /** @brief UCPD1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB1HLPENR_UCPD1LPEN_B_0x0 = 0;
        /** @brief UCPD1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB1HLPENR_UCPD1LPEN_B_0x1 = 1;

    /** @brief RCC APB2 Sleep enable register */
    using RCC_APB2LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 sleep enable */
    using RCC_APB2LPENR_TIM1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM1 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x0 = 0;
        /** @brief TIM1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM1LPEN_B_0x1 = 1;

    /** @brief TIM8 sleep enable */
    using RCC_APB2LPENR_TIM8LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM8 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM8 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM8 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM8LPEN_B_0x0 = 0;
        /** @brief TIM8 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM8LPEN_B_0x1 = 1;

    /** @brief USART1 sleep enable */
    using RCC_APB2LPENR_USART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: USART1 is enabled in Sleep mode (value: 1)
     */
        /** @brief USART1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x0 = 0;
        /** @brief USART1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USART1LPEN_B_0x1 = 1;

    /** @brief USART6 sleep enable */
    using RCC_APB2LPENR_USART6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART6 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: USART6 is enabled in Sleep mode (value: 1)
     */
        /** @brief USART6 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USART6LPEN_B_0x0 = 0;
        /** @brief USART6 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USART6LPEN_B_0x1 = 1;

    /** @brief UART9 sleep enable */
    using RCC_APB2LPENR_UART9LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UART9 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: UART9 is enabled in Sleep mode (value: 1)
     */
        /** @brief UART9 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_UART9LPEN_B_0x0 = 0;
        /** @brief UART9 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_UART9LPEN_B_0x1 = 1;

    /** @brief USART10 sleep enable */
    using RCC_APB2LPENR_USART10LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART10 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: USART10 is enabled in Sleep mode (value: 1)
     */
        /** @brief USART10 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_USART10LPEN_B_0x0 = 0;
        /** @brief USART10 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_USART10LPEN_B_0x1 = 1;

    /** @brief SPI1 sleep enable */
    using RCC_APB2LPENR_SPI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SPI1 is enabled in Sleep mode (value: 1)
     */
        /** @brief SPI1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x0 = 0;
        /** @brief SPI1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI1LPEN_B_0x1 = 1;

    /** @brief SPI4 sleep enable */
    using RCC_APB2LPENR_SPI4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SPI4 is enabled in Sleep mode (value: 1)
     */
        /** @brief SPI4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI4LPEN_B_0x0 = 0;
        /** @brief SPI4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI4LPEN_B_0x1 = 1;

    /** @brief TIM18 sleep enable */
    using RCC_APB2LPENR_TIM18LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM18 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM18 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM18 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM18LPEN_B_0x0 = 0;
        /** @brief TIM18 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM18LPEN_B_0x1 = 1;

    /** @brief TIM15 sleep enable */
    using RCC_APB2LPENR_TIM15LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM15 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM15 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM15LPEN_B_0x0 = 0;
        /** @brief TIM15 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM15LPEN_B_0x1 = 1;

    /** @brief TIM16 sleep enable */
    using RCC_APB2LPENR_TIM16LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM16 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM16 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM16LPEN_B_0x0 = 0;
        /** @brief TIM16 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM16LPEN_B_0x1 = 1;

    /** @brief TIM17 sleep enable */
    using RCC_APB2LPENR_TIM17LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM17 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM17 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM17 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM17LPEN_B_0x0 = 0;
        /** @brief TIM17 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM17LPEN_B_0x1 = 1;

    /** @brief TIM9 sleep enable */
    using RCC_APB2LPENR_TIM9LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM9 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: TIM9 is enabled in Sleep mode (value: 1)
     */
        /** @brief TIM9 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_TIM9LPEN_B_0x0 = 0;
        /** @brief TIM9 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_TIM9LPEN_B_0x1 = 1;

    /** @brief SPI5 sleep enable */
    using RCC_APB2LPENR_SPI5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI5 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SPI5 is enabled in Sleep mode (value: 1)
     */
        /** @brief SPI5 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SPI5LPEN_B_0x0 = 0;
        /** @brief SPI5 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SPI5LPEN_B_0x1 = 1;

    /** @brief SAI1 sleep enable */
    using RCC_APB2LPENR_SAI1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SAI1 is enabled in Sleep mode (value: 1)
     */
        /** @brief SAI1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SAI1LPEN_B_0x0 = 0;
        /** @brief SAI1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SAI1LPEN_B_0x1 = 1;

    /** @brief SAI2 sleep enable */
    using RCC_APB2LPENR_SAI2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAI2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SAI2 is enabled in Sleep mode (value: 1)
     */
        /** @brief SAI2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB2LPENR_SAI2LPEN_B_0x0 = 0;
        /** @brief SAI2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB2LPENR_SAI2LPEN_B_0x1 = 1;

    /** @brief RCC APB3 Sleep enable register */
    using RCC_APB3LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFT sleep enable */
    using RCC_APB3LPENR_DFTLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFT is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: DFT is enabled in Sleep mode (value: 1)
     */
        /** @brief DFT is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB3LPENR_DFTLPEN_B_0x0 = 0;
        /** @brief DFT is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB3LPENR_DFTLPEN_B_0x1 = 1;

    /** @brief RCC APB4L Sleep enable register */
    using RCC_APB4LLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP sleep enable */
    using RCC_APB4LLPENR_HDPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HDP is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: HDP is enabled in Sleep mode (value: 1)
     */
        /** @brief HDP is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_HDPLPEN_B_0x0 = 0;
        /** @brief HDP is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_HDPLPEN_B_0x1 = 1;

    /** @brief LPUART1 sleep enable */
    using RCC_APB4LLPENR_LPUART1LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART1 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: LPUART1 is enabled in Sleep mode (value: 1)
     */
        /** @brief LPUART1 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_LPUART1LPEN_B_0x0 = 0;
        /** @brief LPUART1 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_LPUART1LPEN_B_0x1 = 1;

    /** @brief SPI6 sleep enable */
    using RCC_APB4LLPENR_SPI6LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI6 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SPI6 is enabled in Sleep mode (value: 1)
     */
        /** @brief SPI6 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_SPI6LPEN_B_0x0 = 0;
        /** @brief SPI6 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_SPI6LPEN_B_0x1 = 1;

    /** @brief I2C4 sleep enable */
    using RCC_APB4LLPENR_I2C4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: I2C4 is enabled in Sleep mode (value: 1)
     */
        /** @brief I2C4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_I2C4LPEN_B_0x0 = 0;
        /** @brief I2C4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_I2C4LPEN_B_0x1 = 1;

    /** @brief LPTIM2 sleep enable */
    using RCC_APB4LLPENR_LPTIM2LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM2 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: LPTIM2 is enabled in Sleep mode (value: 1)
     */
        /** @brief LPTIM2 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_LPTIM2LPEN_B_0x0 = 0;
        /** @brief LPTIM2 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_LPTIM2LPEN_B_0x1 = 1;

    /** @brief LPTIM3 sleep enable */
    using RCC_APB4LLPENR_LPTIM3LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM3 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: LPTIM3 is enabled in Sleep mode (value: 1)
     */
        /** @brief LPTIM3 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_LPTIM3LPEN_B_0x0 = 0;
        /** @brief LPTIM3 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_LPTIM3LPEN_B_0x1 = 1;

    /** @brief LPTIM4 sleep enable */
    using RCC_APB4LLPENR_LPTIM4LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM4 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: LPTIM4 is enabled in Sleep mode (value: 1)
     */
        /** @brief LPTIM4 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_LPTIM4LPEN_B_0x0 = 0;
        /** @brief LPTIM4 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_LPTIM4LPEN_B_0x1 = 1;

    /** @brief LPTIM5 sleep enable */
    using RCC_APB4LLPENR_LPTIM5LPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM5 is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: LPTIM5 is enabled in Sleep mode (value: 1)
     */
        /** @brief LPTIM5 is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_LPTIM5LPEN_B_0x0 = 0;
        /** @brief LPTIM5 is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_LPTIM5LPEN_B_0x1 = 1;

    /** @brief VREFBUF sleep enable */
    using RCC_APB4LLPENR_VREFBUFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFBUF is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: VREFBUF is enabled in Sleep mode (value: 1)
     */
        /** @brief VREFBUF is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_VREFBUFLPEN_B_0x0 = 0;
        /** @brief VREFBUF is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_VREFBUFLPEN_B_0x1 = 1;

    /** @brief RTC sleep enable */
    using RCC_APB4LLPENR_RTCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: RTC is enabled in Sleep mode (value: 1)
     */
        /** @brief RTC is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_RTCLPEN_B_0x0 = 0;
        /** @brief RTC is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_RTCLPEN_B_0x1 = 1;

    /** @brief RTCAPB sleep enable */
    using RCC_APB4LLPENR_RTCAPBLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTCAPB is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: RTCAPB is enabled in Sleep mode (value: 1)
     */
        /** @brief RTCAPB is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_RTCAPBLPEN_B_0x0 = 0;
        /** @brief RTCAPB is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_RTCAPBLPEN_B_0x1 = 1;

    /** @brief R2GRET sleep enable */
    using RCC_APB4LLPENR_R2GRETLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: R2GRET is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: R2GRET is enabled in Sleep mode (value: 1)
     */
        /** @brief R2GRET is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_R2GRETLPEN_B_0x0 = 0;
        /** @brief R2GRET is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_R2GRETLPEN_B_0x1 = 1;

    /** @brief R2GNPU sleep enable */
    using RCC_APB4LLPENR_R2GNPULPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: R2GNPU is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: R2GNPU is enabled in Sleep mode (value: 1)
     */
        /** @brief R2GNPU is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_R2GNPULPEN_B_0x0 = 0;
        /** @brief R2GNPU is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_R2GNPULPEN_B_0x1 = 1;

    /** @brief SERF sleep enable */
    using RCC_APB4LLPENR_SERFLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SERF is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SERF is enabled in Sleep mode (value: 1)
     */
        /** @brief SERF is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4LLPENR_SERFLPEN_B_0x0 = 0;
        /** @brief SERF is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4LLPENR_SERFLPEN_B_0x1 = 1;

    /** @brief RCC APB4H Sleep enable register */
    using RCC_APB4HLPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG sleep enable */
    using RCC_APB4HLPENR_SYSCFGLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: SYSCFG is enabled in Sleep mode (value: 1)
     */
        /** @brief SYSCFG is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4HLPENR_SYSCFGLPEN_B_0x0 = 0;
        /** @brief SYSCFG is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4HLPENR_SYSCFGLPEN_B_0x1 = 1;

    /** @brief BSEC sleep enable */
    using RCC_APB4HLPENR_BSECLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSEC is disabled in Sleep mode (value: 0)
     *          - B_0x1: BSEC is enabled in Sleep mode (default after reset) (value: 1)
     */
        /** @brief BSEC is disabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4HLPENR_BSECLPEN_B_0x0 = 0;
        /** @brief BSEC is enabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4HLPENR_BSECLPEN_B_0x1 = 1;

    /** @brief DTS sleep enable */
    using RCC_APB4HLPENR_DTSLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTS is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: DTS is enabled in Sleep mode (value: 1)
     */
        /** @brief DTS is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4HLPENR_DTSLPEN_B_0x0 = 0;
        /** @brief DTS is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4HLPENR_DTSLPEN_B_0x1 = 1;

    /** @brief BUSPERFM sleep enable */
    using RCC_APB4HLPENR_BUSPERFMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSPERFM is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: BUSPERFM is enabled in Sleep mode (value: 1)
     */
        /** @brief BUSPERFM is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB4HLPENR_BUSPERFMLPEN_B_0x0 = 0;
        /** @brief BUSPERFM is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB4HLPENR_BUSPERFMLPEN_B_0x1 = 1;

    /** @brief RCC APB5 Sleep enable register */
    using RCC_APB5LPENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC sleep enable */
    using RCC_APB5LPENR_LTDCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: LTDC is enabled in Sleep mode (value: 1)
     */
        /** @brief LTDC is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB5LPENR_LTDCLPEN_B_0x0 = 0;
        /** @brief LTDC is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB5LPENR_LTDCLPEN_B_0x1 = 1;

    /** @brief DCMIPP sleep enable */
    using RCC_APB5LPENR_DCMIPPLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMIPP is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: DCMIPP is enabled in Sleep mode (value: 1)
     */
        /** @brief DCMIPP is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB5LPENR_DCMIPPLPEN_B_0x0 = 0;
        /** @brief DCMIPP is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB5LPENR_DCMIPPLPEN_B_0x1 = 1;

    /** @brief GFXTIM sleep enable */
    using RCC_APB5LPENR_GFXTIMLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GFXTIM is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: GFXTIM is enabled in Sleep mode (value: 1)
     */
        /** @brief GFXTIM is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB5LPENR_GFXTIMLPEN_B_0x0 = 0;
        /** @brief GFXTIM is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB5LPENR_GFXTIMLPEN_B_0x1 = 1;

    /** @brief VENC sleep enable */
    using RCC_APB5LPENR_VENCLPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VENC is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: VENC is enabled in Sleep mode (value: 1)
     */
        /** @brief VENC is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB5LPENR_VENCLPEN_B_0x0 = 0;
        /** @brief VENC is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB5LPENR_VENCLPEN_B_0x1 = 1;

    /** @brief CSI sleep enable */
    using RCC_APB5LPENR_CSILPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI is disabled in Sleep mode (default after reset) (value: 0)
     *          - B_0x1: CSI is enabled in Sleep mode (value: 1)
     */
        /** @brief CSI is disabled in Sleep mode (default after reset) */
    constexpr std::uint32_t RCC_APB5LPENR_CSILPEN_B_0x0 = 0;
        /** @brief CSI is enabled in Sleep mode */
    constexpr std::uint32_t RCC_APB5LPENR_CSILPEN_B_0x1 = 1;

    /** @brief RCC APB5 Sleep enable register */
    using RCC_RDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOTROM sleep enable */
    using RCC_RDCR_MRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No extra delay added by the BOOTROM (value: 0)
     *          - B_0x1: 100 us (value: 1)
     *          - B_0x2: 200 us (value: 2)
     *          - B_0x3: 500 us (value: 3)
     *          - B_0x4: 1 ms (value: 4)
     *          - B_0x5: 2 ms (value: 5)
     *          - B_0x6: 5 ms (default after reset) (value: 6)
     *          - B_0x7: 10 ms (value: 7)
     *          - B_0x8: 20 ms (value: 8)
     *          - B_0x9: 50 ms (value: 9)
     *          - B_0xA: 100 ms (value: 10)
     *          - B_0xB: 200 ms (value: 11)
     *          - B_0xC: 500 ms (value: 12)
     *          - B_0xD: 1 s (value: 13)
     *          - B_0xE: 2 s (value: 14)
     *          - B_0xF: 5 s (value: 15)
     */
        /** @brief No extra delay added by the BOOTROM */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x0 = 0;
        /** @brief 100 us */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x1 = 1;
        /** @brief 200 us */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x2 = 2;
        /** @brief 500 us */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x3 = 3;
        /** @brief 1 ms */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x4 = 4;
        /** @brief 2 ms */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x5 = 5;
        /** @brief 5 ms (default after reset) */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x6 = 6;
        /** @brief 10 ms */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x7 = 7;
        /** @brief 20 ms */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x8 = 8;
        /** @brief 50 ms */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0x9 = 9;
        /** @brief 100 ms */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0xA = 10;
        /** @brief 200 ms */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0xB = 11;
        /** @brief 500 ms */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0xC = 12;
        /** @brief 1 s */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0xD = 13;
        /** @brief 2 s */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0xE = 14;
        /** @brief 5 s */
    constexpr std::uint32_t RCC_RDCR_MRD_B_0xF = 15;

    /** @brief BOOTROM sleep enable */
    using RCC_RDCR_EADLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sysrstn low pulse duration is guaranteed by the pulse stretcher of the PAD. The RPCTL is bypassed (default after reset) (value: 0)
     *          - B_0x1: The guaranteed sysrstn low pulse duration is about 1 ms (1 x 32 lsi_ck cycles) (value: 1)
     *          - B_0x2: The guaranteed sysrstn low pulse duration is about 2 ms (2 x 32 lsi_ck cycles) (value: 2)
     */
        /** @brief sysrstn low pulse duration is guaranteed by the pulse stretcher of the PAD. The RPCTL is bypassed (default after reset) */
    constexpr std::uint32_t RCC_RDCR_EADLY_B_0x0 = 0;
        /** @brief The guaranteed sysrstn low pulse duration is about 1 ms (1 x 32 lsi_ck cycles) */
    constexpr std::uint32_t RCC_RDCR_EADLY_B_0x1 = 1;
        /** @brief The guaranteed sysrstn low pulse duration is about 2 ms (2 x 32 lsi_ck cycles) */
    constexpr std::uint32_t RCC_RDCR_EADLY_B_0x2 = 2;

    /** @brief RCC oscillator secure configuration register0 */
    using RCC_SECCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x780, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the LSI oscillator configuration bits. */
    using RCC_SECCFGR0_LSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: LSI configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief LSI configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR0_LSISEC_B_0x0 = 0;
        /** @brief LSI configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR0_LSISEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the LSE oscillator configuration bits. */
    using RCC_SECCFGR0_LSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: LSE configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief LSE configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR0_LSESEC_B_0x0 = 0;
        /** @brief LSE configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR0_LSESEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the MSI oscillator configuration bits. */
    using RCC_SECCFGR0_MSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: MSI configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief MSI configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR0_MSISEC_B_0x0 = 0;
        /** @brief MSI configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR0_MSISEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the HSI oscillator configuration bits. */
    using RCC_SECCFGR0_HSISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: HSI configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief HSI configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR0_HSISEC_B_0x0 = 0;
        /** @brief HSI configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR0_HSISEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the HSE oscillator configuration bits. */
    using RCC_SECCFGR0_HSESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: HSE configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief HSE configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR0_HSESEC_B_0x0 = 0;
        /** @brief HSE configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR0_HSESEC_B_0x1 = 1;

    /** @brief RCC oscillator privilege configuration register0 */
    using RCC_PRIVCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x784, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the LSI oscillator configuration bits. */
    using RCC_PRIVCFGR0_LSIPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: LSI configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief LSI configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR0_LSIPV_B_0x0 = 0;
        /** @brief LSI configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR0_LSIPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the LSE oscillator configuration bits. */
    using RCC_PRIVCFGR0_LSEPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: LSE configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief LSE configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR0_LSEPV_B_0x0 = 0;
        /** @brief LSE configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR0_LSEPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the MSI oscillator configuration bits. */
    using RCC_PRIVCFGR0_MSIPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: MSI configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief MSI configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR0_MSIPV_B_0x0 = 0;
        /** @brief MSI configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR0_MSIPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the HSI oscillator configuration bits. */
    using RCC_PRIVCFGR0_HSIPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: HSI configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief HSI configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR0_HSIPV_B_0x0 = 0;
        /** @brief HSI configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR0_HSIPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the HSE oscillator configuration bits. */
    using RCC_PRIVCFGR0_HSEPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: HSE configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief HSE configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR0_HSEPV_B_0x0 = 0;
        /** @brief HSE configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR0_HSEPV_B_0x1 = 1;

    /** @brief RCC oscillator lock configuration register0 */
    using RCC_LOCKCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x788, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the LSI oscillator configuration bits. */
    using RCC_LOCKCFGR0_LSILOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: LSI configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief LSI configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR0_LSILOCK_B_0x0 = 0;
        /** @brief LSI configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR0_LSILOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the LSE oscillator configuration bits. */
    using RCC_LOCKCFGR0_LSELOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: LSE configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief LSE configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR0_LSELOCK_B_0x0 = 0;
        /** @brief LSE configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR0_LSELOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the MSI oscillator configuration bits. */
    using RCC_LOCKCFGR0_MSILOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: MSI configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief MSI configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR0_MSILOCK_B_0x0 = 0;
        /** @brief MSI configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR0_MSILOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the HSI oscillator configuration bits. */
    using RCC_LOCKCFGR0_HSILOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: HSI configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief HSI configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR0_HSILOCK_B_0x0 = 0;
        /** @brief HSI configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR0_HSILOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the HSE oscillator configuration bits. */
    using RCC_LOCKCFGR0_HSELOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: HSE configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief HSE configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR0_HSELOCK_B_0x0 = 0;
        /** @brief HSE configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR0_HSELOCK_B_0x1 = 1;

    /** @brief RCC oscillator public configuration register0 */
    using RCC_PUBCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the LSI oscillator configuration bits. */
    using RCC_PUBCFGR0_LSIPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSI configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: LSI configuration bits are accessible by public software only (value: 1)
     */
        /** @brief LSI configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR0_LSIPUB_B_0x0 = 0;
        /** @brief LSI configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR0_LSIPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the LSE oscillator configuration bits. */
    using RCC_PUBCFGR0_LSEPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LSE configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: LSE configuration bits are accessible by public software only (value: 1)
     */
        /** @brief LSE configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR0_LSEPUB_B_0x0 = 0;
        /** @brief LSE configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR0_LSEPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the MSI oscillator configuration bits. */
    using RCC_PUBCFGR0_MSIPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSI configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: MSI configuration bits are accessible by public software only (value: 1)
     */
        /** @brief MSI configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR0_MSIPUB_B_0x0 = 0;
        /** @brief MSI configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR0_MSIPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the HSI oscillator configuration bits. */
    using RCC_PUBCFGR0_HSIPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSI configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: HSI configuration bits are accessible by public software only (value: 1)
     */
        /** @brief HSI configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR0_HSIPUB_B_0x0 = 0;
        /** @brief HSI configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR0_HSIPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the HSE oscillator configuration bits. */
    using RCC_PUBCFGR0_HSEPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: HSE configuration bits are accessible by public software only (value: 1)
     */
        /** @brief HSE configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR0_HSEPUB_B_0x0 = 0;
        /** @brief HSE configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR0_HSEPUB_B_0x1 = 1;

    /** @brief RCC PLL secure configuration register1 */
    using RCC_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x790, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the PLL1 PLL configuration bits. */
    using RCC_SECCFGR1_PLL1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: PLL1 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief PLL1 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR1_PLL1SEC_B_0x0 = 0;
        /** @brief PLL1 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR1_PLL1SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the PLL2 PLL configuration bits. */
    using RCC_SECCFGR1_PLL2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: PLL2 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief PLL2 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR1_PLL2SEC_B_0x0 = 0;
        /** @brief PLL2 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR1_PLL2SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the PLL3 PLL configuration bits. */
    using RCC_SECCFGR1_PLL3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: PLL3 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief PLL3 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR1_PLL3SEC_B_0x0 = 0;
        /** @brief PLL3 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR1_PLL3SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the PLL4 PLL configuration bits. */
    using RCC_SECCFGR1_PLL4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL4 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: PLL4 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief PLL4 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR1_PLL4SEC_B_0x0 = 0;
        /** @brief PLL4 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR1_PLL4SEC_B_0x1 = 1;

    /** @brief RCC PLL privilege configuration register1 */
    using RCC_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x794, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PLL1 PLL configuration bits. */
    using RCC_PRIVCFGR1_PLL1PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: PLL1 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief PLL1 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR1_PLL1PV_B_0x0 = 0;
        /** @brief PLL1 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR1_PLL1PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the PLL2 PLL configuration bits. */
    using RCC_PRIVCFGR1_PLL2PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: PLL2 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief PLL2 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR1_PLL2PV_B_0x0 = 0;
        /** @brief PLL2 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR1_PLL2PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the PLL3 PLL configuration bits. */
    using RCC_PRIVCFGR1_PLL3PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: PLL3 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief PLL3 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR1_PLL3PV_B_0x0 = 0;
        /** @brief PLL3 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR1_PLL3PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the PLL4 PLL configuration bits. */
    using RCC_PRIVCFGR1_PLL4PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL4 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: PLL4 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief PLL4 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR1_PLL4PV_B_0x0 = 0;
        /** @brief PLL4 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR1_PLL4PV_B_0x1 = 1;

    /** @brief RCC PLL lock configuration register1 */
    using RCC_LOCKCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x798, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the PLL1 PLL configuration bits. */
    using RCC_LOCKCFGR1_PLL1LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: PLL1 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief PLL1 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR1_PLL1LOCK_B_0x0 = 0;
        /** @brief PLL1 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR1_PLL1LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the PLL2 PLL configuration bits. */
    using RCC_LOCKCFGR1_PLL2LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: PLL2 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief PLL2 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR1_PLL2LOCK_B_0x0 = 0;
        /** @brief PLL2 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR1_PLL2LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the PLL3 PLL configuration bits. */
    using RCC_LOCKCFGR1_PLL3LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: PLL3 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief PLL3 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR1_PLL3LOCK_B_0x0 = 0;
        /** @brief PLL3 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR1_PLL3LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the PLL4 PLL configuration bits. */
    using RCC_LOCKCFGR1_PLL4LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL4 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: PLL4 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief PLL4 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR1_PLL4LOCK_B_0x0 = 0;
        /** @brief PLL4 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR1_PLL4LOCK_B_0x1 = 1;

    /** @brief RCC PLL public configuration register1 */
    using RCC_PUBCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x79C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PLL1 PLL configuration bits. */
    using RCC_PUBCFGR1_PLL1PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL1 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: PLL1 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief PLL1 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR1_PLL1PUB_B_0x0 = 0;
        /** @brief PLL1 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR1_PLL1PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the PLL2 PLL configuration bits. */
    using RCC_PUBCFGR1_PLL2PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL2 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: PLL2 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief PLL2 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR1_PLL2PUB_B_0x0 = 0;
        /** @brief PLL2 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR1_PLL2PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the PLL3 PLL configuration bits. */
    using RCC_PUBCFGR1_PLL3PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL3 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: PLL3 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief PLL3 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR1_PLL3PUB_B_0x0 = 0;
        /** @brief PLL3 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR1_PLL3PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the PLL4 PLL configuration bits. */
    using RCC_PUBCFGR1_PLL4PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PLL4 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: PLL4 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief PLL4 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR1_PLL4PUB_B_0x0 = 0;
        /** @brief PLL4 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR1_PLL4PUB_B_0x1 = 1;

    /** @brief RCC divider secure configuration register2 */
    using RCC_SECCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the IC1 divider configuration bits. */
    using RCC_SECCFGR2_IC1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC1 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC1 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC1 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC1SEC_B_0x0 = 0;
        /** @brief IC1 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC1SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC2 divider configuration bits. */
    using RCC_SECCFGR2_IC2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC2 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC2 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC2 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC2SEC_B_0x0 = 0;
        /** @brief IC2 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC2SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC3 divider configuration bits. */
    using RCC_SECCFGR2_IC3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC3 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC3 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC3 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC3SEC_B_0x0 = 0;
        /** @brief IC3 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC3SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC4 divider configuration bits. */
    using RCC_SECCFGR2_IC4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC4 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC4 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC4 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC4SEC_B_0x0 = 0;
        /** @brief IC4 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC4SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC5 divider configuration bits. */
    using RCC_SECCFGR2_IC5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC5 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC5 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC5 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC5SEC_B_0x0 = 0;
        /** @brief IC5 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC5SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC6 divider configuration bits. */
    using RCC_SECCFGR2_IC6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC6 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC6 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC6 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC6SEC_B_0x0 = 0;
        /** @brief IC6 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC6SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC7 divider configuration bits. */
    using RCC_SECCFGR2_IC7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC7 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC7 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC7 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC7SEC_B_0x0 = 0;
        /** @brief IC7 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC7SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC8 divider configuration bits. */
    using RCC_SECCFGR2_IC8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC8 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC8 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC8 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC8SEC_B_0x0 = 0;
        /** @brief IC8 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC8SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC9 divider configuration bits. */
    using RCC_SECCFGR2_IC9SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC9 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC9 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC9 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC9SEC_B_0x0 = 0;
        /** @brief IC9 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC9SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC10 divider configuration bits. */
    using RCC_SECCFGR2_IC10SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC10 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC10 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC10 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC10SEC_B_0x0 = 0;
        /** @brief IC10 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC10SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC11 divider configuration bits. */
    using RCC_SECCFGR2_IC11SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC11 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC11 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC11 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC11SEC_B_0x0 = 0;
        /** @brief IC11 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC11SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC12 divider configuration bits. */
    using RCC_SECCFGR2_IC12SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC12 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC12 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC12 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC12SEC_B_0x0 = 0;
        /** @brief IC12 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC12SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC13 divider configuration bits. */
    using RCC_SECCFGR2_IC13SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC13 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC13 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC13 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC13SEC_B_0x0 = 0;
        /** @brief IC13 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC13SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC14 divider configuration bits. */
    using RCC_SECCFGR2_IC14SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC14 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC14 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC14 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC14SEC_B_0x0 = 0;
        /** @brief IC14 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC14SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC15 divider configuration bits. */
    using RCC_SECCFGR2_IC15SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC15 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC15 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC15 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC15SEC_B_0x0 = 0;
        /** @brief IC15 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC15SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC16 divider configuration bits. */
    using RCC_SECCFGR2_IC16SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC16 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC16 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC16 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC16SEC_B_0x0 = 0;
        /** @brief IC16 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC16SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC17 divider configuration bits. */
    using RCC_SECCFGR2_IC17SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC17 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC17 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC17 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC17SEC_B_0x0 = 0;
        /** @brief IC17 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC17SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC18 divider configuration bits. */
    using RCC_SECCFGR2_IC18SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC18 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC18 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC18 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC18SEC_B_0x0 = 0;
        /** @brief IC18 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC18SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC19 divider configuration bits. */
    using RCC_SECCFGR2_IC19SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC19 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC19 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC19 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC19SEC_B_0x0 = 0;
        /** @brief IC19 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC19SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the IC20 divider configuration bits. */
    using RCC_SECCFGR2_IC20SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC20 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: IC20 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief IC20 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR2_IC20SEC_B_0x0 = 0;
        /** @brief IC20 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR2_IC20SEC_B_0x1 = 1;

    /** @brief RCC divider privilege configuration register2 */
    using RCC_PRIVCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC1 divider configuration bits. */
    using RCC_PRIVCFGR2_IC1PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC1 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC1 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC1 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC1PV_B_0x0 = 0;
        /** @brief IC1 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC1PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC2 divider configuration bits. */
    using RCC_PRIVCFGR2_IC2PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC2 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC2 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC2 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC2PV_B_0x0 = 0;
        /** @brief IC2 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC2PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC3 divider configuration bits. */
    using RCC_PRIVCFGR2_IC3PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC3 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC3 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC3 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC3PV_B_0x0 = 0;
        /** @brief IC3 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC3PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC4 divider configuration bits. */
    using RCC_PRIVCFGR2_IC4PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC4 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC4 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC4 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC4PV_B_0x0 = 0;
        /** @brief IC4 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC4PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC5 divider configuration bits. */
    using RCC_PRIVCFGR2_IC5PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC5 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC5 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC5 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC5PV_B_0x0 = 0;
        /** @brief IC5 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC5PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC6 divider configuration bits. */
    using RCC_PRIVCFGR2_IC6PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC6 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC6 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC6 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC6PV_B_0x0 = 0;
        /** @brief IC6 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC6PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC7 divider configuration bits. */
    using RCC_PRIVCFGR2_IC7PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC7 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC7 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC7 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC7PV_B_0x0 = 0;
        /** @brief IC7 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC7PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC8 divider configuration bits. */
    using RCC_PRIVCFGR2_IC8PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC8 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC8 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC8 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC8PV_B_0x0 = 0;
        /** @brief IC8 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC8PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC9 divider configuration bits. */
    using RCC_PRIVCFGR2_IC9PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC9 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC9 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC9 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC9PV_B_0x0 = 0;
        /** @brief IC9 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC9PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC10 divider configuration bits. */
    using RCC_PRIVCFGR2_IC10PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC10 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC10 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC10 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC10PV_B_0x0 = 0;
        /** @brief IC10 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC10PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC11 divider configuration bits. */
    using RCC_PRIVCFGR2_IC11PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC11 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC11 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC11 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC11PV_B_0x0 = 0;
        /** @brief IC11 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC11PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC12 divider configuration bits. */
    using RCC_PRIVCFGR2_IC12PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC12 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC12 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC12 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC12PV_B_0x0 = 0;
        /** @brief IC12 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC12PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC13 divider configuration bits. */
    using RCC_PRIVCFGR2_IC13PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC13 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC13 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC13 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC13PV_B_0x0 = 0;
        /** @brief IC13 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC13PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC14 divider configuration bits. */
    using RCC_PRIVCFGR2_IC14PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC14 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC14 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC14 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC14PV_B_0x0 = 0;
        /** @brief IC14 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC14PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC15 divider configuration bits. */
    using RCC_PRIVCFGR2_IC15PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC15 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC15 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC15 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC15PV_B_0x0 = 0;
        /** @brief IC15 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC15PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC16 divider configuration bits. */
    using RCC_PRIVCFGR2_IC16PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC16 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC16 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC16 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC16PV_B_0x0 = 0;
        /** @brief IC16 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC16PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC17 divider configuration bits. */
    using RCC_PRIVCFGR2_IC17PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC17 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC17 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC17 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC17PV_B_0x0 = 0;
        /** @brief IC17 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC17PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC18 divider configuration bits. */
    using RCC_PRIVCFGR2_IC18PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC18 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC18 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC18 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC18PV_B_0x0 = 0;
        /** @brief IC18 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC18PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC19 divider configuration bits. */
    using RCC_PRIVCFGR2_IC19PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC19 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC19 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC19 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC19PV_B_0x0 = 0;
        /** @brief IC19 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC19PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the IC20 divider configuration bits. */
    using RCC_PRIVCFGR2_IC20PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC20 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: IC20 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief IC20 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC20PV_B_0x0 = 0;
        /** @brief IC20 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR2_IC20PV_B_0x1 = 1;

    /** @brief RCC divider lock configuration register2 */
    using RCC_LOCKCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the IC1 divider configuration bits. */
    using RCC_LOCKCFGR2_IC1LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC1 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC1 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC1 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC1LOCK_B_0x0 = 0;
        /** @brief IC1 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC1LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC2 divider configuration bits. */
    using RCC_LOCKCFGR2_IC2LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC2 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC2 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC2 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC2LOCK_B_0x0 = 0;
        /** @brief IC2 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC2LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC3 divider configuration bits. */
    using RCC_LOCKCFGR2_IC3LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC3 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC3 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC3 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC3LOCK_B_0x0 = 0;
        /** @brief IC3 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC3LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC4 divider configuration bits. */
    using RCC_LOCKCFGR2_IC4LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC4 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC4 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC4 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC4LOCK_B_0x0 = 0;
        /** @brief IC4 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC4LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC5 divider configuration bits. */
    using RCC_LOCKCFGR2_IC5LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC5 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC5 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC5 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC5LOCK_B_0x0 = 0;
        /** @brief IC5 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC5LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC6 divider configuration bits. */
    using RCC_LOCKCFGR2_IC6LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC6 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC6 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC6 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC6LOCK_B_0x0 = 0;
        /** @brief IC6 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC6LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC7 divider configuration bits. */
    using RCC_LOCKCFGR2_IC7LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC7 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC7 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC7 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC7LOCK_B_0x0 = 0;
        /** @brief IC7 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC7LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC8 divider configuration bits. */
    using RCC_LOCKCFGR2_IC8LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC8 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC8 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC8 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC8LOCK_B_0x0 = 0;
        /** @brief IC8 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC8LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC9 divider configuration bits. */
    using RCC_LOCKCFGR2_IC9LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC9 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC9 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC9 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC9LOCK_B_0x0 = 0;
        /** @brief IC9 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC9LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC10 divider configuration bits. */
    using RCC_LOCKCFGR2_IC10LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC10 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC10 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC10 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC10LOCK_B_0x0 = 0;
        /** @brief IC10 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC10LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC11 divider configuration bits. */
    using RCC_LOCKCFGR2_IC11LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC11 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC11 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC11 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC11LOCK_B_0x0 = 0;
        /** @brief IC11 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC11LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC12 divider configuration bits. */
    using RCC_LOCKCFGR2_IC12LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC12 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC12 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC12 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC12LOCK_B_0x0 = 0;
        /** @brief IC12 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC12LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC13 divider configuration bits. */
    using RCC_LOCKCFGR2_IC13LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC13 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC13 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC13 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC13LOCK_B_0x0 = 0;
        /** @brief IC13 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC13LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC14 divider configuration bits. */
    using RCC_LOCKCFGR2_IC14LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC14 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC14 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC14 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC14LOCK_B_0x0 = 0;
        /** @brief IC14 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC14LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC15 divider configuration bits. */
    using RCC_LOCKCFGR2_IC15LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC15 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC15 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC15 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC15LOCK_B_0x0 = 0;
        /** @brief IC15 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC15LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC16 divider configuration bits. */
    using RCC_LOCKCFGR2_IC16LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC16 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC16 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC16 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC16LOCK_B_0x0 = 0;
        /** @brief IC16 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC16LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC17 divider configuration bits. */
    using RCC_LOCKCFGR2_IC17LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC17 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC17 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC17 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC17LOCK_B_0x0 = 0;
        /** @brief IC17 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC17LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC18 divider configuration bits. */
    using RCC_LOCKCFGR2_IC18LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC18 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC18 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC18 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC18LOCK_B_0x0 = 0;
        /** @brief IC18 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC18LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC19 divider configuration bits. */
    using RCC_LOCKCFGR2_IC19LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC19 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC19 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC19 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC19LOCK_B_0x0 = 0;
        /** @brief IC19 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC19LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the IC20 divider configuration bits. */
    using RCC_LOCKCFGR2_IC20LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC20 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: IC20 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief IC20 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC20LOCK_B_0x0 = 0;
        /** @brief IC20 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR2_IC20LOCK_B_0x1 = 1;

    /** @brief RCC divider public configuration register2 */
    using RCC_PUBCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC1 divider configuration bits. */
    using RCC_PUBCFGR2_IC1PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC1 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC1 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC1 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC1PUB_B_0x0 = 0;
        /** @brief IC1 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC1PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC2 divider configuration bits. */
    using RCC_PUBCFGR2_IC2PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC2 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC2 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC2 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC2PUB_B_0x0 = 0;
        /** @brief IC2 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC2PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC3 divider configuration bits. */
    using RCC_PUBCFGR2_IC3PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC3 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC3 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC3 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC3PUB_B_0x0 = 0;
        /** @brief IC3 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC3PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC4 divider configuration bits. */
    using RCC_PUBCFGR2_IC4PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC4 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC4 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC4 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC4PUB_B_0x0 = 0;
        /** @brief IC4 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC4PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC5 divider configuration bits. */
    using RCC_PUBCFGR2_IC5PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC5 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC5 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC5 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC5PUB_B_0x0 = 0;
        /** @brief IC5 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC5PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC6 divider configuration bits. */
    using RCC_PUBCFGR2_IC6PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC6 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC6 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC6 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC6PUB_B_0x0 = 0;
        /** @brief IC6 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC6PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC7 divider configuration bits. */
    using RCC_PUBCFGR2_IC7PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC7 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC7 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC7 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC7PUB_B_0x0 = 0;
        /** @brief IC7 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC7PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC8 divider configuration bits. */
    using RCC_PUBCFGR2_IC8PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC8 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC8 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC8 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC8PUB_B_0x0 = 0;
        /** @brief IC8 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC8PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC9 divider configuration bits. */
    using RCC_PUBCFGR2_IC9PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC9 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC9 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC9 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC9PUB_B_0x0 = 0;
        /** @brief IC9 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC9PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC10 divider configuration bits. */
    using RCC_PUBCFGR2_IC10PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC10 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC10 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC10 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC10PUB_B_0x0 = 0;
        /** @brief IC10 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC10PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC11 divider configuration bits. */
    using RCC_PUBCFGR2_IC11PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC11 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC11 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC11 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC11PUB_B_0x0 = 0;
        /** @brief IC11 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC11PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC12 divider configuration bits. */
    using RCC_PUBCFGR2_IC12PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC12 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC12 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC12 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC12PUB_B_0x0 = 0;
        /** @brief IC12 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC12PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC13 divider configuration bits. */
    using RCC_PUBCFGR2_IC13PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC13 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC13 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC13 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC13PUB_B_0x0 = 0;
        /** @brief IC13 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC13PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC14 divider configuration bits. */
    using RCC_PUBCFGR2_IC14PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC14 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC14 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC14 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC14PUB_B_0x0 = 0;
        /** @brief IC14 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC14PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC15 divider configuration bits. */
    using RCC_PUBCFGR2_IC15PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC15 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC15 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC15 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC15PUB_B_0x0 = 0;
        /** @brief IC15 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC15PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC16 divider configuration bits. */
    using RCC_PUBCFGR2_IC16PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC16 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC16 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC16 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC16PUB_B_0x0 = 0;
        /** @brief IC16 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC16PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC17 divider configuration bits. */
    using RCC_PUBCFGR2_IC17PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC17 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC17 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC17 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC17PUB_B_0x0 = 0;
        /** @brief IC17 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC17PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC18 divider configuration bits. */
    using RCC_PUBCFGR2_IC18PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC18 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC18 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC18 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC18PUB_B_0x0 = 0;
        /** @brief IC18 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC18PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC19 divider configuration bits. */
    using RCC_PUBCFGR2_IC19PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC19 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC19 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC19 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC19PUB_B_0x0 = 0;
        /** @brief IC19 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC19PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the IC20 divider configuration bits. */
    using RCC_PUBCFGR2_IC20PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IC20 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: IC20 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief IC20 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR2_IC20PUB_B_0x0 = 0;
        /** @brief IC20 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR2_IC20PUB_B_0x1 = 1;

    /** @brief RCC system secure configuration register3 */
    using RCC_SECCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the MOD system configuration bits. */
    using RCC_SECCFGR3_MODSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MOD configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: MOD configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief MOD configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR3_MODSEC_B_0x0 = 0;
        /** @brief MOD configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR3_MODSEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the SYS system configuration bits. */
    using RCC_SECCFGR3_SYSSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYS configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: SYS configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief SYS configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR3_SYSSEC_B_0x0 = 0;
        /** @brief SYS configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR3_SYSSEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the BUS system configuration bits. */
    using RCC_SECCFGR3_BUSSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUS configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: BUS configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief BUS configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR3_BUSSEC_B_0x0 = 0;
        /** @brief BUS configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR3_BUSSEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the PER system configuration bits. */
    using RCC_SECCFGR3_PERSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PER configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: PER configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief PER configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR3_PERSEC_B_0x0 = 0;
        /** @brief PER configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR3_PERSEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the INT system configuration bits. */
    using RCC_SECCFGR3_INTSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: INT configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: INT configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief INT configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR3_INTSEC_B_0x0 = 0;
        /** @brief INT configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR3_INTSEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the RST system configuration bits. */
    using RCC_SECCFGR3_RSTSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RST configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: RST configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief RST configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR3_RSTSEC_B_0x0 = 0;
        /** @brief RST configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR3_RSTSEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the DFT system configuration bits. */
    using RCC_SECCFGR3_DFTSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFT configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: DFT configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief DFT configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR3_DFTSEC_B_0x0 = 0;
        /** @brief DFT configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR3_DFTSEC_B_0x1 = 1;

    /** @brief RCC system privilege configuration register3 */
    using RCC_PRIVCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the MOD system configuration bits. */
    using RCC_PRIVCFGR3_MODPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MOD configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: MOD configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief MOD configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR3_MODPV_B_0x0 = 0;
        /** @brief MOD configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR3_MODPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the SYS system configuration bits. */
    using RCC_PRIVCFGR3_SYSPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYS configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: SYS configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief SYS configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR3_SYSPV_B_0x0 = 0;
        /** @brief SYS configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR3_SYSPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the BUS system configuration bits. */
    using RCC_PRIVCFGR3_BUSPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUS configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: BUS configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief BUS configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR3_BUSPV_B_0x0 = 0;
        /** @brief BUS configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR3_BUSPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the PER system configuration bits. */
    using RCC_PRIVCFGR3_PERPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PER configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: PER configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief PER configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR3_PERPV_B_0x0 = 0;
        /** @brief PER configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR3_PERPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the INT system configuration bits. */
    using RCC_PRIVCFGR3_INTPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: INT configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: INT configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief INT configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR3_INTPV_B_0x0 = 0;
        /** @brief INT configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR3_INTPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the RST system configuration bits. */
    using RCC_PRIVCFGR3_RSTPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RST configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: RST configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief RST configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR3_RSTPV_B_0x0 = 0;
        /** @brief RST configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR3_RSTPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the DFT system configuration bits. */
    using RCC_PRIVCFGR3_DFTPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFT configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: DFT configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief DFT configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR3_DFTPV_B_0x0 = 0;
        /** @brief DFT configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR3_DFTPV_B_0x1 = 1;

    /** @brief RCC system lock configuration register3 */
    using RCC_LOCKCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the MOD system configuration bits. */
    using RCC_LOCKCFGR3_MODLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MOD configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: MOD configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief MOD configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR3_MODLOCK_B_0x0 = 0;
        /** @brief MOD configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR3_MODLOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the SYS system configuration bits. */
    using RCC_LOCKCFGR3_SYSLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYS configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: SYS configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief SYS configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR3_SYSLOCK_B_0x0 = 0;
        /** @brief SYS configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR3_SYSLOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the BUS system configuration bits. */
    using RCC_LOCKCFGR3_BUSLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUS configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: BUS configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief BUS configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR3_BUSLOCK_B_0x0 = 0;
        /** @brief BUS configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR3_BUSLOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the PER system configuration bits. */
    using RCC_LOCKCFGR3_PERLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PER configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: PER configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief PER configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR3_PERLOCK_B_0x0 = 0;
        /** @brief PER configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR3_PERLOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the INT system configuration bits. */
    using RCC_LOCKCFGR3_INTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: INT configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: INT configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief INT configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR3_INTLOCK_B_0x0 = 0;
        /** @brief INT configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR3_INTLOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the RST system configuration bits. */
    using RCC_LOCKCFGR3_RSTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RST configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: RST configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief RST configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR3_RSTLOCK_B_0x0 = 0;
        /** @brief RST configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR3_RSTLOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the DFT system configuration bits. */
    using RCC_LOCKCFGR3_DFTLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFT configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: DFT configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief DFT configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR3_DFTLOCK_B_0x0 = 0;
        /** @brief DFT configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR3_DFTLOCK_B_0x1 = 1;

    /** @brief RCC system public configuration register3 */
    using RCC_PUBCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the MOD system configuration bits. */
    using RCC_PUBCFGR3_MODPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MOD configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: MOD configuration bits are accessible by public software only (value: 1)
     */
        /** @brief MOD configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR3_MODPUB_B_0x0 = 0;
        /** @brief MOD configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR3_MODPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the SYS system configuration bits. */
    using RCC_PUBCFGR3_SYSPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYS configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: SYS configuration bits are accessible by public software only (value: 1)
     */
        /** @brief SYS configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR3_SYSPUB_B_0x0 = 0;
        /** @brief SYS configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR3_SYSPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the BUS system configuration bits. */
    using RCC_PUBCFGR3_BUSPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUS configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: BUS configuration bits are accessible by public software only (value: 1)
     */
        /** @brief BUS configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR3_BUSPUB_B_0x0 = 0;
        /** @brief BUS configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR3_BUSPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the PER system configuration bits. */
    using RCC_PUBCFGR3_PERPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PER configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: PER configuration bits are accessible by public software only (value: 1)
     */
        /** @brief PER configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR3_PERPUB_B_0x0 = 0;
        /** @brief PER configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR3_PERPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the INT system configuration bits. */
    using RCC_PUBCFGR3_INTPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: INT configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: INT configuration bits are accessible by public software only (value: 1)
     */
        /** @brief INT configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR3_INTPUB_B_0x0 = 0;
        /** @brief INT configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR3_INTPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the RST system configuration bits. */
    using RCC_PUBCFGR3_RSTPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RST configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: RST configuration bits are accessible by public software only (value: 1)
     */
        /** @brief RST configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR3_RSTPUB_B_0x0 = 0;
        /** @brief RST configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR3_RSTPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the DFT system configuration bits. */
    using RCC_PUBCFGR3_DFTPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFT configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: DFT configuration bits are accessible by public software only (value: 1)
     */
        /** @brief DFT configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR3_DFTPUB_B_0x0 = 0;
        /** @brief DFT configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR3_DFTPUB_B_0x1 = 1;

    /** @brief RCC bus secure configuration register4 */
    using RCC_SECCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the ACLKN bus configuration bits. */
    using RCC_SECCFGR4_ACLKNSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKN configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: ACLKN configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief ACLKN configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_ACLKNSEC_B_0x0 = 0;
        /** @brief ACLKN configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_ACLKNSEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the ACLKNC bus configuration bits. */
    using RCC_SECCFGR4_ACLKNCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKNC configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: ACLKNC configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief ACLKNC configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_ACLKNCSEC_B_0x0 = 0;
        /** @brief ACLKNC configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_ACLKNCSEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the AHBM bus configuration bits. */
    using RCC_SECCFGR4_AHBMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBM configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: AHBM configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief AHBM configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_AHBMSEC_B_0x0 = 0;
        /** @brief AHBM configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_AHBMSEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the AHB1 bus configuration bits. */
    using RCC_SECCFGR4_AHB1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB1 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: AHB1 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief AHB1 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_AHB1SEC_B_0x0 = 0;
        /** @brief AHB1 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_AHB1SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the AHB2 bus configuration bits. */
    using RCC_SECCFGR4_AHB2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: AHB2 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief AHB2 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_AHB2SEC_B_0x0 = 0;
        /** @brief AHB2 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_AHB2SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the AHB3 bus configuration bits. */
    using RCC_SECCFGR4_AHB3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB3 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: AHB3 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief AHB3 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_AHB3SEC_B_0x0 = 0;
        /** @brief AHB3 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_AHB3SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the AHB4 bus configuration bits. */
    using RCC_SECCFGR4_AHB4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB4 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: AHB4 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief AHB4 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_AHB4SEC_B_0x0 = 0;
        /** @brief AHB4 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_AHB4SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the AHB5 bus configuration bits. */
    using RCC_SECCFGR4_AHB5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB5 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: AHB5 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief AHB5 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_AHB5SEC_B_0x0 = 0;
        /** @brief AHB5 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_AHB5SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the APB1 bus configuration bits. */
    using RCC_SECCFGR4_APB1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: APB1 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief APB1 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_APB1SEC_B_0x0 = 0;
        /** @brief APB1 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_APB1SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the APB2 bus configuration bits. */
    using RCC_SECCFGR4_APB2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: APB2 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief APB2 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_APB2SEC_B_0x0 = 0;
        /** @brief APB2 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_APB2SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the APB3 bus configuration bits. */
    using RCC_SECCFGR4_APB3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: APB3 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief APB3 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_APB3SEC_B_0x0 = 0;
        /** @brief APB3 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_APB3SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the APB4 bus configuration bits. */
    using RCC_SECCFGR4_APB4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB4 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: APB4 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief APB4 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_APB4SEC_B_0x0 = 0;
        /** @brief APB4 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_APB4SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the APB5 bus configuration bits. */
    using RCC_SECCFGR4_APB5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB5 configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: APB5 configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief APB5 configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_APB5SEC_B_0x0 = 0;
        /** @brief APB5 configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_APB5SEC_B_0x1 = 1;

    /** @brief Defines the secure protection of the NOC bus configuration bits. */
    using RCC_SECCFGR4_NOCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NOC configuration bits are accessible by non-secure software only (default after reset) (value: 0)
     *          - B_0x1: NOC configuration bits are accessible by secure software only (value: 1)
     */
        /** @brief NOC configuration bits are accessible by non-secure software only (default after reset) */
    constexpr std::uint32_t RCC_SECCFGR4_NOCSEC_B_0x0 = 0;
        /** @brief NOC configuration bits are accessible by secure software only */
    constexpr std::uint32_t RCC_SECCFGR4_NOCSEC_B_0x1 = 1;

    /** @brief RCC bus privilege configuration register4 */
    using RCC_PRIVCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the ACLKN bus configuration bits. */
    using RCC_PRIVCFGR4_ACLKNPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKN configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: ACLKN configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief ACLKN configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_ACLKNPV_B_0x0 = 0;
        /** @brief ACLKN configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_ACLKNPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the ACLKNC bus configuration bits. */
    using RCC_PRIVCFGR4_ACLKNCPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKNC configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: ACLKNC configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief ACLKNC configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_ACLKNCPV_B_0x0 = 0;
        /** @brief ACLKNC configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_ACLKNCPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the AHBM bus configuration bits. */
    using RCC_PRIVCFGR4_AHBMPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBM configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: AHBM configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief AHBM configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHBMPV_B_0x0 = 0;
        /** @brief AHBM configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHBMPV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the AHB1 bus configuration bits. */
    using RCC_PRIVCFGR4_AHB1PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB1 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: AHB1 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief AHB1 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB1PV_B_0x0 = 0;
        /** @brief AHB1 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB1PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the AHB2 bus configuration bits. */
    using RCC_PRIVCFGR4_AHB2PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: AHB2 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief AHB2 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB2PV_B_0x0 = 0;
        /** @brief AHB2 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB2PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the AHB3 bus configuration bits. */
    using RCC_PRIVCFGR4_AHB3PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB3 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: AHB3 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief AHB3 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB3PV_B_0x0 = 0;
        /** @brief AHB3 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB3PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the AHB4 bus configuration bits. */
    using RCC_PRIVCFGR4_AHB4PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB4 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: AHB4 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief AHB4 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB4PV_B_0x0 = 0;
        /** @brief AHB4 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB4PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the AHB5 bus configuration bits. */
    using RCC_PRIVCFGR4_AHB5PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB5 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: AHB5 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief AHB5 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB5PV_B_0x0 = 0;
        /** @brief AHB5 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_AHB5PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the APB1 bus configuration bits. */
    using RCC_PRIVCFGR4_APB1PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: APB1 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief APB1 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB1PV_B_0x0 = 0;
        /** @brief APB1 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB1PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the APB2 bus configuration bits. */
    using RCC_PRIVCFGR4_APB2PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: APB2 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief APB2 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB2PV_B_0x0 = 0;
        /** @brief APB2 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB2PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the APB3 bus configuration bits. */
    using RCC_PRIVCFGR4_APB3PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: APB3 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief APB3 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB3PV_B_0x0 = 0;
        /** @brief APB3 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB3PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the APB4 bus configuration bits. */
    using RCC_PRIVCFGR4_APB4PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB4 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: APB4 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief APB4 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB4PV_B_0x0 = 0;
        /** @brief APB4 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB4PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the APB5 bus configuration bits. */
    using RCC_PRIVCFGR4_APB5PV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB5 configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: APB5 configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief APB5 configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB5PV_B_0x0 = 0;
        /** @brief APB5 configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_APB5PV_B_0x1 = 1;

    /** @brief Defines the privilege protection of the NOC bus configuration bits. */
    using RCC_PRIVCFGR4_NOCPV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NOC configuration bits are accessible by non-privilege software only (default after reset) (value: 0)
     *          - B_0x1: NOC configuration bits are accessible by privilege software only (value: 1)
     */
        /** @brief NOC configuration bits are accessible by non-privilege software only (default after reset) */
    constexpr std::uint32_t RCC_PRIVCFGR4_NOCPV_B_0x0 = 0;
        /** @brief NOC configuration bits are accessible by privilege software only */
    constexpr std::uint32_t RCC_PRIVCFGR4_NOCPV_B_0x1 = 1;

    /** @brief RCC bus lock configuration register4 */
    using RCC_LOCKCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the ACLKN bus configuration bits. */
    using RCC_LOCKCFGR4_ACLKNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKN configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: ACLKN configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief ACLKN configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_ACLKNLOCK_B_0x0 = 0;
        /** @brief ACLKN configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_ACLKNLOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the ACLKNC bus configuration bits. */
    using RCC_LOCKCFGR4_ACLKNCLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKNC configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: ACLKNC configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief ACLKNC configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_ACLKNCLOCK_B_0x0 = 0;
        /** @brief ACLKNC configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_ACLKNCLOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the AHBM bus configuration bits. */
    using RCC_LOCKCFGR4_AHBMLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBM configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: AHBM configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief AHBM configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHBMLOCK_B_0x0 = 0;
        /** @brief AHBM configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHBMLOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the AHB1 bus configuration bits. */
    using RCC_LOCKCFGR4_AHB1LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB1 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: AHB1 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief AHB1 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB1LOCK_B_0x0 = 0;
        /** @brief AHB1 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB1LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the AHB2 bus configuration bits. */
    using RCC_LOCKCFGR4_AHB2LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: AHB2 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief AHB2 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB2LOCK_B_0x0 = 0;
        /** @brief AHB2 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB2LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the AHB3 bus configuration bits. */
    using RCC_LOCKCFGR4_AHB3LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB3 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: AHB3 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief AHB3 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB3LOCK_B_0x0 = 0;
        /** @brief AHB3 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB3LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the AHB4 bus configuration bits. */
    using RCC_LOCKCFGR4_AHB4LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB4 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: AHB4 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief AHB4 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB4LOCK_B_0x0 = 0;
        /** @brief AHB4 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB4LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the AHB5 bus configuration bits. */
    using RCC_LOCKCFGR4_AHB5LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB5 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: AHB5 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief AHB5 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB5LOCK_B_0x0 = 0;
        /** @brief AHB5 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_AHB5LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the APB1 bus configuration bits. */
    using RCC_LOCKCFGR4_APB1LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: APB1 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief APB1 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB1LOCK_B_0x0 = 0;
        /** @brief APB1 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB1LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the APB2 bus configuration bits. */
    using RCC_LOCKCFGR4_APB2LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: APB2 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief APB2 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB2LOCK_B_0x0 = 0;
        /** @brief APB2 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB2LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the APB3 bus configuration bits. */
    using RCC_LOCKCFGR4_APB3LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: APB3 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief APB3 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB3LOCK_B_0x0 = 0;
        /** @brief APB3 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB3LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the APB4 bus configuration bits. */
    using RCC_LOCKCFGR4_APB4LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB4 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: APB4 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief APB4 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB4LOCK_B_0x0 = 0;
        /** @brief APB4 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB4LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the APB5 bus configuration bits. */
    using RCC_LOCKCFGR4_APB5LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB5 configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: APB5 configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief APB5 configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB5LOCK_B_0x0 = 0;
        /** @brief APB5 configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_APB5LOCK_B_0x1 = 1;

    /** @brief Defines the lock protection of the NOC bus configuration bits. */
    using RCC_LOCKCFGR4_NOCLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NOC configuration bits are accessible by non-lock software only (default after reset) (value: 0)
     *          - B_0x1: NOC configuration bits are accessible by lock software only (value: 1)
     */
        /** @brief NOC configuration bits are accessible by non-lock software only (default after reset) */
    constexpr std::uint32_t RCC_LOCKCFGR4_NOCLOCK_B_0x0 = 0;
        /** @brief NOC configuration bits are accessible by lock software only */
    constexpr std::uint32_t RCC_LOCKCFGR4_NOCLOCK_B_0x1 = 1;

    /** @brief RCC bus public configuration register4 */
    using RCC_PUBCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the ACLKN bus configuration bits. */
    using RCC_PUBCFGR4_ACLKNPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKN configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: ACLKN configuration bits are accessible by public software only (value: 1)
     */
        /** @brief ACLKN configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_ACLKNPUB_B_0x0 = 0;
        /** @brief ACLKN configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_ACLKNPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the ACLKNC bus configuration bits. */
    using RCC_PUBCFGR4_ACLKNCPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ACLKNC configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: ACLKNC configuration bits are accessible by public software only (value: 1)
     */
        /** @brief ACLKNC configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_ACLKNCPUB_B_0x0 = 0;
        /** @brief ACLKNC configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_ACLKNCPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AHBM bus configuration bits. */
    using RCC_PUBCFGR4_AHBMPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBM configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AHBM configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AHBM configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_AHBMPUB_B_0x0 = 0;
        /** @brief AHBM configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_AHBMPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AHB1 bus configuration bits. */
    using RCC_PUBCFGR4_AHB1PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB1 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AHB1 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AHB1 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB1PUB_B_0x0 = 0;
        /** @brief AHB1 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB1PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AHB2 bus configuration bits. */
    using RCC_PUBCFGR4_AHB2PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB2 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AHB2 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AHB2 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB2PUB_B_0x0 = 0;
        /** @brief AHB2 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB2PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AHB3 bus configuration bits. */
    using RCC_PUBCFGR4_AHB3PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB3 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AHB3 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AHB3 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB3PUB_B_0x0 = 0;
        /** @brief AHB3 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB3PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AHB4 bus configuration bits. */
    using RCC_PUBCFGR4_AHB4PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB4 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AHB4 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AHB4 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB4PUB_B_0x0 = 0;
        /** @brief AHB4 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB4PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AHB5 bus configuration bits. */
    using RCC_PUBCFGR4_AHB5PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB5 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AHB5 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AHB5 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB5PUB_B_0x0 = 0;
        /** @brief AHB5 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_AHB5PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the APB1 bus configuration bits. */
    using RCC_PUBCFGR4_APB1PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB1 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: APB1 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief APB1 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_APB1PUB_B_0x0 = 0;
        /** @brief APB1 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_APB1PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the APB2 bus configuration bits. */
    using RCC_PUBCFGR4_APB2PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB2 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: APB2 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief APB2 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_APB2PUB_B_0x0 = 0;
        /** @brief APB2 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_APB2PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the APB3 bus configuration bits. */
    using RCC_PUBCFGR4_APB3PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB3 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: APB3 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief APB3 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_APB3PUB_B_0x0 = 0;
        /** @brief APB3 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_APB3PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the APB4 bus configuration bits. */
    using RCC_PUBCFGR4_APB4PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB4 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: APB4 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief APB4 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_APB4PUB_B_0x0 = 0;
        /** @brief APB4 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_APB4PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the APB5 bus configuration bits. */
    using RCC_PUBCFGR4_APB5PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: APB5 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: APB5 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief APB5 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_APB5PUB_B_0x0 = 0;
        /** @brief APB5 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_APB5PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the NOC bus configuration bits. */
    using RCC_PUBCFGR4_NOCPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NOC configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: NOC configuration bits are accessible by public software only (value: 1)
     */
        /** @brief NOC configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR4_NOCPUB_B_0x0 = 0;
        /** @brief NOC configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR4_NOCPUB_B_0x1 = 1;

    /** @brief RCC bus public configuration register4 */
    using RCC_PUBCFGR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM3 bus configuration bits. */
    using RCC_PUBCFGR5_AXISRAM3PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM3 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AXISRAM3 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AXISRAM3 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM3PUB_B_0x0 = 0;
        /** @brief AXISRAM3 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM3PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AXISRAM4 bus configuration bits. */
    using RCC_PUBCFGR5_AXISRAM4PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM4 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AXISRAM4 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AXISRAM4 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM4PUB_B_0x0 = 0;
        /** @brief AXISRAM4 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM4PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AXISRAM5 bus configuration bits. */
    using RCC_PUBCFGR5_AXISRAM5PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM5 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AXISRAM5 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AXISRAM5 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM5PUB_B_0x0 = 0;
        /** @brief AXISRAM5 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM5PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AXISRAM6 bus configuration bits. */
    using RCC_PUBCFGR5_AXISRAM6PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM6 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AXISRAM6 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AXISRAM6 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM6PUB_B_0x0 = 0;
        /** @brief AXISRAM6 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM6PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AHBSRAM1 bus configuration bits. */
    using RCC_PUBCFGR5_AHBSRAM1PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM1 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AHBSRAM1 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AHBSRAM1 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_AHBSRAM1PUB_B_0x0 = 0;
        /** @brief AHBSRAM1 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_AHBSRAM1PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AHBSRAM2 bus configuration bits. */
    using RCC_PUBCFGR5_AHBSRAM2PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHBSRAM2 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AHBSRAM2 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AHBSRAM2 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_AHBSRAM2PUB_B_0x0 = 0;
        /** @brief AHBSRAM2 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_AHBSRAM2PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the BKPSRAM bus configuration bits. */
    using RCC_PUBCFGR5_BKPSRAMPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPSRAM configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: BKPSRAM configuration bits are accessible by public software only (value: 1)
     */
        /** @brief BKPSRAM configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_BKPSRAMPUB_B_0x0 = 0;
        /** @brief BKPSRAM configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_BKPSRAMPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AXISRAM1 bus configuration bits. */
    using RCC_PUBCFGR5_AXISRAM1PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM1 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AXISRAM1 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AXISRAM1 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM1PUB_B_0x0 = 0;
        /** @brief AXISRAM1 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM1PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the AXISRAM2 bus configuration bits. */
    using RCC_PUBCFGR5_AXISRAM2PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAM2 configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: AXISRAM2 configuration bits are accessible by public software only (value: 1)
     */
        /** @brief AXISRAM2 configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM2PUB_B_0x0 = 0;
        /** @brief AXISRAM2 configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_AXISRAM2PUB_B_0x1 = 1;

    /** @brief Defines the public protection of the FLEXRAM bus configuration bits. */
    using RCC_PUBCFGR5_FLEXRAMPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLEXRAM configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: FLEXRAM configuration bits are accessible by public software only (value: 1)
     */
        /** @brief FLEXRAM configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_FLEXRAMPUB_B_0x0 = 0;
        /** @brief FLEXRAM configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_FLEXRAMPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the NPUCACHERAM bus configuration bits. */
    using RCC_PUBCFGR5_NPUCACHERAMPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NPUCACHERAM configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: NPUCACHERAM configuration bits are accessible by public software only (value: 1)
     */
        /** @brief NPUCACHERAM configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_NPUCACHERAMPUB_B_0x0 = 0;
        /** @brief NPUCACHERAM configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_NPUCACHERAMPUB_B_0x1 = 1;

    /** @brief Defines the public protection of the VENCRAM bus configuration bits. */
    using RCC_PUBCFGR5_VENCRAMPUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VENCRAM configuration bits are accessible by non-public software only (default after reset) (value: 0)
     *          - B_0x1: VENCRAM configuration bits are accessible by public software only (value: 1)
     */
        /** @brief VENCRAM configuration bits are accessible by non-public software only (default after reset) */
    constexpr std::uint32_t RCC_PUBCFGR5_VENCRAMPUB_B_0x0 = 0;
        /** @brief VENCRAM configuration bits are accessible by public software only */
    constexpr std::uint32_t RCC_PUBCFGR5_VENCRAMPUB_B_0x1 = 1;

    /** @brief RCC control set register */
    using RCC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x800, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable in Run/Sleep mode. */
    using RCC_CSR_LSIONS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable in Run/Sleep mode. */
    using RCC_CSR_LSEONS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI oscillator enable in Run/Sleep mode. */
    using RCC_CSR_MSIONS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI oscillator enable in Run/Sleep mode. */
    using RCC_CSR_HSIONS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE oscillator enable in Run/Sleep mode. */
    using RCC_CSR_HSEONS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 oscillator enable in Run/Sleep mode. */
    using RCC_CSR_PLL1ONS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 oscillator enable in Run/Sleep mode. */
    using RCC_CSR_PLL2ONS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 oscillator enable in Run/Sleep mode. */
    using RCC_CSR_PLL3ONS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL4 oscillator enable in Run/Sleep mode. */
    using RCC_CSR_PLL4ONS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC Stop configuration register */
    using RCC_STOPCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x808, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSISTOPENS */
    using RCC_STOPCSR_MSISTOPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSISTOPENS */
    using RCC_STOPCSR_HSISTOPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC bus reset set register */
    using RCC_BUSRSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKN reset */
    using RCC_BUSRSTSR_ACLKNRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBM reset */
    using RCC_BUSRSTSR_AHBMRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1 reset */
    using RCC_BUSRSTSR_AHB1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB2 reset */
    using RCC_BUSRSTSR_AHB2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB3 reset */
    using RCC_BUSRSTSR_AHB3RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB4 reset */
    using RCC_BUSRSTSR_AHB4RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB5 reset */
    using RCC_BUSRSTSR_AHB5RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 reset */
    using RCC_BUSRSTSR_APB1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2 reset */
    using RCC_BUSRSTSR_APB2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB3 reset */
    using RCC_BUSRSTSR_APB3RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB4 reset */
    using RCC_BUSRSTSR_APB4RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB5 reset */
    using RCC_BUSRSTSR_APB5RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NOC reset */
    using RCC_BUSRSTSR_NOCRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC miscellaneous reset register */
    using RCC_MISCRSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG reset */
    using RCC_MISCRSTSR_DBGRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIPHY1 reset */
    using RCC_MISCRSTSR_XSPIPHY1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIPHY2 reset */
    using RCC_MISCRSTSR_XSPIPHY2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1DLL reset */
    using RCC_MISCRSTSR_SDMMC1DLLRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC2DLL reset */
    using RCC_MISCRSTSR_SDMMC2DLLRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC memory reset register */
    using RCC_MEMRSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM3 reset */
    using RCC_MEMRSTSR_AXISRAM3RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM4 reset */
    using RCC_MEMRSTSR_AXISRAM4RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM5 reset */
    using RCC_MEMRSTSR_AXISRAM5RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM6 reset */
    using RCC_MEMRSTSR_AXISRAM6RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM1 reset */
    using RCC_MEMRSTSR_AHBSRAM1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM2 reset */
    using RCC_MEMRSTSR_AHBSRAM2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM1 reset */
    using RCC_MEMRSTSR_AXISRAM1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM2 reset */
    using RCC_MEMRSTSR_AXISRAM2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLEXRAM reset */
    using RCC_MEMRSTSR_FLEXRAMRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHERAM reset */
    using RCC_MEMRSTSR_NPUCACHERAMRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENCRAM reset */
    using RCC_MEMRSTSR_VENCRAMRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOTROM reset */
    using RCC_MEMRSTSR_BOOTROMRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 reset register */
    using RCC_AHB1RSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 reset */
    using RCC_AHB1RSTSR_GPDMA1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC12 reset */
    using RCC_AHB1RSTSR_ADC12RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB2 reset register */
    using RCC_AHB2RSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG reset */
    using RCC_AHB2RSTSR_RAMCFGRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF1 reset */
    using RCC_AHB2RSTSR_MDF1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1 reset */
    using RCC_AHB2RSTSR_ADF1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB3 reset register */
    using RCC_AHB3RSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG reset */
    using RCC_AHB3RSTSR_RNGRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH reset */
    using RCC_AHB3RSTSR_HASHRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP reset */
    using RCC_AHB3RSTSR_CRYPRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES reset */
    using RCC_AHB3RSTSR_SAESRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA reset */
    using RCC_AHB3RSTSR_PKARSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IAC reset */
    using RCC_AHB3RSTSR_IACRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB4 reset register */
    using RCC_AHB4RSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA reset */
    using RCC_AHB4RSTSR_GPIOARSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB reset */
    using RCC_AHB4RSTSR_GPIOBRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOC reset */
    using RCC_AHB4RSTSR_GPIOCRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOD reset */
    using RCC_AHB4RSTSR_GPIODRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOE reset */
    using RCC_AHB4RSTSR_GPIOERSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOF reset */
    using RCC_AHB4RSTSR_GPIOFRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOG reset */
    using RCC_AHB4RSTSR_GPIOGRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOH reset */
    using RCC_AHB4RSTSR_GPIOHRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPION reset */
    using RCC_AHB4RSTSR_GPIONRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOO reset */
    using RCC_AHB4RSTSR_GPIOORSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOP reset */
    using RCC_AHB4RSTSR_GPIOPRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOQ reset */
    using RCC_AHB4RSTSR_GPIOQRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR reset */
    using RCC_AHB4RSTSR_PWRRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC reset */
    using RCC_AHB4RSTSR_CRCRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB5 reset register */
    using RCC_AHB5RSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 reset */
    using RCC_AHB5RSTSR_HPDMA1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D reset */
    using RCC_AHB5RSTSR_DMA2DRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG reset */
    using RCC_AHB5RSTSR_JPEGRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC reset */
    using RCC_AHB5RSTSR_FMCRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI1 reset */
    using RCC_AHB5RSTSR_XSPI1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI reset */
    using RCC_AHB5RSTSR_PSSIRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC2 reset */
    using RCC_AHB5RSTSR_SDMMC2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1 reset */
    using RCC_AHB5RSTSR_SDMMC1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI2 reset */
    using RCC_AHB5RSTSR_XSPI2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM reset */
    using RCC_AHB5RSTSR_XSPIMRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI3 reset */
    using RCC_AHB5RSTSR_XSPI3RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE4 reset */
    using RCC_AHB5RSTSR_MCE4RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXMMU reset */
    using RCC_AHB5RSTSR_GFXMMURSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPU reset */
    using RCC_AHB5RSTSR_GPURSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFGOTGHSPHY1 reset */
    using RCC_AHB5RSTSR_SYSCFGOTGHSPHY1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFGOTGHSPHY2 reset */
    using RCC_AHB5RSTSR_SYSCFGOTGHSPHY2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1 reset */
    using RCC_AHB5RSTSR_ETH1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG1 reset */
    using RCC_AHB5RSTSR_OTG1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY1 reset */
    using RCC_AHB5RSTSR_OTGPHY1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY2 reset */
    using RCC_AHB5RSTSR_OTGPHY2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG2 reset */
    using RCC_AHB5RSTSR_OTG2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHE reset */
    using RCC_AHB5RSTSR_NPUCACHERSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPU reset */
    using RCC_AHB5RSTSR_NPURSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1L reset register */
    using RCC_APB1LRSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 reset */
    using RCC_APB1LRSTSR_TIM2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 reset */
    using RCC_APB1LRSTSR_TIM3RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 reset */
    using RCC_APB1LRSTSR_TIM4RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 reset */
    using RCC_APB1LRSTSR_TIM5RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 reset */
    using RCC_APB1LRSTSR_TIM6RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7 reset */
    using RCC_APB1LRSTSR_TIM7RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 reset */
    using RCC_APB1LRSTSR_TIM12RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM13 reset */
    using RCC_APB1LRSTSR_TIM13RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM14 reset */
    using RCC_APB1LRSTSR_TIM14RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 reset */
    using RCC_APB1LRSTSR_LPTIM1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG reset */
    using RCC_APB1LRSTSR_WWDGRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM10 reset */
    using RCC_APB1LRSTSR_TIM10RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM11 reset */
    using RCC_APB1LRSTSR_TIM11RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2 reset */
    using RCC_APB1LRSTSR_SPI2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 reset */
    using RCC_APB1LRSTSR_SPI3RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX1 reset */
    using RCC_APB1LRSTSR_SPDIFRX1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2 reset */
    using RCC_APB1LRSTSR_USART2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3 reset */
    using RCC_APB1LRSTSR_USART3RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART4 reset */
    using RCC_APB1LRSTSR_UART4RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART5 reset */
    using RCC_APB1LRSTSR_UART5RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 reset */
    using RCC_APB1LRSTSR_I2C1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 reset */
    using RCC_APB1LRSTSR_I2C2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 reset */
    using RCC_APB1LRSTSR_I2C3RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C1 reset */
    using RCC_APB1LRSTSR_I3C1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C2 reset */
    using RCC_APB1LRSTSR_I3C2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART7 reset */
    using RCC_APB1LRSTSR_UART7RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART8 reset */
    using RCC_APB1LRSTSR_UART8RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1H reset register */
    using RCC_APB1HRSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS reset */
    using RCC_APB1HRSTSR_MDIOSRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN reset */
    using RCC_APB1HRSTSR_FDCANRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD1 reset */
    using RCC_APB1HRSTSR_UCPD1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB2 reset register */
    using RCC_APB2RSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 reset */
    using RCC_APB2RSTSR_TIM1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8 reset */
    using RCC_APB2RSTSR_TIM8RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 reset */
    using RCC_APB2RSTSR_USART1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART6 reset */
    using RCC_APB2RSTSR_USART6RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART9 reset */
    using RCC_APB2RSTSR_UART9RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART10 reset */
    using RCC_APB2RSTSR_USART10RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 reset */
    using RCC_APB2RSTSR_SPI1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI4 reset */
    using RCC_APB2RSTSR_SPI4RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM18 reset */
    using RCC_APB2RSTSR_TIM18RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 reset */
    using RCC_APB2RSTSR_TIM15RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 reset */
    using RCC_APB2RSTSR_TIM16RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17 reset */
    using RCC_APB2RSTSR_TIM17RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM9 reset */
    using RCC_APB2RSTSR_TIM9RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI5 reset */
    using RCC_APB2RSTSR_SPI5RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1 reset */
    using RCC_APB2RSTSR_SAI1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI2 reset */
    using RCC_APB2RSTSR_SAI2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4L reset register */
    using RCC_APB4LRSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP reset */
    using RCC_APB4LRSTSR_HDPRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 reset */
    using RCC_APB4LRSTSR_LPUART1RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI6 reset */
    using RCC_APB4LRSTSR_SPI6RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 reset */
    using RCC_APB4LRSTSR_I2C4RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 reset */
    using RCC_APB4LRSTSR_LPTIM2RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3 reset */
    using RCC_APB4LRSTSR_LPTIM3RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 reset */
    using RCC_APB4LRSTSR_LPTIM4RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM5 reset */
    using RCC_APB4LRSTSR_LPTIM5RSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUF reset */
    using RCC_APB4LRSTSR_VREFBUFRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC reset */
    using RCC_APB4LRSTSR_RTCRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GRET reset */
    using RCC_APB4LRSTSR_R2GRETRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GNPU reset */
    using RCC_APB4LRSTSR_R2GNPURSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SERF reset */
    using RCC_APB4LRSTSR_SERFRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4H reset register */
    using RCC_APB4HRSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG reset */
    using RCC_APB4HRSTSR_SYSCFGRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS reset */
    using RCC_APB4HRSTSR_DTSRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSPERFM reset */
    using RCC_APB4HRSTSR_BUSPERFMRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB5 reset register */
    using RCC_APB5RSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC reset */
    using RCC_APB5RSTSR_LTDCRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP reset */
    using RCC_APB5RSTSR_DCMIPPRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM reset */
    using RCC_APB5RSTSR_GFXTIMRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC reset */
    using RCC_APB5RSTSR_VENCRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI reset */
    using RCC_APB5RSTSR_CSIRSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC Divider enable register */
    using RCC_DIVENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC1 enable */
    using RCC_DIVENSR_IC1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC2 enable */
    using RCC_DIVENSR_IC2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC3 enable */
    using RCC_DIVENSR_IC3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC4 enable */
    using RCC_DIVENSR_IC4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC5 enable */
    using RCC_DIVENSR_IC5ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC6 enable */
    using RCC_DIVENSR_IC6ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC7 enable */
    using RCC_DIVENSR_IC7ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC8 enable */
    using RCC_DIVENSR_IC8ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC9 enable */
    using RCC_DIVENSR_IC9ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC10 enable */
    using RCC_DIVENSR_IC10ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC11 enable */
    using RCC_DIVENSR_IC11ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC12 enable */
    using RCC_DIVENSR_IC12ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC13 enable */
    using RCC_DIVENSR_IC13ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC14 enable */
    using RCC_DIVENSR_IC14ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC15 enable */
    using RCC_DIVENSR_IC15ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC16 enable */
    using RCC_DIVENSR_IC16ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC17 enable */
    using RCC_DIVENSR_IC17ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC18 enable */
    using RCC_DIVENSR_IC18ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC19 enable */
    using RCC_DIVENSR_IC19ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC20 enable */
    using RCC_DIVENSR_IC20ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC bus enable register */
    using RCC_BUSENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKN enable */
    using RCC_BUSENSR_ACLKNENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKNC enable */
    using RCC_BUSENSR_ACLKNCENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBM enable */
    using RCC_BUSENSR_AHBMENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1 enable */
    using RCC_BUSENSR_AHB1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB2 enable */
    using RCC_BUSENSR_AHB2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB3 enable */
    using RCC_BUSENSR_AHB3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB4 enable */
    using RCC_BUSENSR_AHB4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB5 enable */
    using RCC_BUSENSR_AHB5ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 enable */
    using RCC_BUSENSR_APB1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2 enable */
    using RCC_BUSENSR_APB2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB3 enable */
    using RCC_BUSENSR_APB3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB4 enable */
    using RCC_BUSENSR_APB4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB5 enable */
    using RCC_BUSENSR_APB5ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC miscellaneous enable register */
    using RCC_MISCENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG enable */
    using RCC_MISCENSR_DBGENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCO1 enable */
    using RCC_MISCENSR_MCO1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCO2 enable */
    using RCC_MISCENSR_MCO2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIPHYCOMP enable */
    using RCC_MISCENSR_XSPIPHYCOMPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PER enable */
    using RCC_MISCENSR_PERENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC memory enable register */
    using RCC_MEMENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM3 enable */
    using RCC_MEMENSR_AXISRAM3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM4 enable */
    using RCC_MEMENSR_AXISRAM4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM5 enable */
    using RCC_MEMENSR_AXISRAM5ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM6 enable */
    using RCC_MEMENSR_AXISRAM6ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM1 enable */
    using RCC_MEMENSR_AHBSRAM1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM2 enable */
    using RCC_MEMENSR_AHBSRAM2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKPSRAM enable */
    using RCC_MEMENSR_BKPSRAMENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM1 enable */
    using RCC_MEMENSR_AXISRAM1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM2 enable */
    using RCC_MEMENSR_AXISRAM2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLEXRAM enable */
    using RCC_MEMENSR_FLEXRAMENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHERAM enable */
    using RCC_MEMENSR_NPUCACHERAMENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENCRAM enable */
    using RCC_MEMENSR_VENCRAMENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOTROM enable */
    using RCC_MEMENSR_BOOTROMENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 enable register */
    using RCC_AHB1ENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 enable */
    using RCC_AHB1ENSR_GPDMA1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC12 enable */
    using RCC_AHB1ENSR_ADC12ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB2 enable register */
    using RCC_AHB2ENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG enable */
    using RCC_AHB2ENSR_RAMCFGENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF1 enable */
    using RCC_AHB2ENSR_MDF1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1 enable */
    using RCC_AHB2ENSR_ADF1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB3 enable register */
    using RCC_AHB3ENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG enable */
    using RCC_AHB3ENSR_RNGENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH enable */
    using RCC_AHB3ENSR_HASHENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP enable */
    using RCC_AHB3ENSR_CRYPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES enable */
    using RCC_AHB3ENSR_SAESENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA enable */
    using RCC_AHB3ENSR_PKAENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RIFSC enable */
    using RCC_AHB3ENSR_RIFSCENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IAC enable */
    using RCC_AHB3ENSR_IACENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF enable */
    using RCC_AHB3ENSR_RISAFENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB4 enable register */
    using RCC_AHB4ENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA enable */
    using RCC_AHB4ENSR_GPIOAENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB enable */
    using RCC_AHB4ENSR_GPIOBENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOC enable */
    using RCC_AHB4ENSR_GPIOCENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOD enable */
    using RCC_AHB4ENSR_GPIODENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOE enable */
    using RCC_AHB4ENSR_GPIOEENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOF enable */
    using RCC_AHB4ENSR_GPIOFENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOG enable */
    using RCC_AHB4ENSR_GPIOGENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOH enable */
    using RCC_AHB4ENSR_GPIOHENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPION enable */
    using RCC_AHB4ENSR_GPIONENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOO enable */
    using RCC_AHB4ENSR_GPIOOENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOP enable */
    using RCC_AHB4ENSR_GPIOPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOQ enable */
    using RCC_AHB4ENSR_GPIOQENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR enable */
    using RCC_AHB4ENSR_PWRENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC enable */
    using RCC_AHB4ENSR_CRCENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB5 enable register */
    using RCC_AHB5ENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 enable */
    using RCC_AHB5ENSR_HPDMA1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D enable */
    using RCC_AHB5ENSR_DMA2DENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG enable */
    using RCC_AHB5ENSR_JPEGENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC enable */
    using RCC_AHB5ENSR_FMCENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI1 enable */
    using RCC_AHB5ENSR_XSPI1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI enable */
    using RCC_AHB5ENSR_PSSIENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC2 enable */
    using RCC_AHB5ENSR_SDMMC2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1 enable */
    using RCC_AHB5ENSR_SDMMC1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI2 enable */
    using RCC_AHB5ENSR_XSPI2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM enable */
    using RCC_AHB5ENSR_XSPIMENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE1 enable */
    using RCC_AHB5ENSR_MCE1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE2 enable */
    using RCC_AHB5ENSR_MCE2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE3 enable */
    using RCC_AHB5ENSR_MCE3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI3 enable */
    using RCC_AHB5ENSR_XSPI3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE4 enable */
    using RCC_AHB5ENSR_MCE4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXMMU enable */
    using RCC_AHB5ENSR_GFXMMUENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPU enable */
    using RCC_AHB5ENSR_GPUENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1MAC enable */
    using RCC_AHB5ENSR_ETH1MACENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1TX enable */
    using RCC_AHB5ENSR_ETH1TXENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1RX enable */
    using RCC_AHB5ENSR_ETH1RXENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1 enable */
    using RCC_AHB5ENSR_ETH1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG1 enable */
    using RCC_AHB5ENSR_OTG1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY1 enable */
    using RCC_AHB5ENSR_OTGPHY1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY2 enable */
    using RCC_AHB5ENSR_OTGPHY2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG2 enable */
    using RCC_AHB5ENSR_OTG2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHE enable */
    using RCC_AHB5ENSR_NPUCACHEENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPU enable */
    using RCC_AHB5ENSR_NPUENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1L enable register */
    using RCC_APB1LENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 enable */
    using RCC_APB1LENSR_TIM2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 enable */
    using RCC_APB1LENSR_TIM3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 enable */
    using RCC_APB1LENSR_TIM4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 enable */
    using RCC_APB1LENSR_TIM5ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 enable */
    using RCC_APB1LENSR_TIM6ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7 enable */
    using RCC_APB1LENSR_TIM7ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 enable */
    using RCC_APB1LENSR_TIM12ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM13 enable */
    using RCC_APB1LENSR_TIM13ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM14 enable */
    using RCC_APB1LENSR_TIM14ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 enable */
    using RCC_APB1LENSR_LPTIM1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG enable */
    using RCC_APB1LENSR_WWDGENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM10 enable */
    using RCC_APB1LENSR_TIM10ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM11 enable */
    using RCC_APB1LENSR_TIM11ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2 enable */
    using RCC_APB1LENSR_SPI2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 enable */
    using RCC_APB1LENSR_SPI3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX1 enable */
    using RCC_APB1LENSR_SPDIFRX1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2 enable */
    using RCC_APB1LENSR_USART2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3 enable */
    using RCC_APB1LENSR_USART3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART4 enable */
    using RCC_APB1LENSR_UART4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART5 enable */
    using RCC_APB1LENSR_UART5ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 enable */
    using RCC_APB1LENSR_I2C1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 enable */
    using RCC_APB1LENSR_I2C2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 enable */
    using RCC_APB1LENSR_I2C3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C1 enable */
    using RCC_APB1LENSR_I3C1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C2 enable */
    using RCC_APB1LENSR_I3C2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART7 enable */
    using RCC_APB1LENSR_UART7ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART8 enable */
    using RCC_APB1LENSR_UART8ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1H enable register */
    using RCC_APB1HENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS enable */
    using RCC_APB1HENSR_MDIOSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN enable */
    using RCC_APB1HENSR_FDCANENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD1 enable */
    using RCC_APB1HENSR_UCPD1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB2 enable register */
    using RCC_APB2ENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 enable */
    using RCC_APB2ENSR_TIM1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8 enable */
    using RCC_APB2ENSR_TIM8ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 enable */
    using RCC_APB2ENSR_USART1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART6 enable */
    using RCC_APB2ENSR_USART6ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART9 enable */
    using RCC_APB2ENSR_UART9ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART10 enable */
    using RCC_APB2ENSR_USART10ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 enable */
    using RCC_APB2ENSR_SPI1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI4 enable */
    using RCC_APB2ENSR_SPI4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM18 enable */
    using RCC_APB2ENSR_TIM18ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 enable */
    using RCC_APB2ENSR_TIM15ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 enable */
    using RCC_APB2ENSR_TIM16ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17 enable */
    using RCC_APB2ENSR_TIM17ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM9 enable */
    using RCC_APB2ENSR_TIM9ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI5 enable */
    using RCC_APB2ENSR_SPI5ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1 enable */
    using RCC_APB2ENSR_SAI1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI2 enable */
    using RCC_APB2ENSR_SAI2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB3 enable register */
    using RCC_APB3ENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFT enable */
    using RCC_APB3ENSR_DFTENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4L enable register */
    using RCC_APB4LENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP enable */
    using RCC_APB4LENSR_HDPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 enable */
    using RCC_APB4LENSR_LPUART1ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI6 enable */
    using RCC_APB4LENSR_SPI6ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 enable */
    using RCC_APB4LENSR_I2C4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 enable */
    using RCC_APB4LENSR_LPTIM2ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3 enable */
    using RCC_APB4LENSR_LPTIM3ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 enable */
    using RCC_APB4LENSR_LPTIM4ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM5 enable */
    using RCC_APB4LENSR_LPTIM5ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUF enable */
    using RCC_APB4LENSR_VREFBUFENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC enable */
    using RCC_APB4LENSR_RTCENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCAPB enable */
    using RCC_APB4LENSR_RTCAPBENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GRET enable */
    using RCC_APB4LENSR_R2GRETENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GNPU enable */
    using RCC_APB4LENSR_R2GNPUENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SERF enable */
    using RCC_APB4LENSR_SERFENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4H enable register */
    using RCC_APB4HENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG enable */
    using RCC_APB4HENSR_SYSCFGENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BSEC enable */
    using RCC_APB4HENSR_BSECENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS enable */
    using RCC_APB4HENSR_DTSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSPERFM enable */
    using RCC_APB4HENSR_BUSPERFMENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB5 enable register */
    using RCC_APB5ENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC enable */
    using RCC_APB5ENSR_LTDCENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP enable */
    using RCC_APB5ENSR_DCMIPPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM enable */
    using RCC_APB5ENSR_GFXTIMENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC enable */
    using RCC_APB5ENSR_VENCENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI enable */
    using RCC_APB5ENSR_CSIENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC divider Sleep enable register */
    using RCC_DIVLPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC1 sleep enable */
    using RCC_DIVLPENSR_IC1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC2 sleep enable */
    using RCC_DIVLPENSR_IC2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC3 sleep enable */
    using RCC_DIVLPENSR_IC3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC4 sleep enable */
    using RCC_DIVLPENSR_IC4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC5 sleep enable */
    using RCC_DIVLPENSR_IC5LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC6 sleep enable */
    using RCC_DIVLPENSR_IC6LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC7 sleep enable */
    using RCC_DIVLPENSR_IC7LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC8 sleep enable */
    using RCC_DIVLPENSR_IC8LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC9 sleep enable */
    using RCC_DIVLPENSR_IC9LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC10 sleep enable */
    using RCC_DIVLPENSR_IC10LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC11 sleep enable */
    using RCC_DIVLPENSR_IC11LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC12 sleep enable */
    using RCC_DIVLPENSR_IC12LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC13 sleep enable */
    using RCC_DIVLPENSR_IC13LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC14 sleep enable */
    using RCC_DIVLPENSR_IC14LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC15 sleep enable */
    using RCC_DIVLPENSR_IC15LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC16 sleep enable */
    using RCC_DIVLPENSR_IC16LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC17 sleep enable */
    using RCC_DIVLPENSR_IC17LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC18 sleep enable */
    using RCC_DIVLPENSR_IC18LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC19 sleep enable */
    using RCC_DIVLPENSR_IC19LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC20 sleep enable */
    using RCC_DIVLPENSR_IC20LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC bus Sleep enable register */
    using RCC_BUSLPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKN sleep enable */
    using RCC_BUSLPENSR_ACLKNLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKNC sleep enable */
    using RCC_BUSLPENSR_ACLKNCLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBM sleep enable */
    using RCC_BUSLPENSR_AHBMLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1 sleep enable */
    using RCC_BUSLPENSR_AHB1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB2 sleep enable */
    using RCC_BUSLPENSR_AHB2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB3 sleep enable */
    using RCC_BUSLPENSR_AHB3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB4 sleep enable */
    using RCC_BUSLPENSR_AHB4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB5 sleep enable */
    using RCC_BUSLPENSR_AHB5LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 sleep enable */
    using RCC_BUSLPENSR_APB1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2 sleep enable */
    using RCC_BUSLPENSR_APB2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB3 sleep enable */
    using RCC_BUSLPENSR_APB3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB4 sleep enable */
    using RCC_BUSLPENSR_APB4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB5 sleep enable */
    using RCC_BUSLPENSR_APB5LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC miscellaneous Sleep enable register */
    using RCC_MISCLPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG sleep enable */
    using RCC_MISCLPENSR_DBGLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIPHYCOMP sleep enable */
    using RCC_MISCLPENSR_XSPIPHYCOMPLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PER sleep enable */
    using RCC_MISCLPENSR_PERLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC memory sleep enable register */
    using RCC_MEMLPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM3 sleep enable */
    using RCC_MEMLPENSR_AXISRAM3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM4 sleep enable */
    using RCC_MEMLPENSR_AXISRAM4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM5 sleep enable */
    using RCC_MEMLPENSR_AXISRAM5LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM6 sleep enable */
    using RCC_MEMLPENSR_AXISRAM6LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM1 sleep enable */
    using RCC_MEMLPENSR_AHBSRAM1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM2 sleep enable */
    using RCC_MEMLPENSR_AHBSRAM2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKPSRAM sleep enable */
    using RCC_MEMLPENSR_BKPSRAMLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM1 sleep enable */
    using RCC_MEMLPENSR_AXISRAM1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM2 sleep enable */
    using RCC_MEMLPENSR_AXISRAM2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLEXRAM sleep enable */
    using RCC_MEMLPENSR_FLEXRAMLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHERAM sleep enable */
    using RCC_MEMLPENSR_NPUCACHERAMLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENCRAM sleep enable */
    using RCC_MEMLPENSR_VENCRAMLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOTROM sleep enable */
    using RCC_MEMLPENSR_BOOTROMLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 Sleep enable register */
    using RCC_AHB1LPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 sleep enable */
    using RCC_AHB1LPENSR_GPDMA1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC12 sleep enable */
    using RCC_AHB1LPENSR_ADC12LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB2 Sleep enable register */
    using RCC_AHB2LPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG sleep enable */
    using RCC_AHB2LPENSR_RAMCFGLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF1 sleep enable */
    using RCC_AHB2LPENSR_MDF1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1 sleep enable */
    using RCC_AHB2LPENSR_ADF1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB3 Sleep enable register */
    using RCC_AHB3LPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG sleep enable */
    using RCC_AHB3LPENSR_RNGLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH sleep enable */
    using RCC_AHB3LPENSR_HASHLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP sleep enable */
    using RCC_AHB3LPENSR_CRYPLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES sleep enable */
    using RCC_AHB3LPENSR_SAESLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA sleep enable */
    using RCC_AHB3LPENSR_PKALPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RIFSC sleep enable */
    using RCC_AHB3LPENSR_RIFSCLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IAC sleep enable */
    using RCC_AHB3LPENSR_IACLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF sleep enable */
    using RCC_AHB3LPENSR_RISAFLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB4 Sleep enable register */
    using RCC_AHB4LPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA sleep enable */
    using RCC_AHB4LPENSR_GPIOALPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB sleep enable */
    using RCC_AHB4LPENSR_GPIOBLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOC sleep enable */
    using RCC_AHB4LPENSR_GPIOCLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOD sleep enable */
    using RCC_AHB4LPENSR_GPIODLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOE sleep enable */
    using RCC_AHB4LPENSR_GPIOELPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOF sleep enable */
    using RCC_AHB4LPENSR_GPIOFLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOG sleep enable */
    using RCC_AHB4LPENSR_GPIOGLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOH sleep enable */
    using RCC_AHB4LPENSR_GPIOHLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPION sleep enable */
    using RCC_AHB4LPENSR_GPIONLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOO sleep enable */
    using RCC_AHB4LPENSR_GPIOOLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOP sleep enable */
    using RCC_AHB4LPENSR_GPIOPLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOQ sleep enable */
    using RCC_AHB4LPENSR_GPIOQLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR sleep enable */
    using RCC_AHB4LPENSR_PWRLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC sleep enable */
    using RCC_AHB4LPENSR_CRCLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB5 Sleep enable register */
    using RCC_AHB5LPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 sleep enable */
    using RCC_AHB5LPENSR_HPDMA1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D sleep enable */
    using RCC_AHB5LPENSR_DMA2DLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG sleep enable */
    using RCC_AHB5LPENSR_JPEGLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC sleep enable */
    using RCC_AHB5LPENSR_FMCLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI1 sleep enable */
    using RCC_AHB5LPENSR_XSPI1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI sleep enable */
    using RCC_AHB5LPENSR_PSSILPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC2 sleep enable */
    using RCC_AHB5LPENSR_SDMMC2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1 sleep enable */
    using RCC_AHB5LPENSR_SDMMC1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI2 sleep enable */
    using RCC_AHB5LPENSR_XSPI2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM sleep enable */
    using RCC_AHB5LPENSR_XSPIMLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE1 sleep enable */
    using RCC_AHB5LPENSR_MCE1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE2 sleep enable */
    using RCC_AHB5LPENSR_MCE2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE3 sleep enable */
    using RCC_AHB5LPENSR_MCE3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI3 sleep enable */
    using RCC_AHB5LPENSR_XSPI3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE4 sleep enable */
    using RCC_AHB5LPENSR_MCE4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXMMU sleep enable */
    using RCC_AHB5LPENSR_GFXMMULPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPU sleep enable */
    using RCC_AHB5LPENSR_GPULPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1MAC sleep enable */
    using RCC_AHB5LPENSR_ETH1MACLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1TX sleep enable */
    using RCC_AHB5LPENSR_ETH1TXLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1RX sleep enable */
    using RCC_AHB5LPENSR_ETH1RXLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1 sleep enable */
    using RCC_AHB5LPENSR_ETH1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG1 sleep enable */
    using RCC_AHB5LPENSR_OTG1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY1 sleep enable */
    using RCC_AHB5LPENSR_OTGPHY1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY2 sleep enable */
    using RCC_AHB5LPENSR_OTGPHY2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG2 sleep enable */
    using RCC_AHB5LPENSR_OTG2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHE sleep enable */
    using RCC_AHB5LPENSR_NPUCACHELPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPU sleep enable */
    using RCC_AHB5LPENSR_NPULPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1L Sleep enable register */
    using RCC_APB1LLPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 sleep enable */
    using RCC_APB1LLPENSR_TIM2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 sleep enable */
    using RCC_APB1LLPENSR_TIM3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 sleep enable */
    using RCC_APB1LLPENSR_TIM4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 sleep enable */
    using RCC_APB1LLPENSR_TIM5LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 sleep enable */
    using RCC_APB1LLPENSR_TIM6LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7 sleep enable */
    using RCC_APB1LLPENSR_TIM7LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 sleep enable */
    using RCC_APB1LLPENSR_TIM12LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM13 sleep enable */
    using RCC_APB1LLPENSR_TIM13LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM14 sleep enable */
    using RCC_APB1LLPENSR_TIM14LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 sleep enable */
    using RCC_APB1LLPENSR_LPTIM1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG sleep enable */
    using RCC_APB1LLPENSR_WWDGLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM10 sleep enable */
    using RCC_APB1LLPENSR_TIM10LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM11 sleep enable */
    using RCC_APB1LLPENSR_TIM11LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2 sleep enable */
    using RCC_APB1LLPENSR_SPI2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 sleep enable */
    using RCC_APB1LLPENSR_SPI3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX1 sleep enable */
    using RCC_APB1LLPENSR_SPDIFRX1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2 sleep enable */
    using RCC_APB1LLPENSR_USART2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3 sleep enable */
    using RCC_APB1LLPENSR_USART3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART4 sleep enable */
    using RCC_APB1LLPENSR_UART4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART5 sleep enable */
    using RCC_APB1LLPENSR_UART5LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 sleep enable */
    using RCC_APB1LLPENSR_I2C1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 sleep enable */
    using RCC_APB1LLPENSR_I2C2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 sleep enable */
    using RCC_APB1LLPENSR_I2C3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C1 sleep enable */
    using RCC_APB1LLPENSR_I3C1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C2 sleep enable */
    using RCC_APB1LLPENSR_I3C2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART7 sleep enable */
    using RCC_APB1LLPENSR_UART7LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART8 sleep enable */
    using RCC_APB1LLPENSR_UART8LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1H Sleep enable register */
    using RCC_APB1HLPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS sleep enable */
    using RCC_APB1HLPENSR_MDIOSLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN sleep enable */
    using RCC_APB1HLPENSR_FDCANLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD1 sleep enable */
    using RCC_APB1HLPENSR_UCPD1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB2 Sleep enable register */
    using RCC_APB2LPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 sleep enable */
    using RCC_APB2LPENSR_TIM1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8 sleep enable */
    using RCC_APB2LPENSR_TIM8LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 sleep enable */
    using RCC_APB2LPENSR_USART1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART6 sleep enable */
    using RCC_APB2LPENSR_USART6LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART9 sleep enable */
    using RCC_APB2LPENSR_UART9LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART10 sleep enable */
    using RCC_APB2LPENSR_USART10LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 sleep enable */
    using RCC_APB2LPENSR_SPI1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI4 sleep enable */
    using RCC_APB2LPENSR_SPI4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM18 sleep enable */
    using RCC_APB2LPENSR_TIM18LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 sleep enable */
    using RCC_APB2LPENSR_TIM15LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 sleep enable */
    using RCC_APB2LPENSR_TIM16LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17 sleep enable */
    using RCC_APB2LPENSR_TIM17LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM9 sleep enable */
    using RCC_APB2LPENSR_TIM9LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI5 sleep enable */
    using RCC_APB2LPENSR_SPI5LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1 sleep enable */
    using RCC_APB2LPENSR_SAI1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI2 sleep enable */
    using RCC_APB2LPENSR_SAI2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB3 Sleep enable register */
    using RCC_APB3LPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFT sleep enable */
    using RCC_APB3LPENSR_DFTLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4L Sleep enable register */
    using RCC_APB4LLPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP sleep enable */
    using RCC_APB4LLPENSR_HDPLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 sleep enable */
    using RCC_APB4LLPENSR_LPUART1LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI6 sleep enable */
    using RCC_APB4LLPENSR_SPI6LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 sleep enable */
    using RCC_APB4LLPENSR_I2C4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 sleep enable */
    using RCC_APB4LLPENSR_LPTIM2LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3 sleep enable */
    using RCC_APB4LLPENSR_LPTIM3LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 sleep enable */
    using RCC_APB4LLPENSR_LPTIM4LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM5 sleep enable */
    using RCC_APB4LLPENSR_LPTIM5LPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUF sleep enable */
    using RCC_APB4LLPENSR_VREFBUFLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC sleep enable */
    using RCC_APB4LLPENSR_RTCLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCAPB sleep enable */
    using RCC_APB4LLPENSR_RTCAPBLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GRET sleep enable */
    using RCC_APB4LLPENSR_R2GRETLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GNPU sleep enable */
    using RCC_APB4LLPENSR_R2GNPULPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SERF sleep enable */
    using RCC_APB4LLPENSR_SERFLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4H Sleep enable register */
    using RCC_APB4HLPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG sleep enable */
    using RCC_APB4HLPENSR_SYSCFGLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BSEC sleep enable */
    using RCC_APB4HLPENSR_BSECLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS sleep enable */
    using RCC_APB4HLPENSR_DTSLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSPERFM sleep enable */
    using RCC_APB4HLPENSR_BUSPERFMLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB5 Sleep enable register */
    using RCC_APB5LPENSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xABC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC sleep enable */
    using RCC_APB5LPENSR_LTDCLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP sleep enable */
    using RCC_APB5LPENSR_DCMIPPLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM sleep enable */
    using RCC_APB5LPENSR_GFXTIMLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC sleep enable */
    using RCC_APB5LPENSR_VENCLPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI sleep enable */
    using RCC_APB5LPENSR_CSILPENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC oscillator privilege configuration register0 */
    using RCC_PRIVCFGSR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the LSI configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR0_LSIPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the LSE configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR0_LSEPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the MSI configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR0_MSIPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the HSI configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR0_HSIPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the HSE configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR0_HSEPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC oscillator public configuration register0 */
    using RCC_PUBCFGSR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the LSI configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR0_LSIPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the LSE configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR0_LSEPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the MSI configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR0_MSIPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the HSI configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR0_HSIPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the HSE configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR0_HSEPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL privilege configuration register1 */
    using RCC_PRIVCFGSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PLL1 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR1_PLL1PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PLL2 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR1_PLL2PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PLL3 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR1_PLL3PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PLL4 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR1_PLL4PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL public configuration register1 */
    using RCC_PUBCFGSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PLL1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR1_PLL1PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PLL2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR1_PLL2PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PLL3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR1_PLL3PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PLL4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR1_PLL4PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC divider privilege configuration register2 */
    using RCC_PRIVCFGSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC1 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC1PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC2 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC2PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC3 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC3PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC4 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC4PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC5 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC5PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC6 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC6PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC7 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC7PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC8 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC8PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC9 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC9PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC10 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC10PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC11 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC11PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC12 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC12PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC13 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC13PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC14 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC14PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC15 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC15PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC16 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC16PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC17 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC17PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC18 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC18PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC19 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC19PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC20 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR2_IC20PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC divider public configuration register2 */
    using RCC_PUBCFGSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC1PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC2PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC3PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC4PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC5 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC5PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC6 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC6PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC7 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC7PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC8 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC8PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC9 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC9PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC10 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC10PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC11 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC11PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC12 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC12PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC13 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC13PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC14 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC14PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC15 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC15PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC16 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC16PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC17 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC17PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC18 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC18PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC19 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC19PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC20 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR2_IC20PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC system secure configuration register3 */
    using RCC_SECCFGSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the MOD configuration bits (enable, ready, divider). */
    using RCC_SECCFGSR3_MODSECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the SYS configuration bits (enable, ready, divider). */
    using RCC_SECCFGSR3_SYSSECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the BUS configuration bits (enable, ready, divider). */
    using RCC_SECCFGSR3_BUSSECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the PER configuration bits (enable, ready, divider). */
    using RCC_SECCFGSR3_PERSECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the INT configuration bits (enable, ready, divider). */
    using RCC_SECCFGSR3_INTSECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the RST configuration bits (enable, ready, divider). */
    using RCC_SECCFGSR3_RSTSECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the secure protection of the DFT configuration bits (enable, ready, divider). */
    using RCC_SECCFGSR3_DFTSECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC system privilege configuration register3 */
    using RCC_PRIVCFGSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the MOD configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR3_MODPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the SYS configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR3_SYSPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the BUS configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR3_BUSPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PER configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR3_PERPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the INT configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR3_INTPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the RST configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR3_RSTPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the DFT configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR3_DFTPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC system lock configuration register3 */
    using RCC_LOCKCFGSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the MOD configuration bits (enable, ready, divider). */
    using RCC_LOCKCFGSR3_MODLOCKS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the SYS configuration bits (enable, ready, divider). */
    using RCC_LOCKCFGSR3_SYSLOCKS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the BUS configuration bits (enable, ready, divider). */
    using RCC_LOCKCFGSR3_BUSLOCKS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the PER configuration bits (enable, ready, divider). */
    using RCC_LOCKCFGSR3_PERLOCKS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the INT configuration bits (enable, ready, divider). */
    using RCC_LOCKCFGSR3_INTLOCKS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the RST configuration bits (enable, ready, divider). */
    using RCC_LOCKCFGSR3_RSTLOCKS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the lock protection of the DFT configuration bits (enable, ready, divider). */
    using RCC_LOCKCFGSR3_DFTLOCKS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC system public configuration register3 */
    using RCC_PUBCFGSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the MOD configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR3_MODPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the SYS configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR3_SYSPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the BUS configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR3_BUSPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PER configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR3_PERPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the INT configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR3_INTPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the RST configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR3_RSTPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the DFT configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR3_DFTPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC privilege configuration register4 */
    using RCC_PRIVCFGSR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the ACLKN configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_ACLKNPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the ACLKNC configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_ACLKNCPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHBM configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_AHBMPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB1 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_AHB1PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB2 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_AHB2PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB3 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_AHB3PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB4 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_AHB4PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB5 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_AHB5PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB1 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_APB1PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB2 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_APB2PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB3 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_APB3PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB4 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_APB4PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB5 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_APB5PVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the NOC configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGSR4_NOCPVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC public configuration register4 */
    using RCC_PUBCFGSR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the ACLKN configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_ACLKNPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the ACLKNC configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_ACLKNCPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHBM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_AHBMPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_AHB1PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_AHB2PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_AHB3PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_AHB4PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB5 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_AHB5PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_APB1PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_APB2PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_APB3PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_APB4PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB5 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_APB5PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the NOC configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR4_NOCPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC public configuration register4 */
    using RCC_PUBCFGSR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_AXISRAM3PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_AXISRAM4PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM5 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_AXISRAM5PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM6 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_AXISRAM6PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHBSRAM1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_AHBSRAM1PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHBSRAM2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_AHBSRAM2PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the BKPSRAM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_BKPSRAMPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_AXISRAM1PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_AXISRAM2PUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the FLEXRAM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_FLEXRAMPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the NPUCACHERAM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_NPUCACHERAMPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the VENCRAM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGSR5_VENCRAMPUBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC control Clear register */
    using RCC_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1000, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable in Run/Sleep mode. */
    using RCC_CCR_LSIONC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable in Run/Sleep mode. */
    using RCC_CCR_LSEONC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI oscillator enable in Run/Sleep mode. */
    using RCC_CCR_MSIONC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI oscillator enable in Run/Sleep mode. */
    using RCC_CCR_HSIONC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE oscillator enable in Run/Sleep mode. */
    using RCC_CCR_HSEONC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL1 oscillator enable in Run/Sleep mode. */
    using RCC_CCR_PLL1ONC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL2 oscillator enable in Run/Sleep mode. */
    using RCC_CCR_PLL2ONC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL3 oscillator enable in Run/Sleep mode. */
    using RCC_CCR_PLL3ONC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL4 oscillator enable in Run/Sleep mode. */
    using RCC_CCR_PLL4ONC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC StopCCR configuration register */
    using RCC_STOPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSI oscillator enable in Run/Sleep mode. */
    using RCC_STOPCCR_LSISTOPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE oscillator enable in Run/Sleep mode. */
    using RCC_STOPCCR_LSESTOPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSI oscillator enable in Run/Sleep mode. */
    using RCC_STOPCCR_MSISTOPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSI oscillator enable in Run/Sleep mode. */
    using RCC_STOPCCR_HSISTOPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC bus reset register */
    using RCC_BUSRSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKN reset */
    using RCC_BUSRSTCR_ACLKNRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBM reset */
    using RCC_BUSRSTCR_AHBMRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1 reset */
    using RCC_BUSRSTCR_AHB1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB2 reset */
    using RCC_BUSRSTCR_AHB2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB3 reset */
    using RCC_BUSRSTCR_AHB3RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB4 reset */
    using RCC_BUSRSTCR_AHB4RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB5 reset */
    using RCC_BUSRSTCR_AHB5RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 reset */
    using RCC_BUSRSTCR_APB1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2 reset */
    using RCC_BUSRSTCR_APB2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB3 reset */
    using RCC_BUSRSTCR_APB3RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB4 reset */
    using RCC_BUSRSTCR_APB4RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB5 reset */
    using RCC_BUSRSTCR_APB5RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NOC reset */
    using RCC_BUSRSTCR_NOCRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC miscellaneous reset register */
    using RCC_MISCRSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG reset */
    using RCC_MISCRSTCR_DBGRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIPHY1 reset */
    using RCC_MISCRSTCR_XSPIPHY1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIPHY2 reset */
    using RCC_MISCRSTCR_XSPIPHY2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1DLL reset */
    using RCC_MISCRSTCR_SDMMC1DLLRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC2DLL reset */
    using RCC_MISCRSTCR_SDMMC2DLLRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC memory reset register */
    using RCC_MEMRSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM3 reset */
    using RCC_MEMRSTCR_AXISRAM3RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM4 reset */
    using RCC_MEMRSTCR_AXISRAM4RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM5 reset */
    using RCC_MEMRSTCR_AXISRAM5RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM6 reset */
    using RCC_MEMRSTCR_AXISRAM6RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM1 reset */
    using RCC_MEMRSTCR_AHBSRAM1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM2 reset */
    using RCC_MEMRSTCR_AHBSRAM2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM1 reset */
    using RCC_MEMRSTCR_AXISRAM1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM2 reset */
    using RCC_MEMRSTCR_AXISRAM2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLEXRAM reset */
    using RCC_MEMRSTCR_FLEXRAMRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHERAM reset */
    using RCC_MEMRSTCR_NPUCACHERAMRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENCRAM reset */
    using RCC_MEMRSTCR_VENCRAMRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOTROM reset */
    using RCC_MEMRSTCR_BOOTROMRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 reset register */
    using RCC_AHB1RSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 reset */
    using RCC_AHB1RSTCR_GPDMA1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC12 reset */
    using RCC_AHB1RSTCR_ADC12RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB2 Reset register */
    using RCC_AHB2RSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG reset */
    using RCC_AHB2RSTCR_RAMCFGRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF1 reset */
    using RCC_AHB2RSTCR_MDF1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1 reset */
    using RCC_AHB2RSTCR_ADF1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB3 reset register */
    using RCC_AHB3RSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG reset */
    using RCC_AHB3RSTCR_RNGRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH reset */
    using RCC_AHB3RSTCR_HASHRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP reset */
    using RCC_AHB3RSTCR_CRYPRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES reset */
    using RCC_AHB3RSTCR_SAESRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA reset */
    using RCC_AHB3RSTCR_PKARSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IAC reset */
    using RCC_AHB3RSTCR_IACRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB4 reset register */
    using RCC_AHB4RSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x121C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA reset */
    using RCC_AHB4RSTCR_GPIOARSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB reset */
    using RCC_AHB4RSTCR_GPIOBRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOC reset */
    using RCC_AHB4RSTCR_GPIOCRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOD reset */
    using RCC_AHB4RSTCR_GPIODRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOE reset */
    using RCC_AHB4RSTCR_GPIOERSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOF reset */
    using RCC_AHB4RSTCR_GPIOFRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOG reset */
    using RCC_AHB4RSTCR_GPIOGRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOH reset */
    using RCC_AHB4RSTCR_GPIOHRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPION reset */
    using RCC_AHB4RSTCR_GPIONRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOO reset */
    using RCC_AHB4RSTCR_GPIOORSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOP reset */
    using RCC_AHB4RSTCR_GPIOPRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOQ reset */
    using RCC_AHB4RSTCR_GPIOQRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR reset */
    using RCC_AHB4RSTCR_PWRRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC reset */
    using RCC_AHB4RSTCR_CRCRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB5 reset register */
    using RCC_AHB5RSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 reset */
    using RCC_AHB5RSTCR_HPDMA1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D reset */
    using RCC_AHB5RSTCR_DMA2DRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG reset */
    using RCC_AHB5RSTCR_JPEGRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC reset */
    using RCC_AHB5RSTCR_FMCRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI1 reset */
    using RCC_AHB5RSTCR_XSPI1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI reset */
    using RCC_AHB5RSTCR_PSSIRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC2 reset */
    using RCC_AHB5RSTCR_SDMMC2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1 reset */
    using RCC_AHB5RSTCR_SDMMC1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI2 reset */
    using RCC_AHB5RSTCR_XSPI2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM reset */
    using RCC_AHB5RSTCR_XSPIMRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI3 reset */
    using RCC_AHB5RSTCR_XSPI3RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE4 reset */
    using RCC_AHB5RSTCR_MCE4RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXMMU reset */
    using RCC_AHB5RSTCR_GFXMMURSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPU reset */
    using RCC_AHB5RSTCR_GPURSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFGOTGHSPHY1 reset */
    using RCC_AHB5RSTCR_SYSCFGOTGHSPHY1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFGOTGHSPHY2 reset */
    using RCC_AHB5RSTCR_SYSCFGOTGHSPHY2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1 reset */
    using RCC_AHB5RSTCR_ETH1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG1 reset */
    using RCC_AHB5RSTCR_OTG1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY1 reset */
    using RCC_AHB5RSTCR_OTGPHY1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY2 reset */
    using RCC_AHB5RSTCR_OTGPHY2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG2 reset */
    using RCC_AHB5RSTCR_OTG2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHE reset */
    using RCC_AHB5RSTCR_NPUCACHERSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPU reset */
    using RCC_AHB5RSTCR_NPURSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1L reset register */
    using RCC_APB1LRSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 reset */
    using RCC_APB1LRSTCR_TIM2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 reset */
    using RCC_APB1LRSTCR_TIM3RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 reset */
    using RCC_APB1LRSTCR_TIM4RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 reset */
    using RCC_APB1LRSTCR_TIM5RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 reset */
    using RCC_APB1LRSTCR_TIM6RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7 reset */
    using RCC_APB1LRSTCR_TIM7RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 reset */
    using RCC_APB1LRSTCR_TIM12RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM13 reset */
    using RCC_APB1LRSTCR_TIM13RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM14 reset */
    using RCC_APB1LRSTCR_TIM14RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 reset */
    using RCC_APB1LRSTCR_LPTIM1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG reset */
    using RCC_APB1LRSTCR_WWDGRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM10 reset */
    using RCC_APB1LRSTCR_TIM10RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM11 reset */
    using RCC_APB1LRSTCR_TIM11RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2 reset */
    using RCC_APB1LRSTCR_SPI2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 reset */
    using RCC_APB1LRSTCR_SPI3RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX1 reset */
    using RCC_APB1LRSTCR_SPDIFRX1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2 reset */
    using RCC_APB1LRSTCR_USART2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3 reset */
    using RCC_APB1LRSTCR_USART3RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART4 reset */
    using RCC_APB1LRSTCR_UART4RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART5 reset */
    using RCC_APB1LRSTCR_UART5RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 reset */
    using RCC_APB1LRSTCR_I2C1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 reset */
    using RCC_APB1LRSTCR_I2C2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 reset */
    using RCC_APB1LRSTCR_I2C3RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C1 reset */
    using RCC_APB1LRSTCR_I3C1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C2 reset */
    using RCC_APB1LRSTCR_I3C2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART7 reset */
    using RCC_APB1LRSTCR_UART7RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART8 reset */
    using RCC_APB1LRSTCR_UART8RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1H reset register */
    using RCC_APB1HRSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS reset */
    using RCC_APB1HRSTCR_MDIOSRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN reset */
    using RCC_APB1HRSTCR_FDCANRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD1 reset */
    using RCC_APB1HRSTCR_UCPD1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB2 reset register */
    using RCC_APB2RSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x122C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 reset */
    using RCC_APB2RSTCR_TIM1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8 reset */
    using RCC_APB2RSTCR_TIM8RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 reset */
    using RCC_APB2RSTCR_USART1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART6 reset */
    using RCC_APB2RSTCR_USART6RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART9 reset */
    using RCC_APB2RSTCR_UART9RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART10 reset */
    using RCC_APB2RSTCR_USART10RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 reset */
    using RCC_APB2RSTCR_SPI1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI4 reset */
    using RCC_APB2RSTCR_SPI4RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM18 reset */
    using RCC_APB2RSTCR_TIM18RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 reset */
    using RCC_APB2RSTCR_TIM15RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 reset */
    using RCC_APB2RSTCR_TIM16RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17 reset */
    using RCC_APB2RSTCR_TIM17RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM9 reset */
    using RCC_APB2RSTCR_TIM9RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI5 reset */
    using RCC_APB2RSTCR_SPI5RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1 reset */
    using RCC_APB2RSTCR_SAI1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI2 reset */
    using RCC_APB2RSTCR_SAI2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4L reset register */
    using RCC_APB4LRSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP reset */
    using RCC_APB4LRSTCR_HDPRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 reset */
    using RCC_APB4LRSTCR_LPUART1RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI6 reset */
    using RCC_APB4LRSTCR_SPI6RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 reset */
    using RCC_APB4LRSTCR_I2C4RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 reset */
    using RCC_APB4LRSTCR_LPTIM2RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3 reset */
    using RCC_APB4LRSTCR_LPTIM3RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 reset */
    using RCC_APB4LRSTCR_LPTIM4RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM5 reset */
    using RCC_APB4LRSTCR_LPTIM5RSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUF reset */
    using RCC_APB4LRSTCR_VREFBUFRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC reset */
    using RCC_APB4LRSTCR_RTCRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GRET reset */
    using RCC_APB4LRSTCR_R2GRETRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GNPU reset */
    using RCC_APB4LRSTCR_R2GNPURSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SERF reset */
    using RCC_APB4LRSTCR_SERFRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4H reset register */
    using RCC_APB4HRSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG reset */
    using RCC_APB4HRSTCR_SYSCFGRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS reset */
    using RCC_APB4HRSTCR_DTSRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSPERFM reset */
    using RCC_APB4HRSTCR_BUSPERFMRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB5 reset register */
    using RCC_APB5RSTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x123C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC reset */
    using RCC_APB5RSTCR_LTDCRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP reset */
    using RCC_APB5RSTCR_DCMIPPRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM reset */
    using RCC_APB5RSTCR_GFXTIMRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC reset */
    using RCC_APB5RSTCR_VENCRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI reset */
    using RCC_APB5RSTCR_CSIRSTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC divider enable register */
    using RCC_DIVENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC1 enable */
    using RCC_DIVENCR_IC1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC2 enable */
    using RCC_DIVENCR_IC2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC3 enable */
    using RCC_DIVENCR_IC3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC4 enable */
    using RCC_DIVENCR_IC4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC5 enable */
    using RCC_DIVENCR_IC5ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC6 enable */
    using RCC_DIVENCR_IC6ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC7 enable */
    using RCC_DIVENCR_IC7ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC8 enable */
    using RCC_DIVENCR_IC8ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC9 enable */
    using RCC_DIVENCR_IC9ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC10 enable */
    using RCC_DIVENCR_IC10ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC11 enable */
    using RCC_DIVENCR_IC11ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC12 enable */
    using RCC_DIVENCR_IC12ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC13 enable */
    using RCC_DIVENCR_IC13ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC14 enable */
    using RCC_DIVENCR_IC14ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC15 enable */
    using RCC_DIVENCR_IC15ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC16 enable */
    using RCC_DIVENCR_IC16ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC17 enable */
    using RCC_DIVENCR_IC17ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC18 enable */
    using RCC_DIVENCR_IC18ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC19 enable */
    using RCC_DIVENCR_IC19ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC20 enable */
    using RCC_DIVENCR_IC20ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC bus enable register */
    using RCC_BUSENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKN enable */
    using RCC_BUSENCR_ACLKNENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKNC enable */
    using RCC_BUSENCR_ACLKNCENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBM enable */
    using RCC_BUSENCR_AHBMENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1 enable */
    using RCC_BUSENCR_AHB1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB2 enable */
    using RCC_BUSENCR_AHB2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB3 enable */
    using RCC_BUSENCR_AHB3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB4 enable */
    using RCC_BUSENCR_AHB4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB5 enable */
    using RCC_BUSENCR_AHB5ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 enable */
    using RCC_BUSENCR_APB1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2 enable */
    using RCC_BUSENCR_APB2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB3 enable */
    using RCC_BUSENCR_APB3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB4 enable */
    using RCC_BUSENCR_APB4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB5 enable */
    using RCC_BUSENCR_APB5ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC miscellaneous enable register */
    using RCC_MISCENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG enable */
    using RCC_MISCENCR_DBGENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCO1 enable */
    using RCC_MISCENCR_MCO1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCO2 enable */
    using RCC_MISCENCR_MCO2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIPHYCOMP enable */
    using RCC_MISCENCR_XSPIPHYCOMPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PER enable */
    using RCC_MISCENCR_PERENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC memory enable register */
    using RCC_MEMENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM3 enable */
    using RCC_MEMENCR_AXISRAM3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM4 enable */
    using RCC_MEMENCR_AXISRAM4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM5 enable */
    using RCC_MEMENCR_AXISRAM5ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM6 enable */
    using RCC_MEMENCR_AXISRAM6ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM1 enable */
    using RCC_MEMENCR_AHBSRAM1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM2 enable */
    using RCC_MEMENCR_AHBSRAM2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKPSRAM enable */
    using RCC_MEMENCR_BKPSRAMENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM1 enable */
    using RCC_MEMENCR_AXISRAM1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM2 enable */
    using RCC_MEMENCR_AXISRAM2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLEXRAM enable */
    using RCC_MEMENCR_FLEXRAMENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHERAM enable */
    using RCC_MEMENCR_NPUCACHERAMENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENCRAM enable */
    using RCC_MEMENCR_VENCRAMENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOTROM enable */
    using RCC_MEMENCR_BOOTROMENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 enable register */
    using RCC_AHB1ENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 enable */
    using RCC_AHB1ENCR_GPDMA1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC12 enable */
    using RCC_AHB1ENCR_ADC12ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB2 enable register */
    using RCC_AHB2ENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG enable */
    using RCC_AHB2ENCR_RAMCFGENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF1 enable */
    using RCC_AHB2ENCR_MDF1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1 enable */
    using RCC_AHB2ENCR_ADF1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB3 enable register */
    using RCC_AHB3ENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG enable */
    using RCC_AHB3ENCR_RNGENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH enable */
    using RCC_AHB3ENCR_HASHENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP enable */
    using RCC_AHB3ENCR_CRYPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES enable */
    using RCC_AHB3ENCR_SAESENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA enable */
    using RCC_AHB3ENCR_PKAENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RIFSC enable */
    using RCC_AHB3ENCR_RIFSCENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IAC enable */
    using RCC_AHB3ENCR_IACENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF enable */
    using RCC_AHB3ENCR_RISAFENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB4 enable register */
    using RCC_AHB4ENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x125C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA enable */
    using RCC_AHB4ENCR_GPIOAENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB enable */
    using RCC_AHB4ENCR_GPIOBENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOC enable */
    using RCC_AHB4ENCR_GPIOCENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOD enable */
    using RCC_AHB4ENCR_GPIODENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOE enable */
    using RCC_AHB4ENCR_GPIOEENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOF enable */
    using RCC_AHB4ENCR_GPIOFENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOG enable */
    using RCC_AHB4ENCR_GPIOGENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOH enable */
    using RCC_AHB4ENCR_GPIOHENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPION enable */
    using RCC_AHB4ENCR_GPIONENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOO enable */
    using RCC_AHB4ENCR_GPIOOENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOP enable */
    using RCC_AHB4ENCR_GPIOPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOQ enable */
    using RCC_AHB4ENCR_GPIOQENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR enable */
    using RCC_AHB4ENCR_PWRENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC enable */
    using RCC_AHB4ENCR_CRCENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB5 enable register */
    using RCC_AHB5ENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 enable */
    using RCC_AHB5ENCR_HPDMA1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D enable */
    using RCC_AHB5ENCR_DMA2DENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG enable */
    using RCC_AHB5ENCR_JPEGENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC enable */
    using RCC_AHB5ENCR_FMCENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI1 enable */
    using RCC_AHB5ENCR_XSPI1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI enable */
    using RCC_AHB5ENCR_PSSIENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC2 enable */
    using RCC_AHB5ENCR_SDMMC2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1 enable */
    using RCC_AHB5ENCR_SDMMC1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI2 enable */
    using RCC_AHB5ENCR_XSPI2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM enable */
    using RCC_AHB5ENCR_XSPIMENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE1 enable */
    using RCC_AHB5ENCR_MCE1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE2 enable */
    using RCC_AHB5ENCR_MCE2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE3 enable */
    using RCC_AHB5ENCR_MCE3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI3 enable */
    using RCC_AHB5ENCR_XSPI3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE4 enable */
    using RCC_AHB5ENCR_MCE4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXMMU enable */
    using RCC_AHB5ENCR_GFXMMUENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPU enable */
    using RCC_AHB5ENCR_GPUENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1MAC enable */
    using RCC_AHB5ENCR_ETH1MACENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1TX enable */
    using RCC_AHB5ENCR_ETH1TXENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1RX enable */
    using RCC_AHB5ENCR_ETH1RXENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1 enable */
    using RCC_AHB5ENCR_ETH1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG1 enable */
    using RCC_AHB5ENCR_OTG1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY1 enable */
    using RCC_AHB5ENCR_OTGPHY1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY2 enable */
    using RCC_AHB5ENCR_OTGPHY2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG2 enable */
    using RCC_AHB5ENCR_OTG2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHE enable */
    using RCC_AHB5ENCR_NPUCACHEENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPU enable */
    using RCC_AHB5ENCR_NPUENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1L enable register */
    using RCC_APB1LENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 enable */
    using RCC_APB1LENCR_TIM2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 enable */
    using RCC_APB1LENCR_TIM3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 enable */
    using RCC_APB1LENCR_TIM4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 enable */
    using RCC_APB1LENCR_TIM5ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 enable */
    using RCC_APB1LENCR_TIM6ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7 enable */
    using RCC_APB1LENCR_TIM7ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 enable */
    using RCC_APB1LENCR_TIM12ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM13 enable */
    using RCC_APB1LENCR_TIM13ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM14 enable */
    using RCC_APB1LENCR_TIM14ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 enable */
    using RCC_APB1LENCR_LPTIM1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM10 enable */
    using RCC_APB1LENCR_TIM10ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM11 enable */
    using RCC_APB1LENCR_TIM11ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2 enable */
    using RCC_APB1LENCR_SPI2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 enable */
    using RCC_APB1LENCR_SPI3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX1 enable */
    using RCC_APB1LENCR_SPDIFRX1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2 enable */
    using RCC_APB1LENCR_USART2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3 enable */
    using RCC_APB1LENCR_USART3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART4 enable */
    using RCC_APB1LENCR_UART4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART5 enable */
    using RCC_APB1LENCR_UART5ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 enable */
    using RCC_APB1LENCR_I2C1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 enable */
    using RCC_APB1LENCR_I2C2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 enable */
    using RCC_APB1LENCR_I2C3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C1 enable */
    using RCC_APB1LENCR_I3C1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C2 enable */
    using RCC_APB1LENCR_I3C2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART7 enable */
    using RCC_APB1LENCR_UART7ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART8 enable */
    using RCC_APB1LENCR_UART8ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1H enable register */
    using RCC_APB1HENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS enable */
    using RCC_APB1HENCR_MDIOSENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN enable */
    using RCC_APB1HENCR_FDCANENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD1 enable */
    using RCC_APB1HENCR_UCPD1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB2 enable register */
    using RCC_APB2ENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x126C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 enable */
    using RCC_APB2ENCR_TIM1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8 enable */
    using RCC_APB2ENCR_TIM8ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 enable */
    using RCC_APB2ENCR_USART1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART6 enable */
    using RCC_APB2ENCR_USART6ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART9 enable */
    using RCC_APB2ENCR_UART9ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART10 enable */
    using RCC_APB2ENCR_USART10ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 enable */
    using RCC_APB2ENCR_SPI1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI4 enable */
    using RCC_APB2ENCR_SPI4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM18 enable */
    using RCC_APB2ENCR_TIM18ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 enable */
    using RCC_APB2ENCR_TIM15ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 enable */
    using RCC_APB2ENCR_TIM16ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17 enable */
    using RCC_APB2ENCR_TIM17ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM9 enable */
    using RCC_APB2ENCR_TIM9ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI5 enable */
    using RCC_APB2ENCR_SPI5ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1 enable */
    using RCC_APB2ENCR_SAI1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI2 enable */
    using RCC_APB2ENCR_SAI2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB3 enable register */
    using RCC_APB3ENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFT enable */
    using RCC_APB3ENCR_DFTENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4L enable register */
    using RCC_APB4LENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP enable */
    using RCC_APB4LENCR_HDPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 enable */
    using RCC_APB4LENCR_LPUART1ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI6 enable */
    using RCC_APB4LENCR_SPI6ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 enable */
    using RCC_APB4LENCR_I2C4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 enable */
    using RCC_APB4LENCR_LPTIM2ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3 enable */
    using RCC_APB4LENCR_LPTIM3ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 enable */
    using RCC_APB4LENCR_LPTIM4ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM5 enable */
    using RCC_APB4LENCR_LPTIM5ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUF enable */
    using RCC_APB4LENCR_VREFBUFENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC enable */
    using RCC_APB4LENCR_RTCENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCAPB enable */
    using RCC_APB4LENCR_RTCAPBENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GRET enable */
    using RCC_APB4LENCR_R2GRETENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GNPU enable */
    using RCC_APB4LENCR_R2GNPUENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SERF enable */
    using RCC_APB4LENCR_SERFENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4H enable register */
    using RCC_APB4HENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG enable */
    using RCC_APB4HENCR_SYSCFGENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BSEC enable */
    using RCC_APB4HENCR_BSECENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS enable */
    using RCC_APB4HENCR_DTSENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSPERFM enable */
    using RCC_APB4HENCR_BUSPERFMENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB5 enable register */
    using RCC_APB5ENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x127C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC enable */
    using RCC_APB5ENCR_LTDCENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP enable */
    using RCC_APB5ENCR_DCMIPPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM enable */
    using RCC_APB5ENCR_GFXTIMENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC enable */
    using RCC_APB5ENCR_VENCENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI enable */
    using RCC_APB5ENCR_CSIENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC divider Sleep enable register */
    using RCC_DIVLPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC1 sleep enable */
    using RCC_DIVLPENCR_IC1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC2 sleep enable */
    using RCC_DIVLPENCR_IC2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC3 sleep enable */
    using RCC_DIVLPENCR_IC3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC4 sleep enable */
    using RCC_DIVLPENCR_IC4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC5 sleep enable */
    using RCC_DIVLPENCR_IC5LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC6 sleep enable */
    using RCC_DIVLPENCR_IC6LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC7 sleep enable */
    using RCC_DIVLPENCR_IC7LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC8 sleep enable */
    using RCC_DIVLPENCR_IC8LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC9 sleep enable */
    using RCC_DIVLPENCR_IC9LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC10 sleep enable */
    using RCC_DIVLPENCR_IC10LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC11 sleep enable */
    using RCC_DIVLPENCR_IC11LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC12 sleep enable */
    using RCC_DIVLPENCR_IC12LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC13 sleep enable */
    using RCC_DIVLPENCR_IC13LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC14 sleep enable */
    using RCC_DIVLPENCR_IC14LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC15 sleep enable */
    using RCC_DIVLPENCR_IC15LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC16 sleep enable */
    using RCC_DIVLPENCR_IC16LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC17 sleep enable */
    using RCC_DIVLPENCR_IC17LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC18 sleep enable */
    using RCC_DIVLPENCR_IC18LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC19 sleep enable */
    using RCC_DIVLPENCR_IC19LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC20 sleep enable */
    using RCC_DIVLPENCR_IC20LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC bus Sleep enable register */
    using RCC_BUSLPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKN sleep enable */
    using RCC_BUSLPENCR_ACLKNLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACLKNC sleep enable */
    using RCC_BUSLPENCR_ACLKNCLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBM sleep enable */
    using RCC_BUSLPENCR_AHBMLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB1 sleep enable */
    using RCC_BUSLPENCR_AHB1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB2 sleep enable */
    using RCC_BUSLPENCR_AHB2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB3 sleep enable */
    using RCC_BUSLPENCR_AHB3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB4 sleep enable */
    using RCC_BUSLPENCR_AHB4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB5 sleep enable */
    using RCC_BUSLPENCR_AHB5LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB1 sleep enable */
    using RCC_BUSLPENCR_APB1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB2 sleep enable */
    using RCC_BUSLPENCR_APB2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB3 sleep enable */
    using RCC_BUSLPENCR_APB3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB4 sleep enable */
    using RCC_BUSLPENCR_APB4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APB5 sleep enable */
    using RCC_BUSLPENCR_APB5LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC miscellaneous Sleep enable register */
    using RCC_MISCLPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG sleep enable */
    using RCC_MISCLPENCR_DBGLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIPHYCOMP sleep enable */
    using RCC_MISCLPENCR_XSPIPHYCOMPLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PER sleep enable */
    using RCC_MISCLPENCR_PERLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC memory Sleep enable register */
    using RCC_MEMLPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM3 sleep enable */
    using RCC_MEMLPENCR_AXISRAM3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM4 sleep enable */
    using RCC_MEMLPENCR_AXISRAM4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM5 sleep enable */
    using RCC_MEMLPENCR_AXISRAM5LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM6 sleep enable */
    using RCC_MEMLPENCR_AXISRAM6LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM1 sleep enable */
    using RCC_MEMLPENCR_AHBSRAM1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBSRAM2 sleep enable */
    using RCC_MEMLPENCR_AHBSRAM2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BKPSRAM sleep enable */
    using RCC_MEMLPENCR_BKPSRAMLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM1 sleep enable */
    using RCC_MEMLPENCR_AXISRAM1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXISRAM2 sleep enable */
    using RCC_MEMLPENCR_AXISRAM2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLEXRAM sleep enable */
    using RCC_MEMLPENCR_FLEXRAMLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHERAM sleep enable */
    using RCC_MEMLPENCR_NPUCACHERAMLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENCRAM sleep enable */
    using RCC_MEMLPENCR_VENCRAMLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOTROM sleep enable */
    using RCC_MEMLPENCR_BOOTROMLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB1 Sleep enable register */
    using RCC_AHB1LPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 sleep enable */
    using RCC_AHB1LPENCR_GPDMA1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC12 sleep enable */
    using RCC_AHB1LPENCR_ADC12LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB2 Sleep enable register */
    using RCC_AHB2LPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG sleep enable */
    using RCC_AHB2LPENCR_RAMCFGLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF1 sleep enable */
    using RCC_AHB2LPENCR_MDF1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF1 sleep enable */
    using RCC_AHB2LPENCR_ADF1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB3 Sleep enable register */
    using RCC_AHB3LPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG sleep enable */
    using RCC_AHB3LPENCR_RNGLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH sleep enable */
    using RCC_AHB3LPENCR_HASHLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP sleep enable */
    using RCC_AHB3LPENCR_CRYPLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES sleep enable */
    using RCC_AHB3LPENCR_SAESLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA sleep enable */
    using RCC_AHB3LPENCR_PKALPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RIFSC sleep enable */
    using RCC_AHB3LPENCR_RIFSCLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IAC sleep enable */
    using RCC_AHB3LPENCR_IACLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF sleep enable */
    using RCC_AHB3LPENCR_RISAFLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB4 Sleep enable register */
    using RCC_AHB4LPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x129C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOA sleep enable */
    using RCC_AHB4LPENCR_GPIOALPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOB sleep enable */
    using RCC_AHB4LPENCR_GPIOBLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOC sleep enable */
    using RCC_AHB4LPENCR_GPIOCLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOD sleep enable */
    using RCC_AHB4LPENCR_GPIODLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOE sleep enable */
    using RCC_AHB4LPENCR_GPIOELPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOF sleep enable */
    using RCC_AHB4LPENCR_GPIOFLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOG sleep enable */
    using RCC_AHB4LPENCR_GPIOGLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOH sleep enable */
    using RCC_AHB4LPENCR_GPIOHLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPION sleep enable */
    using RCC_AHB4LPENCR_GPIONLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOO sleep enable */
    using RCC_AHB4LPENCR_GPIOOLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOP sleep enable */
    using RCC_AHB4LPENCR_GPIOPLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIOQ sleep enable */
    using RCC_AHB4LPENCR_GPIOQLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR sleep enable */
    using RCC_AHB4LPENCR_PWRLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC sleep enable */
    using RCC_AHB4LPENCR_CRCLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC AHB5 Sleep enable register */
    using RCC_AHB5LPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA1 sleep enable */
    using RCC_AHB5LPENCR_HPDMA1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D sleep enable */
    using RCC_AHB5LPENCR_DMA2DLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG sleep enable */
    using RCC_AHB5LPENCR_JPEGLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC sleep enable */
    using RCC_AHB5LPENCR_FMCLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI1 sleep enable */
    using RCC_AHB5LPENCR_XSPI1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI sleep enable */
    using RCC_AHB5LPENCR_PSSILPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC2 sleep enable */
    using RCC_AHB5LPENCR_SDMMC2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1 sleep enable */
    using RCC_AHB5LPENCR_SDMMC1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI2 sleep enable */
    using RCC_AHB5LPENCR_XSPI2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM sleep enable */
    using RCC_AHB5LPENCR_XSPIMLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE1 sleep enable */
    using RCC_AHB5LPENCR_MCE1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE2 sleep enable */
    using RCC_AHB5LPENCR_MCE2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE3 sleep enable */
    using RCC_AHB5LPENCR_MCE3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI3 sleep enable */
    using RCC_AHB5LPENCR_XSPI3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE4 sleep enable */
    using RCC_AHB5LPENCR_MCE4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXMMU sleep enable */
    using RCC_AHB5LPENCR_GFXMMULPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPU sleep enable */
    using RCC_AHB5LPENCR_GPULPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1MAC sleep enable */
    using RCC_AHB5LPENCR_ETH1MACLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1TX sleep enable */
    using RCC_AHB5LPENCR_ETH1TXLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1RX sleep enable */
    using RCC_AHB5LPENCR_ETH1RXLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH1 sleep enable */
    using RCC_AHB5LPENCR_ETH1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG1 sleep enable */
    using RCC_AHB5LPENCR_OTG1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY1 sleep enable */
    using RCC_AHB5LPENCR_OTGPHY1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTGPHY2 sleep enable */
    using RCC_AHB5LPENCR_OTGPHY2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG2 sleep enable */
    using RCC_AHB5LPENCR_OTG2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPUCACHE sleep enable */
    using RCC_AHB5LPENCR_NPUCACHELPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPU sleep enable */
    using RCC_AHB5LPENCR_NPULPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1L Sleep enable register */
    using RCC_APB1LLPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 sleep enable */
    using RCC_APB1LLPENCR_TIM2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 sleep enable */
    using RCC_APB1LLPENCR_TIM3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 sleep enable */
    using RCC_APB1LLPENCR_TIM4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 sleep enable */
    using RCC_APB1LLPENCR_TIM5LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 sleep enable */
    using RCC_APB1LLPENCR_TIM6LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7 sleep enable */
    using RCC_APB1LLPENCR_TIM7LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 sleep enable */
    using RCC_APB1LLPENCR_TIM12LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM13 sleep enable */
    using RCC_APB1LLPENCR_TIM13LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM14 sleep enable */
    using RCC_APB1LLPENCR_TIM14LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1 sleep enable */
    using RCC_APB1LLPENCR_LPTIM1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDG sleep enable */
    using RCC_APB1LLPENCR_WWDGLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM10 sleep enable */
    using RCC_APB1LLPENCR_TIM10LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM11 sleep enable */
    using RCC_APB1LLPENCR_TIM11LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2 sleep enable */
    using RCC_APB1LLPENCR_SPI2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 sleep enable */
    using RCC_APB1LLPENCR_SPI3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX1 sleep enable */
    using RCC_APB1LLPENCR_SPDIFRX1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2 sleep enable */
    using RCC_APB1LLPENCR_USART2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3 sleep enable */
    using RCC_APB1LLPENCR_USART3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART4 sleep enable */
    using RCC_APB1LLPENCR_UART4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART5 sleep enable */
    using RCC_APB1LLPENCR_UART5LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 sleep enable */
    using RCC_APB1LLPENCR_I2C1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 sleep enable */
    using RCC_APB1LLPENCR_I2C2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 sleep enable */
    using RCC_APB1LLPENCR_I2C3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C1 sleep enable */
    using RCC_APB1LLPENCR_I3C1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C2 sleep enable */
    using RCC_APB1LLPENCR_I3C2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART7 sleep enable */
    using RCC_APB1LLPENCR_UART7LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART8 sleep enable */
    using RCC_APB1LLPENCR_UART8LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB1H Sleep enable register */
    using RCC_APB1HLPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS sleep enable */
    using RCC_APB1HLPENCR_MDIOSLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN sleep enable */
    using RCC_APB1HLPENCR_FDCANLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD1 sleep enable */
    using RCC_APB1HLPENCR_UCPD1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB2 Sleep enable register */
    using RCC_APB2LPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 sleep enable */
    using RCC_APB2LPENCR_TIM1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8 sleep enable */
    using RCC_APB2LPENCR_TIM8LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 sleep enable */
    using RCC_APB2LPENCR_USART1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART6 sleep enable */
    using RCC_APB2LPENCR_USART6LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART9 sleep enable */
    using RCC_APB2LPENCR_UART9LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART10 sleep enable */
    using RCC_APB2LPENCR_USART10LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 sleep enable */
    using RCC_APB2LPENCR_SPI1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI4 sleep enable */
    using RCC_APB2LPENCR_SPI4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM18 sleep enable */
    using RCC_APB2LPENCR_TIM18LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 sleep enable */
    using RCC_APB2LPENCR_TIM15LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 sleep enable */
    using RCC_APB2LPENCR_TIM16LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17 sleep enable */
    using RCC_APB2LPENCR_TIM17LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM9 sleep enable */
    using RCC_APB2LPENCR_TIM9LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI5 sleep enable */
    using RCC_APB2LPENCR_SPI5LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1 sleep enable */
    using RCC_APB2LPENCR_SAI1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI2 sleep enable */
    using RCC_APB2LPENCR_SAI2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB3 Sleep enable register */
    using RCC_APB3LPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFT sleep enable */
    using RCC_APB3LPENCR_DFTLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4L Sleep enable register */
    using RCC_APB4LLPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP sleep enable */
    using RCC_APB4LLPENCR_HDPLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 sleep enable */
    using RCC_APB4LLPENCR_LPUART1LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI6 sleep enable */
    using RCC_APB4LLPENCR_SPI6LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 sleep enable */
    using RCC_APB4LLPENCR_I2C4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 sleep enable */
    using RCC_APB4LLPENCR_LPTIM2LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3 sleep enable */
    using RCC_APB4LLPENCR_LPTIM3LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 sleep enable */
    using RCC_APB4LLPENCR_LPTIM4LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM5 sleep enable */
    using RCC_APB4LLPENCR_LPTIM5LPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUF sleep enable */
    using RCC_APB4LLPENCR_VREFBUFLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC sleep enable */
    using RCC_APB4LLPENCR_RTCLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTCAPB sleep enable */
    using RCC_APB4LLPENCR_RTCAPBLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GRET sleep enable */
    using RCC_APB4LLPENCR_R2GRETLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R2GNPU sleep enable */
    using RCC_APB4LLPENCR_R2GNPULPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SERF sleep enable */
    using RCC_APB4LLPENCR_SERFLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB4H Sleep enable register */
    using RCC_APB4HLPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG sleep enable */
    using RCC_APB4HLPENCR_SYSCFGLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BSEC sleep enable */
    using RCC_APB4HLPENCR_BSECLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS sleep enable */
    using RCC_APB4HLPENCR_DTSLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSPERFM sleep enable */
    using RCC_APB4HLPENCR_BUSPERFMLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC APB5 Sleep enable register */
    using RCC_APB5LPENCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC sleep enable */
    using RCC_APB5LPENCR_LTDCLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP sleep enable */
    using RCC_APB5LPENCR_DCMIPPLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXTIM sleep enable */
    using RCC_APB5LPENCR_GFXTIMLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VENC sleep enable */
    using RCC_APB5LPENCR_VENCLPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSI sleep enable */
    using RCC_APB5LPENCR_CSILPENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC oscillator privilege configuration register0 */
    using RCC_PRIVCFGCR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1784, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the LSI configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR0_LSIPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the LSE configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR0_LSEPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the MSI configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR0_MSIPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the HSI configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR0_HSIPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the HSE configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR0_HSEPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC oscillator public configuration register0 */
    using RCC_PUBCFGCR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the LSI configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR0_LSIPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the LSE configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR0_LSEPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the MSI configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR0_MSIPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the HSI configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR0_HSIPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the HSE configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR0_HSEPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL privilege configuration register1 */
    using RCC_PRIVCFGCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1794, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PLL1 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR1_PLL1PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PLL2 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR1_PLL2PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PLL3 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR1_PLL3PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PLL4 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR1_PLL4PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC PLL public configuration register1 */
    using RCC_PUBCFGCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x179C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PLL1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR1_PLL1PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PLL2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR1_PLL2PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PLL3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR1_PLL3PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PLL4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR1_PLL4PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC divider privilege configuration register2 */
    using RCC_PRIVCFGCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC1 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC1PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC2 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC2PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC3 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC3PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC4 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC4PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC5 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC5PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC6 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC6PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC7 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC7PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC8 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC8PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC9 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC9PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC10 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC10PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC11 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC11PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC12 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC12PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC13 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC13PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC14 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC14PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC15 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC15PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC16 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC16PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC17 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC17PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC18 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC18PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC19 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC19PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the IC20 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR2_IC20PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC divider public configuration register2 */
    using RCC_PUBCFGCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC1PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC2PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC3PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC4PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC5 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC5PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC6 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC6PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC7 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC7PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC8 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC8PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC9 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC9PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC10 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC10PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC11 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC11PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC12 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC12PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC13 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC13PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC14 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC14PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC15 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC15PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC16 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC16PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC17 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC17PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC18 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC18PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC19 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC19PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the IC20 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR2_IC20PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC system privilege configuration register3 */
    using RCC_PRIVCFGCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the MOD configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR3_MODPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the SYS configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR3_SYSPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the BUS configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR3_BUSPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the PER configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR3_PERPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the INT configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR3_INTPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the RST configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR3_RSTPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the DFT configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR3_DFTPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC system public configuration register3 */
    using RCC_PUBCFGCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the MOD configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR3_MODPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the SYS configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR3_SYSPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the BUS configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR3_BUSPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the PER configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR3_PERPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the INT configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR3_INTPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the RST configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR3_RSTPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the DFT configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR3_DFTPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC privilege configuration register4 */
    using RCC_PRIVCFGCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the ACLKN configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_ACLKNPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the ACLKNC configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_ACLKNCPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHBM configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_AHBMPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB1 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_AHB1PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB2 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_AHB2PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB3 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_AHB3PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB4 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_AHB4PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the AHB5 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_AHB5PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB1 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_APB1PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB2 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_APB2PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB3 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_APB3PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB4 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_APB4PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the APB5 configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_APB5PVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the privilege protection of the NOC configuration bits (enable, ready, divider). */
    using RCC_PRIVCFGCR4_NOCPVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC public configuration register4 */
    using RCC_PUBCFGCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the ACLKN configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_ACLKNPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the ACLKNC configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_ACLKNCPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHBM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_AHBMPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_AHB1PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_AHB2PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_AHB3PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_AHB4PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHB5 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_AHB5PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_APB1PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_APB2PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_APB3PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_APB4PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the APB5 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_APB5PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the NOC configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR4_NOCPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RCC public configuration register4 */
    using RCC_PUBCFGCR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM3 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_AXISRAM3PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM4 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_AXISRAM4PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM5 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_AXISRAM5PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM6 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_AXISRAM6PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHBSRAM1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_AHBSRAM1PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AHBSRAM2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_AHBSRAM2PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the BKPSRAM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_BKPSRAMPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM1 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_AXISRAM1PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the AXISRAM2 configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_AXISRAM2PUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the FLEXRAM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_FLEXRAMPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the NPUCACHERAM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_CACHEAXIRAMPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the public protection of the VENCRAM configuration bits (enable, ready, divider). */
    using RCC_PUBCFGCR5_VENCRAMPUBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
