/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA54_SEC_PWR_HPP
#define EMBEDDED_PP_STM32WBA54_SEC_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Power control */
namespace STM32WBA54::SEC_PWR {

    /** @brief PWR control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode selection These bits select the low-power mode entered when the CPU enters the SleepDeep mode. 10x: Standby mode others reserved */
    using PWR_CR1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop 0 mode (value: 0)
     *          - B_0x1: Stop 1 mode (value: 1)
     */
        /** @brief Stop 0 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x0 = 0;
        /** @brief Stop 1 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x1 = 1;

    /** @brief SRAM2 retention in Standby mode This bit is used to keep the SRAM2 content in Standby retention mode. */
    using PWR_CR1_R2RSB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 content not retained in Standby mode (value: 0)
     *          - B_0x1: SRAM2 content retained in Standby mode (value: 1)
     */
        /** @brief SRAM2 content not retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R2RSB1_B_0x0 = 0;
        /** @brief SRAM2 content retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R2RSB1_B_0x1 = 1;

    /** @brief BOR0 ultra-low-power mode. This bit is used to reduce the consumption by configuring the BOR0 in discontinuous mode for Stop 1 and Standby modes. Discontinuous mode is only available when BOR levels 1 to 4 and PVD are disabled. Note: This bit must be set to reach the lowest power consumption in the low-power modes. Note: This bit must not be set together with autonomous peripherals using HSI16 as kernel clock. Note: When BOR level 1 to 4 or PVD is enabled continuous mode applies independent from ULPMEN. */
    using PWR_CR1_ULPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR0 operating in continuous (normal) mode in all operating modes (value: 0)
     *          - B_0x1: BOR0 operating in discontinuous (ultra-low-power) mode in Stop 1 and Standby modes. (value: 1)
     */
        /** @brief BOR0 operating in continuous (normal) mode in all operating modes */
    constexpr std::uint32_t PWR_CR1_ULPMEN_B_0x0 = 0;
        /** @brief BOR0 operating in discontinuous (ultra-low-power) mode in Stop 1 and Standby modes. */
    constexpr std::uint32_t PWR_CR1_ULPMEN_B_0x1 = 1;

    /** @brief 2.4 GHz RADIO SRAMs (RXTXRAM and Sequence RAM) and Sleep clock retention in Standby mode. This bit is used to keep the 2.4 GHz RADIO SRAMs content in Standby retention mode and the 2.4 GHz RADIO sleep timer counter operational. */
    using PWR_CR1_RADIORSB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.4 GHz RADIO SRAMs and sleep timer content not retained in Standby mode (value: 0)
     *          - B_0x1: 2.4 GHz RADIO SRAMs and sleep timer content retained in Standby mode (value: 1)
     */
        /** @brief 2.4 GHz RADIO SRAMs and sleep timer content not retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_RADIORSB_B_0x0 = 0;
        /** @brief 2.4 GHz RADIO SRAMs and sleep timer content retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_RADIORSB_B_0x1 = 1;

    /** @brief SRAM1 retention in Standby mode This bit is used to keep the SRAM1 content in Standby retention mode. */
    using PWR_CR1_R1RSB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 content not retained in Standby mode (value: 0)
     *          - B_0x1: SRAM1 content retained in Standby mode (value: 1)
     */
        /** @brief SRAM1 content not retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R1RSB1_B_0x0 = 0;
        /** @brief SRAM1 content retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R1RSB1_B_0x1 = 1;

    /** @brief PWR control register 2 */
    using PWR_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1 power-down in Stop modes (Stop 0, 1) Note: The SRAM1 retention in Standby mode is controlled by R1RSB1 bit in PWR_CR1. */
    using PWR_CR2_SRAM1PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS1_B_0x0 = 0;
        /** @brief SRAM1 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS1_B_0x1 = 1;

    /** @brief SRAM2 power-down in Stop modes (Stop 0, 1) Note: The SRAM2 retention in Standby mode is controlled by R2RSB1 bit in PWR_CR1. */
    using PWR_CR2_SRAM2PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM2 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM2 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS1_B_0x0 = 0;
        /** @brief SRAM2 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS1_B_0x1 = 1;

    /** @brief ICACHE SRAM power-down in Stop modes (Stop 0, 1) */
    using PWR_CR2_ICRAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: ICACHE SRAM content lost in Stop modes (value: 1)
     */
        /** @brief ICACHE SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_ICRAMPDS_B_0x0 = 0;
        /** @brief ICACHE SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_ICRAMPDS_B_0x1 = 1;

    /** @brief Flash memory fast wakeup from Stop modes (Stop 0, 1) This bit is used to obtain the best trade-off between low-power consumption and wakeup time when exiting the Stop 0 or Stop 1 modes. When this bit is set, the Flash memory remains in normal mode in Stop 0 and Stop 1 modes, which offers a faster startup time with higher consumption. */
    using PWR_CR2_FLASHFWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory enters low-power mode in Stop 0 and Stop 1 modes (lower-power consumption). (value: 0)
     *          - B_0x1: Flash memory remains in normal mode in Stop 0 and Stop 1 modes (faster wakeup time). (value: 1)
     */
        /** @brief Flash memory enters low-power mode in Stop 0 and Stop 1 modes (lower-power consumption). */
    constexpr std::uint32_t PWR_CR2_FLASHFWU_B_0x0 = 0;
        /** @brief Flash memory remains in normal mode in Stop 0 and Stop 1 modes (faster wakeup time). */
    constexpr std::uint32_t PWR_CR2_FLASHFWU_B_0x1 = 1;

