/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U599_SYSCFG_HPP
#define EMBEDDED_PP_STM32U599_SYSCFG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System configuration controller */
namespace STM32U599::SYSCFG {

    /** @brief SYSCFG secure configuration register */
    using SYSCFG_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG clock control, memory erase status and compensation cell registers security */
    using SYSCFG_SECCFGR_SYSCFGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG configuration clock in RCC registers, SYSCFG_MESR and SYSCFG_CCCSR, SYSCFG_CCVR and SYSCFG_CCCR can be read and written by secure and nonsecure access. (value: 0)
     *          - B_0x1: SYSCFG configuration clock in RCC registers, SYSCFG_MESR and SYSCFG_CCCSR, SYSCFG_CCVR and SYSCFG_CCCR can be read and written by secure access only. (value: 1)
     */
        /** @brief SYSCFG configuration clock in RCC registers, SYSCFG_MESR and SYSCFG_CCCSR, SYSCFG_CCVR and SYSCFG_CCCR can be read and written by secure and nonsecure access. */
    constexpr std::uint32_t SYSCFG_SECCFGR_SYSCFGSEC_B_0x0 = 0;
        /** @brief SYSCFG configuration clock in RCC registers, SYSCFG_MESR and SYSCFG_CCCSR, SYSCFG_CCVR and SYSCFG_CCCR can be read and written by secure access only. */
    constexpr std::uint32_t SYSCFG_SECCFGR_SYSCFGSEC_B_0x1 = 1;

    /** @brief Class B security */
    using SYSCFG_SECCFGR_CLASSBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG_CFGR2 can be read and written by secure and nonsecure access. (value: 0)
     *          - B_0x1: SYSCFG_CFGR2 can be read and written by secure access only. (value: 1)
     */
        /** @brief SYSCFG_CFGR2 can be read and written by secure and nonsecure access. */
    constexpr std::uint32_t SYSCFG_SECCFGR_CLASSBSEC_B_0x0 = 0;
        /** @brief SYSCFG_CFGR2 can be read and written by secure access only. */
    constexpr std::uint32_t SYSCFG_SECCFGR_CLASSBSEC_B_0x1 = 1;

    /** @brief FPU security */
    using SYSCFG_SECCFGR_FPUSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG_FPUIMR can be read and written by secure and nonsecure access. (value: 0)
     *          - B_0x1: SYSCFG_FPUIMR can be read and written by secure access only. (value: 1)
     */
        /** @brief SYSCFG_FPUIMR can be read and written by secure and nonsecure access. */
    constexpr std::uint32_t SYSCFG_SECCFGR_FPUSEC_B_0x0 = 0;
        /** @brief SYSCFG_FPUIMR can be read and written by secure access only. */
    constexpr std::uint32_t SYSCFG_SECCFGR_FPUSEC_B_0x1 = 1;

    /** @brief SYSCFG configuration register 1 */
    using SYSCFG_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O analog switch voltage booster enable */
    using SYSCFG_CFGR1_BOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O analog switches are supplied by Vless thansub>DDAless than/sub> voltage. (value: 0)
     *          - B_0x1: I/O analog switches are supplied by a dedicated voltage booster (supplied by Vless thansub>DDless than/sub>). (value: 1)
     */
        /** @brief I/O analog switches are supplied by Vless thansub>DDAless than/sub> voltage. */
    constexpr std::uint32_t SYSCFG_CFGR1_BOOSTEN_B_0x0 = 0;
        /** @brief I/O analog switches are supplied by a dedicated voltage booster (supplied by Vless thansub>DDless than/sub>). */
    constexpr std::uint32_t SYSCFG_CFGR1_BOOSTEN_B_0x1 = 1;

