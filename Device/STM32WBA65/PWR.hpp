/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA65_PWR_HPP
#define EMBEDDED_PP_STM32WBA65_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PWR address block description */
namespace STM32WBA65::PWR {

    /** @brief PWR control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode selection */
    using PWR_CR1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop 0 mode (value: 0)
     *          - B_0x1: Stop 1 mode (value: 1)
     */
        /** @brief Stop 0 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x0 = 0;
        /** @brief Stop 1 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x1 = 1;

    /** @brief SRAM2 retention in Standby mode */
    using PWR_CR1_R2RSB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 content not retained in Standby mode (value: 0)
     *          - B_0x1: SRAM2 content retained in Standby mode (value: 1)
     */
        /** @brief SRAM2 content not retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R2RSB1_B_0x0 = 0;
        /** @brief SRAM2 content retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R2RSB1_B_0x1 = 1;

    /** @brief BOR0 ultra-low power mode. */
    using PWR_CR1_ULPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR0 operating in continuous (normal) mode in all operating modes (value: 0)
     *          - B_0x1: BOR0 operating in discontinuous (ultra-low power) mode in Stop 1 and Standby modes. (value: 1)
     */
        /** @brief BOR0 operating in continuous (normal) mode in all operating modes */
    constexpr std::uint32_t PWR_CR1_ULPMEN_B_0x0 = 0;
        /** @brief BOR0 operating in discontinuous (ultra-low power) mode in Stop 1 and Standby modes. */
    constexpr std::uint32_t PWR_CR1_ULPMEN_B_0x1 = 1;

    /** @brief 2. */
    using PWR_CR1_RADIORSB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t PWR_CR1_RADIORSB_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t PWR_CR1_RADIORSB_B_0x1 = 1;

    /** @brief SRAM1 192 KB page 5 to 7 retention in Standby mode */
    using PWR_CR1_R1RSB567 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 192 KB, page 5 to 7 content not retained in Standby mode (value: 0)
     *          - B_0x1: SRAM1 192 KB, page 5 to 7 content retained in Standby mode (value: 1)
     */
        /** @brief SRAM1 192 KB, page 5 to 7 content not retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R1RSB567_B_0x0 = 0;
        /** @brief SRAM1 192 KB, page 5 to 7 content retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R1RSB567_B_0x1 = 1;

    /** @brief SRAM1 64 KB page x retention in Standby mode */
    using PWR_CR1_R1RSB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 64 KB, page x content not retained in Standby mode (value: 0)
     *          - B_0x1: SRAM1 64 KB, page x content retained in Standby mode (value: 1)
     */
        /** @brief SRAM1 64 KB, page x content not retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R1RSB_B_0x0 = 0;
        /** @brief SRAM1 64 KB, page x content retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_R1RSB_B_0x1 = 1;

    /** @brief PWR control register 2 */
    using PWR_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1 page x power-down in Stop modes */
    using PWR_CR2_SRAM1PDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 64 KB page x content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 64 KB page x content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 64 KB page x content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS_B_0x0 = 0;
        /** @brief SRAM1 64 KB page x content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS_B_0x1 = 1;

    /** @brief SRAM2 power-down in Stop modes (Stop 0, 1) */
    using PWR_CR2_SRAM2PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM2 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM2 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS1_B_0x0 = 0;
        /** @brief SRAM2 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS1_B_0x1 = 1;

    /** @brief SRAM1 192 KB, page 5 to 7 power-down in Stop modes */
    using PWR_CR2_SRAM1PDS567 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 192 KB, page 5 to 7 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 192 KB, page 5 to 7 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 192 KB, page 5 to 7 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS567_B_0x0 = 0;
        /** @brief SRAM1 192 KB, page 5 to 7 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS567_B_0x1 = 1;

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

    /** @brief OTG SRAM power-down in Stop modes */
    using PWR_CR2_PRAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: OTG SRAM content lost in Stop modes (value: 1)
     */
        /** @brief OTG SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_PRAMPDS_B_0x0 = 0;
        /** @brief OTG SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_PRAMPDS_B_0x1 = 1;

    /** @brief PKA SRAM power-down in Stop modes */
    using PWR_CR2_PKARAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: PKA SRAM content lost in Stop modes (value: 1)
     */
        /** @brief PKA SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_PKARAMPDS_B_0x0 = 0;
        /** @brief PKA SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_PKARAMPDS_B_0x1 = 1;

    /** @brief Flash memory fast wake-up from Stop modes (Stop 0, 1) */
    using PWR_CR2_FLASHFWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory enters low-power mode in Stop 0 and Stop 1 modes (lower power consumption). (value: 0)
     *          - B_0x1: Flash memory remains in normal mode in Stop 0 and Stop 1 modes (faster wake-up time). (value: 1)
     */
        /** @brief Flash memory enters low-power mode in Stop 0 and Stop 1 modes (lower power consumption). */
    constexpr std::uint32_t PWR_CR2_FLASHFWU_B_0x0 = 0;
        /** @brief Flash memory remains in normal mode in Stop 0 and Stop 1 modes (faster wake-up time). */
    constexpr std::uint32_t PWR_CR2_FLASHFWU_B_0x1 = 1;