    /** @brief PWR control register 3 */
    using PWR_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regulator selection */
    using PWR_CR3_REGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast soft start */
    using PWR_CR3_FSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LDO fast startup disabled (limited inrush current) (value: 0)
     *          - B_0x1: LDO fast startup enabled (value: 1)
     */
        /** @brief LDO fast startup disabled (limited inrush current) */
    constexpr std::uint32_t PWR_CR3_FSTEN_B_0x0 = 0;
        /** @brief LDO fast startup enabled */
    constexpr std::uint32_t PWR_CR3_FSTEN_B_0x1 = 1;

    /** @brief PWR voltage scaling register */
    using PWR_VOSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ready bit for VsubCORE/sub voltage scaling output selection Set and cleared by hardware. When decreasing the voltage scaling range, VOSRDY must be one before increasing the SYSCLK frequency. */
    using PWR_VOSR_VOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, voltage level VOS selected level (value: 0)
     *          - B_0x1: Ready, voltage level greater than or equal VOS selected level (value: 1)
     */
        /** @brief Not ready, voltage level VOS selected level */
    constexpr std::uint32_t PWR_VOSR_VOSRDY_B_0x0 = 0;
        /** @brief Ready, voltage level greater than or equal VOS selected level */
    constexpr std::uint32_t PWR_VOSR_VOSRDY_B_0x1 = 1;

    /** @brief Voltage scaling range selection Set a and cleared by software. Cleared by hardware when entering Stop 1 mode. Access can be secured by RCC SYSCLKSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_VOSR_VOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Range 2 (lowest power) (value: 0)
     *          - B_0x1: Range 1 (highest frequency). (value: 1)
     */
        /** @brief Range 2 (lowest power) */
    constexpr std::uint32_t PWR_VOSR_VOS_B_0x0 = 0;
        /** @brief Range 1 (highest frequency). */
    constexpr std::uint32_t PWR_VOSR_VOS_B_0x1 = 1;

    /** @brief PWR supply voltage monitoring control register */
    using PWR_SVMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable voltage detector enable */
    using PWR_SVMCR_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Programmable voltage detector disabled (value: 0)
     *          - B_0x1: Programmable voltage detector enabled (value: 1)
     */
        /** @brief Programmable voltage detector disabled */
    constexpr std::uint32_t PWR_SVMCR_PVDE_B_0x0 = 0;
        /** @brief Programmable voltage detector enabled */
    constexpr std::uint32_t PWR_SVMCR_PVDE_B_0x1 = 1;