    /** @brief GPIO analog switch control voltage selection */
    using SYSCFG_CFGR1_ANASWVDD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O analog switches are supplied by Vless thansub>DDAless than/sub> or booster when booster is ON. (value: 0)
     *          - B_0x1: I/O analog switches are supplied by Vless thansub>DDless than/sub>. (value: 1)
     */
        /** @brief I/O analog switches are supplied by Vless thansub>DDAless than/sub> or booster when booster is ON. */
    constexpr std::uint32_t SYSCFG_CFGR1_ANASWVDD_B_0x0 = 0;
        /** @brief I/O analog switches are supplied by Vless thansub>DDless than/sub>. */
    constexpr std::uint32_t SYSCFG_CFGR1_ANASWVDD_B_0x1 = 1;

    /** @brief Fast-mode Plus driving capability activation on PB6 */
    using SYSCFG_CFGR1_PB6_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PB6 pin operates in standard mode. (value: 0)
     *          - B_0x1: Fm+ mode is enabled on PB6 pin, and the speed control is bypassed. (value: 1)
     */
        /** @brief PB6 pin operates in standard mode. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB6_FMP_B_0x0 = 0;
        /** @brief Fm+ mode is enabled on PB6 pin, and the speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB6_FMP_B_0x1 = 1;

    /** @brief Fast-mode Plus driving capability activation on PB7 */
    using SYSCFG_CFGR1_PB7_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PB7 pin operates in standard mode. (value: 0)
     *          - B_0x1: Fm+ mode is enabled on PB7 pin and the speed control is bypassed. (value: 1)
     */
        /** @brief PB7 pin operates in standard mode. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB7_FMP_B_0x0 = 0;
        /** @brief Fm+ mode is enabled on PB7 pin and the speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB7_FMP_B_0x1 = 1;

    /** @brief Fast-mode Plus driving capability activation on PB8 */
    using SYSCFG_CFGR1_PB8_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PB8 pin operates in standard mode. (value: 0)
     *          - B_0x1: Fm+ mode is enabled on PB8 pin and the speed control is bypassed. (value: 1)
     */
        /** @brief PB8 pin operates in standard mode. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB8_FMP_B_0x0 = 0;
        /** @brief Fm+ mode is enabled on PB8 pin and the speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB8_FMP_B_0x1 = 1;

    /** @brief Fast-mode Plus driving capability activation on PB9 */
    using SYSCFG_CFGR1_PB9_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PB9 pin operates in standard mode. (value: 0)
     *          - B_0x1: Fm+ mode is enabled on PB9 pin and the speed control is bypassed. (value: 1)
     */
        /** @brief PB9 pin operates in standard mode. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB9_FMP_B_0x0 = 0;
        /** @brief Fm+ mode is enabled on PB9 pin and the speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB9_FMP_B_0x1 = 1;

    /** @brief Enable decoupling capacitance on HSPI supply */
    using SYSCFG_CFGR1_ENDCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capacitance OFF (value: 0)
     *          - B_0x1: 1/3 capacitance (value: 1)
     *          - B_0x2: 2/3 capacitance (value: 2)
     *          - B_0x3: Full capacitance (value: 3)
     */
        /** @brief Capacitance OFF */
    constexpr std::uint32_t SYSCFG_CFGR1_ENDCAP_B_0x0 = 0;
        /** @brief 1/3 capacitance */
    constexpr std::uint32_t SYSCFG_CFGR1_ENDCAP_B_0x1 = 1;
        /** @brief 2/3 capacitance */
    constexpr std::uint32_t SYSCFG_CFGR1_ENDCAP_B_0x2 = 2;
        /** @brief Full capacitance */
    constexpr std::uint32_t SYSCFG_CFGR1_ENDCAP_B_0x3 = 3;

    /** @brief Enable internal SRAMs cachability by DCACHE2 */
    using SYSCFG_CFGR1_SRAMCACHED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAMx are not cached by DCACHE2 (value: 0)
     *          - B_0x1: SRAMx are cached by DCACHE2 (value: 1)
     */
        /** @brief SRAMx are not cached by DCACHE2 */
    constexpr std::uint32_t SYSCFG_CFGR1_SRAMCACHED_B_0x0 = 0;
        /** @brief SRAMx are cached by DCACHE2 */
    constexpr std::uint32_t SYSCFG_CFGR1_SRAMCACHED_B_0x1 = 1;