    /** @brief PWR control register 3 */
    using PWR_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regulator selection */
    using PWR_CR3_REGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LDO selected (value: 0)
     *          - B_0x1: SMPS selected (value: 1)
     */
        /** @brief LDO selected */
    constexpr std::uint32_t PWR_CR3_REGSEL_B_0x0 = 0;
        /** @brief SMPS selected */
    constexpr std::uint32_t PWR_CR3_REGSEL_B_0x1 = 1;

    /** @brief Fast soft start */
    using PWR_CR3_FSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LDO/SMPS fast startup disabled (limited inrush current after system reset and wake-up from Standby) (value: 0)
     *          - B_0x1: LDO/SMPS fast startup enabled (value: 1)
     */
        /** @brief LDO/SMPS fast startup disabled (limited inrush current after system reset and wake-up from Standby) */
    constexpr std::uint32_t PWR_CR3_FSTEN_B_0x0 = 0;
        /** @brief LDO/SMPS fast startup enabled */
    constexpr std::uint32_t PWR_CR3_FSTEN_B_0x1 = 1;

    /** @brief Low power mode regulator clock division */
    using PWR_CR3_DIVCLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low power regulator clock not divided (value: 0)
     */
        /** @brief Low power regulator clock not divided */
    constexpr std::uint32_t PWR_CR3_DIVCLP_B_0x0 = 0;

    /** @brief Low power mode regulator replica selection */
    using PWR_CR3_SELREP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief V11 feedback switch enable (non user bit) */
    using PWR_CR3_V11FBSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V11 feedback fixed before Epod (value: 0)
     *          - B_0x1: V11 feedback switch enabled: (value: 1)
     */
        /** @brief V11 feedback fixed before Epod */
    constexpr std::uint32_t PWR_CR3_V11FBSW_B_0x0 = 0;
        /** @brief V11 feedback switch enabled: */
    constexpr std::uint32_t PWR_CR3_V11FBSW_B_0x1 = 1;

    /** @brief PWR voltage scaling register */
    using PWR_VOSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB OTG VDD11USB ready */
    using PWR_VOSR_VDD11USBRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB OTG VDD11USB not ready. (value: 0)
     *          - B_0x1: USB OTG VDD11USB ready. (value: 1)
     */
        /** @brief USB OTG VDD11USB not ready. */
    constexpr std::uint32_t PWR_VOSR_VDD11USBRDY_B_0x0 = 0;
        /** @brief USB OTG VDD11USB ready. */
    constexpr std::uint32_t PWR_VOSR_VDD11USBRDY_B_0x1 = 1;

    /** @brief USB OTG booster ready */
    using PWR_VOSR_USBBOOSTRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB OTG power booster not ready (value: 0)
     *          - B_0x1: USB OTG power booster ready (value: 1)
     */
        /** @brief USB OTG power booster not ready */
    constexpr std::uint32_t PWR_VOSR_USBBOOSTRDY_B_0x0 = 0;
        /** @brief USB OTG power booster ready */
    constexpr std::uint32_t PWR_VOSR_USBBOOSTRDY_B_0x1 = 1;

    /** @brief Ready bit for Vless thansub COREless than/sub voltage scaling output selection */
    using PWR_VOSR_VOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, voltage level less than VOS selected level (value: 0)
     *          - B_0x1: Ready, voltage level greater than or equal VOS selected level (value: 1)
     */
        /** @brief Not ready, voltage level less than VOS selected level */
    constexpr std::uint32_t PWR_VOSR_VOSRDY_B_0x0 = 0;
        /** @brief Ready, voltage level greater than or equal VOS selected level */
    constexpr std::uint32_t PWR_VOSR_VOSRDY_B_0x1 = 1;

    /** @brief Voltage scaling range selection */
    using PWR_VOSR_VOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Range 2 (lowest power) (value: 0)
     *          - B_0x1: Range 1 (highest frequency). (value: 1)
     */
        /** @brief Range 2 (lowest power) */
    constexpr std::uint32_t PWR_VOSR_VOS_B_0x0 = 0;
        /** @brief Range 1 (highest frequency). */
    constexpr std::uint32_t PWR_VOSR_VOS_B_0x1 = 1;

    /** @brief USB OTG power enable */
    using PWR_VOSR_USBPWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB OTG power disabled (value: 0)
     *          - B_0x1: USB OTG power enabled (value: 1)
     */
        /** @brief USB OTG power disabled */
    constexpr std::uint32_t PWR_VOSR_USBPWREN_B_0x0 = 0;
        /** @brief USB OTG power enabled */
    constexpr std::uint32_t PWR_VOSR_USBPWREN_B_0x1 = 1;

