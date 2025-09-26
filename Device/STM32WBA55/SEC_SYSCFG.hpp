/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA55_SEC_SYSCFG_HPP
#define EMBEDDED_PP_STM32WBA55_SEC_SYSCFG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System configuration controller */
namespace STM32WBA55::SEC_SYSCFG {

    /** @brief SYSCFG secure configuration register */
    using SYSCFG_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG clock control, memory erase status and compensation cell registers security */
    using SYSCFG_SECCFGR_SYSCFGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG configuration clock in RCC registers, SYSCFG_MESR and SYSCFG_CCCSR, SYSCFG_CCVR and SYSCFG_CCCR can be read and written by secure and non-secure access. (value: 0)
     *          - B_0x1: SYSCFG configuration clock in RCC registers, SYSCFG_MESR and SYSCFG_CCCSR, SYSCFG_CCVR and SYSCFG_CCCR can be read and written by secure access only. (value: 1)
     */
        /** @brief SYSCFG configuration clock in RCC registers, SYSCFG_MESR and SYSCFG_CCCSR, SYSCFG_CCVR and SYSCFG_CCCR can be read and written by secure and non-secure access. */
    constexpr std::uint32_t SYSCFG_SECCFGR_SYSCFGSEC_B_0x0 = 0;
        /** @brief SYSCFG configuration clock in RCC registers, SYSCFG_MESR and SYSCFG_CCCSR, SYSCFG_CCVR and SYSCFG_CCCR can be read and written by secure access only. */
    constexpr std::uint32_t SYSCFG_SECCFGR_SYSCFGSEC_B_0x1 = 1;

    /** @brief Class B security */
    using SYSCFG_SECCFGR_CLASSBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG_CFGR2 register can be read and written by secure and non-secure access. (value: 0)
     *          - B_0x1: SYSCFG_CFGR2 register can be read and written by secure access only. (value: 1)
     */
        /** @brief SYSCFG_CFGR2 register can be read and written by secure and non-secure access. */
    constexpr std::uint32_t SYSCFG_SECCFGR_CLASSBSEC_B_0x0 = 0;
        /** @brief SYSCFG_CFGR2 register can be read and written by secure access only. */
    constexpr std::uint32_t SYSCFG_SECCFGR_CLASSBSEC_B_0x1 = 1;

    /** @brief FPU security */
    using SYSCFG_SECCFGR_FPUSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYSCFG_FPUIMR register can be read and written by secure and non-secure access. (value: 0)
     *          - B_0x1: SYSCFG_FPUIMR register can be read and written by secure access only. (value: 1)
     */
        /** @brief SYSCFG_FPUIMR register can be read and written by secure and non-secure access. */
    constexpr std::uint32_t SYSCFG_SECCFGR_FPUSEC_B_0x0 = 0;
        /** @brief SYSCFG_FPUIMR register can be read and written by secure access only. */
    constexpr std::uint32_t SYSCFG_SECCFGR_FPUSEC_B_0x1 = 1;

    /** @brief SYSCFG configuration register 1 */
    using SYSCFG_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O analog switch voltage booster enable Access can be protected by GTZC_TZSC ADC4SEC. Note: Refer to Table121 for setting. */
    using SYSCFG_CFGR1_BOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O analog switches are supplied by VsubDDA/sub voltage. (value: 0)
     *          - B_0x1: I/O analog switches are supplied by a dedicated voltage booster (supplied by VsubDD/sub). (value: 1)
     */
        /** @brief I/O analog switches are supplied by VsubDDA/sub voltage. */
    constexpr std::uint32_t SYSCFG_CFGR1_BOOSTEN_B_0x0 = 0;
        /** @brief I/O analog switches are supplied by a dedicated voltage booster (supplied by VsubDD/sub). */
    constexpr std::uint32_t SYSCFG_CFGR1_BOOSTEN_B_0x1 = 1;

    /** @brief GPIO analog switch control voltage selection Access can be protected by GTZC_TZSC ADC4SEC. Note: Refer to Table121 for setting. */
    using SYSCFG_CFGR1_ANASWVDD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O analog switches are supplied by VsubDDA/sub or booster when booster is ON. (value: 0)
     *          - B_0x1: I/O analog switches are supplied by VsubDD/sub. (value: 1)
     */
        /** @brief I/O analog switches are supplied by VsubDDA/sub or booster when booster is ON. */
    constexpr std::uint32_t SYSCFG_CFGR1_ANASWVDD_B_0x0 = 0;
        /** @brief I/O analog switches are supplied by VsubDD/sub. */
    constexpr std::uint32_t SYSCFG_CFGR1_ANASWVDD_B_0x1 = 1;