    /** @brief SYSCFG FPU interrupt mask register */
    using SYSCFG_FPUIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Floating point unit interrupts enable bits */
    using SYSCFG_FPUIMR_FPU_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG CPU nonsecure lock register */
    using SYSCFG_CNSLCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTOR_NS register lock */
    using SYSCFG_CNSLCKR_LOCKNSVTOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VTOR_NS register write enabled (value: 0)
     *          - B_0x1: VTOR_NS register write disabled (value: 1)
     */
        /** @brief VTOR_NS register write enabled */
    constexpr std::uint32_t SYSCFG_CNSLCKR_LOCKNSVTOR_B_0x0 = 0;
        /** @brief VTOR_NS register write disabled */
    constexpr std::uint32_t SYSCFG_CNSLCKR_LOCKNSVTOR_B_0x1 = 1;

    /** @brief Nonsecure MPU registers lock */
    using SYSCFG_CNSLCKR_LOCKNSMPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure MPU registers write enabled (value: 0)
     *          - B_0x1: Nonsecure MPU registers write disabled (value: 1)
     */
        /** @brief Nonsecure MPU registers write enabled */
    constexpr std::uint32_t SYSCFG_CNSLCKR_LOCKNSMPU_B_0x0 = 0;
        /** @brief Nonsecure MPU registers write disabled */
    constexpr std::uint32_t SYSCFG_CNSLCKR_LOCKNSMPU_B_0x1 = 1;

    /** @brief SYSCFG CPU secure lock register */
    using SYSCFG_CSLCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTOR_S register and AIRCR register bits lock */
    using SYSCFG_CSLCKR_LOCKSVTAIRCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VTOR_S register PRIS and BFHFNMINS bits in AIRCR register write enabled (value: 0)
     *          - B_0x1: VTOR_S register PRIS and BFHFNMINS bits in AIRCR register write disabled (value: 1)
     */
        /** @brief VTOR_S register PRIS and BFHFNMINS bits in AIRCR register write enabled */
    constexpr std::uint32_t SYSCFG_CSLCKR_LOCKSVTAIRCR_B_0x0 = 0;
        /** @brief VTOR_S register PRIS and BFHFNMINS bits in AIRCR register write disabled */
    constexpr std::uint32_t SYSCFG_CSLCKR_LOCKSVTAIRCR_B_0x1 = 1;

    /** @brief Secure MPU registers lock */
    using SYSCFG_CSLCKR_LOCKSMPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure MPU registers writes enabled (value: 0)
     *          - B_0x1: Secure MPU registers writes disabled (value: 1)
     */
        /** @brief Secure MPU registers writes enabled */
    constexpr std::uint32_t SYSCFG_CSLCKR_LOCKSMPU_B_0x0 = 0;
        /** @brief Secure MPU registers writes disabled */
    constexpr std::uint32_t SYSCFG_CSLCKR_LOCKSMPU_B_0x1 = 1;

    /** @brief SAU registers lock */
    using SYSCFG_CSLCKR_LOCKSAU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAU registers write enabled (value: 0)
     *          - B_0x1: SAU registers write disabled (value: 1)
     */
        /** @brief SAU registers write enabled */
    constexpr std::uint32_t SYSCFG_CSLCKR_LOCKSAU_B_0x0 = 0;
        /** @brief SAU registers write disabled */
    constexpr std::uint32_t SYSCFG_CSLCKR_LOCKSAU_B_0x1 = 1;

