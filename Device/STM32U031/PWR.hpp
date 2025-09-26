/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U031_PWR_HPP
#define EMBEDDED_PP_STM32U031_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PWR register block */
namespace STM32U031::PWR {

    /** @brief Power control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode selection These bits select the low-power mode entered when CPU enters the deepsleep mode. 1xx: Shutdown mode Note: If LPR bit is set, Stop 2 mode cannot be selected and Stop 1 mode shall be entered instead of Stop 2. Note: In Standby mode, SRAM2 can be preserved or not, depending on RRS bit configuration in PWR_CR3. */
    using PWR_CR1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop 0 mode (value: 0)
     *          - B_0x1: Stop 1 mode (value: 1)
     *          - B_0x2: Stop 2 mode (value: 2)
     *          - B_0x3: Standby mode (value: 3)
     */
        /** @brief Stop 0 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x0 = 0;
        /** @brief Stop 1 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x1 = 1;
        /** @brief Stop 2 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x2 = 2;
        /** @brief Standby mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x3 = 3;

    /** @brief Flash memory powered down during Stop mode. This bit determines whether the flash memory is put in power-down mode or remains in idle mode when the device enters Stop mode. */
    using PWR_CR1_FPD_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory idle (value: 0)
     *          - B_0x1: Flash memory powered down (value: 1)
     */
        /** @brief Flash memory idle */
    constexpr std::uint32_t PWR_CR1_FPD_STOP_B_0x0 = 0;
        /** @brief Flash memory powered down */
    constexpr std::uint32_t PWR_CR1_FPD_STOP_B_0x1 = 1;

    /** @brief Flash memory powered down during Low-power run mode. This bit determines whether the flash memory is put in power-down mode or remains in idle mode when the device enters Low-power sleep mode. */
    using PWR_CR1_FPD_LPRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory idle (value: 0)
     *          - B_0x1: Flash memory powered down (value: 1)
     */
        /** @brief Flash memory idle */
    constexpr std::uint32_t PWR_CR1_FPD_LPRUN_B_0x0 = 0;
        /** @brief Flash memory powered down */
    constexpr std::uint32_t PWR_CR1_FPD_LPRUN_B_0x1 = 1;

    /** @brief Flash memory powered down during Low-power sleep mode. This bit determines whether the flash memory is put in power-down mode or remains in idle mode when the device enters Low-power sleep mode. */
    using PWR_CR1_FPD_LPSLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory idle (value: 0)
     *          - B_0x1: Flash memory powered down (value: 1)
     */
        /** @brief Flash memory idle */
    constexpr std::uint32_t PWR_CR1_FPD_LPSLP_B_0x0 = 0;
        /** @brief Flash memory powered down */
    constexpr std::uint32_t PWR_CR1_FPD_LPSLP_B_0x1 = 1;

    /** @brief Disable backup domain write protection In reset state, the RTC and backup registers are protected against parasitic write access. This bit must be set to enable write access to these registers. */
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

    /** @brief Low-power run When this bit is set, the regulator is switched from main mode (MR) to low-power mode (LPR). Note: Stop 2 mode cannot be entered when LPR bit is set. Stop 1 is entered instead. */
    using PWR_CR1_LPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power control register 2 */
    using PWR_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable voltage detector enable Note: This bit is write-protected when the bit PVDL (PVD Lock) is set in the SYSCFG_CBR register. Note: This bit is reset only by a system reset. */
    using PWR_CR2_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Programmable voltage detector disable. (value: 0)
     *          - B_0x1: Programmable voltage detector enable. (value: 1)
     */
        /** @brief Programmable voltage detector disable. */
    constexpr std::uint32_t PWR_CR2_PVDE_B_0x0 = 0;
        /** @brief Programmable voltage detector enable. */
    constexpr std::uint32_t PWR_CR2_PVDE_B_0x1 = 1;

