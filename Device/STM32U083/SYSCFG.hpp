/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U083_SYSCFG_HPP
#define EMBEDDED_PP_STM32U083_SYSCFG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SYSCFG register block */
namespace STM32U083::SYSCFG {

    /** @brief SYSCFG configuration register 1 */
    using SYSCFG_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory mapping selection bits These bits are set and cleared by software. They control the memory internal mapping at address 0x000010000. After reset these bits take on the value selected by the actual boot mode configuration. Refer to Section12.5: Boot configuration for more details. X0: Main flash memory mapped at 0x000010000 */
    using SYSCFG_CFGR1_MEM_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: System flash memory mapped at 0x000010000 (value: 1)
     *          - B_0x3: Embedded SRAM mapped at 0x000010000 (value: 3)
     */
        /** @brief System flash memory mapped at 0x000010000 */
    constexpr std::uint32_t SYSCFG_CFGR1_MEM_MODE_B_0x1 = 1;
        /** @brief Embedded SRAM mapped at 0x000010000 */
    constexpr std::uint32_t SYSCFG_CFGR1_MEM_MODE_B_0x3 = 3;

    /** @brief PA11 pin remapping This bit is set and cleared by software. When set, it remaps the PA11 pin to operate as PA9 GPIO port, instead as PA11 GPIO port. */
    using SYSCFG_CFGR1_PA11_RMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remap (PA11) (value: 0)
     *          - B_0x1: Remap (PA9) (value: 1)
     */
        /** @brief No remap (PA11) */
    constexpr std::uint32_t SYSCFG_CFGR1_PA11_RMP_B_0x0 = 0;
        /** @brief Remap (PA9) */
    constexpr std::uint32_t SYSCFG_CFGR1_PA11_RMP_B_0x1 = 1;

    /** @brief PA12 pin remapping This bit is set and cleared by software. When set, it remaps the PA12 pin to operate as PA10 GPIO port, instead as PA12 GPIO port. */
    using SYSCFG_CFGR1_PA12_RMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remap (PA12) (value: 0)
     *          - B_0x1: Remap (PA10) (value: 1)
     */
        /** @brief No remap (PA12) */
    constexpr std::uint32_t SYSCFG_CFGR1_PA12_RMP_B_0x0 = 0;
        /** @brief Remap (PA10) */
    constexpr std::uint32_t SYSCFG_CFGR1_PA12_RMP_B_0x1 = 1;

    /** @brief IR output polarity selection */
    using SYSCFG_CFGR1_IR_POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output of IRTIM (IR_OUT) is not inverted (value: 0)
     *          - B_0x1: Output of IRTIM (IR_OUT) is inverted (value: 1)
     */
        /** @brief Output of IRTIM (IR_OUT) is not inverted */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_POL_B_0x0 = 0;
        /** @brief Output of IRTIM (IR_OUT) is inverted */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_POL_B_0x1 = 1;

    /** @brief IR Modulation Envelope signal selection This bitfield selects the signal for IR modulation envelope: */
    using SYSCFG_CFGR1_IR_MOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM16 (value: 0)
     *          - B_0x1: USART1 (value: 1)
     *          - B_0x2: USART2 (value: 2)
     */
        /** @brief TIM16 */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_MOD_B_0x0 = 0;
        /** @brief USART1 */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_MOD_B_0x1 = 1;
        /** @brief USART2 */
    constexpr std::uint32_t SYSCFG_CFGR1_IR_MOD_B_0x2 = 2;

