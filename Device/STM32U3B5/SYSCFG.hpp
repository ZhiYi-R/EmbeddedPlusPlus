/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_SYSCFG_HPP
#define EMBEDDED_PP_STM32U3B5_SYSCFG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SYSCFG register block */
namespace STM32U3B5::SYSCFG {

    /** @brief SYSCFG secure configuration register */
    using SYSCFG_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security of SYSCFG clock control, memory erase status, and compensation cell registers */
    using SYSCFG_SECCFGR_SYSCFGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG configuration clock in RCC registers and SYSCFG_CCCSR, SYSCFG_CCVR, and SYSCFG_CCCR can be read and written by secure and nonsecure access. (value: 0)
     *          - B_0x1: SYSCFG configuration clock in RCC registers and SYSCFG_CCCSR, SYSCFG_CCVR, and SYSCFG_CCCR can be read and written by secure access only. (value: 1)
     */
        /** @brief SYSCFG configuration clock in RCC registers and SYSCFG_CCCSR, SYSCFG_CCVR, and SYSCFG_CCCR can be read and written by secure and nonsecure access. */
    constexpr std::uint32_t SYSCFG_SECCFGR_SYSCFGSEC_B_0x0 = 0;
        /** @brief SYSCFG configuration clock in RCC registers and SYSCFG_CCCSR, SYSCFG_CCVR, and SYSCFG_CCCR can be read and written by secure access only. */
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
    /** @brief IR output polarity selection */
    using SYSCFG_CFGR1_IR_POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output of IRTIM (IR_OUT) is not inverted. (value: 0)
     *          - B_0x1: Output of IRTIM (IR_OUT) is inverted. (value: 1)
     */
        /** @brief Output of IRTIM (IR_OUT) is not inverted. */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_POL_B_0x0 = 0;
        /** @brief Output of IRTIM (IR_OUT) is inverted. */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_POL_B_0x1 = 1;

    /** @brief IR modulation envelope signal selection */
    using SYSCFG_CFGR1_IR_MOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 (value: 0)
     *          - B_0x1: USART1 (value: 1)
     *          - B_0x2: UART4 (value: 2)
     */
        /** @brief TIM16 */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_MOD_B_0x0 = 0;
        /** @brief USART1 */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_MOD_B_0x1 = 1;
        /** @brief UART4 */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_MOD_B_0x2 = 2;

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

    /** @brief Fast-mode Plus driving capability activation on PBi */
    using SYSCFG_CFGR1_PB6_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBi pin operates in standard mode. (value: 0)
     *          - B_0x1: Fm+ mode is enabled on PBi pin and the speed control is bypassed. (value: 1)
     */
        /** @brief PBi pin operates in standard mode. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB6_FMP_B_0x0 = 0;
        /** @brief Fm+ mode is enabled on PBi pin and the speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB6_FMP_B_0x1 = 1;

    /** @brief Fast-mode Plus driving capability activation on PBi */
    using SYSCFG_CFGR1_PB7_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBi pin operates in standard mode. (value: 0)
     *          - B_0x1: Fm+ mode is enabled on PBi pin and the speed control is bypassed. (value: 1)
     */
        /** @brief PBi pin operates in standard mode. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB7_FMP_B_0x0 = 0;
        /** @brief Fm+ mode is enabled on PBi pin and the speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB7_FMP_B_0x1 = 1;

    /** @brief Fast-mode Plus driving capability activation on PBi */
    using SYSCFG_CFGR1_PB8_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBi pin operates in standard mode. (value: 0)
     *          - B_0x1: Fm+ mode is enabled on PBi pin and the speed control is bypassed. (value: 1)
     */
        /** @brief PBi pin operates in standard mode. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB8_FMP_B_0x0 = 0;
        /** @brief Fm+ mode is enabled on PBi pin and the speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB8_FMP_B_0x1 = 1;

    /** @brief Fast-mode Plus driving capability activation on PBi */
    using SYSCFG_CFGR1_PB9_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBi pin operates in standard mode. (value: 0)
     *          - B_0x1: Fm+ mode is enabled on PBi pin and the speed control is bypassed. (value: 1)
     */
        /** @brief PBi pin operates in standard mode. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB9_FMP_B_0x0 = 0;
        /** @brief Fm+ mode is enabled on PBi pin and the speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB9_FMP_B_0x1 = 1;

    /** @brief Comparator mode for G2_IO1 on PB4 */
    using SYSCFG_CFGR1_TSC_G2_IO1_COMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode: TSC_G2_IO1 detection is done using PB4 Vless thansub>IHless than/sub> I/O threshold. (value: 0)
     *          - B_0x1: Comparator mode: TSC_G2_IO1 detection is done using COMP2_INM threshold. (value: 1)
     */
        /** @brief Normal mode: TSC_G2_IO1 detection is done using PB4 Vless thansub>IHless than/sub> I/O threshold. */
    constexpr std::uint32_t SYSCFG_CFGR1_TSC_G2_IO1_COMP_B_0x0 = 0;
        /** @brief Comparator mode: TSC_G2_IO1 detection is done using COMP2_INM threshold. */
    constexpr std::uint32_t SYSCFG_CFGR1_TSC_G2_IO1_COMP_B_0x1 = 1;