    /** @brief Programmable voltage detector level selection. These bits select the voltage threshold detected by the programmable voltage detector: Note: These bits are write-protected when the bit PVDL (PVD Lock) is set in the SYSCFG_CBR register. Note: These bits are reset only by a system reset. */
    using PWR_CR2_PLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>PVD0</sub> around 2.01V (value: 0)
     *          - B_0x1: V<sub>PVD1</sub> around 2.21V (value: 1)
     *          - B_0x2: V<sub>PVD2</sub> around 2.41V (value: 2)
     *          - B_0x3: V<sub>PVD3</sub> around 2.51V (value: 3)
     *          - B_0x4: V<sub>PVD4</sub> around 2.61V (value: 4)
     *          - B_0x5: V<sub>PVD5</sub> around 2.81V (value: 5)
     *          - B_0x6: V<sub>PVD6</sub> around 2.91V (value: 6)
     *          - B_0x7: External input analog voltage PVD_IN (compared internally to VREFINT) (value: 7)
     */
        /** @brief V<sub>PVD0</sub> around 2.01V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x0 = 0;
        /** @brief V<sub>PVD1</sub> around 2.21V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x1 = 1;
        /** @brief V<sub>PVD2</sub> around 2.41V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x2 = 2;
        /** @brief V<sub>PVD3</sub> around 2.51V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x3 = 3;
        /** @brief V<sub>PVD4</sub> around 2.61V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x4 = 4;
        /** @brief V<sub>PVD5</sub> around 2.81V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x5 = 5;
        /** @brief V<sub>PVD6</sub> around 2.91V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x6 = 6;
        /** @brief External input analog voltage PVD_IN (compared internally to VREFINT) */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x7 = 7;

    /** @brief Peripheral voltage monitoring 1 enable: V<sub>DDUSB</sub> vs. 1.21V */
    using PWR_CR2_PVME1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVM1 (V<sub>DDUSB</sub> monitoring vs. 1.21V threshold) disable. (value: 0)
     *          - B_0x1: PVM1 (V<sub>DDUSB</sub> monitoring vs. 1.21V threshold) enable. (value: 1)
     */
        /** @brief PVM1 (V<sub>DDUSB</sub> monitoring vs. 1.21V threshold) disable. */
    constexpr std::uint32_t PWR_CR2_PVME1_B_0x0 = 0;
        /** @brief PVM1 (V<sub>DDUSB</sub> monitoring vs. 1.21V threshold) enable. */
    constexpr std::uint32_t PWR_CR2_PVME1_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring 3 enable: V<sub>DDA</sub> vs. 1.621V */
    using PWR_CR2_PVME3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVM3 (V<sub>DDA</sub> monitoring vs. 1.621V threshold) disable. (value: 0)
     *          - B_0x1: PVM3 (V<sub>DDA</sub> monitoring vs. 1.621V threshold) enable. (value: 1)
     */
        /** @brief PVM3 (V<sub>DDA</sub> monitoring vs. 1.621V threshold) disable. */
    constexpr std::uint32_t PWR_CR2_PVME3_B_0x0 = 0;
        /** @brief PVM3 (V<sub>DDA</sub> monitoring vs. 1.621V threshold) enable. */
    constexpr std::uint32_t PWR_CR2_PVME3_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring 4 enable: V<sub>DDA</sub> vs. 1.861V */
    using PWR_CR2_PVME4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVM4 (V<sub>DDA</sub> monitoring vs. 1.861V threshold) disable. (value: 0)
     *          - B_0x1: PVM4 (V<sub>DDA</sub> monitoring vs. 1.86 V threshold) enable. (value: 1)
     */
        /** @brief PVM4 (V<sub>DDA</sub> monitoring vs. 1.861V threshold) disable. */
    constexpr std::uint32_t PWR_CR2_PVME4_B_0x0 = 0;
        /** @brief PVM4 (V<sub>DDA</sub> monitoring vs. 1.86 V threshold) enable. */
    constexpr std::uint32_t PWR_CR2_PVME4_B_0x1 = 1;

    /** @brief V<sub>DDUSB</sub> USB supply valid This bit is used to validate the V<sub>DDUSB</sub> supply for electrical and logical isolation purpose. Setting this bit is mandatory to use the USB FS peripheral. If V<sub>DDUSB</sub> is not always present in the application, the PVM can be used to determine whether this supply is ready or not. */
    using PWR_CR2_USV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDUSB</sub> is not present. Logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: V<sub>DDUSB</sub> is valid. (value: 1)
     */
        /** @brief V<sub>DDUSB</sub> is not present. Logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_CR2_USV_B_0x0 = 0;
        /** @brief V<sub>DDUSB</sub> is valid. */
    constexpr std::uint32_t PWR_CR2_USV_B_0x1 = 1;