    /** @brief Programmable voltage detector level selection These bits select the voltage threshold detected by the programmable voltage detector: */
    using PWR_SVMCR_PVDLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VsubPVD0/sub ~ 2.0 V (value: 0)
     *          - B_0x1: VsubPVD1/sub ~ 2.2 V (value: 1)
     *          - B_0x2: VsubPVD2/sub ~ 2.4 V (value: 2)
     *          - B_0x3: VsubPVD3/sub ~ 2.5 V (value: 3)
     *          - B_0x4: VsubPVD4/sub ~ 2.6 V (value: 4)
     *          - B_0x5: VsubPVD5/sub ~ 2.8 V (value: 5)
     *          - B_0x6: VsubPVD6/sub ~ 2.9 V (value: 6)
     *          - B_0x7: External input analog voltage PVD_IN (compared internally to VREFINT), The I/O used as PVD_IN input, must be configured in analog mode in the GPIO register. (value: 7)
     */
        /** @brief VsubPVD0/sub ~ 2.0 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x0 = 0;
        /** @brief VsubPVD1/sub ~ 2.2 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x1 = 1;
        /** @brief VsubPVD2/sub ~ 2.4 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x2 = 2;
        /** @brief VsubPVD3/sub ~ 2.5 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x3 = 3;
        /** @brief VsubPVD4/sub ~ 2.6 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x4 = 4;
        /** @brief VsubPVD5/sub ~ 2.8 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x5 = 5;
        /** @brief VsubPVD6/sub ~ 2.9 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x6 = 6;
        /** @brief External input analog voltage PVD_IN (compared internally to VREFINT), The I/O used as PVD_IN input, must be configured in analog mode in the GPIO register. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x7 = 7;

    /** @brief PWR wakeup control register 1 */
    using PWR_WUCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pin WKUP1 enable Access can be secured by PWR WUP1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR1_WUPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup and interrupt pin WKUP1 disabled (value: 0)
     *          - B_0x1: Wakeup and interrupt pin WKUP1 enabled (value: 1)
     */
        /** @brief Wakeup and interrupt pin WKUP1 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN1_B_0x0 = 0;
        /** @brief Wakeup and interrupt pin WKUP1 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN1_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP2 enable Access can be secured by PWR WUP2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR1_WUPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup and interrupt pin WKUP2 disabled (value: 0)
     *          - B_0x1: Wakeup and interrupt pin WKUP2 enabled (value: 1)
     */
        /** @brief Wakeup and interrupt pin WKUP2 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN2_B_0x0 = 0;
        /** @brief Wakeup and interrupt pin WKUP2 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN2_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP3 enable Access can be secured by PWR WUP3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR1_WUPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup and interrupt pin WKUP3 disabled (value: 0)
     *          - B_0x1: Wakeup and interrupt pin WKUP3 enabled (value: 1)
     */
        /** @brief Wakeup and interrupt pin WKUP3 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN3_B_0x0 = 0;
        /** @brief Wakeup and interrupt pin WKUP3 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN3_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP4 enable Access can be secured by PWR WUP4SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR1_WUPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup and interrupt pin WKUP4 disabled (value: 0)
     *          - B_0x1: Wakeup and interrupt pin WKUP4 enabled (value: 1)
     */
        /** @brief Wakeup and interrupt pin WKUP4 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN4_B_0x0 = 0;
        /** @brief Wakeup and interrupt pin WKUP4 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN4_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP5 enable Access can be secured by PWR WUP5SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR1_WUPEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup and interrupt pin WKUP5 disabled (value: 0)
     *          - B_0x1: Wakeup and interrupt pin WKUP5 enabled (value: 1)
     */
        /** @brief Wakeup and interrupt pin WKUP5 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN5_B_0x0 = 0;
        /** @brief Wakeup and interrupt pin WKUP5 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN5_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP6 enable Access can be secured by PWR WUP6SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR1_WUPEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup and interrupt pin WKUP6 disabled (value: 0)
     *          - B_0x1: Wakeup and interrupt pin WKUP6 enabled (value: 1)
     */
        /** @brief Wakeup and interrupt pin WKUP6 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN6_B_0x0 = 0;
        /** @brief Wakeup and interrupt pin WKUP6 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN6_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP7 enable Access can be secured by PWR WUP7SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR1_WUPEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup and interrupt pin WKUP7 disabled (value: 0)
     *          - B_0x1: Wakeup and interrupt pin WKUP7 enabled (value: 1)
     */
        /** @brief Wakeup and interrupt pin WKUP7 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN7_B_0x0 = 0;
        /** @brief Wakeup and interrupt pin WKUP7 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN7_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP8 enable Access can be secured by PWR WUP8SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR1_WUPEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup and interrupt pin WKUP8 disabled (value: 0)
     *          - B_0x1: Wakeup and interrupt pin WKUP8 enabled (value: 1)
     */
        /** @brief Wakeup and interrupt pin WKUP8 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN8_B_0x0 = 0;
        /** @brief Wakeup and interrupt pin WKUP8 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN8_B_0x1 = 1;

    /** @brief PWR wakeup control register 2 */
    using PWR_WUCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUP1 polarity. This bit must be configured when WUPEN1 = 0. Access can be secured by PWR WUP1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR2_WUPP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP1_B_0x1 = 1;