    /** @brief I/O analog switch voltage booster enable This bit selects the way of supplying I/O analog switches: When using the analog inputs , setting to 0 is recommended for high V<sub>DD</sub>, setting to 1 for low V<sub>DD</sub> (less than 2.4 V). */
    using SYSCFG_CFGR1_BOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DD</sub> (value: 0)
     *          - B_0x1: Dedicated voltage booster (supplied by V<sub>DD</sub>) (value: 1)
     */
        /** @brief V<sub>DD</sub> */
    constexpr std::uint32_t SYSCFG_CFGR1_BOOSTEN_B_0x0 = 0;
        /** @brief Dedicated voltage booster (supplied by V<sub>DD</sub>) */
    constexpr std::uint32_t SYSCFG_CFGR1_BOOSTEN_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PB6 This bit is set and cleared by software. It enables I<sup>2</sup>C FM+ driving capability on PB6 I/O port. With this bit in disable state, the I<sup>2</sup>C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I<sup>2</sup>C FM+ is enabled, the speed control is ignored. Note: This control bit is kept for legacy reasons. It is recommended to use the FMP bit of the I2Cx_CR1 register instead. */
    using SYSCFG_CFGR1_I2C_PB6_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB6_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB6_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PB7 This bit is set and cleared by software. It enables I<sup>2</sup>C FM+ driving capability on PB7 I/O port. With this bit in disable state, the I<sup>2</sup>C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I<sup>2</sup>C FM+ is enabled, the speed control is ignored. Note: This control bit is kept for legacy reasons. It is recommended to use the FMP bit of the I2Cx_CR1 register instead. */
    using SYSCFG_CFGR1_I2C_PB7_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB7_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB7_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PB8 This bit is set and cleared by software. It enables I<sup>2</sup>C FM+ driving capability on PB8 I/O port. With this bit in disable state, the I<sup>2</sup>C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I<sup>2</sup>C FM+ is enabled, the speed control is ignored. Note: This control bit is kept for legacy reasons. It is recommended to use the FMP bit of the I2Cx_CR1 register instead. */
    using SYSCFG_CFGR1_I2C_PB8_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB8_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB8_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PB9 This bit is set and cleared by software. It enables I<sup>2</sup>C FM+ driving capability on PB9 I/O port. With this bit in disable state, the I<sup>2</sup>C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I<sup>2</sup>C FM+ is enabled, the speed control is ignored. Note: This control bit is kept for legacy reasons. It is recommended to use the FMP bit of the I2Cx_CR1 register instead. */
    using SYSCFG_CFGR1_I2C_PB9_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB9_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PB9_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PA9 This bit is set and cleared by software. It enables I<sup>2</sup>C FM+ driving capability on PA9 I/O port. With this bit in disable state, the I<sup>2</sup>C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I<sup>2</sup>C FM+ is enabled, the speed control is ignored. Note: This control bit is kept for legacy reasons. It is recommended to use the FMP bit of the I2Cx_CR1 register instead. */
    using SYSCFG_CFGR1_I2C_PA9_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PA9_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PA9_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for PA10 This bit is set and cleared by software. It enables I<sup>2</sup>C FM+ driving capability on PA10 I/O port. With this bit in disable state, the I<sup>2</sup>C FM+ driving capability on this I/O port can be enabled through one of I2Cx_FMP bits. When I<sup>2</sup>C FM+ is enabled, the speed control is ignored. Note: This control bit is kept for legacy reasons. It is recommended to use the FMP bit of the I2Cx_CR1 register instead. */
    using SYSCFG_CFGR1_I2C_PA10_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PA10_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C_PA10_FMP_B_0x1 = 1;

    /** @brief Fast Mode Plus (FM+) enable for I2C3 This bit is set and cleared by software. It enables I<sup>2</sup>C FM+ driving capability on I/O ports configured as I2C3 through GPIOx_AFR registers. With this bit in disable state, the I<sup>2</sup>C FM+ driving capability on I/O ports configured as I2C3 can be enabled through their corresponding I2Cx_FMP bit. When I<sup>2</sup>C FM+ is enabled, the speed control is ignored. Note: This control bit is kept for legacy reasons. It is recommended to use the FMP bit of the I2Cx_CR1 register instead. */
    using SYSCFG_CFGR1_I2C3_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C3_FMP_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SYSCFG_CFGR1_I2C3_FMP_B_0x1 = 1;

    /** @brief SYSCFG configuration register 2 */
    using SYSCFG_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cortex<Superscript>1<Default 1 Font>-M0+ LOCKUP bit enable bit This bit is set by software and cleared by a system reset. It can be use to enable and lock the connection of Cortex<Superscript>1<Default 1 Font>-M0+ LOCKUP (Hardfault) output to TIM1/15/16 Break input. */
    using SYSCFG_CFGR2_CCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cortex<Superscript>1<Default 1 Font>-M0+ LOCKUP output disconnected from TIM1/15/16 Break input (value: 0)
     *          - B_0x1: Cortex<Superscript>1<Default 1 Font>-M0+ LOCKUP output connected to TIM1/15/16 Break input (value: 1)
     */
        /** @brief Cortex<Superscript>1<Default 1 Font>-M0+ LOCKUP output disconnected from TIM1/15/16 Break input */
    constexpr std::uint32_t SYSCFG_CFGR2_CCL_B_0x0 = 0;
        /** @brief Cortex<Superscript>1<Default 1 Font>-M0+ LOCKUP output connected to TIM1/15/16 Break input */
    constexpr std::uint32_t SYSCFG_CFGR2_CCL_B_0x1 = 1;