    /** @brief Fast-mode Plus drive capability activation on PA6 This bit can be read and written only with secure access if PA6 is secure in GPIOA. This bit enables the Fast-mode Plus drive mode for PA6 when PA6 is not used by I2C peripheral. This can be used to dive a LED for instance. Access can be protected by GPIOA SEC6. */
    using SYSCFG_CFGR1_PA6_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PA6 pin operates in standard mode when not used by I2C peripheral (value: 0)
     *          - B_0x1: Fast-mode Plus mode is enabled on PA6 pin and the GPIO speed control is bypassed. (value: 1)
     */
        /** @brief PA6 pin operates in standard mode when not used by I2C peripheral */
    constexpr std::uint32_t SYSCFG_CFGR1_PA6_FMP_B_0x0 = 0;
        /** @brief Fast-mode Plus mode is enabled on PA6 pin and the GPIO speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PA6_FMP_B_0x1 = 1;

    /** @brief Fast-mode Plus drive capability activation on PA7 This bit can be read and written only with secure access if PA7 is secure in GPIOA. This bit enables the Fast-mode Plus drive mode for PA7 when PA7 is not used by I2C peripheral. This can be used to dive a LED for instance. Access can be protected by GPIOA SEC7. */
    using SYSCFG_CFGR1_PA7_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PA7 pin operates in standard mode when not used by I2C peripheral (value: 0)
     *          - B_0x1: Fast-mode Plus mode is enabled on PA7 pin and the GPIO speed control is bypassed. (value: 1)
     */
        /** @brief PA7 pin operates in standard mode when not used by I2C peripheral */
    constexpr std::uint32_t SYSCFG_CFGR1_PA7_FMP_B_0x0 = 0;
        /** @brief Fast-mode Plus mode is enabled on PA7 pin and the GPIO speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PA7_FMP_B_0x1 = 1;

    /** @brief Fast-mode Plus drive capability activation on PA15 This bit can be read and written only with secure access if PA15 is secure in GPIOA. This bit enables the Fast-mode Plus drive mode for PA15 when PA15 is not used by I2C peripheral. This can be used to dive a LED for instance. Access can be protected by GPIOA SEC15. */
    using SYSCFG_CFGR1_PA15_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PA15 pin operates in standard mode when not used by I2C peripheral (value: 0)
     *          - B_0x1: Fast-mode Plus mode is enabled on PA15 pin and the GPIO speed control is bypassed. (value: 1)
     */
        /** @brief PA15 pin operates in standard mode when not used by I2C peripheral */
    constexpr std::uint32_t SYSCFG_CFGR1_PA15_FMP_B_0x0 = 0;
        /** @brief Fast-mode Plus mode is enabled on PA15 pin and the GPIO speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PA15_FMP_B_0x1 = 1;

    /** @brief Fast-mode Plus drive capability activation on PB3 This bit can be read and written only with secure access if PB3 is secure in GPIOB. This bit enables the Fast-mode Plus drive mode for PB3 when PB3 is not used by I2C peripheral. This can be used to dive a LED for instance. Access can be protected by GPIOB SEC3. */
    using SYSCFG_CFGR1_PB3_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PB3 pin operates in standard mode when not used by I2C peripheral (value: 0)
     *          - B_0x1: Fast-mode Plus mode is enabled on PAB3 pin and the GPIO speed control is bypassed. (value: 1)
     */
        /** @brief PB3 pin operates in standard mode when not used by I2C peripheral */
    constexpr std::uint32_t SYSCFG_CFGR1_PB3_FMP_B_0x0 = 0;
        /** @brief Fast-mode Plus mode is enabled on PAB3 pin and the GPIO speed control is bypassed. */
    constexpr std::uint32_t SYSCFG_CFGR1_PB3_FMP_B_0x1 = 1;