    /** @brief Wakeup pin WKUP2 polarity This bit must be configured when WUPEN2 = 0. Access can be secured by PWR WUP2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR2_WUPP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP2_B_0x1 = 1;

    /** @brief Wakeup pin WKUP3 polarity This bit must be configured when WUPEN3 = 0. Access can be secured by PWR WUP3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR2_WUPP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP3_B_0x1 = 1;

    /** @brief Wakeup pin WKUP4 polarity This bit must be configured when WUPEN4 = 0. Access can be secured by PWR WUP4SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR2_WUPP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP4_B_0x1 = 1;

    /** @brief Wakeup pin WKUP5 polarity This bit must be configured when WUPEN5 = 0. Access can be secured by PWR WUP5SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR2_WUPP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP5_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP5_B_0x1 = 1;

    /** @brief Wakeup pin WKUP6 polarity This bit must be configured when WUPEN6 = 0. Access can be secured by PWR WUP6SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR2_WUPP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP6_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP6_B_0x1 = 1;

    /** @brief Wakeup pin WKUP7 polarity This bit must be configured when WUPEN7 = 0. Access can be secured by PWR WUP7SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR2_WUPP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP7_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP7_B_0x1 = 1;

    /** @brief Wakeup pin WKUP8 polarity This bit must be configured when WUPEN8 = 0. Access can be secured by PWR WUP8SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR2_WUPP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP8_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP8_B_0x1 = 1;

    /** @brief PWR wakeup control register 3 */
    using PWR_WUCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pin WKUP1 selection This field must be configured when WUPEN1 = 0. Access can be secured by PWR WUP1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR3_WUSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP1_0 (value: 0)
     *          - B_0x1: WKUP1_1 (value: 1)
     */
        /** @brief WKUP1_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x0 = 0;
        /** @brief WKUP1_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP2 selection This field must be configured when WUPEN2 = 0. Access can be secured by PWR WUP2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR3_WUSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: WKUP2_1 (value: 1)
     */
        /** @brief WKUP2_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP3 selection This field must be configured when WUPEN3 = 0. Access can be secured by PWR WUP3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR3_WUSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: WKUP3_1 (value: 1)
     *          - B_0x2: WKUP3_2 (value: 2)
     */
        /** @brief WKUP3_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x1 = 1;
        /** @brief WKUP3_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x2 = 2;

    /** @brief Wakeup and interrupt pin WKUP4 selection This field must be configured when WUPEN4 = 0. Access can be secured by PWR WUP4SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR3_WUSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP4_0 (value: 0)
     *          - B_0x1: WKUP4_1 (value: 1)
     */
        /** @brief WKUP4_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x0 = 0;
        /** @brief WKUP4_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x1 = 1;

    /** @brief Wakeup and interrupt pin WKUP5 selection This field must be configured when WUPEN5 = 0. Access can be secured by PWR WUP5SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR3_WUSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: WKUP5_1 (value: 1)
     *          - B_0x2: WKUP5_2 (value: 2)
     */
        /** @brief WKUP5_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x1 = 1;
        /** @brief WKUP5_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x2 = 2;

    /** @brief Wakeup and interrupt pin WKUP6 selection This field must be configured when WUPEN6 = 0. Access can be secured by PWR WUP6SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR3_WUSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP6_0 (value: 0)
     *          - B_0x1: WKUP6_1 (value: 1)
     *          - B_0x3: WKUP6_3 (internal source, does not generate a WKUP interrupt) (value: 3)
     */
        /** @brief WKUP6_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x0 = 0;
        /** @brief WKUP6_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x1 = 1;
        /** @brief WKUP6_3 (internal source, does not generate a WKUP interrupt) */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x3 = 3;

    /** @brief Wakeup and interrupt pin WKUP7 selection This field must be configured when WUPEN7 = 0. Access can be secured by PWR WUP7SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR3_WUSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP7_0 (value: 0)
     *          - B_0x1: WKUP7_1 (value: 1)
     *          - B_0x3: WKUP7_3 (internal source, does not generate a WKUP interrupt) (value: 3)
     */
        /** @brief WKUP7_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x0 = 0;
        /** @brief WKUP7_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x1 = 1;
        /** @brief WKUP7_3 (internal source, does not generate a WKUP interrupt) */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x3 = 3;

    /** @brief Wakeup and interrupt pin WKUP8 selection This field must be configured when WUPEN8 = 0. Access can be secured by PWR WUP8SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_WUCR3_WUSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: WKUP8_1 (value: 1)
     *          - B_0x2: WKUP8_2 (value: 2)
     *          - B_0x3: WKUP8_3 (internal source, does not generate a WKUP interrupt) (value: 3)
     */
        /** @brief WKUP8_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x1 = 1;
        /** @brief WKUP8_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x2 = 2;
        /** @brief WKUP8_3 (internal source, does not generate a WKUP interrupt) */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x3 = 3;

    /** @brief PWR disable Backup domain register */
    using PWR_DBPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Backup domain write protection In reset state, all registers and SRAM in Backup domain are protected against parasitic write access. This bit must be set to enable the write access to these registers. */
    using PWR_DBPR_DBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write access to Backup domain disabled (value: 0)
     *          - B_0x1: Write access to Backup domain enabled (value: 1)
     */
        /** @brief Write access to Backup domain disabled */
    constexpr std::uint32_t PWR_DBPR_DBP_B_0x0 = 0;
        /** @brief Write access to Backup domain enabled */
    constexpr std::uint32_t PWR_DBPR_DBP_B_0x1 = 1;

    /** @brief PWR security configuration register */
    using PWR_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUP1 secure protection */
    using PWR_SECCFGR_WUP1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP1 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP1 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP1 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP1 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x1 = 1;

    /** @brief WUP2 secure protection */
    using PWR_SECCFGR_WUP2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP2 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP2 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP2 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP2 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x1 = 1;