    /** @brief Power control register 3 */
    using PWR_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wake-up pin WKUP1 When this bit is set, the external wake-up pin WKUP1 is enabled and triggers a wake-up from Standby or Shutdown event when a rising or a falling edge occurs. The active edge is configured via the WP1 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wake-up pin WKUP2 When this bit is set, the external wake-up pin WKUP2 is enabled and triggers a wake-up from Standby or Shutdown event when a rising or a falling edge occurs. The active edge is configured via the WP2 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wake-up pin WKUP3 When this bit is set, the external wake-up pin WKUP3 is enabled and triggers a wake-up from Standby or Shutdown event when a rising or a falling edge occurs. The active edge is configured via the WP3 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wake-up pin WKUP4 When this bit is set, the external wake-up pin WKUP4 is enabled and triggers a wake-up from Standby or Shutdown event when a rising or a falling edge occurs. The active edge is configured via the WP4 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wake-up pin WKUP5 When this bit is set, the external wake-up pin WKUP5 is enabled and triggers a wake-up from Standby or Shutdown event when a rising or a falling edge occurs.The active edge is configured via the WP5 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wake-up pin WKUP7. When this bit is set, the external wake-up pin WKUP7 is enabled and triggers a wake-up from Standby or Shutdown event when a rising or a falling edge occurs.The active edge is configured via the WP7 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief Enable ULP sampling When this bit is set, the BORL, BORH and PVD are periodically sampled instead continuous monitoring to reduce power consumption. Fast supply drop between two sample/compare phases is not detected in this mode. This bit has impact only on STOP2, Standby and shutdown low power modes. */
    using PWR_CR3_ENULP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Apply pull-up and pull-down configuration When this bit is set, the I/O pull-up and pull-down configurations defined in the PWR_PUCRx and PWR_PDCRx registers are applied. When this bit is cleared, the PWR_PUCRx and PWR_PDCRx registers are not applied to the I/Os, instead the I/Os are in floating mode during Standby or configured according GPIO controller GPIOx_PUPDR register during RUN mode. */
    using PWR_CR3_APC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable internal wake-up line */
    using PWR_CR3_EIWUL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal wake-up line disable. (value: 0)
     *          - B_0x1: Internal wake-up line enable. (value: 1)
     */
        /** @brief Internal wake-up line disable. */
    constexpr std::uint32_t PWR_CR3_EIWUL_B_0x0 = 0;
        /** @brief Internal wake-up line enable. */
    constexpr std::uint32_t PWR_CR3_EIWUL_B_0x1 = 1;

    /** @brief Power control register 4 */
    using PWR_CR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up pin WKUP1 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP1 */
    using PWR_CR4_WP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP1_B_0x1 = 1;

    /** @brief Wake-up pin WKUP2 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP2 */
    using PWR_CR4_WP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP2_B_0x1 = 1;

    /** @brief Wake-up pin WKUP3 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP3 */
    using PWR_CR4_WP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP3_B_0x1 = 1;

    /** @brief Wake-up pin WKUP4 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP4 */
    using PWR_CR4_WP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP4_B_0x1 = 1;

    /** @brief Wake-up pin WKUP5 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP5 */
    using PWR_CR4_WP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP5_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP5_B_0x1 = 1;

    /** @brief Wake-up pin WKUP7 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP7 */
    using PWR_CR4_WP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP7_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP7_B_0x1 = 1;

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
    /** @brief Wake-up flag 1 This bit is set when a wake-up event is detected on wake-up pin, WKUP1. It is cleared by writing 1 in the CWUF1 bit of the PWR_SCR register. */
    using PWR_SR1_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag 2 This bit is set when a wake-up event is detected on wake-up pin, WKUP2. It is cleared by writing 1 in the CWUF2 bit of the PWR_SCR register. */
    using PWR_SR1_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag 3 This bit is set when a wake-up event is detected on wake-up pin, WKUP3. It is cleared by writing 1 in the CWUF3 bit of the PWR_SCR register. */
    using PWR_SR1_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag 4 This bit is set when a wake-up event is detected on wake-up pin,WKUP4. It is cleared by writing 1 in the CWUF4 bit of the PWR_SCR register. */
    using PWR_SR1_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag 5 This bit is set when a wake-up event is detected on wake-up pin, WKUP5. It is cleared by writing 1 in the CWUF5 bit of the PWR_SCR register. */
    using PWR_SR1_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag 7 This bit is set when a wake-up event is detected on wake-up pin, WKUP7. It is cleared by writing 1 in the CWUF7 bit of the PWR_SCR register. */
    using PWR_SR1_WUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Standby flag This bit is set by hardware when the device enters the Standby mode and is cleared by setting the CSBF bit in the PWR_SCR register, or by a power-on reset. It is not cleared by the system reset. */
    using PWR_SR1_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter the Standby mode (value: 0)
     *          - B_0x1: The device entered the Standby mode (value: 1)
     */
        /** @brief The device did not enter the Standby mode */
    constexpr std::uint32_t PWR_SR1_SBF_B_0x0 = 0;
        /** @brief The device entered the Standby mode */
    constexpr std::uint32_t PWR_SR1_SBF_B_0x1 = 1;