    /** @brief SYSCFG FPU interrupt mask register */
    using SYSCFG_FPUIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Floating point unit interrupts enable bits FPU_IE[5]: Inexact interrupt enable (interrupt disable at reset) FPU_IE[4]: Input abnormal interrupt enable FPU_IE[3]: Overflow interrupt enable FPU_IE[2]: Underflow interrupt enable FPU_IE[1]: Divide-by-zero interrupt enable FPU_IE[0]: Invalid operation Interrupt enable */
    using SYSCFG_FPUIMR_FPU_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG CPU non-secure lock register */
    using SYSCFG_CNSLCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTOR_NS register lock This bit is set by software and cleared only by a system reset. */
    using SYSCFG_CNSLCKR_LOCKNSVTOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VTOR_NS register write enabled (value: 0)
     *          - B_0x1: VTOR_NS register write disabled (value: 1)
     */
        /** @brief VTOR_NS register write enabled */
    constexpr std::uint32_t SYSCFG_CNSLCKR_LOCKNSVTOR_B_0x0 = 0;
        /** @brief VTOR_NS register write disabled */
    constexpr std::uint32_t SYSCFG_CNSLCKR_LOCKNSVTOR_B_0x1 = 1;

    /** @brief Non-secure MPU registers lock This bit is set by software and cleared only by a system reset. When set, this bit disables write access to non-secure MPU_CTRL_NS, MPU_RNR_NS and MPU_RBAR_NS registers. */
    using SYSCFG_CNSLCKR_LOCKNSMPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure MPU registers write enabled (value: 0)
     *          - B_0x1: Non-secure MPU registers write disabled (value: 1)
     */
        /** @brief Non-secure MPU registers write enabled */
    constexpr std::uint32_t SYSCFG_CNSLCKR_LOCKNSMPU_B_0x0 = 0;
        /** @brief Non-secure MPU registers write disabled */
    constexpr std::uint32_t SYSCFG_CNSLCKR_LOCKNSMPU_B_0x1 = 1;

    /** @brief SYSCFG CPU secure lock register */
    using SYSCFG_CSLOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTOR_S register and AIRCR register bits lock This bit is set by software and cleared only by a system reset. When set, it disables write access to VTOR_S register, PRIS and BFHFNMINS bits in the AIRCR register. */
    using SYSCFG_CSLOCKR_LOCKSVTAIRCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VTOR_S register PRIS and BFHFNMINS bits in the AIRCR register write enabled (value: 0)
     *          - B_0x1: VTOR_S register PRIS and BFHFNMINS bits in the AIRCR register write disabled (value: 1)
     */
        /** @brief VTOR_S register PRIS and BFHFNMINS bits in the AIRCR register write enabled */
    constexpr std::uint32_t SYSCFG_CSLOCKR_LOCKSVTAIRCR_B_0x0 = 0;
        /** @brief VTOR_S register PRIS and BFHFNMINS bits in the AIRCR register write disabled */
    constexpr std::uint32_t SYSCFG_CSLOCKR_LOCKSVTAIRCR_B_0x1 = 1;

    /** @brief Secure MPU registers lock This bit is set by software and cleared only by a system reset. When set, it disables write access to secure MPU_CTRL, MPU_RNR and MPU_RBAR registers. */
    using SYSCFG_CSLOCKR_LOCKSMPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure MPU registers writes enabled (value: 0)
     *          - B_0x1: Secure MPU registers writes disabled (value: 1)
     */
        /** @brief Secure MPU registers writes enabled */
    constexpr std::uint32_t SYSCFG_CSLOCKR_LOCKSMPU_B_0x0 = 0;
        /** @brief Secure MPU registers writes disabled */
    constexpr std::uint32_t SYSCFG_CSLOCKR_LOCKSMPU_B_0x1 = 1;

    /** @brief SAU registers lock This bit is set by software and cleared only by a system reset. When set, it disables write access to SAU_CTRL, SAU_RNR, SAU_RBAR and SAU_RLAR registers. */
    using SYSCFG_CSLOCKR_LOCKSAU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAU registers write enabled (value: 0)
     *          - B_0x1: SAU registers write disabled (value: 1)
     */
        /** @brief SAU registers write enabled */
    constexpr std::uint32_t SYSCFG_CSLOCKR_LOCKSAU_B_0x0 = 0;
        /** @brief SAU registers write disabled */
    constexpr std::uint32_t SYSCFG_CSLOCKR_LOCKSAU_B_0x1 = 1;