    /** @brief WUP3 secure protection */
    using PWR_SECCFGR_WUP3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP3 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP3 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP3 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP3 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x1 = 1;

    /** @brief WUP4 secure protection */
    using PWR_SECCFGR_WUP4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP4 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP4 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP4 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP4 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x1 = 1;

    /** @brief WUP5 secure protection */
    using PWR_SECCFGR_WUP5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP5 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP5 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP5 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP5 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x1 = 1;

    /** @brief WUP6 secure protection */
    using PWR_SECCFGR_WUP6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP6 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP6 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP6 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP6 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x1 = 1;

    /** @brief WUP7 secure protection */
    using PWR_SECCFGR_WUP7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP7 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP7 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP7 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP7 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x1 = 1;

    /** @brief WUP8 secure protection */
    using PWR_SECCFGR_WUP8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP8 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP8 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP8 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP8 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x1 = 1;

    /** @brief Low-power modes secure protection */
    using PWR_SECCFGR_LPMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR1, PWR_CR2 and CSSF in the PWR_SR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_CR1, PWR_CR2, and CSSF in the PWR_SR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_CR1, PWR_CR2 and CSSF in the PWR_SR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x0 = 0;
        /** @brief PWR_CR1, PWR_CR2, and CSSF in the PWR_SR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x1 = 1;

    /** @brief Voltage detection secure protection */
    using PWR_SECCFGR_VDMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_SVMCR and PWR_CR3 can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_SVMCR and PWR_CR3 can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_SVMCR and PWR_CR3 can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VDMSEC_B_0x0 = 0;
        /** @brief PWR_SVMCR and PWR_CR3 can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VDMSEC_B_0x1 = 1;

    /** @brief Backup domain secure protection */
    using PWR_SECCFGR_VBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_DBPR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_DBPR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_DBPR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x0 = 0;
        /** @brief PWR_DBPR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x1 = 1;

    /** @brief PWR privilege control register */
    using PWR_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR secure functions privilege configuration This bit is set and reset by software. It can be written only by a secure privileged access. */
    using PWR_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR secure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief PWR non-secure functions privilege configuration This bit is set and reset by software. It can be written only by privileged access, secure or non-secure. */
    using PWR_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR non-secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR non-secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR non-secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR non-secure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_NSPRIV_B_0x1 = 1;

    /** @brief PWR status register */
    using PWR_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Stop and Standby flags Access can be secured by PWR LPMSEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. Writing 1 to this bit clears the STOPF and SBF flags. */
    using PWR_SR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop flag This bit is set by hardware when the device enters a Stop or Standby mode at the same time as the sysclk has been set by hardware to select HSI16. It's cleared by software by writing 1 to the CSSF bit and by hardware when SBF is set. */
    using PWR_SR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter any Stop mode. (value: 0)
     *          - B_0x1: The device entered a Stop mode. (value: 1)
     */
        /** @brief The device did not enter any Stop mode. */
    constexpr std::uint32_t PWR_SR_STOPF_B_0x0 = 0;
        /** @brief The device entered a Stop mode. */
    constexpr std::uint32_t PWR_SR_STOPF_B_0x1 = 1;

    /** @brief Standby flag This bit is set by hardware when the device enters the Standby mode and the CPU restart from its reset vector. It's cleared by writing 1 to the CSSF bit, or by a power-on reset. It is not cleared by the system reset. */
    using PWR_SR_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter Standby mode. (value: 0)
     *          - B_0x1: The device entered Standby mode. (value: 1)
     */
        /** @brief The device did not enter Standby mode. */
    constexpr std::uint32_t PWR_SR_SBF_B_0x0 = 0;
        /** @brief The device entered Standby mode. */
    constexpr std::uint32_t PWR_SR_SBF_B_0x1 = 1;

    /** @brief PWR supply voltage monitoring status register */
    using PWR_SVMSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regulator selection */
    using PWR_SVMSR_REGS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable voltage detector output */
    using PWR_SVMSR_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VsubDD/sub is equal or above the PVD threshold selected by PVDLS[2:0]. (value: 0)
     *          - B_0x1: VsubDD /subis below the PVD threshold selected by PVDLS[2:0]. (value: 1)
     */
        /** @brief VsubDD/sub is equal or above the PVD threshold selected by PVDLS[2:0]. */
    constexpr std::uint32_t PWR_SVMSR_PVDO_B_0x0 = 0;
        /** @brief VsubDD /subis below the PVD threshold selected by PVDLS[2:0]. */
    constexpr std::uint32_t PWR_SVMSR_PVDO_B_0x1 = 1;