    /** @brief USB OTG booster enable */
    using PWR_VOSR_USBBOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB OTG booster disabled (value: 0)
     *          - B_0x1: USB OTG booster enabled (value: 1)
     */
        /** @brief USB OTG booster disabled */
    constexpr std::uint32_t PWR_VOSR_USBBOOSTEN_B_0x0 = 0;
        /** @brief USB OTG booster enabled */
    constexpr std::uint32_t PWR_VOSR_USBBOOSTEN_B_0x1 = 1;

    /** @brief USB OTG VDD11USB disable */
    using PWR_VOSR_VDD11USBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD11USB enabled (value: 0)
     *          - B_0x1: VDD11USB disabled (value: 1)
     */
        /** @brief VDD11USB enabled */
    constexpr std::uint32_t PWR_VOSR_VDD11USBDIS_B_0x0 = 0;
        /** @brief VDD11USB disabled */
    constexpr std::uint32_t PWR_VOSR_VDD11USBDIS_B_0x1 = 1;

    /** @brief USB OTG VDD11USB switch delay */
    using PWR_VOSR_VDD11USBSWDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief Programmable voltage detector level selection */
    using PWR_SVMCR_PVDLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub PVD0less than/sub ~ 2. (value: 0)
     *          - B_0x1: Vless thansub PVD1less than/sub ~ 2. (value: 1)
     *          - B_0x2: Vless thansub PVD2less than/sub ~ 2. (value: 2)
     *          - B_0x3: Vless thansub PVD3less than/sub ~ 2. (value: 3)
     *          - B_0x4: Vless thansub PVD4less than/sub ~ 2. (value: 4)
     *          - B_0x5: Vless thansub PVD5less than/sub ~ 2. (value: 5)
     *          - B_0x6: Vless thansub PVD6less than/sub ~ 2. (value: 6)
     *          - B_0x7: External input analog voltage PVD_IN (compared internally to VREFINT). (value: 7)
     */
        /** @brief Vless thansub PVD0less than/sub ~ 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x0 = 0;
        /** @brief Vless thansub PVD1less than/sub ~ 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x1 = 1;
        /** @brief Vless thansub PVD2less than/sub ~ 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x2 = 2;
        /** @brief Vless thansub PVD3less than/sub ~ 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x3 = 3;
        /** @brief Vless thansub PVD4less than/sub ~ 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x4 = 4;
        /** @brief Vless thansub PVD5less than/sub ~ 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x5 = 5;
        /** @brief Vless thansub PVD6less than/sub ~ 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x6 = 6;
        /** @brief External input analog voltage PVD_IN (compared internally to VREFINT). */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x7 = 7;

    /** @brief VDDUSB supply valid */
    using PWR_SVMCR_USV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDUSB not supplied, electrical and logical isolation enabled. (value: 0)
     *          - B_0x1: VDDUSB supply present, electrical and logical isolation disabled. (value: 1)
     */
        /** @brief VDDUSB not supplied, electrical and logical isolation enabled. */
    constexpr std::uint32_t PWR_SVMCR_USV_B_0x0 = 0;
        /** @brief VDDUSB supply present, electrical and logical isolation disabled. */
    constexpr std::uint32_t PWR_SVMCR_USV_B_0x1 = 1;

    /** @brief VDDIO2 supply valid */
    using PWR_SVMCR_IO2SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO2 not supplied, electrical and logical isolation enabled. (value: 0)
     *          - B_0x1: VDDIO2 supply present, electrical and logical isolation disabled. (value: 1)
     */
        /** @brief VDDIO2 not supplied, electrical and logical isolation enabled. */
    constexpr std::uint32_t PWR_SVMCR_IO2SV_B_0x0 = 0;
        /** @brief VDDIO2 supply present, electrical and logical isolation disabled. */
    constexpr std::uint32_t PWR_SVMCR_IO2SV_B_0x1 = 1;