    /** @brief SYSCFG configuration register 2 */
    using SYSCFG_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cortex-M33 LOCKUP (hardfault) output enable This bit is set by software and cleared only by a system reset. It can be used to enable and lock the connection of Cortex-M33 LOCKUP (hardfault) output to TIM1/16/17 break input. */
    using SYSCFG_CFGR2_CLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cortex-M33 LOCKUP output disconnected from TIM1/16/17 break inputs (value: 0)
     *          - B_0x1: Cortex-M33 LOCKUP output connected to TIM1/16/17 break inputs (value: 1)
     */
        /** @brief Cortex-M33 LOCKUP output disconnected from TIM1/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CFGR2_CLL_B_0x0 = 0;
        /** @brief Cortex-M33 LOCKUP output connected to TIM1/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CFGR2_CLL_B_0x1 = 1;

    /** @brief SRAM2 parity lock bit This bit is set by software and cleared only by a system reset. It can be used to enable and lock the SRAM2 parity error signal connection to TIM1/16/17 break inputs. */
    using SYSCFG_CFGR2_SPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 parity error disconnected from TIM1/16/17 break inputs (value: 0)
     *          - B_0x1: SRAM2 parity error connected to TIM1/16/17 break inputs (value: 1)
     */
        /** @brief SRAM2 parity error disconnected from TIM1/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CFGR2_SPL_B_0x0 = 0;
        /** @brief SRAM2 parity error connected to TIM1/16/17 break inputs */
    constexpr std::uint32_t SYSCFG_CFGR2_SPL_B_0x1 = 1;

    /** @brief PVD lock enable bit This bit is set by software and cleared only by a system reset. It can be used to enable and lock the PVD connection to TIM1/16/17 break input, as well as the PVDE and PVDLS[2:0] in the PWR register. */
    using SYSCFG_CFGR2_PVDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD interrupt disconnected from TIM1/16/17 break input. PVDE and PVDLS[2:0] bits can be programmed by the application. (value: 0)
     *          - B_0x1: PVD interrupt connected to TIM1/16/17 break input. PVDE and PVDLS[2:0] bits are read only. (value: 1)
     */
        /** @brief PVD interrupt disconnected from TIM1/16/17 break input. PVDE and PVDLS[2:0] bits can be programmed by the application. */
    constexpr std::uint32_t SYSCFG_CFGR2_PVDL_B_0x0 = 0;
        /** @brief PVD interrupt connected to TIM1/16/17 break input. PVDE and PVDLS[2:0] bits are read only. */
    constexpr std::uint32_t SYSCFG_CFGR2_PVDL_B_0x1 = 1;

    /** @brief ECC lock This bit is set by software and cleared only by a system reset. It can be used to enable and lock the Flash ECC double error signal connection to TIM1/16/17 break input. */
    using SYSCFG_CFGR2_ECCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC double error disconnected from TIM1/16/17 break input (value: 0)
     *          - B_0x1: ECC double error connected to TIM1/16/17 break input (value: 1)
     */
        /** @brief ECC double error disconnected from TIM1/16/17 break input */
    constexpr std::uint32_t SYSCFG_CFGR2_ECCL_B_0x0 = 0;
        /** @brief ECC double error connected to TIM1/16/17 break input */
    constexpr std::uint32_t SYSCFG_CFGR2_ECCL_B_0x1 = 1;

    /** @brief SYSCFG memory erase status register */
    using SYSCFG_MESR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device memories erase status This bit is set by hardware when SRAM2, ICACHE, PKA SRAM erase is completed after power-on reset or tamper detection (refer to Section75: Tamper and backup registers (TAMP) for more details). This bit is not reset by system reset and is cleared by software by writing 1 to it. */
    using SYSCFG_MESR_MCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Memory erase ongoing if not yet cleared by software (value: 0)
     *          - B_0x1: Memory erase done (value: 1)
     */
        /** @brief Memory erase ongoing if not yet cleared by software */
    constexpr std::uint32_t SYSCFG_MESR_MCLR_B_0x0 = 0;
        /** @brief Memory erase done */
    constexpr std::uint32_t SYSCFG_MESR_MCLR_B_0x1 = 1;