    /** @brief Stop Flags These bits are set by hardware when the device enters any stop mode and are cleared by setting the CSBF bit in the PWR_SCR register, or by a power-on reset. It is not cleared by the system reset. */
    using PWR_SR1_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter any Stop mode. (value: 0)
     *          - B_0x4: The device entered in Stop 0 mode. (value: 4)
     *          - B_0x5: The device entered in Stop 1 mode. (value: 5)
     *          - B_0x6: The device entered in Stop 2 mode. (value: 6)
     */
        /** @brief The device did not enter any Stop mode. */
    constexpr std::uint32_t PWR_SR1_STOPF_B_0x0 = 0;
        /** @brief The device entered in Stop 0 mode. */
    constexpr std::uint32_t PWR_SR1_STOPF_B_0x4 = 4;
        /** @brief The device entered in Stop 1 mode. */
    constexpr std::uint32_t PWR_SR1_STOPF_B_0x5 = 5;
        /** @brief The device entered in Stop 2 mode. */
    constexpr std::uint32_t PWR_SR1_STOPF_B_0x6 = 6;

    /** @brief Wake-up flag internal This bit is set when a wake-up is detected on the internal wake-up line. It is cleared when all internal wake-up sources are cleared. */
    using PWR_SR1_WUFI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power status register 2 */
    using PWR_SR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash ready flag This bit is set by hardware to indicate when the flash memory is readey to be accessed after wake-up from power-down. To place the flash memory in power-down, set either FPD_LPRUN, FPD_LPSLP or FPD_STP bits. Note : If the system boots from SRAM, the user application must wait until the FLASH_RDY bit is set, prior to jumping to flash memory. */
    using PWR_SR2_FLASH_RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory in power down (value: 0)
     *          - B_0x1: Flash memory ready to be accessed (value: 1)
     */
        /** @brief Flash memory in power down */
    constexpr std::uint32_t PWR_SR2_FLASH_RDY_B_0x0 = 0;
        /** @brief Flash memory ready to be accessed */
    constexpr std::uint32_t PWR_SR2_FLASH_RDY_B_0x1 = 1;

    /** @brief Low-power regulator started This bit provides the information whether the low-power regulator is ready after a power-on reset or a Standby/Shutdown. If the Standby mode is entered while REGLPS bit is still cleared, the wake-up from Standby mode time may be increased. */
    using PWR_SR2_REGLPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The low-power regulator is not ready (value: 0)
     *          - B_0x1: The low-power regulator is ready (value: 1)
     */
        /** @brief The low-power regulator is not ready */
    constexpr std::uint32_t PWR_SR2_REGLPS_B_0x0 = 0;
        /** @brief The low-power regulator is ready */
    constexpr std::uint32_t PWR_SR2_REGLPS_B_0x1 = 1;

    /** @brief Low-power regulator flag This bit is set by hardware when the MCU is in Low-power run mode. When the MCU exits from the Low-power run mode, this bit remains at 1 until the regulator is ready in main mode. A polling on this bit must be done before increasing the product frequency. This bit is cleared by hardware when the regulator is ready. */
    using PWR_SR2_REGLPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The regulator is ready in main mode (MR) (value: 0)
     *          - B_0x1: The regulator is in low-power mode (LPR) (value: 1)
     */
        /** @brief The regulator is ready in main mode (MR) */
    constexpr std::uint32_t PWR_SR2_REGLPF_B_0x0 = 0;
        /** @brief The regulator is in low-power mode (LPR) */
    constexpr std::uint32_t PWR_SR2_REGLPF_B_0x1 = 1;