    /** @brief PWR wake-up control register 1 */
    using PWR_WUCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pin WKUP1 enable */
    using PWR_WUCR1_WUPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt pin WKUP1 disabled (value: 0)
     *          - B_0x1: Wake-up and interrupt pin WKUP1 enabled (value: 1)
     */
        /** @brief Wake-up and interrupt pin WKUP1 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN1_B_0x0 = 0;
        /** @brief Wake-up and interrupt pin WKUP1 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN1_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP2 enable */
    using PWR_WUCR1_WUPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt pin WKUP2 disabled (value: 0)
     *          - B_0x1: Wake-up and interrupt pin WKUP2 enabled (value: 1)
     */
        /** @brief Wake-up and interrupt pin WKUP2 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN2_B_0x0 = 0;
        /** @brief Wake-up and interrupt pin WKUP2 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN2_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP3 enable */
    using PWR_WUCR1_WUPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt pin WKUP3 disabled (value: 0)
     *          - B_0x1: Wake-up and interrupt pin WKUP3 enabled (value: 1)
     */
        /** @brief Wake-up and interrupt pin WKUP3 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN3_B_0x0 = 0;
        /** @brief Wake-up and interrupt pin WKUP3 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN3_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP4 enable */
    using PWR_WUCR1_WUPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt pin WKUP4 disabled (value: 0)
     *          - B_0x1: Wake-up and interrupt pin WKUP4 enabled (value: 1)
     */
        /** @brief Wake-up and interrupt pin WKUP4 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN4_B_0x0 = 0;
        /** @brief Wake-up and interrupt pin WKUP4 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN4_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP5 enable */
    using PWR_WUCR1_WUPEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt pin WKUP5 disabled (value: 0)
     *          - B_0x1: Wake-up and interrupt pin WKUP5 enabled (value: 1)
     */
        /** @brief Wake-up and interrupt pin WKUP5 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN5_B_0x0 = 0;
        /** @brief Wake-up and interrupt pin WKUP5 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN5_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP6 enable */
    using PWR_WUCR1_WUPEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt pin WKUP6 disabled (value: 0)
     *          - B_0x1: Wake-up and interrupt pin WKUP6 enabled (value: 1)
     */
        /** @brief Wake-up and interrupt pin WKUP6 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN6_B_0x0 = 0;
        /** @brief Wake-up and interrupt pin WKUP6 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN6_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP7 enable */
    using PWR_WUCR1_WUPEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt pin WKUP7 disabled (value: 0)
     *          - B_0x1: Wake-up and interrupt pin WKUP7 enabled (value: 1)
     */
        /** @brief Wake-up and interrupt pin WKUP7 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN7_B_0x0 = 0;
        /** @brief Wake-up and interrupt pin WKUP7 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN7_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP8 enable */
    using PWR_WUCR1_WUPEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up and interrupt pin WKUP8 disabled (value: 0)
     *          - B_0x1: Wake-up and interrupt pin WKUP8 enabled (value: 1)
     */
        /** @brief Wake-up and interrupt pin WKUP8 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN8_B_0x0 = 0;
        /** @brief Wake-up and interrupt pin WKUP8 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN8_B_0x1 = 1;

    /** @brief PWR wake-up control register 2 */
    using PWR_WUCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up pin WKUP1 polarity. */
    using PWR_WUCR2_WUPP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP1_B_0x1 = 1;

    /** @brief Wake-up pin WKUP2 polarity */
    using PWR_WUCR2_WUPP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP2_B_0x1 = 1;

    /** @brief Wake-up pin WKUP3 polarity */
    using PWR_WUCR2_WUPP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP3_B_0x1 = 1;

    /** @brief Wake-up pin WKUP4 polarity */
    using PWR_WUCR2_WUPP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP4_B_0x1 = 1;

    /** @brief Wake-up pin WKUP5 polarity */
    using PWR_WUCR2_WUPP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP5_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP5_B_0x1 = 1;

    /** @brief Wake-up pin WKUP6 polarity */
    using PWR_WUCR2_WUPP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP6_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP6_B_0x1 = 1;

    /** @brief Wake-up pin WKUP7 polarity */
    using PWR_WUCR2_WUPP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP7_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP7_B_0x1 = 1;

    /** @brief Wake-up pin WKUP8 polarity */
    using PWR_WUCR2_WUPP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP8_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP8_B_0x1 = 1;

    /** @brief PWR wake-up control register 3 */
    using PWR_WUCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pin WKUP1 selection */
    using PWR_WUCR3_WUSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP1_0 (value: 0)
     *          - B_0x1: WKUP1_1 (value: 1)
     */
        /** @brief WKUP1_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x0 = 0;
        /** @brief WKUP1_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP2 selection */
    using PWR_WUCR3_WUSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP2_0 (value: 0)
     *          - B_0x1: WKUP2_1 (value: 1)
     */
        /** @brief WKUP2_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x0 = 0;
        /** @brief WKUP2_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP3 selection */
    using PWR_WUCR3_WUSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: WKUP3_1 (value: 1)
     *          - B_0x2: WKUP3_2 (value: 2)
     */
        /** @brief WKUP3_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x1 = 1;
        /** @brief WKUP3_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x2 = 2;

    /** @brief Wake-up and interrupt pin WKUP4 selection */
    using PWR_WUCR3_WUSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP4_0 (value: 0)
     *          - B_0x1: WKUP4_1 (value: 1)
     */
        /** @brief WKUP4_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x0 = 0;
        /** @brief WKUP4_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x1 = 1;

    /** @brief Wake-up and interrupt pin WKUP5 selection */
    using PWR_WUCR3_WUSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: WKUP5_1 (value: 1)
     *          - B_0x2: WKUP5_2 (value: 2)
     */
        /** @brief WKUP5_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x1 = 1;
        /** @brief WKUP5_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x2 = 2;

    /** @brief Wake-up and interrupt pin WKUP6 selection */
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

    /** @brief Wake-up and interrupt pin WKUP7 selection */
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