    /** @brief Voltage level ready for currently used VOS */
    using PWR_SVMSR_ACTVOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VsubCORE/sub is above or below the current voltage scaling provided by ACTVOS. (value: 0)
     *          - B_0x1: VsubCORE /subis equal to the current voltage scaling provided by ACTVOS (value: 1)
     */
        /** @brief VsubCORE/sub is above or below the current voltage scaling provided by ACTVOS. */
    constexpr std::uint32_t PWR_SVMSR_ACTVOSRDY_B_0x0 = 0;
        /** @brief VsubCORE /subis equal to the current voltage scaling provided by ACTVOS */
    constexpr std::uint32_t PWR_SVMSR_ACTVOSRDY_B_0x1 = 1;

    /** @brief VOS currently applied to VsubCORE/sub This field provides the last VOS value. */
    using PWR_SVMSR_ACTVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Range 2 (lowest power) (value: 0)
     *          - B_0x1: Range 1 (highest frequency) (value: 1)
     */
        /** @brief Range 2 (lowest power) */
    constexpr std::uint32_t PWR_SVMSR_ACTVOS_B_0x0 = 0;
        /** @brief Range 1 (highest frequency) */
    constexpr std::uint32_t PWR_SVMSR_ACTVOS_B_0x1 = 1;

    /** @brief PWR wakeup status register */
    using PWR_WUSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pending flag 1 This bit is set when a wakeup event is detected on WKUP1 pin. This bit is cleared by writing 1 in the CWUF1 bit of PWR_WUSCR or by hardware when WUPEN1 = 0. */
    using PWR_WUSR_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pending flag 2 This bit is set when a wakeup event is detected on WKUP2 pin. This bit is cleared by writing 1 in the CWUF2 bit of PWR_WUSCR or by hardware when WUPEN2 = 0. */
    using PWR_WUSR_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pending flag 3 This bit is set when a wakeup event is detected on WKUP3 pin. This bit is cleared by writing 1 in the CWUF3 bit of PWR_WUSCR or by hardware when WUPEN3 = 0. */
    using PWR_WUSR_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pending flag 4 This bit is set when a wakeup event is detected on WKUP4 pin. This bit is cleared by writing 1 in the CWUF4 bit of PWR_WUSCR or by hardware when WUPEN4 = 0. */
    using PWR_WUSR_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pending flag 5 This bit is set when a wakeup event is detected on WKUP5 pin. This bit is cleared by writing 1 in the CWUF5 bit of PWR_WUSCR or by hardware when WUPEN5 = 0. */
    using PWR_WUSR_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pending flag 6 This bit is set when a wakeup event is detected on WKUP6 pin. This bit is cleared by writing 1 in the CWUF6 bit of PWR_WUSCR when WUSEL6 different 11, or by hardware when WUPEN6 = 0. When WUSEL6 = 11, this bit is cleared by hardware when all associated internal wakeup source are cleared. When WUSEL6 = 11, no WKUP interrupt is generated */
    using PWR_WUSR_WUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pending flag 7 This bit is set when a wakeup event is detected on WKUP7 pin. This bit is cleared by writing 1 in the CWUF7 bit of PWR_WUSCR when WUSEL7 different 11, or by hardware when WUPEN7 = 0. When WUSEL7 = 11, this bit is cleared by hardware when all associated internal wakeup source are cleared. When WUSEL7 = 11, no WKUP interrupt is generated. */
    using PWR_WUSR_WUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup and interrupt pending flag 8 This bit is set when a wakeup event is detected on WKUP8 pin. This bit is cleared by writing 1 in the CWUF8 bit of PWR_WUSCR when WUSEL8 different 11, or by hardware when WUPEN8 = 0. When WUSEL8 = 11, this bit is cleared by hardware when all associated internal wakeup source are cleared. When WUSEL8 = 11, no WKUP interrupt is generated */
    using PWR_WUSR_WUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR wakeup status clear register */
    using PWR_WUSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 1 Access can be secured by PWR WUP1SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. Writing 1 to this bit clears the WUF1 flag in PWR_WUSR. */
    using PWR_WUSCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 2 Access can be secured by PWR WUP2SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. Writing 1 to this bit clears the WUF2 flag in PWR_WUSR. */
    using PWR_WUSCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 3 Access can be secured by PWR WUP3SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. Writing 1 to this bit clears the WUF3 flag in PWR_WUSR. */
    using PWR_WUSCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 4 Access can be secured by PWR WUP4SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. Writing 1 to this bit clears the WUF4 flag in PWR_WUSR. */
    using PWR_WUSCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 5 Access can be secured by PWR WUP5SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. Writing 1 to this bit clears the WUF5 flag in PWR_WUSR. */
    using PWR_WUSCR_CWUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 6 Access can be secured by PWR WUP6SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. Writing 1 to this bit clears the WUF6 flag in PWR_WUSR. */
    using PWR_WUSCR_CWUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 7 Access can be secured by PWR WUP7SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. Writing 1 to this bit clears the WUF7 flag in PWR_WUSR. */
    using PWR_WUSCR_CWUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 8 Access can be secured by PWR WUP8SEC. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. Writing 1 to this bit clears the WUF8 flag in PWR_WUSR. */
    using PWR_WUSCR_CWUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port A Standby IO retention enable register */
    using PWR_IORETENRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A Standby GPIO retention enable Access can be protected by GPIOA SECy, privilege protection is controlled by PWR SPRIV or PWR NSPRIV. When set, each bit enables the Standby GPIO retention feature for PAy */
    using PWR_IORETENRA_EN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A Standby GPIO retention enable Access can be protected by GPIOA SECy, privilege protection is controlled by PWR SPRIV or PWR NSPRIV. When set, each bit enables the Standby GPIO retention feature for PAy */
    using PWR_IORETENRA_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A Standby GPIO retention enable Access can be protected by GPIOA SECy, privilege protection is controlled by PWR SPRIV or PWR NSPRIV. When set, each bit enables the Standby GPIO retention feature for PAy */
    using PWR_IORETENRA_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A Standby GPIO retention enable Access can be protected by GPIOA SECy, privilege protection is controlled by PWR SPRIV or PWR NSPRIV. When set, each bit enables the Standby GPIO retention feature for PAy */
    using PWR_IORETENRA_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN5_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN5_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN6_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN6_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN7_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN7_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN8_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN8_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN9_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN9_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN10_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN10_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN11_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN11_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN12_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN12_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN13_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN13_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN14_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN14_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRA_EN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN15_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN15_B_0x1 = 1;