    /** @brief Voltage scaling flag A delay is required for the internal regulator to be ready after the voltage scaling has been changed. VOSF indicates that the regulator reached the voltage level defined with VOS bits of the PWR_CR1 register. */
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

    /** @brief Peripheral voltage monitoring output: V<sub>DDUSB</sub> vs. 1.2 V Note: PVMO1 is cleared when PVM1 is disabled (PVME1 = 0). After enabling PVM1, the PVM1 output is valid after the PVM1 wake-up time. */
    using PWR_SR2_PVMO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDUSB</sub> voltage is above PVM1 threshold (around 1.21V). (value: 0)
     *          - B_0x1: V<sub>DDUSB</sub> voltage is below PVM1 threshold (around 1.21V). (value: 1)
     */
        /** @brief V<sub>DDUSB</sub> voltage is above PVM1 threshold (around 1.21V). */
    constexpr std::uint32_t PWR_SR2_PVMO1_B_0x0 = 0;
        /** @brief V<sub>DDUSB</sub> voltage is below PVM1 threshold (around 1.21V). */
    constexpr std::uint32_t PWR_SR2_PVMO1_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring output: V<sub>DDA</sub> vs. 1.621V Note: PVMO3 is cleared when PVM3 is disabled (PVME3 = 0). After enabling PVM3, the PVM3 output is valid after the PVM3 wake-up time. */
    using PWR_SR2_PVMO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDA</sub> voltage is above PVM3 threshold (around 1.621V). (value: 0)
     *          - B_0x1: V<sub>DDA</sub> voltage is below PVM3 threshold (around 1.621V). (value: 1)
     */
        /** @brief V<sub>DDA</sub> voltage is above PVM3 threshold (around 1.621V). */
    constexpr std::uint32_t PWR_SR2_PVMO3_B_0x0 = 0;
        /** @brief V<sub>DDA</sub> voltage is below PVM3 threshold (around 1.621V). */
    constexpr std::uint32_t PWR_SR2_PVMO3_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring output: V<sub>DDA</sub> vs. 2.21V Note: PVMO4 is cleared when PVM4 is disabled (PVME4 = 0). After enabling PVM4, the PVM4 output is valid after the PVM4 wake-up time. */
    using PWR_SR2_PVMO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDA</sub> voltage is above PVM4 threshold (around 2.21V). (value: 0)
     *          - B_0x1: V<sub>DDA</sub> voltage is below PVM4 threshold (around 2.21V). (value: 1)
     */
        /** @brief V<sub>DDA</sub> voltage is above PVM4 threshold (around 2.21V). */
    constexpr std::uint32_t PWR_SR2_PVMO4_B_0x0 = 0;
        /** @brief V<sub>DDA</sub> voltage is below PVM4 threshold (around 2.21V). */
    constexpr std::uint32_t PWR_SR2_PVMO4_B_0x1 = 1;

    /** @brief Power status clear register */
    using PWR_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 1 Setting this bit clears the WUF1 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 2 Setting this bit clears the WUF2 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 3 Setting this bit clears the WUF3 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 4 Setting this bit clears the WUF4 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 5 Setting this bit clears the WUF5 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag 7 Setting this bit clears the WUF7 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear standby flag Setting this bit clears the SBF flag in the PWR_SR1 register. */
    using PWR_SCR_CSBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port A pull-up control register */
    using PWR_PUCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y1=115 to 0) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port A pull-down control register */
    using PWR_PDCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port B pull-up control register */
    using PWR_PUCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PUCRB_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port B pull-down control register */
    using PWR_PDCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port C pull-up control register */
    using PWR_PUCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRC_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port C pull-down control register */
    using PWR_PDCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port D pull-up control register */
    using PWR_PUCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRD_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port D pull-down control register */
    using PWR_PDCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port E pull-up control register */
    using PWR_PUCRE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit 3 When set, this bit activates the pull-up on PE[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRE_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y When set, this bit activates the pull-up on PE[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRE_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y When set, this bit activates the pull-up on PE[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRE_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-up bit y When set, this bit activates the pull-up on PE[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRE_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port E pull-down control register */
    using PWR_PDCRE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit 3 When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port F pull-up control register */
    using PWR_PUCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRF_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRF_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRF_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. If the corresponding PDy bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRF_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port F pull-down control register */
    using PWR_PDCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