    /** @brief Wake-up and interrupt pin WKUP8 selection */
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
    /** @brief Disable Backup domain write protection */
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
    /** @brief PWR secure functions privilege configuration */
    using PWR_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR secure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief PWR non-secure functions privilege configuration */
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
    /** @brief Clear Stop and Standby flags */
    using PWR_SR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop flag */
    using PWR_SR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter any Stop mode. (value: 0)
     *          - B_0x1: The device entered a Stop mode. (value: 1)
     */
        /** @brief The device did not enter any Stop mode. */
    constexpr std::uint32_t PWR_SR_STOPF_B_0x0 = 0;
        /** @brief The device entered a Stop mode. */
    constexpr std::uint32_t PWR_SR_STOPF_B_0x1 = 1;

    /** @brief Standby flag */
    using PWR_SR_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter Standby mode. (value: 0)
     *          - B_0x1: The device entered Standby mode. (value: 1)
     */
        /** @brief The device did not enter Standby mode. */
    constexpr std::uint32_t PWR_SR_SBF_B_0x0 = 0;
        /** @brief The device entered Standby mode. */
    constexpr std::uint32_t PWR_SR_SBF_B_0x1 = 1;

    /** @brief Stop 2 mode peripherals power down flag */
    using PWR_SR_STOP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter Stop 2 mode. (value: 0)
     *          - B_0x1: The device entered Stop 2 mode. (value: 1)
     */
        /** @brief The device did not enter Stop 2 mode. */
    constexpr std::uint32_t PWR_SR_STOP2F_B_0x0 = 0;
        /** @brief The device entered Stop 2 mode. */
    constexpr std::uint32_t PWR_SR_STOP2F_B_0x1 = 1;

    /** @brief PWR supply voltage monitoring status register */
    using PWR_SVMSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regulator selection */
    using PWR_SVMSR_REGS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LDO selected (value: 0)
     *          - B_0x1: SMPS selected (value: 1)
     */
        /** @brief LDO selected */
    constexpr std::uint32_t PWR_SVMSR_REGS_B_0x0 = 0;
        /** @brief SMPS selected */
    constexpr std::uint32_t PWR_SVMSR_REGS_B_0x1 = 1;

    /** @brief Programmable voltage detector output */
    using PWR_SVMSR_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub DDless than/sub is equal or above the PVD threshold selected by PVDLS[2:0]. (value: 0)
     *          - B_0x1: Vless thansub DD less than/sub is below the PVD threshold selected by PVDLS[2:0]. (value: 1)
     */
        /** @brief Vless thansub DDless than/sub is equal or above the PVD threshold selected by PVDLS[2:0]. */
    constexpr std::uint32_t PWR_SVMSR_PVDO_B_0x0 = 0;
        /** @brief Vless thansub DD less than/sub is below the PVD threshold selected by PVDLS[2:0]. */
    constexpr std::uint32_t PWR_SVMSR_PVDO_B_0x1 = 1;

    /** @brief Voltage level ready for currently used VOS */
    using PWR_SVMSR_ACTVOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub COREless than/sub is above or below the current voltage scaling provided by ACTVOS. (value: 0)
     *          - B_0x1: Vless thansub CORE less than/sub is equal to the current voltage scaling provided by ACTVOS (value: 1)
     */
        /** @brief Vless thansub COREless than/sub is above or below the current voltage scaling provided by ACTVOS. */
    constexpr std::uint32_t PWR_SVMSR_ACTVOSRDY_B_0x0 = 0;
        /** @brief Vless thansub CORE less than/sub is equal to the current voltage scaling provided by ACTVOS */
    constexpr std::uint32_t PWR_SVMSR_ACTVOSRDY_B_0x1 = 1;

    /** @brief VOS currently applied to Vless thansub COREless than/sub */
    using PWR_SVMSR_ACTVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Range 2 (lowest power) (value: 0)
     *          - B_0x1: Range 1 (highest frequency) (value: 1)
     */
        /** @brief Range 2 (lowest power) */
    constexpr std::uint32_t PWR_SVMSR_ACTVOS_B_0x0 = 0;
        /** @brief Range 1 (highest frequency) */
    constexpr std::uint32_t PWR_SVMSR_ACTVOS_B_0x1 = 1;