    /** @brief PWR port A Standby IO retention status register */
    using PWR_IORETRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A Standby GPIO retention active Access can be protected by GPIOA SECy, privilege protection is controlled by PWR SPRIV or PWR NSPRIV. */
    using PWR_IORETRA_RET0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET0_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET0_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be protected by GPIOA SECy, privilege protection is controlled by PWR SPRIV or PWR NSPRIV. */
    using PWR_IORETRA_RET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET1_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET1_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be protected by GPIOA SECy, privilege protection is controlled by PWR SPRIV or PWR NSPRIV. */
    using PWR_IORETRA_RET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET2_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET2_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be protected by GPIOA SECy, privilege protection is controlled by PWR SPRIV or PWR NSPRIV. */
    using PWR_IORETRA_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET3_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET5_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET5_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET6_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET6_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET7_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET7_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET8_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET8_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET9_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET9_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET10_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET10_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET11_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET11_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET12_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET12_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET13_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET13_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET14_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET14_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active Access can be secured by GPIOA SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRA_RET15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PAy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. Standby GPIO retention PAy active. */
    constexpr std::uint32_t PWR_IORETRA_RET15_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PAy disabled. */
    constexpr std::uint32_t PWR_IORETRA_RET15_B_0x0 = 0;

    /** @brief PWR port B Standby IO retention enable register */
    using PWR_IORETENRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN0_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN0_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN1_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN1_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN2_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN2_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN3_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN3_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN4_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN4_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN5_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN5_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN6_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN6_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN7_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN7_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN8_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN8_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN9_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN9_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN10_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN10_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN11_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN11_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN12_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN12_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN13_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN13_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN14_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN14_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRB_EN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN15_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN15_B_0x1 = 1;

    /** @brief PWR port B Standby IO retention status register */
    using PWR_IORETRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET0_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET0_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET1_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET1_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET2_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET2_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET3_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET4_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET4_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET5_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET5_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET6_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET6_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET7_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET7_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET8_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET8_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET9_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET9_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET10_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET10_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET11_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET11_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET12_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET12_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET13_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET13_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET14_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET14_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active Access can be secured by GPIOB SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRB_RET15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PBy disabled.. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. Standby GPIO retention PBy active. */
    constexpr std::uint32_t PWR_IORETRB_RET15_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PBy disabled.. */
    constexpr std::uint32_t PWR_IORETRB_RET15_B_0x0 = 0;

    /** @brief PWR port C Standby IO retention enable register */
    using PWR_IORETENRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C Standby GPIO retention enable Access can be secured by GPIOC SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRC_EN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN13_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN13_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable Access can be secured by GPIOC SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRC_EN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN14_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN14_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable Access can be secured by GPIOC SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRC_EN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN15_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN15_B_0x1 = 1;