    /** @brief ICACHE and PKA SRAM erase status This bit is set by hardware when ICACHE and PKA SRAM erase is completed after potential tamper detection (refer to Section75: Tamper and backup registers (TAMP) for more details). This bit is cleared by software by writing 1 to it. */
    using SYSCFG_MESR_IPMEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE and PKA SRAM erase ongoing if not yet cleared by software (value: 0)
     *          - B_0x1: ICACHE and PKA SRAM erase done (value: 1)
     */
        /** @brief ICACHE and PKA SRAM erase ongoing if not yet cleared by software */
    constexpr std::uint32_t SYSCFG_MESR_IPMEE_B_0x0 = 0;
        /** @brief ICACHE and PKA SRAM erase done */
    constexpr std::uint32_t SYSCFG_MESR_IPMEE_B_0x1 = 1;

    /** @brief SYSCFG compensation cell control/status register */
    using SYSCFG_CCCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VDD I/Os compensation cell enable This bit enables the compensation cell of the I/Os supplied by VsubDD/sub. */
    using SYSCFG_CCCSR_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD I/Os compensation cell disabled (value: 0)
     *          - B_0x1: VDD I/Os compensation cell enabled (value: 1)
     */
        /** @brief VDD I/Os compensation cell disabled */
    constexpr std::uint32_t SYSCFG_CCCSR_EN1_B_0x0 = 0;
        /** @brief VDD I/Os compensation cell enabled */
    constexpr std::uint32_t SYSCFG_CCCSR_EN1_B_0x1 = 1;

    /** @brief VDD I/Os code selection This bit selects the code to be applied for the compensation cell of the I/Os supplied by VsubDD/sub. */
    using SYSCFG_CCCSR_CS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD I/Os code from the cell (available in the SYSCFG_CCVR) (value: 0)
     *          - B_0x1: VDD I/Os code from the SYSCFG compensation cell code register (SYSCFG_CCCR) (value: 1)
     */
        /** @brief VDD I/Os code from the cell (available in the SYSCFG_CCVR) */
    constexpr std::uint32_t SYSCFG_CCCSR_CS1_B_0x0 = 0;
        /** @brief VDD I/Os code from the SYSCFG compensation cell code register (SYSCFG_CCCR) */
    constexpr std::uint32_t SYSCFG_CCCSR_CS1_B_0x1 = 1;

    /** @brief VDD I/Os compensation cell ready flag This bit provides the compensation cell status of the I/Os supplied by VsubDD/sub. Note: The HSI16 clock is required for the compensation cell to work properly. The compensation cell ready bit (RDY1) is not set if the HSI16 clock is not enabled (HSION). */
    using SYSCFG_CCCSR_RDY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD I/Os compensation cell not ready (value: 0)
     *          - B_0x1: VDD I/Os compensation cell ready (value: 1)
     */
        /** @brief VDD I/Os compensation cell not ready */
    constexpr std::uint32_t SYSCFG_CCCSR_RDY1_B_0x0 = 0;
        /** @brief VDD I/Os compensation cell ready */
    constexpr std::uint32_t SYSCFG_CCCSR_RDY1_B_0x1 = 1;

    /** @brief SYSCFG compensation cell value register */
    using SYSCFG_CCVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation value of the I/Os supplied by VsubDD/sub This value is provided by the cell and can be used by the CPU to compute an I/Os compensation cell code for NMOS transistors. This code is applied to the I/Os compensation cell when the CS1 bit of the SYSCFG_CCCSR is reset. */
    using SYSCFG_CCVR_NCV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation value of the I/Os supplied by VsubDD/sub This value is provided by the cell and can be used by the CPU to compute an I/Os compensation cell code for PMOS transistors. This code is applied to the I/Os compensation cell when the CS1 bit of the SYSCFG_CCCSR is reset. */
    using SYSCFG_CCVR_PCV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG compensation cell code register */
    using SYSCFG_CCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation code of the I/Os supplied by VsubDD/sub These bits are written by software to define an I/Os compensation cell code for NMOS transistors. This code is applied to the I/Os compensation cell when the CS1 bit of the SYSCFG_CCCSR is set. */
    using SYSCFG_CCCR_NCC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation code of the I/Os supplied by VsubDD/sub These bits are written by software to define an I/Os compensation cell code for PMOS transistors. This code is applied to the I/Os compensation cell when the CS1 bit of the SYSCFG_CCCSR is set. */
    using SYSCFG_CCCR_PCC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG RSS command register */
    using SYSCFG_RSSCMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSS commands This field defines a command to be executed by the RSS. */
    using SYSCFG_RSSCMDR_RSSCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