    /** @brief PWR wake-up status register */
    using PWR_WUSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pending flag 1 */
    using PWR_WUSR_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pending flag 2 */
    using PWR_WUSR_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pending flag 3 */
    using PWR_WUSR_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pending flag 4 */
    using PWR_WUSR_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pending flag 5 */
    using PWR_WUSR_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pending flag 6 */
    using PWR_WUSR_WUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pending flag 7 */
    using PWR_WUSR_WUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up and interrupt pending flag 8 */
    using PWR_WUSR_WUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR wake-up status clear register */
    using PWR_WUSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 1 */
    using PWR_WUSCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 2 */
    using PWR_WUSCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 3 */
    using PWR_WUSCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 4 */
    using PWR_WUSCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 5 */
    using PWR_WUSCR_CWUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 6 */
    using PWR_WUSCR_CWUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 7 */
    using PWR_WUSCR_CWUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 8 */
    using PWR_WUSCR_CWUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port A Standby IO retention enable register */
    using PWR_IORETENRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN0_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN0_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN1_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN1_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN2_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN2_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN3_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN3_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN4_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN4_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN5_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN5_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN6_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN6_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN7_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN7_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN8_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN8_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN9_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN9_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN10_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN10_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN11_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN11_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN12_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN12_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN13_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN13_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
    using PWR_IORETENRA_EN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PAy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PAy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PAy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN14_B_0x0 = 0;
        /** @brief PAy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRA_EN14_B_0x1 = 1;

    /** @brief Port A Standby GPIO retention enable */
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
    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET0_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET0_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET1_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET1_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET2_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET2_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET3_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET4_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET4_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET5_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET5_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET6_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET6_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET7_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET7_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET8_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET8_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET9_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET9_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET10_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET10_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET11_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET11_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET12_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET12_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET13_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET13_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET14_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET14_B_0x0 = 0;

    /** @brief Port A Standby GPIO retention active */
    using PWR_IORETRA_RET15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PAy is enabled in PWR_IORETENRA and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRA_RET15_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRA_RET15_B_0x0 = 0;

    /** @brief PWR port B Standby IO retention enable register */
    using PWR_IORETENRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN0_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN0_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN1_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN1_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN2_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN2_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN3_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN3_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN4_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN4_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN5_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN5_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN6_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN6_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN7_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN7_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN8_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN8_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN9_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN9_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN10_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN10_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN11_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN11_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN12_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN12_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN13_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN13_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
    using PWR_IORETENRB_EN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PBy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PBy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PBy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN14_B_0x0 = 0;
        /** @brief PBy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRB_EN14_B_0x1 = 1;

    /** @brief Port B Standby GPIO retention enable */
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
    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET0_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET0_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET1_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET1_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET2_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET2_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET3_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET4_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET4_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET5_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET5_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET6_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET6_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET7_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET7_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET8_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET8_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET9_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET9_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET10_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET10_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET11_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET11_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET12_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET12_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET13_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET13_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET14_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET14_B_0x0 = 0;

    /** @brief Port B Standby GPIO retention active */
    using PWR_IORETRB_RET15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PBy is enabled in PWR_IORETENRB and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRB_RET15_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRB_RET15_B_0x0 = 0;

    /** @brief PWR port C Standby IO retention enable register */
    using PWR_IORETENRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN0_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN0_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN1_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN1_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN2_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN2_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN3_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN3_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN4_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN4_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN5_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN5_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN6_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN6_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN7_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN7_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN8_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN8_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN9_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN9_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN10_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN10_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN11_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN11_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN12_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN12_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN13_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN13_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
    using PWR_IORETENRC_EN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PCy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PCy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PCy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN14_B_0x0 = 0;
        /** @brief PCy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRC_EN14_B_0x1 = 1;

    /** @brief Port C Standby GPIO retention enable */
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
    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET0_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET0_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET1_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET1_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET2_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET2_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET3_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET4_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET4_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET5_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET5_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET6_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET6_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET7_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET7_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET8_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET8_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET9_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET9_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET10_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET10_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET11_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET11_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET12_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET12_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET13_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET13_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET14_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET14_B_0x0 = 0;

    /** @brief Port C Standby GPIO retention active */
    using PWR_IORETRC_RET15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PCy is enabled in PWR_IORETENRC and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRC_RET15_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRC_RET15_B_0x0 = 0;

    /** @brief PWR port D Standby IO retention enable register */
    using PWR_IORETENRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN0_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN0_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN1_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN1_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN2_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN2_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN3_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN3_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN4_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN4_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN5_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN5_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN6_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN6_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN7_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN7_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN8_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN8_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN9_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN9_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN10_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN10_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN11_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN11_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN12_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN12_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN13_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN13_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN14_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN14_B_0x1 = 1;

    /** @brief Port D Standby GPIO retention enable */
    using PWR_IORETENRD_EN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PDy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PDy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PDy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN15_B_0x0 = 0;
        /** @brief PDy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRD_EN15_B_0x1 = 1;

    /** @brief PWR port D Standby IO retention status register */
    using PWR_IORETRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET0_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET0_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET1_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET1_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET2_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET2_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET3_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET4_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET4_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET5_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET5_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET6_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET6_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET7_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET7_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET8_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET8_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET9_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET9_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET10_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET10_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET11_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET11_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET12_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET12_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET13_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET13_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET14_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET14_B_0x0 = 0;

    /** @brief Port D Standby GPIO retention active */
    using PWR_IORETRD_RET15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PDy is enabled in PWR_IORETENRD and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRD_RET15_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRD_RET15_B_0x0 = 0;