    /** @brief SYSCFG configuration register 2 */
    using SYSCFG_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cortex-M33 LOCKUP (HardFault) output enable */
    using SYSCFG_CFGR2_CLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cortex-M33 LOCKUP output disconnected from TIM1/8/15/16/17 break inputs (value: 0)
     *          - B_0x1: Cortex-M33 LOCKUP output connected to TIM1/8/15/16/17 break inputs (value: 1)
     */
        /** @brief Cortex-M33 LOCKUP output disconnected from TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CFGR2_CLL_B_0x0 = 0;
        /** @brief Cortex-M33 LOCKUP output connected to TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CFGR2_CLL_B_0x1 = 1;

    /** @brief SRAM ECC lock bit */
    using SYSCFG_CFGR2_SPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM double error disconnected from TIM1/8/15/16/17 break inputs (value: 0)
     *          - B_0x1: SRAM double error connected to TIM1/8/15/16/17 break inputs (value: 1)
     */
        /** @brief SRAM double error disconnected from TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CFGR2_SPL_B_0x0 = 0;
        /** @brief SRAM double error connected to TIM1/8/15/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CFGR2_SPL_B_0x1 = 1;

    /** @brief PVD lock enable bit */
    using SYSCFG_CFGR2_PVDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD interrupt disconnected from TIM1/8/15/16/17 break input. (value: 0)
     *          - B_0x1: PVD interrupt connected to TIM1/8/15/16/17 break input. (value: 1)
     */
        /** @brief PVD interrupt disconnected from TIM1/8/15/16/17 break input. */
    constexpr std::uint32_t SYSCFG_CFGR2_PVDL_B_0x0 = 0;
        /** @brief PVD interrupt connected to TIM1/8/15/16/17 break input. */
    constexpr std::uint32_t SYSCFG_CFGR2_PVDL_B_0x1 = 1;

    /** @brief ECC lock */
    using SYSCFG_CFGR2_ECCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC double error disconnected from TIM1/8/15/16/17 break input (value: 0)
     *          - B_0x1: ECC double error connected to TIM1/8/15/16/17 break input (value: 1)
     */
        /** @brief ECC double error disconnected from TIM1/8/15/16/17 break input */
    constexpr std::uint32_t SYSCFG_CFGR2_ECCL_B_0x0 = 0;
        /** @brief ECC double error connected to TIM1/8/15/16/17 break input */
    constexpr std::uint32_t SYSCFG_CFGR2_ECCL_B_0x1 = 1;

    /** @brief SYSCFG memory erase status register */
    using SYSCFG_MESR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase status of device memories */
    using SYSCFG_MESR_MCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: memory erase on going if not yet cleared by software (value: 0)
     *          - B_0x1: Memory erase done (value: 1)
     */
        /** @brief memory erase on going if not yet cleared by software */
    constexpr std::uint32_t SYSCFG_MESR_MCLR_B_0x0 = 0;
        /** @brief Memory erase done */
    constexpr std::uint32_t SYSCFG_MESR_MCLR_B_0x1 = 1;

    /** @brief ICACHE and PKA SRAM erase status */
    using SYSCFG_MESR_IPMEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE and PKA SRAM erase on going if not yet cleared by software (value: 0)
     *          - B_0x1: ICACHE and PKA SRAM erase done (value: 1)
     */
        /** @brief ICACHE and PKA SRAM erase on going if not yet cleared by software */
    constexpr std::uint32_t SYSCFG_MESR_IPMEE_B_0x0 = 0;
        /** @brief ICACHE and PKA SRAM erase done */
    constexpr std::uint32_t SYSCFG_MESR_IPMEE_B_0x1 = 1;

    /** @brief SYSCFG compensation cell control/status register */
    using SYSCFG_CCCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VDD I/O compensation cell enable */
    using SYSCFG_CCCSR_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD I/O compensation cell disabled (value: 0)
     *          - B_0x1: VDD I/O compensation cell enabled (value: 1)
     */
        /** @brief VDD I/O compensation cell disabled */
    constexpr std::uint32_t SYSCFG_CCCSR_EN1_B_0x0 = 0;
        /** @brief VDD I/O compensation cell enabled */
    constexpr std::uint32_t SYSCFG_CCCSR_EN1_B_0x1 = 1;

