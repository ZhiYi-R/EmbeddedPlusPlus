/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G483_PWR_HPP
#define EMBEDDED_PP_STM32G483_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Power control */
namespace STM32G483::PWR {

    /** @brief Power control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode selection */
    using PWR_CR1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop 0 mode (value: 0)
     *          - B_0x1: Stop 1 mode (value: 1)
     *          - B_0x3: Standby mode (value: 3)
     */
        /** @brief Stop 0 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x0 = 0;
        /** @brief Stop 1 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x1 = 1;
        /** @brief Standby mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x3 = 3;

    /** @brief FPD_STOP */
    using PWR_CR1_FPD_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable backup domain write protection */
    using PWR_CR1_DBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access to RTC and Backup registers disabled (value: 0)
     *          - B_0x1: Access to RTC and Backup registers enabled (value: 1)
     */
        /** @brief Access to RTC and Backup registers disabled */
    constexpr std::uint32_t PWR_CR1_DBP_B_0x0 = 0;
        /** @brief Access to RTC and Backup registers enabled */
    constexpr std::uint32_t PWR_CR1_DBP_B_0x1 = 1;

    /** @brief Voltage scaling range selection */
    using PWR_CR1_VOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cannot be written (forbidden by hardware) (value: 0)
     *          - B_0x1: Range 1 (value: 1)
     *          - B_0x2: Range 2 (value: 2)
     *          - B_0x3: Cannot be written (forbidden by hardware) (value: 3)
     */
        /** @brief Cannot be written (forbidden by hardware) */
    constexpr std::uint32_t PWR_CR1_VOS_B_0x0 = 0;
        /** @brief Range 1 */
    constexpr std::uint32_t PWR_CR1_VOS_B_0x1 = 1;
        /** @brief Range 2 */
    constexpr std::uint32_t PWR_CR1_VOS_B_0x2 = 2;
        /** @brief Cannot be written (forbidden by hardware) */
    constexpr std::uint32_t PWR_CR1_VOS_B_0x3 = 3;

    /** @brief Low-power run */
    using PWR_CR1_LPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power control register 2 */
    using PWR_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable voltage detector enable */
    using PWR_CR2_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Programmable voltage detector disable. (value: 0)
     *          - B_0x1: Programmable voltage detector enable. (value: 1)
     */
        /** @brief Programmable voltage detector disable. */
    constexpr std::uint32_t PWR_CR2_PVDE_B_0x0 = 0;
        /** @brief Programmable voltage detector enable. */
    constexpr std::uint32_t PWR_CR2_PVDE_B_0x1 = 1;

    /** @brief Programmable voltage detector level selection. */
    using PWR_CR2_PVDLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>PVD0</sub> PVD threshold 0 (value: 0)
     *          - B_0x1: V<sub>PVD1</sub> PVD threshold 1 (value: 1)
     *          - B_0x2: V<sub>PVD2</sub> PVD threshold 2 (value: 2)
     *          - B_0x3: V<sub>PVD3</sub> PVD threshold 3 (value: 3)
     *          - B_0x4: V<sub>PVD4</sub> PVD threshold 4 (value: 4)
     *          - B_0x5: V<sub>PVD5</sub> PVD threshold 5 (value: 5)
     *          - B_0x6: V<sub>PVD6</sub> PVD threshold 6 (value: 6)
     *          - B_0x7: External input analog voltage PVD_IN (compared internally to V<sub>REFINT</sub>) (value: 7)
     */
        /** @brief V<sub>PVD0</sub> PVD threshold 0 */
    constexpr std::uint32_t PWR_CR2_PVDLS_B_0x0 = 0;
        /** @brief V<sub>PVD1</sub> PVD threshold 1 */
    constexpr std::uint32_t PWR_CR2_PVDLS_B_0x1 = 1;
        /** @brief V<sub>PVD2</sub> PVD threshold 2 */
    constexpr std::uint32_t PWR_CR2_PVDLS_B_0x2 = 2;
        /** @brief V<sub>PVD3</sub> PVD threshold 3 */
    constexpr std::uint32_t PWR_CR2_PVDLS_B_0x3 = 3;
        /** @brief V<sub>PVD4</sub> PVD threshold 4 */
    constexpr std::uint32_t PWR_CR2_PVDLS_B_0x4 = 4;
        /** @brief V<sub>PVD5</sub> PVD threshold 5 */
    constexpr std::uint32_t PWR_CR2_PVDLS_B_0x5 = 5;
        /** @brief V<sub>PVD6</sub> PVD threshold 6 */
    constexpr std::uint32_t PWR_CR2_PVDLS_B_0x6 = 6;
        /** @brief External input analog voltage PVD_IN (compared internally to V<sub>REFINT</sub>) */
    constexpr std::uint32_t PWR_CR2_PVDLS_B_0x7 = 7;