    /** @brief PWR port E Standby IO retention enable register */
    using PWR_IORETENRE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E Standby GPIO retention enable */
    using PWR_IORETENRE_EN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PEy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PEy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PEy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN0_B_0x0 = 0;
        /** @brief PEy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN0_B_0x1 = 1;

    /** @brief Port E Standby GPIO retention enable */
    using PWR_IORETENRE_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PEy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PEy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PEy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN1_B_0x0 = 0;
        /** @brief PEy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN1_B_0x1 = 1;

    /** @brief Port E Standby GPIO retention enable */
    using PWR_IORETENRE_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PEy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PEy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PEy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN2_B_0x0 = 0;
        /** @brief PEy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN2_B_0x1 = 1;

    /** @brief Port E Standby GPIO retention enable */
    using PWR_IORETENRE_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PEy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PEy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PEy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN3_B_0x0 = 0;
        /** @brief PEy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN3_B_0x1 = 1;

    /** @brief Port E Standby GPIO retention enable */
    using PWR_IORETENRE_EN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PEy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PEy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PEy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN4_B_0x0 = 0;
        /** @brief PEy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN4_B_0x1 = 1;

    /** @brief Port E Standby GPIO retention enable */
    using PWR_IORETENRE_EN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PEy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PEy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PEy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN5_B_0x0 = 0;
        /** @brief PEy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN5_B_0x1 = 1;

    /** @brief Port E Standby GPIO retention enable */
    using PWR_IORETENRE_EN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PEy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PEy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PEy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN6_B_0x0 = 0;
        /** @brief PEy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRE_EN6_B_0x1 = 1;

    /** @brief PWR port E Standby IO retention status register */
    using PWR_IORETRE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E Standby GPIO retention active */
    using PWR_IORETRE_RET0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRE_RET0_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRE_RET0_B_0x0 = 0;

    /** @brief Port E Standby GPIO retention active */
    using PWR_IORETRE_RET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRE_RET1_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRE_RET1_B_0x0 = 0;

    /** @brief Port E Standby GPIO retention active */
    using PWR_IORETRE_RET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRE_RET2_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRE_RET2_B_0x0 = 0;

    /** @brief Port E Standby GPIO retention active */
    using PWR_IORETRE_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRE_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRE_RET3_B_0x0 = 0;

    /** @brief Port E Standby GPIO retention active */
    using PWR_IORETRE_RET4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRE_RET4_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRE_RET4_B_0x0 = 0;

    /** @brief Port E Standby GPIO retention active */
    using PWR_IORETRE_RET5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRE_RET5_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRE_RET5_B_0x0 = 0;

    /** @brief Port E Standby GPIO retention active */
    using PWR_IORETRE_RET6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PEy is enabled in PWR_IORETENRE and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRE_RET6_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRE_RET6_B_0x0 = 0;

    /** @brief PWR port G Standby IO retention enable register */
    using PWR_IORETENRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN2_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN2_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN3_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN3_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN4_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN4_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN5_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN5_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN6_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN6_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN7_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN7_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN8_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN8_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN9_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN9_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN10_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN10_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN11_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN11_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN12_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN12_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN13_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN13_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN14_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN14_B_0x1 = 1;

    /** @brief Port G Standby GPIO retention enable */
    using PWR_IORETENRG_EN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PGy Standby GPIO retention feature disabled. (value: 0)
     *          - B_0x1: PGy Standby GPIO retention feature enabled. (value: 1)
     */
        /** @brief PGy Standby GPIO retention feature disabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN15_B_0x0 = 0;
        /** @brief PGy Standby GPIO retention feature enabled. */
    constexpr std::uint32_t PWR_IORETENRG_EN15_B_0x1 = 1;

    /** @brief PWR port G Standby IO retention status register */
    using PWR_IORETRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET2_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET2_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET3_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET4_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET4_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET5_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET5_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET6_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET6_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET7_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET7_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET8_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET8_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET9_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET9_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET10_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET10_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET11_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET11_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET12_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET12_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET13_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET13_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET14_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET14_B_0x0 = 0;

    /** @brief Port G Standby GPIO retention active */
    using PWR_IORETRG_RET15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PGy is enabled in PWR_IORETENRG and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRG_RET15_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRG_RET15_B_0x0 = 0;

    /** @brief PWR port H Standby IO retention enable register */
    using PWR_IORETENRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H Standby GPIO retention enable */
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
    /** @brief Port H Standby GPIO retention active */
    using PWR_IORETRH_RET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Standby GPIO PHy is enabled in PWR_IORETENRH and Standby mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Standby GPIO PHy is enabled in PWR_IORETENRH and Standby mode is entered. */
    constexpr std::uint32_t PWR_IORETRH_RET3_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_IORETRH_RET3_B_0x0 = 0;

    /** @brief PWR 2. */
    using PWR_RADIOSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2. */
    using PWR_RADIOSCR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t PWR_RADIOSCR_MODE_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t PWR_RADIOSCR_MODE_B_0x1 = 1;