    /** @brief PWR port C Standby IO retention status register */
    using PWR_IORETRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C Standby GPIO retention active Access can be secured by GPIOC SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRC_RET13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. Standby GPIO retention PCy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PCy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. Standby GPIO retention PCy active. */
    constexpr std::uint32_t PWR_IORETRC_RET13_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PCy disabled. */
    constexpr std::uint32_t PWR_IORETRC_RET13_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active Access can be secured by GPIOC SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRC_RET14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. Standby GPIO retention PCy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PCy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. Standby GPIO retention PCy active. */
    constexpr std::uint32_t PWR_IORETRC_RET14_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PCy disabled. */
    constexpr std::uint32_t PWR_IORETRC_RET14_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active Access can be secured by GPIOC SECy. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRC_RET15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. Standby GPIO retention PCy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PCy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. Standby GPIO retention PCy active. */
    constexpr std::uint32_t PWR_IORETRC_RET15_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PCy disabled. */
    constexpr std::uint32_t PWR_IORETRC_RET15_B_0x0 = 0;

    /** @brief PWR port H Standby IO retention enable register */
    using PWR_IORETENRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H Standby GPIO retention enable Access can be secured by GPIOH SEC3. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETENRH_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PHy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PHy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PHy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRH_EN3_B_0x0 = 0;
        /** @brief PHy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRH_EN3_B_0x1 = 1;

    /** @brief PWR port H Standby IO retention status register */
    using PWR_IORETRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H Standby GPIO retention active Access can be secured by GPIOH SEC3. When secure, a non-secure read/write access is RAZ/WI. It does not generate an illegal access interrupt. This bit can be protected against unprivileged access when secure with PWR SPRIV or when non-secure with PWR NSPRIV. */
    using PWR_IORETRH_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PHy is enabled in PWR_IORETENRH and Standby mode is entered. Standby GPIO retention PHy active. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. Standby GPIO retention PHy disabled. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PHy is enabled in PWR_IORETENRH and Standby mode is entered. Standby GPIO retention PHy active. */
    constexpr std::uint32_t PWR_IORETRH_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. Standby GPIO retention PHy disabled. */
    constexpr std::uint32_t PWR_IORETRH_RET3_B_0x0 = 0;

    /** @brief PWR 2.4 GHz RADIO status and control register */
    using PWR_RADIOSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2.4 GHz RADIO operating mode. 1x: 2.4 GHz RADIO active mode */
    using PWR_RADIOSCR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.4 GHz RADIO deep sleep mode (value: 0)
     *          - B_0x1: 2.4 GHz RADIO sleep mode (value: 1)
     */
        /** @brief 2.4 GHz RADIO deep sleep mode */
    constexpr std::uint32_t PWR_RADIOSCR_MODE_B_0x0 = 0;
        /** @brief 2.4 GHz RADIO sleep mode */
    constexpr std::uint32_t PWR_RADIOSCR_MODE_B_0x1 = 1;

    /** @brief 2.4 GHz RADIO PHY operating mode */
    using PWR_RADIOSCR_PHYMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.4 GHz RADIO Sleep mode (value: 0)
     *          - B_0x1: 2.4 GHz RADIO Standby mode (value: 1)
     */
        /** @brief 2.4 GHz RADIO Sleep mode */
    constexpr std::uint32_t PWR_RADIOSCR_PHYMODE_B_0x0 = 0;
        /** @brief 2.4 GHz RADIO Standby mode */
    constexpr std::uint32_t PWR_RADIOSCR_PHYMODE_B_0x1 = 1;

    /** @brief 2.4 GHz RADIO encryption function operating mode */
    using PWR_RADIOSCR_ENCMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.4 GHz RADIO encryption function disabled (value: 0)
     *          - B_0x1: 2.4 GHz RADIO encryption function enabled (value: 1)
     */
        /** @brief 2.4 GHz RADIO encryption function disabled */
    constexpr std::uint32_t PWR_RADIOSCR_ENCMODE_B_0x0 = 0;
        /** @brief 2.4 GHz RADIO encryption function enabled */
    constexpr std::uint32_t PWR_RADIOSCR_ENCMODE_B_0x1 = 1;

    /** @brief 2.4 GHz RADIO VDDHPA control word. Bits [3:0] see Table 81: PA output power table format for definition. Bit [4] rf_event. */
    using PWR_RADIOSCR_RFVDDHPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ready bit for VsubDDHPA/sub voltage level when selecting VDDRFPA input. Note: REGPARDYVDDRFPA does not allow to detect correct VsubDDHPA/sub voltage level when request to lower the level. */
    using PWR_RADIOSCR_REGPARDYVDDRFPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, VsubDDHPA/sub voltage level REGPAVOS selected supply level (value: 0)
     *          - B_0x1: Ready, VsubDDHPA/sub voltage level greater than or equal REGPAVOS selected supply level (value: 1)
     */
        /** @brief Not ready, VsubDDHPA/sub voltage level REGPAVOS selected supply level */
    constexpr std::uint32_t PWR_RADIOSCR_REGPARDYVDDRFPA_B_0x0 = 0;
        /** @brief Ready, VsubDDHPA/sub voltage level greater than or equal REGPAVOS selected supply level */
    constexpr std::uint32_t PWR_RADIOSCR_REGPARDYVDDRFPA_B_0x1 = 1;

}

#endif