    /** @brief Peripheral voltage monitoring 3 enable: V<sub>DDA</sub> vs. ADC/COMP min voltage 1.62V */
    using PWR_CR2_PVMEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVM1 (V<sub>DDA</sub> monitoring vs. 1.62V threshold) disable. (value: 0)
     *          - B_0x1: PVM1 (V<sub>DDA</sub> monitoring vs. 1.62V threshold) enable. (value: 1)
     */
        /** @brief PVM1 (V<sub>DDA</sub> monitoring vs. 1.62V threshold) disable. */
    constexpr std::uint32_t PWR_CR2_PVMEN1_B_0x0 = 0;
        /** @brief PVM1 (V<sub>DDA</sub> monitoring vs. 1.62V threshold) enable. */
    constexpr std::uint32_t PWR_CR2_PVMEN1_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring 4 enable: V<sub>DDA</sub> vs. DAC 1MSPS /DAC 15MSPS min voltage. */
    using PWR_CR2_PVMEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVM2 (V<sub>DDA</sub> monitoring vs. 1.8 V threshold) disable. (value: 0)
     *          - B_0x1: PVM2 (V<sub>DDA</sub> monitoring vs. 1.8 V threshold) enable. (value: 1)
     */
        /** @brief PVM2 (V<sub>DDA</sub> monitoring vs. 1.8 V threshold) disable. */
    constexpr std::uint32_t PWR_CR2_PVMEN2_B_0x0 = 0;
        /** @brief PVM2 (V<sub>DDA</sub> monitoring vs. 1.8 V threshold) enable. */
    constexpr std::uint32_t PWR_CR2_PVMEN2_B_0x1 = 1;

    /** @brief Power control register 3 */
    using PWR_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup pin WKUP1 */
    using PWR_CR3_EWUP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup pin WKUP2 */
    using PWR_CR3_EWUP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup pin WKUP3 */
    using PWR_CR3_EWUP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup pin WKUP4 */
    using PWR_CR3_EWUP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup pin WKUP5 */
    using PWR_CR3_EWUP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM2 retention in Standby mode */
    using PWR_CR3_RRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 is powered off in Standby mode (SRAM2 content is lost). (value: 0)
     *          - B_0x1: SRAM2 is powered by the low-power regulator in Standby mode (SRAM2 content is kept). (value: 1)
     */
        /** @brief SRAM2 is powered off in Standby mode (SRAM2 content is lost). */
    constexpr std::uint32_t PWR_CR3_RRS_B_0x0 = 0;
        /** @brief SRAM2 is powered by the low-power regulator in Standby mode (SRAM2 content is kept). */
    constexpr std::uint32_t PWR_CR3_RRS_B_0x1 = 1;

    /** @brief Apply pull-up and pull-down configuration */
    using PWR_CR3_APC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD1_STDBY USB Type-C and Power Delivery standby mode. */
    using PWR_CR3_UCPD1_STDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write 0 immediately after standby exit when using UCPD1, (and before writing any UCPD1 registers). (value: 0)
     *          - B_0x1: Write 1 just before entering standby when using UCPD1. (value: 1)
     */
        /** @brief Write 0 immediately after standby exit when using UCPD1, (and before writing any UCPD1 registers). */
    constexpr std::uint32_t PWR_CR3_UCPD1_STDBY_B_0x0 = 0;
        /** @brief Write 1 just before entering standby when using UCPD1. */
    constexpr std::uint32_t PWR_CR3_UCPD1_STDBY_B_0x1 = 1;

    /** @brief USB Type-C and Power Delivery Dead Battery disable. */
    using PWR_CR3_UCPD1_DBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable USB Type-C dead battery pull-down behavior on UCPD1_CC1 and UCPD1_CC2 pins. (value: 0)
     *          - B_0x1: Disable USB Type-C dead battery pull-down behavior on UCPD1_CC1 and UCPD1_CC2 pins. (value: 1)
     */
        /** @brief Enable USB Type-C dead battery pull-down behavior on UCPD1_CC1 and UCPD1_CC2 pins. */
    constexpr std::uint32_t PWR_CR3_UCPD1_DBDIS_B_0x0 = 0;
        /** @brief Disable USB Type-C dead battery pull-down behavior on UCPD1_CC1 and UCPD1_CC2 pins. */
    constexpr std::uint32_t PWR_CR3_UCPD1_DBDIS_B_0x1 = 1;