    /** @brief SRAM1 parity lock bit This bit is set by software and cleared by a system reset. It can be used to enable and lock the SRAM1 parity error signal connection to TIM1/15/16 Break input. */
    using SYSCFG_CFGR2_SPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 parity error disconnected from TIM1/15/16 Break input (value: 0)
     *          - B_0x1: SRAM1 parity error connected to TIM1/15/16 Break input (value: 1)
     */
        /** @brief SRAM1 parity error disconnected from TIM1/15/16 Break input */
    constexpr std::uint32_t SYSCFG_CFGR2_SPL_B_0x0 = 0;
        /** @brief SRAM1 parity error connected to TIM1/15/16 Break input */
    constexpr std::uint32_t SYSCFG_CFGR2_SPL_B_0x1 = 1;

    /** @brief PVD lock enable bit This bit is set by software and cleared by a system reset. It can be used to enable and lock the PVD connection to TIM1/15/16 Break input, as well as the PVDE and PLS[2:0] in the PWR_CR register. */
    using SYSCFG_CFGR2_PVDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD interrupt disconnected from TIM1/15/16 Break input. PVDE and PLS[2:0] bits can be programmed by the application. (value: 0)
     *          - B_0x1: PVD interrupt connected to TIM1/15/16 Break input, PVDE and PLS[2:0] bits are read only. (value: 1)
     */
        /** @brief PVD interrupt disconnected from TIM1/15/16 Break input. PVDE and PLS[2:0] bits can be programmed by the application. */
    constexpr std::uint32_t SYSCFG_CFGR2_PVDL_B_0x0 = 0;
        /** @brief PVD interrupt connected to TIM1/15/16 Break input, PVDE and PLS[2:0] bits are read only. */
    constexpr std::uint32_t SYSCFG_CFGR2_PVDL_B_0x1 = 1;

    /** @brief ECC error lock bit This bit is set by software and cleared by a system reset. It can be used to enable and lock the flash ECC 2-bit error detection signal connection to TIM1/15/16 Break input. */
    using SYSCFG_CFGR2_ECCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC error disconnected from TIM1/15/16 Break input (value: 0)
     *          - B_0x1: ECC error connected to TIM1/15/16 Break input (value: 1)
     */
        /** @brief ECC error disconnected from TIM1/15/16 Break input */
    constexpr std::uint32_t SYSCFG_CFGR2_ECCL_B_0x0 = 0;
        /** @brief ECC error connected to TIM1/15/16 Break input */
    constexpr std::uint32_t SYSCFG_CFGR2_ECCL_B_0x1 = 1;

    /** @brief Backup SRAM2 parity lock This bit is set by software and cleared by a system reset. It can be used to enable and lock the SRAM2 parity error signal connection to TIM1/15/16 Break input. */
    using SYSCFG_CFGR2_BKPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 parity error disconnected from TIM1/15/16 Break input (value: 0)
     *          - B_0x1: SRAM2 parity error connected to TIM1/15/16 Break input (value: 1)
     */
        /** @brief SRAM2 parity error disconnected from TIM1/15/16 Break input */
    constexpr std::uint32_t SYSCFG_CFGR2_BKPL_B_0x0 = 0;
        /** @brief SRAM2 parity error connected to TIM1/15/16 Break input */
    constexpr std::uint32_t SYSCFG_CFGR2_BKPL_B_0x1 = 1;

    /** @brief Backup SRAM2 parity error flag This bit is set by hardware when an SRAM2 parity error is detected. It is cleared by software by writing 1. */
    using SYSCFG_CFGR2_BKPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SRAM2 parity error detected (value: 0)
     *          - B_0x1: SRAM2 parity error detected (value: 1)
     */
        /** @brief No SRAM2 parity error detected */
    constexpr std::uint32_t SYSCFG_CFGR2_BKPF_B_0x0 = 0;
        /** @brief SRAM2 parity error detected */
    constexpr std::uint32_t SYSCFG_CFGR2_BKPF_B_0x1 = 1;