    /** @brief Comparator mode for G2_IO3 on PB6 */
    using SYSCFG_CFGR1_TSC_G2_IO3_COMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode: TSC_G2_IO3 detection is done using PB6 Vless thansub>IHless than/sub> I/O threshold. (value: 0)
     *          - B_0x1: Comparator mode: TSC_G2_IO3 detection is done using COMP2_INM threshold. (value: 1)
     */
        /** @brief Normal mode: TSC_G2_IO3 detection is done using PB6 Vless thansub>IHless than/sub> I/O threshold. */
    constexpr std::uint32_t SYSCFG_CFGR1_TSC_G2_IO3_COMP_B_0x0 = 0;
        /** @brief Comparator mode: TSC_G2_IO3 detection is done using COMP2_INM threshold. */
    constexpr std::uint32_t SYSCFG_CFGR1_TSC_G2_IO3_COMP_B_0x1 = 1;

    /** @brief SYSCFG FPU interrupt mask register */
    using SYSCFG_FPUIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Floating point unit interrupt enable bit - invalid operation */
    using SYSCFG_FPUIMR_FPU_IOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_IOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_IOIE_B_0x1 = 1;

    /** @brief Floating point unit interrupt enable bit - divide-by-zero */
    using SYSCFG_FPUIMR_FPU_DZIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_DZIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_DZIE_B_0x1 = 1;

    /** @brief Floating point unit interrupt enable bit - underflow */
    using SYSCFG_FPUIMR_FPU_UFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_UFIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_UFIE_B_0x1 = 1;

    /** @brief Floating point unit interrupt enable bit - overflow */
    using SYSCFG_FPUIMR_FPU_OFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_OFIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_OFIE_B_0x1 = 1;

    /** @brief Floating point unit interrupt enable bit - input denormal */
    using SYSCFG_FPUIMR_FPU_IDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_IDIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_IDIE_B_0x1 = 1;

    /** @brief Floating point unit interrupt enable bit - inexact */
    using SYSCFG_FPUIMR_FPU_IXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_IXIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t SYSCFG_FPUIMR_FPU_IXIE_B_0x1 = 1;

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
     *          - B_0x0: Nonsecure MPU register write enabled (value: 0)
     *          - B_0x1: Nonsecure MPU register write disabled (value: 1)
     */
        /** @brief Nonsecure MPU register write enabled */
    constexpr std::uint32_t SYSCFG_CNSLCKR_LOCKNSMPU_B_0x0 = 0;
        /** @brief Nonsecure MPU register write disabled */
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
     *          - B_0x0: Secure MPU register writes enabled (value: 0)
     *          - B_0x1: Secure MPU register writes disabled (value: 1)
     */
        /** @brief Secure MPU register writes enabled */
    constexpr std::uint32_t SYSCFG_CSLCKR_LOCKSMPU_B_0x0 = 0;
        /** @brief Secure MPU register writes disabled */
    constexpr std::uint32_t SYSCFG_CSLCKR_LOCKSMPU_B_0x1 = 1;

    /** @brief SAU register lock */
    using SYSCFG_CSLCKR_LOCKSAU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAU register write enabled (value: 0)
     *          - B_0x1: SAU register write disabled (value: 1)
     */
        /** @brief SAU register write enabled */
    constexpr std::uint32_t SYSCFG_CSLCKR_LOCKSAU_B_0x0 = 0;
        /** @brief SAU register write disabled */
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

    /** @brief SRAM2 parity bit */
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

    /** @brief VDD I/O compensation cell ready flag */
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
    /** @brief SYSCFG RSS command register */
    using SYSCFG_RSSCMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSS commands */
    using SYSCFG_RSSCMDR_RSSCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