    /** @brief Enable internal wakeup line */
    using PWR_CR3_EIWUL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal wakeup line disable. (value: 0)
     *          - B_0x1: Internal wakeup line enable. (value: 1)
     */
        /** @brief Internal wakeup line disable. */
    constexpr std::uint32_t PWR_CR3_EIWUL_B_0x0 = 0;
        /** @brief Internal wakeup line enable. */
    constexpr std::uint32_t PWR_CR3_EIWUL_B_0x1 = 1;

    /** @brief Power control register 4 */
    using PWR_CR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUP1 polarity */
    using PWR_CR4_WP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP1_B_0x1 = 1;

    /** @brief Wakeup pin WKUP2 polarity */
    using PWR_CR4_WP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP2_B_0x1 = 1;

    /** @brief Wakeup pin WKUP3 polarity */
    using PWR_CR4_WP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP3_B_0x1 = 1;

    /** @brief Wakeup pin WKUP4 polarity */
    using PWR_CR4_WP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP4_B_0x1 = 1;

    /** @brief Wakeup pin WKUP5 polarity */
    using PWR_CR4_WP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP5_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP5_B_0x1 = 1;

    /** @brief V<sub>BAT</sub> battery charging enable */
    using PWR_CR4_VBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>BAT</sub> battery charging disable (value: 0)
     *          - B_0x1: V<sub>BAT</sub> battery charging enable (value: 1)
     */
        /** @brief V<sub>BAT</sub> battery charging disable */
    constexpr std::uint32_t PWR_CR4_VBE_B_0x0 = 0;
        /** @brief V<sub>BAT</sub> battery charging enable */
    constexpr std::uint32_t PWR_CR4_VBE_B_0x1 = 1;

    /** @brief V<sub>BAT</sub> battery charging resistor selection */
    using PWR_CR4_VBRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Charge V<sub>BAT</sub> through a 5 kOhms resistor (value: 0)
     *          - B_0x1: Charge V<sub>BAT</sub> through a 1.5 kOhms resistor (value: 1)
     */
        /** @brief Charge V<sub>BAT</sub> through a 5 kOhms resistor */
    constexpr std::uint32_t PWR_CR4_VBRS_B_0x0 = 0;
        /** @brief Charge V<sub>BAT</sub> through a 1.5 kOhms resistor */
    constexpr std::uint32_t PWR_CR4_VBRS_B_0x1 = 1;

    /** @brief Power status register 1 */
    using PWR_SR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 1 */
    using PWR_SR1_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 2 */
    using PWR_SR1_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 3 */
    using PWR_SR1_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 4 */
    using PWR_SR1_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 5 */
    using PWR_SR1_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Standby flag */
    using PWR_SR1_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter the Standby mode (value: 0)
     *          - B_0x1: The device entered the Standby mode (value: 1)
     */
        /** @brief The device did not enter the Standby mode */
    constexpr std::uint32_t PWR_SR1_SBF_B_0x0 = 0;
        /** @brief The device entered the Standby mode */
    constexpr std::uint32_t PWR_SR1_SBF_B_0x1 = 1;

    /** @brief Wakeup flag internal */
    using PWR_SR1_WUFI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power status register 2 */
    using PWR_SR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power regulator started */
    using PWR_SR2_REGLPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The low-power regulator is not ready (value: 0)
     *          - B_0x1: The low-power regulator is ready (value: 1)
     */
        /** @brief The low-power regulator is not ready */
    constexpr std::uint32_t PWR_SR2_REGLPS_B_0x0 = 0;
        /** @brief The low-power regulator is ready */
    constexpr std::uint32_t PWR_SR2_REGLPS_B_0x1 = 1;

    /** @brief Low-power regulator flag */
    using PWR_SR2_REGLPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regulator is ready in main mode (MR) (value: 0)
     *          - B_0x1: The regulator is in low-power mode (LPR) (value: 1)
     */
        /** @brief The regulator is ready in main mode (MR) */
    constexpr std::uint32_t PWR_SR2_REGLPF_B_0x0 = 0;
        /** @brief The regulator is in low-power mode (LPR) */
    constexpr std::uint32_t PWR_SR2_REGLPF_B_0x1 = 1;

    /** @brief Voltage scaling flag */
    using PWR_SR2_VOSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regulator is ready in the selected voltage range (value: 0)
     *          - B_0x1: The regulator output voltage is changing to the required voltage level (value: 1)
     */
        /** @brief The regulator is ready in the selected voltage range */
    constexpr std::uint32_t PWR_SR2_VOSF_B_0x0 = 0;
        /** @brief The regulator output voltage is changing to the required voltage level */
    constexpr std::uint32_t PWR_SR2_VOSF_B_0x1 = 1;