    /** @brief VDD I/O code selection */
    using SYSCFG_CCCSR_CS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD I/O code from the cell (available in the SYSCFG_CCVR) (value: 0)
     *          - B_0x1: VDD I/O code from the SYSCFG compensation cell code register (SYSCFG_CCCR) (value: 1)
     */
        /** @brief VDD I/O code from the cell (available in the SYSCFG_CCVR) */
    constexpr std::uint32_t SYSCFG_CCCSR_CS1_B_0x0 = 0;
        /** @brief VDD I/O code from the SYSCFG compensation cell code register (SYSCFG_CCCR) */
    constexpr std::uint32_t SYSCFG_CCCSR_CS1_B_0x1 = 1;

    /** @brief VDDIO2 I/O compensation cell enable */
    using SYSCFG_CCCSR_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO2 I/O compensation cell disabled (value: 0)
     *          - B_0x1: VDDIO2 I/O compensation cell enabled (value: 1)
     */
        /** @brief VDDIO2 I/O compensation cell disabled */
    constexpr std::uint32_t SYSCFG_CCCSR_EN2_B_0x0 = 0;
        /** @brief VDDIO2 I/O compensation cell enabled */
    constexpr std::uint32_t SYSCFG_CCCSR_EN2_B_0x1 = 1;

    /** @brief VDDIO2 I/O code selection */
    using SYSCFG_CCCSR_CS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO2 I/O code from the cell (available in SYSCFG_CCVR) (value: 0)
     *          - B_0x1: VDDIO2 I/O code from SYSCFG_CCCR (value: 1)
     */
        /** @brief VDDIO2 I/O code from the cell (available in SYSCFG_CCVR) */
    constexpr std::uint32_t SYSCFG_CCCSR_CS2_B_0x0 = 0;
        /** @brief VDDIO2 I/O code from SYSCFG_CCCR */
    constexpr std::uint32_t SYSCFG_CCCSR_CS2_B_0x1 = 1;

    /** @brief HSPI I/Os compensation cell enable */
    using SYSCFG_CCCSR_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSPI I/O compensation cell disabled (value: 0)
     *          - B_0x1: HSPI I/O compensation cell enabled (value: 1)
     */
        /** @brief HSPI I/O compensation cell disabled */
    constexpr std::uint32_t SYSCFG_CCCSR_EN3_B_0x0 = 0;
        /** @brief HSPI I/O compensation cell enabled */
    constexpr std::uint32_t SYSCFG_CCCSR_EN3_B_0x1 = 1;

    /** @brief HSPI I/Os code selection */
    using SYSCFG_CCCSR_CS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSPI I/O code from the cell (available in the SYSCFG_CCVR) (value: 0)
     *          - B_0x1: HSPI I/O code from the SYSCFG compensation cell code register (SYSCFG_CCCR) (value: 1)
     */
        /** @brief HSPI I/O code from the cell (available in the SYSCFG_CCVR) */
    constexpr std::uint32_t SYSCFG_CCCSR_CS3_B_0x0 = 0;
        /** @brief HSPI I/O code from the SYSCFG compensation cell code register (SYSCFG_CCCR) */
    constexpr std::uint32_t SYSCFG_CCCSR_CS3_B_0x1 = 1;

    /** @brief VDD I/Os compensation cell ready flag */
    using SYSCFG_CCCSR_RDY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD I/O compensation cell not ready (value: 0)
     *          - B_0x1: VDD I/O compensation cell ready (value: 1)
     */
        /** @brief VDD I/O compensation cell not ready */
    constexpr std::uint32_t SYSCFG_CCCSR_RDY1_B_0x0 = 0;
        /** @brief VDD I/O compensation cell ready */
    constexpr std::uint32_t SYSCFG_CCCSR_RDY1_B_0x1 = 1;