    /** @brief SRAM1 parity error flag This bit is set by hardware when an SRAM1 parity error is detected. It is cleared by software by writing 1. */
    using SYSCFG_CFGR2_SPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SRAM1 parity error detected (value: 0)
     *          - B_0x1: SRAM1 parity error detected (value: 1)
     */
        /** @brief No SRAM1 parity error detected */
    constexpr std::uint32_t SYSCFG_CFGR2_SPF_B_0x0 = 0;
        /** @brief SRAM1 parity error detected */
    constexpr std::uint32_t SYSCFG_CFGR2_SPF_B_0x1 = 1;

    /** @brief SYSCFG SRAM2 control and status register */
    using SYSCFG_SCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM2 erase Setting this bit starts a hardware SRAM2 erase operation. This bit is automatically cleared at the end of the SRAM2 erase operation. Note: This bit is write-protected: setting this bit is possible only after the correct key sequence is written in the SYSCFG_SKR register. */
    using SYSCFG_SCSR_SRAM2ER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM2 busy by erase operation */
    using SYSCFG_SCSR_SRAM2BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SRAM2 erase operation is ongoing (value: 0)
     *          - B_0x1: SRAM2 erase operation is ongoing (value: 1)
     */
        /** @brief No SRAM2 erase operation is ongoing */
    constexpr std::uint32_t SYSCFG_SCSR_SRAM2BSY_B_0x0 = 0;
        /** @brief SRAM2 erase operation is ongoing */
    constexpr std::uint32_t SYSCFG_SCSR_SRAM2BSY_B_0x1 = 1;