    /** @brief 2. */
    using PWR_RADIOSCR_PHYMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t PWR_RADIOSCR_PHYMODE_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t PWR_RADIOSCR_PHYMODE_B_0x1 = 1;

    /** @brief 2. */
    using PWR_RADIOSCR_ENCMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t PWR_RADIOSCR_ENCMODE_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t PWR_RADIOSCR_ENCMODE_B_0x1 = 1;

    /** @brief 2. */
    using PWR_RADIOSCR_RFVDDHPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ready bit for Vless thansub DDHPAless than/sub voltage level when selecting VDD11 input. */
    using PWR_RADIOSCR_REGPARDYV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, Vless thansub DDHPAless than/sub voltage level less than REGPAVOS selected supply level (value: 0)
     *          - B_0x1: Ready, Vless thansub DDHPAless than/sub voltage level greater than or equal REGPAVOS selected supply level (value: 1)
     */
        /** @brief Not ready, Vless thansub DDHPAless than/sub voltage level less than REGPAVOS selected supply level */
    constexpr std::uint32_t PWR_RADIOSCR_REGPARDYV11_B_0x0 = 0;
        /** @brief Ready, Vless thansub DDHPAless than/sub voltage level greater than or equal REGPAVOS selected supply level */
    constexpr std::uint32_t PWR_RADIOSCR_REGPARDYV11_B_0x1 = 1;

    /** @brief Ready bit for Vless thansub DDHPAless than/sub voltage level when selecting VDDRFPA input. */
    using PWR_RADIOSCR_REGPARDYVDDRFPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, Vless thansub DDHPAless than/sub voltage level less than REGPAVOS selected supply level (value: 0)
     *          - B_0x1: Ready, Vless thansub DDHPAless than/sub voltage level greater than or equal REGPAVOS selected supply level (value: 1)
     */
        /** @brief Not ready, Vless thansub DDHPAless than/sub voltage level less than REGPAVOS selected supply level */
    constexpr std::uint32_t PWR_RADIOSCR_REGPARDYVDDRFPA_B_0x0 = 0;
        /** @brief Ready, Vless thansub DDHPAless than/sub voltage level greater than or equal REGPAVOS selected supply level */
    constexpr std::uint32_t PWR_RADIOSCR_REGPARDYVDDRFPA_B_0x1 = 1;

    /** @brief regulator REG_VDDHPA input supply selection. */
    using PWR_RADIOSCR_REGPASEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDRFPA pin selected as regulator REG_VDDHPA input supply. (value: 0)
     *          - B_0x1: regulator REG_VDDHPA input supply selection between VDDRFPA and VDD11, dependent on requested regulated output voltage. (value: 1)
     */
        /** @brief VDDRFPA pin selected as regulator REG_VDDHPA input supply. */
    constexpr std::uint32_t PWR_RADIOSCR_REGPASEL_B_0x0 = 0;
        /** @brief regulator REG_VDDHPA input supply selection between VDDRFPA and VDD11, dependent on requested regulated output voltage. */
    constexpr std::uint32_t PWR_RADIOSCR_REGPASEL_B_0x1 = 1;

    /** @brief regulator REG_VDDHPA bypass enable. */
    using PWR_RADIOSCR_REGPABYPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 2. (value: 1)
     */
        /** @brief 2. */
    constexpr std::uint32_t PWR_RADIOSCR_REGPABYPEN_B_0x0 = 0;
        /** @brief 2. */
    constexpr std::uint32_t PWR_RADIOSCR_REGPABYPEN_B_0x1 = 1;

    /** @brief PWR Stop 2 peripheral IOs retention register */
    using PWR_S2RETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTA output signals Stop 2 mode retention enable */
    using PWR_S2RETR_PTASREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PTA output signals Stop 2 retention feature disabled. (value: 0)
     *          - B_0x1: PTA output signals Stop 2 retention feature enabled. (value: 1)
     */
        /** @brief PTA output signals Stop 2 retention feature disabled. */
    constexpr std::uint32_t PWR_S2RETR_PTASREN_B_0x0 = 0;
        /** @brief PTA output signals Stop 2 retention feature enabled. */
    constexpr std::uint32_t PWR_S2RETR_PTASREN_B_0x1 = 1;

    /** @brief PTA interface output signals state retention in Stop 2 mode active. */
    using PWR_S2RETR_PTASR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Set by hardware when Stop 2 mode PTA retention is enabled in PTASREN and Stop 2 mode is entered. (value: 1)
     *          - B_0x0: Cleared by software, writing 0. (value: 0)
     */
        /** @brief Set by hardware when Stop 2 mode PTA retention is enabled in PTASREN and Stop 2 mode is entered. */
    constexpr std::uint32_t PWR_S2RETR_PTASR_B_0x1 = 1;
        /** @brief Cleared by software, writing 0. */
    constexpr std::uint32_t PWR_S2RETR_PTASR_B_0x0 = 0;

}

#endif