    /** @brief VDDIO2 I/O compensation cell ready flag */
    using SYSCFG_CCCSR_RDY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO2 I/O compensation cell not ready (value: 0)
     *          - B_0x1: VDDIO2 I/O compensation cell ready (value: 1)
     */
        /** @brief VDDIO2 I/O compensation cell not ready */
    constexpr std::uint32_t SYSCFG_CCCSR_RDY2_B_0x0 = 0;
        /** @brief VDDIO2 I/O compensation cell ready */
    constexpr std::uint32_t SYSCFG_CCCSR_RDY2_B_0x1 = 1;

    /** @brief HSPI I/O compensation cell ready flag */
    using SYSCFG_CCCSR_RDY3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSPI I/O compensation cell not ready (value: 0)
     *          - B_0x1: HSPI I/O compensation cell ready (value: 1)
     */
        /** @brief HSPI I/O compensation cell not ready */
    constexpr std::uint32_t SYSCFG_CCCSR_RDY3_B_0x0 = 0;
        /** @brief HSPI I/O compensation cell ready */
    constexpr std::uint32_t SYSCFG_CCCSR_RDY3_B_0x1 = 1;

    /** @brief SYSCFG compensation cell value register */
    using SYSCFG_CCVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation value of the I/Os supplied by Vless thansub>DDless than/sub> */
    using SYSCFG_CCVR_NCV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation value of the I/Os supplied by Vless thansub>DDless than/sub> */
    using SYSCFG_CCVR_PCV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation value of the I/Os supplied by Vless thansub>DDIO2less than/sub> */
    using SYSCFG_CCVR_NCV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation value of the I/Os supplied by Vless thansub>DDIO2less than/sub> */
    using SYSCFG_CCVR_PCV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation value of the HSPI I/Os supplied by Vless thansub>DDless than/sub> */
    using SYSCFG_CCVR_NCV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation value of the HSPI I/Os supplied by Vless thansub>DDless than/sub> */
    using SYSCFG_CCVR_PCV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG compensation cell code register */
    using SYSCFG_CCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation code of the I/Os supplied by Vless thansub>DDless than/sub> */
    using SYSCFG_CCCR_NCC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation code of the I/Os supplied by Vless thansub>DDless than/sub> */
    using SYSCFG_CCCR_PCC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation code of the I/Os supplied by Vless thansub>DDIO2less than/sub> */
    using SYSCFG_CCCR_NCC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation code of the I/Os supplied by Vless thansub>DDIO2less than/sub> */
    using SYSCFG_CCCR_PCC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation code of the HSPI I/Os supplied by Vless thansub>DDless than/sub> */
    using SYSCFG_CCCR_NCC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation code of the HSPI I/Os supplied by Vless thansub>DDless than/sub> */
    using SYSCFG_CCCR_PCC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG RSS command register */
    using SYSCFG_RSSCMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSS commands */
    using SYSCFG_RSSCMDR_RSSCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG OTG_HS PHY register */
    using SYSCFG_OTGHSPHYCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS PHY enable */
    using SYSCFG_OTGHSPHYCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PHY under reset (value: 0)
     *          - B_0x1: PHY enabled (value: 1)
     */
        /** @brief PHY under reset */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_EN_B_0x0 = 0;
        /** @brief PHY enabled */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_EN_B_0x1 = 1;

    /** @brief OTG_HS PHY common block power-down control */
    using SYSCFG_OTGHSPHYCR_PDCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: In SUSPEND, PHY state machine, bias, and OTG PHY PLL remain powered. (value: 0)
     *          - B_0x1: In SUSPEND, PHY state machine, bias, and OTG PHY PLL are powered down. (value: 1)
     */
        /** @brief In SUSPEND, PHY state machine, bias, and OTG PHY PLL remain powered. */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_PDCTRL_B_0x0 = 0;
        /** @brief In SUSPEND, PHY state machine, bias, and OTG PHY PLL are powered down. */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_PDCTRL_B_0x1 = 1;