    /** @brief Programmable voltage detector output */
    using PWR_SR2_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DD</sub> is above the selected PVD threshold (value: 0)
     *          - B_0x1: V<sub>DD</sub> is below the selected PVD threshold (value: 1)
     */
        /** @brief V<sub>DD</sub> is above the selected PVD threshold */
    constexpr std::uint32_t PWR_SR2_PVDO_B_0x0 = 0;
        /** @brief V<sub>DD</sub> is below the selected PVD threshold */
    constexpr std::uint32_t PWR_SR2_PVDO_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring output: V<sub>DDA</sub> vs. 1.62 V */
    using PWR_SR2_PVMO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDA</sub> voltage is above PVM1 threshold (around 1.62 V). (value: 0)
     *          - B_0x1: V<sub>DDA</sub> voltage is below PVM1 threshold (around 1.62 V). (value: 1)
     */
        /** @brief V<sub>DDA</sub> voltage is above PVM1 threshold (around 1.62 V). */
    constexpr std::uint32_t PWR_SR2_PVMO1_B_0x0 = 0;
        /** @brief V<sub>DDA</sub> voltage is below PVM1 threshold (around 1.62 V). */
    constexpr std::uint32_t PWR_SR2_PVMO1_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring output: V<sub>DDA</sub> vs. 1.8 V */
    using PWR_SR2_PVMO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDA</sub> voltage is above PVM2 threshold (around 1.8 V). (value: 0)
     *          - B_0x1: V<sub>DDA</sub> voltage is below PVM2 threshold (around 1.8 V). (value: 1)
     */
        /** @brief V<sub>DDA</sub> voltage is above PVM2 threshold (around 1.8 V). */
    constexpr std::uint32_t PWR_SR2_PVMO2_B_0x0 = 0;
        /** @brief V<sub>DDA</sub> voltage is below PVM2 threshold (around 1.8 V). */
    constexpr std::uint32_t PWR_SR2_PVMO2_B_0x1 = 1;

    /** @brief Power status clear register */
    using PWR_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 1 */
    using PWR_SCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 2 */
    using PWR_SCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 3 */
    using PWR_SCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 4 */
    using PWR_SCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 5 */
    using PWR_SCR_CWUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear standby flag */
    using PWR_SCR_CSBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port A pull-up control register */
    using PWR_PUCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0..13) */
    using PWR_PUCRA_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit 15 */
    using PWR_PUCRA_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port A pull-down control register */
    using PWR_PDCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) */
    using PWR_PDCRA_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit 14 */
    using PWR_PDCRA_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port B pull-up control register */
    using PWR_PUCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) */
    using PWR_PUCRB_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port B pull-down control register */
    using PWR_PDCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=0..3) */
    using PWR_PDCRB_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=0..3) */
    using PWR_PDCRB_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=0..3) */
    using PWR_PDCRB_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=0..3) */
    using PWR_PDCRB_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) */
    using PWR_PDCRB_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port C pull-up control register */
    using PWR_PUCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) */
    using PWR_PUCRC_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port C pull-down control register */
    using PWR_PDCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) */
    using PWR_PDCRC_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port D pull-up control register */
    using PWR_PUCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) */
    using PWR_PUCRD_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port D pull-down control register */
    using PWR_PDCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) */
    using PWR_PDCRD_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port E pull-up control register */
    using PWR_PUCRE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y (y=0..15) */
    using PWR_PUCRE_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port E pull-down control register */
    using PWR_PDCRE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) */
    using PWR_PDCRE_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port F pull-up control register */
    using PWR_PUCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) */
    using PWR_PUCRF_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port F pull-down control register */
    using PWR_PDCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) */
    using PWR_PDCRF_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port G pull-up control register */
    using PWR_PUCRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..10) */
    using PWR_PUCRG_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port G pull-down control register */
    using PWR_PDCRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..10) */
    using PWR_PDCRG_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power control register */
    using PWR_CR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Main regular range 1 mode */
    using PWR_CR5_R1MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Main regulator in range 1 boost mode. (value: 0)
     *          - B_0x1: Main regulator in range 1 normal mode. (value: 1)
     */
        /** @brief Main regulator in range 1 boost mode. */
    constexpr std::uint32_t PWR_CR5_R1MODE_B_0x0 = 0;
        /** @brief Main regulator in range 1 normal mode. */
    constexpr std::uint32_t PWR_CR5_R1MODE_B_0x1 = 1;

}

#endif