    /** @brief SYSCFG SRAM2 key register */
    using SYSCFG_SKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM2 write protection key for software erase The following steps are required to unlock the write protection of the SRAM2ER bit in the SYSCFG_CFGR2 register: Write 0xCA into KEY[7:0] Write 0x53 into KEY[7:0] Writing a wrong key reactivates the write protection. */
    using SYSCFG_SKR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG TSC comparator register */
    using SYSCFG_TSCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator mode for group 2 on I/O 1 */
    using SYSCFG_TSCCR_G2_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enable connection of PB4 to COMP2 (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t SYSCFG_TSCCR_G2_IO1_B_0x0 = 0;
        /** @brief Enable connection of PB4 to COMP2 */
    constexpr std::uint32_t SYSCFG_TSCCR_G2_IO1_B_0x1 = 1;

    /** @brief Comparator mode for group 2 on I/O 3 */
    using SYSCFG_TSCCR_G2_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enable connection of PB6 to COMP2 (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t SYSCFG_TSCCR_G2_IO3_B_0x0 = 0;
        /** @brief Enable connection of PB6 to COMP2 */
    constexpr std::uint32_t SYSCFG_TSCCR_G2_IO3_B_0x1 = 1;

    /** @brief Comparator mode for group 4 on I/O 3 */
    using SYSCFG_TSCCR_G4_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enable connection of PC6 to COMP2 (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t SYSCFG_TSCCR_G4_IO3_B_0x0 = 0;
        /** @brief Enable connection of PC6 to COMP2 */
    constexpr std::uint32_t SYSCFG_TSCCR_G4_IO3_B_0x1 = 1;

    /** @brief Comparator mode for group 6 on I/O 1 */
    using SYSCFG_TSCCR_G6_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enable connection of PD10 to COMP1 (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t SYSCFG_TSCCR_G6_IO1_B_0x0 = 0;
        /** @brief Enable connection of PD10 to COMP1 */
    constexpr std::uint32_t SYSCFG_TSCCR_G6_IO1_B_0x1 = 1;

    /** @brief Comparator mode for group 7 on I/O 1 */
    using SYSCFG_TSCCR_G7_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enable connection of PA9 to COMP1 (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t SYSCFG_TSCCR_G7_IO1_B_0x0 = 0;
        /** @brief Enable connection of PA9 to COMP1 */
    constexpr std::uint32_t SYSCFG_TSCCR_G7_IO1_B_0x1 = 1;

    /** @brief I/O control in comparator mode The I/O control in comparator mode can be overwritten by hardware. */
    using SYSCFG_TSCCR_TSC_IOCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O configured through the corresponding control register (value: 0)
     *          - B_0x1: I/O configured as analog when TSC AF is activated (value: 1)
     */
        /** @brief I/O configured through the corresponding control register */
    constexpr std::uint32_t SYSCFG_TSCCR_TSC_IOCTRL_B_0x0 = 0;
        /** @brief I/O configured as analog when TSC AF is activated */
    constexpr std::uint32_t SYSCFG_TSCCR_TSC_IOCTRL_B_0x1 = 1;

    /** @brief SYSCFG interrupt line 0 status register */
    using SYSCFG_ITLINE0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Window watchdog interrupt pending flag */
    using SYSCFG_ITLINE0_WWDG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 1 status register */
    using SYSCFG_ITLINE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVD supply monitoring interrupt request pending (EXTI line 16). */
    using SYSCFG_ITLINE1_PVDOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief V<sub>DDUSB</sub> supply monitoring interrupt request pending (EXTI line 19) */
    using SYSCFG_ITLINE1_PVMOUT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC supply monitoring interrupt request pending (EXTI line 20) */
    using SYSCFG_ITLINE1_PVMOUT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC supply monitoring interrupt request pending (EXTI line 21) */
    using SYSCFG_ITLINE1_PVMOUT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 2 status register */
    using SYSCFG_ITLINE2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper interrupt request pending (EXTI line 21) */
    using SYSCFG_ITLINE2_TAMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC interrupt request pending (EXTI line 19) */
    using SYSCFG_ITLINE2_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 3 status register */
    using SYSCFG_ITLINE3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash interface interrupt request pending */
    using SYSCFG_ITLINE3_FLASH_ITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash interface ECC interrupt request pending */
    using SYSCFG_ITLINE3_FLASH_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 4 status register */
    using SYSCFG_ITLINE4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset and clock control interrupt request pending */
    using SYSCFG_ITLINE4_RCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRS interrupt request pending */
    using SYSCFG_ITLINE4_CRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 5 status register */
    using SYSCFG_ITLINE5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 0 interrupt request pending */
    using SYSCFG_ITLINE5_EXTI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 1 interrupt request pending */
    using SYSCFG_ITLINE5_EXTI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 6 status register */
    using SYSCFG_ITLINE6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 2 interrupt request pending */
    using SYSCFG_ITLINE6_EXTI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 3 interrupt request pending */
    using SYSCFG_ITLINE6_EXTI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 7 status register */
    using SYSCFG_ITLINE7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 4 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 5 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 6 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 7 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 8 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 9 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 10 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 11 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 12 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 13 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 14 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI line 15 interrupt request pending */
    using SYSCFG_ITLINE7_EXTI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 8 status register */
    using SYSCFG_ITLINE8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB interrupt request pending */
    using SYSCFG_ITLINE8_USB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 9 status register */
    using SYSCFG_ITLINE9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 1 interrupt request pending */
    using SYSCFG_ITLINE9_DMA1_CH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 10 status register */
    using SYSCFG_ITLINE10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 2 interrupt request pending */
    using SYSCFG_ITLINE10_DMA1_CH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 3 interrupt request pending */
    using SYSCFG_ITLINE10_DMA1_CH3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 11 status register */
    using SYSCFG_ITLINE11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX interrupt request pending */
    using SYSCFG_ITLINE11_DMAMUX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 4 interrupt request pending */
    using SYSCFG_ITLINE11_DMA1_CH4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 5 interrupt request pending */
    using SYSCFG_ITLINE11_DMA1_CH5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 6 interrupt request pending */
    using SYSCFG_ITLINE11_DMA1_CH6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA1 channel 7 interrupt request pending */
    using SYSCFG_ITLINE11_DMA1_CH7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2 channel 1 interrupt request pending */
    using SYSCFG_ITLINE11_DMA2_CH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2 channel 2 interrupt request pending */
    using SYSCFG_ITLINE11_DMA2_CH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2 channel 3 interrupt request pending */
    using SYSCFG_ITLINE11_DMA2_CH3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2 channel 4 interrupt request pending */
    using SYSCFG_ITLINE11_DMA2_CH4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2 channel 5 interrupt request pending */
    using SYSCFG_ITLINE11_DMA2_CH5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 12 status register */
    using SYSCFG_ITLINE12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC interrupt request pending */
    using SYSCFG_ITLINE12_ADC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 interrupt request pending (EXTI line 17) */
    using SYSCFG_ITLINE12_COMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 interrupt request pending (EXTI line 18) */
    using SYSCFG_ITLINE12_COMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 13 status register */
    using SYSCFG_ITLINE13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 commutation interrupt request pending */
    using SYSCFG_ITLINE13_TIM1_CCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 trigger interrupt request pending */
    using SYSCFG_ITLINE13_TIM1_TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 update interrupt request pending */
    using SYSCFG_ITLINE13_TIM1_UPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 break interrupt request pending */
    using SYSCFG_ITLINE13_TIM1_BRK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 14 status register */
    using SYSCFG_ITLINE14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 capture compare 1 interrupt request pending */
    using SYSCFG_ITLINE14_TIM1_CC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 capture compare 2 interrupt request pending */
    using SYSCFG_ITLINE14_TIM1_CC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 capture compare 3 interrupt request pending */
    using SYSCFG_ITLINE14_TIM1_CC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 1 capture compare 4 interrupt request pending */
    using SYSCFG_ITLINE14_TIM1_CC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 15 status register */
    using SYSCFG_ITLINE15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 2 interrupt request pending */
    using SYSCFG_ITLINE15_TIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 16 status register */
    using SYSCFG_ITLINE16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 3 interrupt request pending */
    using SYSCFG_ITLINE16_TIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 17 status register */
    using SYSCFG_ITLINE17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 6 interrupt request pending */
    using SYSCFG_ITLINE17_TIM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC underrun interrupt request pending */
    using SYSCFG_ITLINE17_DAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power timer 1 interrupt request pending (EXTI line 29) */
    using SYSCFG_ITLINE17_LPTIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 18 status register */
    using SYSCFG_ITLINE18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 7 interrupt request pending */
    using SYSCFG_ITLINE18_TIM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power timer 2 interrupt request pending (EXTI line 30) */
    using SYSCFG_ITLINE18_LPTIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 19 status register */
    using SYSCFG_ITLINE19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 15 interrupt request pending */
    using SYSCFG_ITLINE19_TIM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power timer 3 interrupt request pending */
    using SYSCFG_ITLINE19_LPTIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 20 status register */
    using SYSCFG_ITLINE20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer 16 interrupt request pending */
    using SYSCFG_ITLINE20_TIM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 21 status register */
    using SYSCFG_ITLINE21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC max count error interrupt request pending */
    using SYSCFG_ITLINE21_TSC_MCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC end of acquisition interrupt request pending */
    using SYSCFG_ITLINE21_TSC_EOA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 22 status register */
    using SYSCFG_ITLINE22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCD interrupt request pending */
    using SYSCFG_ITLINE22_LCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 23 status register */
    using SYSCFG_ITLINE23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 interrupt request pending (EXTI line 33) */
    using SYSCFG_ITLINE23_I2C1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 24 status register */
    using SYSCFG_ITLINE24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 interrupt request pending */
    using SYSCFG_ITLINE24_I2C2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 interrupt request pending */
    using SYSCFG_ITLINE24_I2C4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 interrupt request pending (EXTI line 23) */
    using SYSCFG_ITLINE24_I2C3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 25 status register */
    using SYSCFG_ITLINE25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1 interrupt request pending */
    using SYSCFG_ITLINE25_SPI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 26 status register */
    using SYSCFG_ITLINE26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2 interrupt request pending */
    using SYSCFG_ITLINE26_SPI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3 interrupt request pending */
    using SYSCFG_ITLINE26_SPI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 27 status register */
    using SYSCFG_ITLINE27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1 interrupt request pending, combined with EXTI line 25 */
    using SYSCFG_ITLINE27_USART1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 28 status register */
    using SYSCFG_ITLINE28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2 interrupt request pending (EXTI line 35) */
    using SYSCFG_ITLINE28_USART2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART2 interrupt request pending (EXTI line 31) */
    using SYSCFG_ITLINE28_LPUART2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 29 status register */
    using SYSCFG_ITLINE29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3 interrupt request pending */
    using SYSCFG_ITLINE29_USART3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1 interrupt request pending (EXTI line 30) */
    using SYSCFG_ITLINE29_LPUART1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 30 status register */
    using SYSCFG_ITLINE30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART4 interrupt request pending */
    using SYSCFG_ITLINE30_USART4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART3 interrupt request pending (EXTI line 32) */
    using SYSCFG_ITLINE30_LPUART3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSCFG interrupt line 31 status register */
    using SYSCFG_ITLINE31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG interrupt request pending */
    using SYSCFG_ITLINE31_RNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES interrupt request pending */
    using SYSCFG_ITLINE31_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