    /** @brief OTG_HS PHY reference clock frequency selection */
    using SYSCFG_OTGHSPHYCR_CLKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: 16 MHz (value: 3)
     *          - B_0x8: 19. (value: 8)
     *          - B_0x9: 20 MHz (value: 9)
     *          - B_0xA: 24 MHz (value: 10)
     *          - B_0xE: 26 MHz (value: 14)
     *          - B_0xB: 32 MHz (value: 11)
     */
        /** @brief 16 MHz */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_CLKSEL_B_0x3 = 3;
        /** @brief 19. */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_CLKSEL_B_0x8 = 8;
        /** @brief 20 MHz */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_CLKSEL_B_0x9 = 9;
        /** @brief 24 MHz */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_CLKSEL_B_0xA = 10;
        /** @brief 26 MHz */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_CLKSEL_B_0xE = 14;
        /** @brief 32 MHz */
    constexpr std::uint32_t SYSCFG_OTGHSPHYCR_CLKSEL_B_0xB = 11;

    /** @brief SYSCFG OTG_HS PHY tune register 2 */
    using SYSCFG_OTGHSPHYTUNER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect threshold adjustment */
    using SYSCFG_OTGHSPHYTUNER2_COMPDISTUNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: +5. (value: 2)
     *          - B_0x1: 0% (default value) (value: 1)
     */
        /** @brief +5. */
    constexpr std::uint32_t SYSCFG_OTGHSPHYTUNER2_COMPDISTUNE_B_0x2 = 2;
        /** @brief 0% (default value) */
    constexpr std::uint32_t SYSCFG_OTGHSPHYTUNER2_COMPDISTUNE_B_0x1 = 1;

    /** @brief Squelch threshold adjustment */
    using SYSCFG_OTGHSPHYTUNER2_SQRXTUNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: +15% (recommended value) (value: 0)
     *          - B_0x3: 0% (default value) (value: 3)
     */
        /** @brief +15% (recommended value) */
    constexpr std::uint32_t SYSCFG_OTGHSPHYTUNER2_SQRXTUNE_B_0x0 = 0;
        /** @brief 0% (default value) */
    constexpr std::uint32_t SYSCFG_OTGHSPHYTUNER2_SQRXTUNE_B_0x3 = 3;

    /** @brief High-speed (HS) transmitter preemphasis current control */
    using SYSCFG_OTGHSPHYTUNER2_TXPREEMPAMPTUNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: HS transmitter preemphasis circuit sources 3x preemphasis current (value: 3)
     *          - B_0x2: HS transmitter preemphasis circuit sources 2x preemphasis current (value: 2)
     *          - B_0x1: HS transmitter preemphasis circuit sources 1x preemphasis current (value: 1)
     *          - B_0x0: HS transmitter preemphasis circuit disabled (value: 0)
     */
        /** @brief HS transmitter preemphasis circuit sources 3x preemphasis current */
    constexpr std::uint32_t SYSCFG_OTGHSPHYTUNER2_TXPREEMPAMPTUNE_B_0x3 = 3;
        /** @brief HS transmitter preemphasis circuit sources 2x preemphasis current */
    constexpr std::uint32_t SYSCFG_OTGHSPHYTUNER2_TXPREEMPAMPTUNE_B_0x2 = 2;
        /** @brief HS transmitter preemphasis circuit sources 1x preemphasis current */
    constexpr std::uint32_t SYSCFG_OTGHSPHYTUNER2_TXPREEMPAMPTUNE_B_0x1 = 1;
        /** @brief HS transmitter preemphasis circuit disabled */
    constexpr std::uint32_t SYSCFG_OTGHSPHYTUNER2_TXPREEMPAMPTUNE_B_0x0 = 0;

}

#endif
